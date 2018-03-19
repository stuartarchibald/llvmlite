#include "core.h"

#include "llvm/IR/Module.h"
#include "llvm/IR/DiagnosticInfo.h"
#include "llvm/IR/DiagnosticPrinter.h"
#include "llvm/Support/raw_ostream.h"

#include "llvm-c/Linker.h"

extern "C" {

API_EXPORT(int)
LLVMPY_LinkModules(LLVMModuleRef Dest, LLVMModuleRef Src, const char **Err)
{
    return LLVMLinkModules2(Dest, Src);
}

} // end extern "C"
