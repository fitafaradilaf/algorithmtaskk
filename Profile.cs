using System;
using System.Collections.Generic;
using System.Text;

namespace Prototype.Models
{
    public class Profile
    {
        private ProfileSettings _settings;

        public string Name { get; set; }
        public string Email { get; set; }

        public bool IsPrivate
        {
            get => _settings.IsPrivate;
            set => _settings.IsPrivate = value;
        }

        public bool HideEmail
        {
            get => _settings.HideEmail;
            set => _settings.HideEmail = value;
        }

        public Profile()
        {
            _settings = new ProfileSettings();
        }

        public void SetSettings(ProfileSettings settings)
        {
            _settings = settings;
        }


        public Profile Clone()
        {
            return new Profile()
            {
                Email = Email,
                Name = Name,
                _settings = _settings.Clone()
            };
        }
    }
}
