
/* v8::internal::Runtime_ArrayIsArray(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ArrayIsArray(int param_1,ulong *param_2,Isolate *param_3)

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
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar7 = FUN_015500b4(param_1,param_2,param_3);
    return uVar7;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  iVar8 = *(int *)(param_3 + 0x95b0) + 1;
  *(int *)(param_3 + 0x95b0) = iVar8;
  uVar9 = *param_2;
  lVar11 = lVar3;
  if ((uVar9 & 1) != 0) {
    uVar10 = uVar9 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) == 0x423) {
      bVar5 = false;
      bVar4 = false;
      goto LAB_01550044;
    }
    if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) == 0xa9) {
      uVar6 = JSProxy::IsArray(param_2);
      iVar8 = *(int *)(param_3 + 0x95b0);
      lVar11 = *(long *)(param_3 + 0x95a8);
      bVar5 = (uVar6 & 0xff) == 0;
      bVar4 = uVar6 < 0x100;
      goto LAB_01550044;
    }
  }
  bVar5 = false;
  bVar4 = true;
LAB_01550044:
  pIVar1 = param_3 + 0xc0;
  if (!bVar4) {
    pIVar1 = param_3 + 0xb8;
  }
  pIVar2 = param_3 + 0x180;
  if (!bVar5) {
    pIVar2 = pIVar1;
  }
  uVar12 = *(undefined8 *)pIVar2;
  *(undefined8 *)(param_3 + 0x95a0) = uVar7;
  *(int *)(param_3 + 0x95b0) = iVar8 + -1;
  if (lVar11 != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar12;
}

