
/* btDbvt::update(btDbvtNode*, btDbvtAabbMm&, float) */

undefined8 __thiscall
btDbvt::update(btDbvt *this,btDbvtNode *param_1,btDbvtAabbMm *param_2,float param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  if (*(float *)param_1 <= *(float *)param_2) {
    fVar6 = *(float *)(param_2 + 4);
    if ((((*(float *)(param_1 + 4) <= fVar6) && (*(float *)(param_1 + 8) <= *(float *)(param_2 + 8))
         ) && (*(float *)(param_2 + 0x10) <= *(float *)(param_1 + 0x10))) &&
       ((*(float *)(param_2 + 0x14) <= *(float *)(param_1 + 0x14) &&
        (*(float *)(param_2 + 0x18) <= *(float *)(param_1 + 0x18))))) {
      return 0;
    }
  }
  else {
    fVar6 = *(float *)(param_2 + 4);
  }
  *(float *)param_2 = *(float *)param_2 - param_3;
  *(float *)(param_2 + 4) = fVar6 - param_3;
  *(float *)(param_2 + 8) = *(float *)(param_2 + 8) - param_3;
  *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + param_3;
  *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + param_3;
  *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) + param_3;
  lVar2 = FUN_01237c10(this,param_1);
  if (lVar2 != 0) {
    iVar1 = *(int *)(this + 0x10);
    if (iVar1 < 0) {
      lVar2 = *(long *)this;
    }
    else if (iVar1 != 0) {
      iVar3 = 0;
      do {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) break;
        iVar3 = iVar3 + 1;
        lVar2 = lVar4;
      } while (iVar3 < iVar1);
    }
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  uVar5 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = uVar5;
  FUN_01237914(this,lVar2,param_1);
  return 1;
}

