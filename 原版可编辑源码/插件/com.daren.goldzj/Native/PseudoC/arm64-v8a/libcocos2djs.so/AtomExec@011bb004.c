
/* v8::internal::RegExpImpl::AtomExec(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSRegExp>, v8::internal::Handle<v8::internal::String>, int,
   v8::internal::Handle<v8::internal::RegExpMatchInfo>) */

ulong * v8::internal::RegExpImpl::AtomExec
                  (long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,ulong *param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  
  iVar2 = AtomExecRaw();
  if (iVar2 == 0) {
    param_5 = (ulong *)(param_1 + 0xb0);
  }
  else {
    uVar5 = *param_3;
    iVar2 = *(int *)(param_1 + 0xb82c);
    iVar1 = *(int *)(param_1 + 0xb830);
    *(undefined4 *)(*param_5 + 7) = 4;
    uVar6 = *param_5;
    uVar4 = (undefined4)uVar5;
    *(undefined4 *)(uVar6 + 0xb) = uVar4;
    if ((uVar5 & 1) == 0) {
      *(undefined4 *)(*param_5 + 0xf) = uVar4;
    }
    else {
      uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      puVar7 = (ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xb,uVar5);
        uVar3 = *puVar7;
      }
      if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xb,uVar5);
      }
      uVar3 = *param_5;
      *(undefined4 *)(uVar3 + 0xf) = uVar4;
      uVar6 = *puVar7;
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar3,uVar3 + 0xf,uVar5);
        uVar6 = *puVar7;
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar3,uVar3 + 0xf,uVar5);
      }
    }
    *(int *)(*param_5 + 0x13) = iVar2 << 1;
    *(int *)(*param_5 + 0x17) = iVar1 << 1;
  }
  return param_5;
}

