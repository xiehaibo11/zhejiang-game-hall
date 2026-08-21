
/* v8::internal::Debug::OnPromiseReject(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

void __thiscall v8::internal::Debug::OnPromiseReject(Debug *this,ulong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  Isolate *pIVar7;
  uint local_a8;
  int local_a4;
  undefined8 local_9c;
  ulong local_90;
  ulong *local_88;
  undefined8 uStack_80;
  ulong *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (*(long *)(this + 0x40) != 0) {
    return;
  }
  if (this[10] != (Debug)0x0) {
    return;
  }
  if (this[8] == (Debug)0x0) {
    return;
  }
  pIVar7 = *(Isolate **)(this + 0x88);
  if (*(int *)(pIVar7 + 0xb80c) == 0x20) {
    return;
  }
  uVar1 = *(undefined8 *)(pIVar7 + 0x95a0);
  lVar2 = *(long *)(pIVar7 + 0x95a8);
  *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + 1;
  uVar6 = *param_2;
  if ((uVar6 & 1) != 0) {
    uVar3 = uVar6 & 0xffffffff00000000;
    if (0xa9 < *(ushort *)((uVar3 | 7) + (ulong)*(uint *)(uVar6 - 1))) {
      local_88 = (ulong *)(*(long *)(this + 0x88) + 0xba8);
      uVar6 = *local_88;
      local_a8 = 2;
      if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x40) {
        local_a8 = (*(int *)(uVar6 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      local_9c = 0xc000000000;
      local_90 = uVar3;
      if ((*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) & 0xffe0) ==
          0x20) {
        local_88 = (ulong *)StringTable::LookupString();
      }
      uStack_80 = 0;
      uStack_70 = 0;
      local_58 = 0xffffffffffffffff;
      uStack_60 = 0xffffffffffffffff;
      local_78 = param_2;
      local_68 = param_2;
      LookupIterator::Start<false>((LookupIterator *)&local_a8);
      if (local_a4 == 4) {
        uVar6 = *(ulong *)(local_90 + 0xa0);
        iVar5 = (int)uVar6;
      }
      else {
        puVar4 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_a8);
        uVar6 = *puVar4;
        iVar5 = (int)uVar6;
      }
      if (((uVar6 & 1) == 0) || (iVar5 != *(int *)(*(long *)(this + 0x88) + 0xa0)))
      goto LAB_00f0c114;
    }
  }
  OnException(this,param_3,param_2,1);
LAB_00f0c114:
  *(undefined8 *)(pIVar7 + 0x95a0) = uVar1;
  *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
  if (*(long *)(pIVar7 + 0x95a8) != lVar2) {
    *(long *)(pIVar7 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(pIVar7);
  }
  return;
}

