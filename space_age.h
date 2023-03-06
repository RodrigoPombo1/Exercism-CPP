#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {
    class space_age {
        private:
            long double on_mercury_;
            long double on_venus_;
            long double on_earth_;
            long double on_mars_;
            long double on_jupiter_;
            long double on_saturn_;
            long double on_uranus_;
            long double on_neptune_;
            long long int age_sec_;
        public:  
            long double on_mercury() const;
            long double on_venus() const;
            long double on_earth() const;
            long double on_mars() const;
            long double on_jupiter() const;
            long double on_saturn() const;
            long double on_uranus() const;
            long double on_neptune() const;
            long long int seconds() const;

            space_age(long long int age_sec) {
                age_sec_ = age_sec;
                on_earth_ = (long double) age_sec / (long double) 31557600; 
                on_mercury_ = on_earth_ / 0.2408467;
                on_venus_ = on_earth_ / 0.61519726;
                on_mars_ = on_earth_ / 1.8808158;
                on_jupiter_ = on_earth_ / 11.862615;
                on_saturn_ = on_earth_ / 29.447498;
                on_uranus_ = on_earth_ / 84.016846;
                on_neptune_ = on_earth_ / 164.79132;
            }
    };
}  // namespace space_age

#endif // SPACE_AGE_H