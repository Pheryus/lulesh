#include <stddef.h>

extern const struct SCOREP_Subsystem SCOREP_Subsystem_Substrates;
extern const struct SCOREP_Subsystem SCOREP_Subsystem_TaskStack;
extern const struct SCOREP_Subsystem SCOREP_Subsystem_MetricService;
extern const struct SCOREP_Subsystem SCOREP_Subsystem_Opari2OpenmpAdapter;
extern const struct SCOREP_Subsystem SCOREP_Subsystem_ThreadForkJoin;

const struct SCOREP_Subsystem* scorep_subsystems[] = {
    &SCOREP_Subsystem_Substrates,
    &SCOREP_Subsystem_TaskStack,
    &SCOREP_Subsystem_MetricService,
    &SCOREP_Subsystem_Opari2OpenmpAdapter,
    &SCOREP_Subsystem_ThreadForkJoin
};

const size_t scorep_number_of_subsystems = sizeof( scorep_subsystems ) /
                                           sizeof( scorep_subsystems[ 0 ] );
