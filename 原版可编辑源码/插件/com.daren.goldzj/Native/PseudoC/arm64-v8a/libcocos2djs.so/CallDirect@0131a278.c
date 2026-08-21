
/* v8::internal::compiler::WasmGraphBuilder::CallDirect(unsigned int,
   v8::internal::Vector<v8::internal::compiler::Node*>,
   v8::internal::Vector<v8::internal::compiler::Node*>, int) */

void v8::internal::compiler::WasmGraphBuilder::CallDirect
               (long param_1,uint param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = **(long **)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x88) + (ulong)param_2 * 0x20);
  if ((*(long **)(param_1 + 0x10) == (long *)0x0) || (*(uint *)(lVar2 + 0x3c) <= param_2)) {
    uVar1 = MachineGraph::RelocatableIntPtrConstant
                      (*(MachineGraph **)(param_1 + 8),(ulong)param_2,4);
    *param_3 = uVar1;
    BuildWasmCall(param_1,uVar3,param_3,param_4,param_5,param_6,param_7,0,0);
  }
  else {
    BuildImportCall(param_1,uVar3,param_3,param_4,param_5,param_6,param_7,param_2,0);
  }
  return;
}

