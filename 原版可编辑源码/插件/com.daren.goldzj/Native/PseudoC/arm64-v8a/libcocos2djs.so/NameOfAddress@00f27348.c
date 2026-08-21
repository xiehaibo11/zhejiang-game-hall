
/* v8::internal::V8NameConverter::NameOfAddress(unsigned char*) const */

undefined8 __thiscall
v8::internal::V8NameConverter::NameOfAddress(V8NameConverter *this,uchar *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  CodeReference *this_00;
  WasmCodeRefScope aWStack_78 [48];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = (CodeReference *)(this + 0xa0);
  if (*(int *)this_00 != 0) {
    if ((*(long *)(this + 0x98) != 0) &&
       (lVar5 = Builtins::Lookup((Builtins *)(*(long *)(this + 0x98) + 0x9e00),(ulong)param_1),
       lVar5 != 0)) {
      SNPrintF(*(undefined8 *)(this + 0xb0),*(undefined8 *)(this + 0xb8),"%p  (%s)",param_1,lVar5);
      uVar7 = *(undefined8 *)(this + 0xb0);
      goto LAB_00f27470;
    }
    iVar3 = CodeReference::instruction_start(this_00);
    iVar3 = (int)param_1 - iVar3;
    if ((-1 < iVar3) && (iVar4 = CodeReference::instruction_size(this_00), iVar3 < iVar4)) {
      SNPrintF(*(undefined8 *)(this + 0xb0),*(undefined8 *)(this + 0xb8),"%p  <+0x%x>",param_1,iVar3
              );
      uVar7 = *(undefined8 *)(this + 0xb0);
      goto LAB_00f27470;
    }
    wasm::WasmCodeRefScope::WasmCodeRefScope(aWStack_78);
    if ((*(long *)(this + 0x98) != 0) &&
       (lVar5 = wasm::WasmCodeManager::LookupCode
                          (*(WasmCodeManager **)(*(long *)(this + 0x98) + 0xc770),(ulong)param_1),
       lVar5 != 0)) {
      uVar7 = *(undefined8 *)(this + 0xb0);
      uVar1 = *(undefined8 *)(this + 0xb8);
      uVar6 = wasm::GetWasmCodeKindAsString(*(undefined4 *)(lVar5 + 0x3c));
      SNPrintF(uVar7,uVar1,"%p  (%s)",param_1,uVar6);
      uVar7 = *(undefined8 *)(this + 0xb0);
      wasm::WasmCodeRefScope::~WasmCodeRefScope(aWStack_78);
      goto LAB_00f27470;
    }
    wasm::WasmCodeRefScope::~WasmCodeRefScope(aWStack_78);
  }
  uVar7 = disasm::NameConverter::NameOfAddress((NameConverter *)this,param_1);
LAB_00f27470:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

