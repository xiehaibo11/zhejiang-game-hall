
/* btDbvt::update(btDbvtNode*, btDbvtAabbMm&, btVector3 const&, float) */

undefined8 __thiscall
btDbvt::update(btDbvt *this,btDbvtNode *param_1,btDbvtAabbMm *param_2,btVector3 *param_3,
              float param_4)

{
  int iVar1;
  long lVar2;
  btDbvtAabbMm *pbVar3;
  int iVar4;
  btDbvtAabbMm *pbVar5;
  btDbvtAabbMm *pbVar6;
  long lVar7;
  btDbvtAabbMm *pbVar8;
  undefined8 uVar9;
  float fVar10;
  
  if (*(float *)param_1 <= *(float *)param_2) {
    fVar10 = *(float *)(param_2 + 4);
    if ((((*(float *)(param_1 + 4) <= fVar10) &&
         (*(float *)(param_1 + 8) <= *(float *)(param_2 + 8))) &&
        (*(float *)(param_2 + 0x10) <= *(float *)(param_1 + 0x10))) &&
       ((*(float *)(param_2 + 0x14) <= *(float *)(param_1 + 0x14) &&
        (*(float *)(param_2 + 0x18) <= *(float *)(param_1 + 0x18))))) {
      return 0;
    }
  }
  else {
    fVar10 = *(float *)(param_2 + 4);
  }
  *(float *)param_2 = *(float *)param_2 - param_4;
  *(float *)(param_2 + 4) = fVar10 - param_4;
  pbVar3 = param_2 + 8;
  *(float *)pbVar3 = *(float *)pbVar3 - param_4;
  pbVar5 = param_2 + 0x10;
  *(float *)pbVar5 = *(float *)pbVar5 + param_4;
  pbVar6 = param_2 + 0x14;
  *(float *)pbVar6 = *(float *)pbVar6 + param_4;
  pbVar8 = param_2 + 0x18;
  *(float *)pbVar8 = *(float *)pbVar8 + param_4;
  if (*(float *)param_3 <= 0.0) {
    pbVar5 = param_2;
  }
  *(float *)pbVar5 = *(float *)param_3 + *(float *)pbVar5;
  if (*(float *)(param_3 + 4) <= 0.0) {
    pbVar6 = param_2 + 4;
  }
  *(float *)pbVar6 = *(float *)(param_3 + 4) + *(float *)pbVar6;
  if (*(float *)(param_3 + 8) <= 0.0) {
    pbVar8 = pbVar3;
  }
  *(float *)pbVar8 = *(float *)(param_3 + 8) + *(float *)pbVar8;
  lVar2 = FUN_01237c10(this,param_1);
  if (lVar2 != 0) {
    iVar1 = *(int *)(this + 0x10);
    if (iVar1 < 0) {
      lVar2 = *(long *)this;
    }
    else if (iVar1 != 0) {
      iVar4 = 0;
      do {
        lVar7 = *(long *)(lVar2 + 0x20);
        if (lVar7 == 0) break;
        iVar4 = iVar4 + 1;
        lVar2 = lVar7;
      } while (iVar4 < iVar1);
    }
  }
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  uVar9 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = uVar9;
  FUN_01237914(this,lVar2,param_1);
  return 1;
}

