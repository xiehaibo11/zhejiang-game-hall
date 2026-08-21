
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::StringData::StringData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::String>) */

void __thiscall
v8::internal::compiler::StringData::StringData
          (StringData *this,undefined8 *param_1,undefined8 param_3,ulong *param_4)

{
  int iVar1;
  StringData SVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint local_38 [2];
  ulong local_18;
  
  HeapObjectData::HeapObjectData();
  iVar1 = *(int *)(*param_4 + 7);
  *(int *)(this + 0x18) = iVar1;
  if (iVar1 < 1) {
    uVar3 = 0;
  }
  else {
    local_18 = *param_4;
    local_38[1] = 0;
    local_38[0] = (uint)*(ushort *)
                         ((local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 - 1)) + 7);
    uVar3 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                      (local_38,&local_18,local_38 + 1);
  }
  *(undefined2 *)(this + 0x1c) = uVar3;
  this[0x20] = (StringData)0x0;
  this[0x28] = (StringData)0x0;
  uVar4 = *param_4;
  uVar5 = uVar4 & 0xffffffff00000000 | 7;
  SVar2 = (StringData)0x0;
  if (*(ushort *)(uVar5 + *(uint *)(uVar4 - 1)) < 0x40) {
    SVar2 = (StringData)((*(ushort *)(uVar5 + *(uint *)(uVar4 - 1)) & 7) == 2);
  }
  this[0x30] = SVar2;
  uVar4 = *param_4;
  uVar5 = uVar4 & 0xffffffff00000000 | 7;
  if (*(ushort *)(uVar5 + *(uint *)(uVar4 - 1)) < 0x40) {
    SVar2 = (StringData)((*(byte *)(uVar5 + *(uint *)(uVar4 - 1)) & 7) == 0);
  }
  else {
    SVar2 = (StringData)0x0;
  }
  this[0x31] = SVar2;
  uVar6 = param_1[2];
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = uVar6;
  if (*(int *)(this + 0x18) < 0x18) {
    uVar6 = StringToDouble(0,*param_1,param_4,0xb);
    if (this[0x20] == (StringData)0x0) {
      *(undefined8 *)(this + 0x28) = uVar6;
      this[0x20] = (StringData)0x1;
    }
    else {
      *(undefined8 *)(this + 0x28) = uVar6;
    }
  }
  return;
}

