#pragma once

#include <Util/Status.h>
#include <FEM/FEMContext.h>
#include <Output/Output.h>

namespace Control{

    namespace StaticLinear{
        Status run(FEM::Context& fem, Output::WriteTimestepFunc write_ts, Output::File file);
    }

}