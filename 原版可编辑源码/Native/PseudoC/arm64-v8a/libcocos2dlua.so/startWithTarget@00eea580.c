
/* cocos2d::TurnOffTiles::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::TurnOffTiles::startWithTarget(TurnOffTiles *this,Node *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  
  GridAction::startWithTarget((GridAction *)this,param_1);
  if (*(uint *)(this + 0x68) != 0xffffffff) {
    srand(*(uint *)(this + 0x68));
  }
  uVar9 = (uint)(*(float *)(this + 0x58) * *(float *)(this + 0x5c));
  uVar11 = (ulong)uVar9;
  *(uint *)(this + 0x6c) = uVar9;
  pvVar3 = operator_new__(uVar11 << 2);
  *(void **)(this + 0x70) = pvVar3;
  if (uVar9 == 0) {
    return;
  }
  if (uVar9 < 8) {
    uVar4 = 0;
  }
  else {
    uVar14 = 0x300000002;
    uVar12 = 0x100000000;
    uVar4 = uVar11 & 0xfffffff8;
    puVar6 = (undefined8 *)((long)pvVar3 + 0x10);
    uVar7 = uVar4;
    do {
      iVar13 = (int)((ulong)uVar12 >> 0x20);
      iVar2 = (int)((ulong)uVar14 >> 0x20);
      puVar6[-1] = uVar14;
      puVar6[-2] = uVar12;
      puVar6[1] = CONCAT44(iVar2 + 4,(int)uVar14 + 4);
      *puVar6 = CONCAT44(iVar13 + 4,(int)uVar12 + 4);
      uVar12 = CONCAT44(iVar13 + 8,(int)uVar12 + 8);
      uVar14 = CONCAT44(iVar2 + 8,(int)uVar14 + 8);
      uVar7 = uVar7 - 8;
      puVar6 = puVar6 + 4;
    } while (uVar7 != 0);
    if (uVar4 == uVar11) goto LAB_00eea628;
  }
  do {
    *(int *)((long)pvVar3 + uVar4 * 4) = (int)uVar4;
    uVar4 = uVar4 + 1;
  } while (uVar4 < uVar11);
LAB_00eea628:
  if (-1 < (int)(uVar9 - 1)) {
    puVar8 = (undefined4 *)((long)pvVar3 + (long)(int)(uVar9 - 1) * 4);
    do {
      iVar2 = rand();
      iVar13 = 0;
      iVar10 = (int)uVar11;
      if (iVar10 != 0) {
        iVar13 = iVar2 / iVar10;
      }
      lVar5 = (ulong)(uint)(iVar2 - iVar13 * iVar10) * 4;
      uVar1 = *puVar8;
      uVar11 = (ulong)(iVar10 - 1U);
      *puVar8 = *(undefined4 *)((long)pvVar3 + lVar5);
      *(undefined4 *)((long)pvVar3 + lVar5) = uVar1;
      puVar8 = puVar8 + -1;
    } while (0 < (int)(iVar10 - 1U));
  }
  return;
}

