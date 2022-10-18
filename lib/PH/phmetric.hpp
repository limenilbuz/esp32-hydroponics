#ifndef PH_METRIC_HPP
#define PH_METRIC_HPP


#include "ph.hpp"

/**
 * @brief pH Metric class that returns the pH reading from a pH source class object.
*/
class PHMetric {  
    private:
    /**
     * @var pH source object, defined as a reference to a PH class for dynamic dispatch of PH interface sub-classes.
    */
    PH& ph_source;

    public:
    /**
     * @brief Constructs a PHMetric class object.
     * @param source Represents the source of the pH measurement (mock or real).
    */
    PHMetric(PH& source) : ph_source{source} {}

    /**
     * @brief Returns the measured pH from the source.
    */
    double measure() {
        return ph_source.getPH();
    }
};

#endif