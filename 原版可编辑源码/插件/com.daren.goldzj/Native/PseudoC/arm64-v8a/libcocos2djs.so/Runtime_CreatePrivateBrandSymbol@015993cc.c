
/* v8::internal::Runtime_CreatePrivateBrandSymbol(int, unsigned long*, v8::internal::Isolate*) */

long v8::internal::Runtime_CreatePrivateBrandSymbol(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (TracingFlags::runtime_stats != 0) {
    lVar3 = FUN_015994b8(param_1,param_2,param_3);
    return lVar3;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0x40)) {
    plVar2 = (long *)Factory::NewPrivateNameSymbol((Factory *)param_3);
    *(uint *)(*plVar2 + 7) = *(uint *)(*plVar2 + 7) | 0x31;
    lVar5 = *plVar2;
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

