#include "space_age.h"

namespace space_age {
    long double space_age::on_mercury() const {
        return on_mercury_;
    }
    long double space_age::on_venus() const {
        return on_venus_;
    }
    long double space_age::on_earth() const {
        return on_earth_;
    }
    long double space_age::on_mars() const {
        return on_mars_;
    }
    long double space_age::on_jupiter() const {
        return on_jupiter_;
    }
    long double space_age::on_saturn() const {
        return on_saturn_;
    }
    long double space_age::on_uranus() const {
        return on_uranus_;
    }
    long double space_age::on_neptune() const {
        return on_neptune_;
    }
    long long int space_age::seconds() const {
        return age_sec_;
    }
}  // namespace space_age