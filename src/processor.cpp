#include "processor.h"
#include "linux_parser.h"

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() {

    long activeJeff = LinuxParser::ActiveJiffies();
    long idleJeff = LinuxParser::IdleJiffies();

    long activeDur = activeJeff - CachedActiveJeff;
    long idleDur   = idleJeff - CachedIdleJeff;
    long totalDur = activeDur + idleDur;

    float processorUtiliztion = static_cast<float>(activeDur) / totalDur;

    CachedActiveJeff = activeJeff;
    CachedIdleJeff = idleJeff;

    return processorUtiliztion;
}