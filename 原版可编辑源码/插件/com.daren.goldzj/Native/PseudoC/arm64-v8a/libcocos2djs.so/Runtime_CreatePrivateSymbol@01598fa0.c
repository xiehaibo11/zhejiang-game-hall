
/* v8::internal::Runtime_CreatePrivateSymbol(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_CreatePrivateSymbol(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_01599124(param_1,param_2,param_3);
    return uVar5;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar3 = (ulong *)Factory::NewPrivateSymbol(param_3,1);
  if (param_1 == 1) {
    uVar5 = *param_2;
    if (((uVar5 & 1) == 0) ||
       ((uVar4 = uVar5 & 0xffffffff00000000 | 7, 0x3f < *(ushort *)(uVar4 + *(uint *)(uVar5 - 1)) &&
        ((int)uVar5 != *(int *)(param_3 + 0xa0))))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","description->IsString() || description->IsUndefined(isolate)");
    }
    if (*(ushort *)(uVar4 + *(uint *)(uVar5 - 1)) < 0x40) {
      uVar6 = *puVar3;
      *(int *)(uVar6 + 0xb) = (int)uVar5;
      uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xb,uVar5);
        uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xb,uVar5);
      }
    }
  }
  uVar5 = *puVar3;
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar5;
}

