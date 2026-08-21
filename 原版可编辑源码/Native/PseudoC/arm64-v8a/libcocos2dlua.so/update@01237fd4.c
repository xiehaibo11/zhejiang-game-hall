
/* btDbvt::update(btDbvtNode*, btDbvtAabbMm&, btVector3 const&) */

undefined8 __thiscall
btDbvt::update(btDbvt *this,btDbvtNode *param_1,btDbvtAabbMm *param_2,btVector3 *param_3)

{
  btDbvtAabbMm *pbVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  if ((((*(float *)param_2 < *(float *)param_1) ||
       (*(float *)(param_2 + 4) < *(float *)(param_1 + 4))) ||
      (*(float *)(param_2 + 8) < *(float *)(param_1 + 8))) ||
     (((*(float *)(param_1 + 0x10) < *(float *)(param_2 + 0x10) ||
       (*(float *)(param_1 + 0x14) < *(float *)(param_2 + 0x14))) ||
      (*(float *)(param_1 + 0x18) < *(float *)(param_2 + 0x18))))) {
    pbVar1 = param_2 + 0x10;
    if (*(float *)param_3 <= 0.0) {
      pbVar1 = param_2;
    }
    *(float *)pbVar1 = *(float *)param_3 + *(float *)pbVar1;
    pbVar1 = param_2 + 0x14;
    if (*(float *)(param_3 + 4) <= 0.0) {
      pbVar1 = param_2 + 4;
    }
    *(float *)pbVar1 = *(float *)(param_3 + 4) + *(float *)pbVar1;
    pbVar1 = param_2 + 0x18;
    if (*(float *)(param_3 + 8) <= 0.0) {
      pbVar1 = param_2 + 8;
    }
    *(float *)pbVar1 = *(float *)(param_3 + 8) + *(float *)pbVar1;
    lVar3 = FUN_01237c10(this,param_1);
    if (lVar3 != 0) {
      iVar2 = *(int *)(this + 0x10);
      if (iVar2 < 0) {
        lVar3 = *(long *)this;
      }
      else if (iVar2 != 0) {
        iVar5 = 0;
        do {
          lVar6 = *(long *)(lVar3 + 0x20);
          if (lVar6 == 0) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar6;
        } while (iVar5 < iVar2);
      }
    }
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_1 = uVar4;
    FUN_01237914(this,lVar3,param_1);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

