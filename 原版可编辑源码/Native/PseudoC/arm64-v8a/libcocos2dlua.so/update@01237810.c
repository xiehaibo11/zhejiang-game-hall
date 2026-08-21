
/* btDbvt::update(btDbvtNode*, int) */

void __thiscall btDbvt::update(btDbvt *this,btDbvtNode *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = FUN_01237c10();
  if (lVar1 != 0) {
    if (param_2 < 0) {
      lVar1 = *(long *)this;
    }
    else if (param_2 != 0) {
      iVar2 = 0;
      do {
        lVar3 = *(long *)(lVar1 + 0x20);
        if (lVar3 == 0) break;
        iVar2 = iVar2 + 1;
        lVar1 = lVar3;
      } while (iVar2 < param_2);
    }
  }
  FUN_01237914(this,lVar1,param_1);
  return;
}

