
/* v8::internal::Runtime_ObjectIsExtensible(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ObjectIsExtensible(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar7 = *(undefined8 *)(param_3 + 0x95a0);
    lVar3 = *(long *)(param_3 + 0x95a8);
    iVar8 = *(int *)(param_3 + 0x95b0) + 1;
    *(int *)(param_3 + 0x95b0) = iVar8;
    uVar9 = *param_2;
    if (((uVar9 & 1) == 0) ||
       (*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0xa9)) {
      bVar5 = false;
      bVar4 = true;
      lVar10 = lVar3;
    }
    else {
      uVar6 = JSReceiver::IsExtensible(param_2);
      iVar8 = *(int *)(param_3 + 0x95b0);
      bVar5 = (uVar6 & 0xff) == 0;
      bVar4 = uVar6 < 0x100;
      lVar10 = *(long *)(param_3 + 0x95a8);
    }
    pIVar1 = param_3 + 0xc0;
    if (!bVar4) {
      pIVar1 = param_3 + 0xb8;
    }
    pIVar2 = param_3 + 0x180;
    if (!bVar5) {
      pIVar2 = pIVar1;
    }
    uVar11 = *(undefined8 *)pIVar2;
    *(undefined8 *)(param_3 + 0x95a0) = uVar7;
    *(int *)(param_3 + 0x95b0) = iVar8 + -1;
    if (lVar10 != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar11;
  }
  uVar7 = FUN_011cacf4(param_1,param_2,param_3);
  return uVar7;
}

