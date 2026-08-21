
/* v8::internal::Builtin_ObjectFreeze(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Builtin_ObjectFreeze(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  char cVar7;
  ulong uVar8;
  
  if (TracingFlags::runtime_stats == 0) {
    pIVar1 = param_3 + 0x95a0;
    iVar6 = *(int *)(param_3 + 0x95b0);
    pIVar2 = (Isolate *)(param_2 + -1);
    if (param_1 < 6) {
      pIVar2 = param_3 + 0xa0;
    }
    *(int *)(param_3 + 0x95b0) = iVar6 + 1;
    uVar8 = *(ulong *)pIVar2;
    uVar4 = *(undefined8 *)pIVar1;
    lVar5 = *(long *)(param_3 + 0x95a8);
    if (((uVar8 & 1) == 0) ||
       (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0xa9)) {
      *(undefined8 *)pIVar1 = uVar4;
      *(int *)(param_3 + 0x95b0) = iVar6;
    }
    else {
      cVar7 = JSReceiver::SetIntegrityLevel(pIVar2,5,0);
      pIVar3 = param_3 + 0x180;
      if (cVar7 != '\0') {
        pIVar3 = pIVar2;
      }
      uVar8 = *(ulong *)pIVar3;
      *(undefined8 *)pIVar1 = uVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar5) {
        *(long *)(param_3 + 0x95a8) = lVar5;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    return uVar8;
  }
  uVar8 = FUN_014ccf4c(param_1,param_2,param_3);
  return uVar8;
}

