
/* cocos2d::IMEDelegate::~IMEDelegate() */

void __thiscall cocos2d::IMEDelegate::~IMEDelegate(IMEDelegate *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  *(undefined ***)this = &PTR__IMEDelegate_01723650;
  if (((DAT_0178fd10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0178fd10), iVar2 != 0)) {
    plVar5 = operator_new(0x20);
    *plVar5 = (long)plVar5;
    plVar5[1] = (long)plVar5;
    DAT_0178fd08 = plVar5;
    plVar5[2] = 0;
    plVar5[3] = 0;
    __cxa_atexit(IMEDispatcher::~IMEDispatcher,&DAT_0178fd08,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_0178fd10);
  }
  plVar5 = DAT_0178fd08;
  if ((DAT_0178fd08 != (long *)0x0) && (plVar3 = (long *)DAT_0178fd08[1], DAT_0178fd08 != plVar3)) {
    do {
      plVar4 = plVar3;
      if ((IMEDelegate *)plVar3[2] == this) break;
      plVar3 = (long *)plVar3[1];
      plVar4 = DAT_0178fd08;
    } while (DAT_0178fd08 != plVar3);
    if (DAT_0178fd08 != plVar4) {
      if ((DAT_0178fd08[3] != 0) && (plVar4[2] == DAT_0178fd08[3])) {
        DAT_0178fd08[3] = 0;
      }
      lVar1 = *plVar4;
      *(long *)(lVar1 + 8) = plVar4[1];
      *(long *)plVar4[1] = lVar1;
      plVar5[2] = plVar5[2] + -1;
      operator_delete(plVar4);
      return;
    }
  }
  return;
}

