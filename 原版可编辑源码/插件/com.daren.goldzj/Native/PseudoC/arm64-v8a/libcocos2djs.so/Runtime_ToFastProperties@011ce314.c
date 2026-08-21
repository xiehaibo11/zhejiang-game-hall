
/* v8::internal::Runtime_ToFastProperties(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_ToFastProperties(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (TracingFlags::runtime_stats == 0) {
    pIVar1 = param_3 + 0x95a0;
    iVar4 = *(int *)(param_3 + 0x95b0);
    uVar2 = *(undefined8 *)pIVar1;
    lVar3 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = iVar4 + 1;
    uVar6 = *param_2;
    if ((((uVar6 & 1) == 0) ||
        (uVar5 = uVar6 & 0xffffffff00000000 | 7, *(ushort *)(uVar5 + *(uint *)(uVar6 - 1)) < 0xaa))
       || (*(short *)(uVar5 + *(uint *)(uVar6 - 1)) == 0xaa)) {
      *(undefined8 *)pIVar1 = uVar2;
      *(int *)(param_3 + 0x95b0) = iVar4;
    }
    else {
      JSObject::MigrateSlowToFast(param_2,0,"RuntimeToFastProperties");
      uVar6 = *param_2;
      *(undefined8 *)pIVar1 = uVar2;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar3) {
        *(long *)(param_3 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    return uVar6;
  }
  uVar6 = FUN_011ce408(param_1,param_2,param_3);
  return uVar6;
}

