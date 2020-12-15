

/**************************************************************************************************
 *** This file was autogenerated from GrChildProcessorSampleMatrixAndCoords.fp; do not modify.
 **************************************************************************************************/
#ifndef GrChildProcessorSampleMatrixAndCoords_DEFINED
#define GrChildProcessorSampleMatrixAndCoords_DEFINED

#include "include/core/SkM44.h"
#include "include/core/SkTypes.h"


#include "src/gpu/GrFragmentProcessor.h"

class GrChildProcessorSampleMatrixAndCoords : public GrFragmentProcessor {
public:
    static std::unique_ptr<GrFragmentProcessor> Make(std::unique_ptr<GrFragmentProcessor> child) {
        return std::unique_ptr<GrFragmentProcessor>(new GrChildProcessorSampleMatrixAndCoords(std::move(child)));
    }
    GrChildProcessorSampleMatrixAndCoords(const GrChildProcessorSampleMatrixAndCoords& src);
    std::unique_ptr<GrFragmentProcessor> clone() const override;
    const char* name() const override { return "ChildProcessorSampleMatrixAndCoords"; }
private:
    GrChildProcessorSampleMatrixAndCoords(std::unique_ptr<GrFragmentProcessor> child)
    : INHERITED(kGrChildProcessorSampleMatrixAndCoords_ClassID, kNone_OptimizationFlags) {
        this->setUsesSampleCoordsDirectly();
        this->registerChild(std::move(child), SkSL::SampleUsage(SkSL::SampleUsage::Kind::kVariable, "", true, true, false));    }
    GrGLSLFragmentProcessor* onCreateGLSLInstance() const override;
    void onGetGLSLProcessorKey(const GrShaderCaps&, GrProcessorKeyBuilder*) const override;
    bool onIsEqual(const GrFragmentProcessor&) const override;
#if GR_TEST_UTILS
    SkString onDumpInfo() const override;
#endif
    GR_DECLARE_FRAGMENT_PROCESSOR_TEST
    using INHERITED = GrFragmentProcessor;
};
#endif
