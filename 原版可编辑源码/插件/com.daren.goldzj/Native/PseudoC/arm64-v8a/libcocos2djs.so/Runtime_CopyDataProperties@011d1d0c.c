
/* v8::internal::Runtime_CopyDataProperties(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_CopyDataProperties(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  Isolate *pIVar5;
  int iVar6;
  undefined8 uVar7;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_011d1e2c(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     (0xa9 < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
    uVar4 = param_2[-1];
    iVar6 = (int)uVar4;
    if (((uVar4 & 1) == 0) ||
       ((pIVar5 = param_3 + 0xa0, iVar6 != *(int *)pIVar5 && (iVar6 != *(int *)(param_3 + 0xb0)))))
    {
      cVar2 = JSReceiver::SetOrCopyDataProperties(param_3,param_2,param_2 + -1,0,0);
      if (cVar2 == '\0') {
        pIVar5 = param_3 + 0x180;
      }
      else {
        pIVar5 = param_3 + 0xa0;
      }
    }
    uVar7 = *(undefined8 *)pIVar5;
    *(undefined8 *)(param_3 + 0x95a0) = uVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
}

