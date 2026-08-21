
/* cocos2d::__Array::initWithObjects(cocos2d::Ref*, ...) */

void __thiscall cocos2d::__Array::initWithObjects(__Array *this,Ref *param_1,...)

{
  int iVar1;
  long lVar2;
  _ccArray *p_Var3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  if (param_1 != (Ref *)0x0) {
    p_Var3 = (_ccArray *)ccArrayNew(1);
    *(_ccArray **)(this + 0x30) = p_Var3;
    iVar1 = -0x30;
    plVar7 = (long *)register0x00000008;
    do {
      ccArrayAppendObjectWithResize(p_Var3,param_1);
      lVar6 = (long)iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 8;
        if (0 < iVar1) goto LAB_00ff8b48;
        param_1 = *(Ref **)(&stack0xffffffffffffffa8 + lVar6);
      }
      else {
LAB_00ff8b48:
                    /* try { // try from 00ff8b50 to 010f8b57 has its CatchHandler @ 00ff8d0c */
        param_1 = (Ref *)*plVar7;
                    /* try { // try from 00ff8b58 to 010f8b73 has its CatchHandler @ 00ff8d08 */
        plVar7 = plVar7 + 1;
      }
      if (param_1 == (Ref *)0x0) goto LAB_00ff8b74;
      p_Var3 = *(_ccArray **)(this + 0x30);
    } while( true );
  }
  uVar4 = 0;
LAB_00ff8b80:
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
LAB_00ff8b74:
                    /* try { // try from 00ff8b74 to 010f8bd7 has its CatchHandler @ 00ff8d0c */
  uVar4 = 1;
  goto LAB_00ff8b80;
}

