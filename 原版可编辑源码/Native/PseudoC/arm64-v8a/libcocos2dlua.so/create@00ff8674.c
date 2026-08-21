
/* cocos2d::__Array::create(cocos2d::Ref*, ...) */

Ref * cocos2d::__Array::create(Ref *param_1,...)

{
  int iVar1;
  long lVar2;
  Ref *this;
  undefined8 uVar3;
  _ccArray *p_Var4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x38;
  this = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined ***)this = &PTR____Array_01724b68;
    *(undefined ***)(this + 0x28) = &PTR_clone_01724b98;
    *(undefined8 *)(this + 0x30) = 0;
    uVar3 = ccArrayNew(7);
    *(undefined8 *)(this + 0x30) = uVar3;
    Ref::autorelease(this);
    if (param_1 == (Ref *)0x0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      p_Var4 = *(_ccArray **)(this + 0x30);
      plVar7 = (long *)register0x00000008;
      while( true ) {
        ccArrayAppendObjectWithResize(p_Var4,param_1);
        lVar5 = (long)iVar1;
        if ((iVar1 < 0) && (iVar1 = iVar1 + 8, iVar1 < 1)) {
          param_1 = *(Ref **)(&stack0xffffffffffffffa8 + lVar5);
        }
        else {
          param_1 = (Ref *)*plVar7;
          plVar7 = plVar7 + 1;
        }
        if (param_1 == (Ref *)0x0) break;
        p_Var4 = *(_ccArray **)(this + 0x30);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ff87d8 with catch @ 00ff8768
                        */
      }
    }
  }
                    /* try { // try from 00ff8794 to 010f87d7 has its CatchHandler @ 00ff8908 */
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

