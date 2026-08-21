
/* btDbvt::update(btDbvtNode*, btDbvtAabbMm&) */

void __thiscall btDbvt::update(btDbvt *this,btDbvtNode *param_1,btDbvtAabbMm *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_01237c10();
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
  return;
}

