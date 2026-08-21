
/* v8::internal::Runtime_InternalizeString(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_InternalizeString(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar7 = FUN_01594bfc(param_1,param_2,param_3);
    return uVar7;
  }
  pIVar1 = param_3 + 0x95a0;
  iVar4 = *(int *)(param_3 + 0x95b0);
  uVar2 = *(undefined8 *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = iVar4 + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) != 0) &&
     (uVar6 = uVar7 & 0xffffffff00000000 | 7, *(ushort *)(uVar6 + *(uint *)(uVar7 - 1)) < 0x40)) {
    if (*(ushort *)(uVar6 + *(uint *)(uVar7 - 1)) < 0x20) {
      *(undefined8 *)pIVar1 = uVar2;
      *(int *)(param_3 + 0x95b0) = iVar4;
    }
    else {
      puVar5 = (ulong *)StringTable::LookupString(param_3);
      uVar7 = *puVar5;
      *(undefined8 *)pIVar1 = uVar2;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar3) {
        *(long *)(param_3 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

