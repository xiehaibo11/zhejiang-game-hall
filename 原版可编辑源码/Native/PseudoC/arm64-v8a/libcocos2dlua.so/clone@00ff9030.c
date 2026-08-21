
/* cocos2d::__Array::clone() const */

Ref * __thiscall cocos2d::__Array::clone(__Array *this)

{
  Ref *this_00;
  undefined8 uVar1;
  undefined8 *puVar2;
  Ref *pRVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  this_00 = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined ***)this_00 = &PTR____Array_01724b68;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_01724b98;
    *(undefined8 *)(this_00 + 0x30) = 0;
  }
  Ref::autorelease(this_00);
  lVar4 = **(long **)(this + 0x30);
  if (lVar4 < 2) {
    lVar4 = 1;
  }
  uVar1 = ccArrayNew(lVar4);
  *(undefined8 *)(this_00 + 0x30) = uVar1;
  lVar4 = **(long **)(this + 0x30);
  if (0 < lVar4) {
    plVar5 = (long *)(*(long **)(this + 0x30))[2];
    plVar6 = plVar5 + lVar4 + -1;
    if (plVar5 <= plVar6) {
      lVar4 = *plVar5;
      while (lVar4 != 0) {
        puVar2 = (undefined8 *)
                 __dynamic_cast(lVar4,&Ref::typeinfo,&Clonable::typeinfo,0xfffffffffffffffe);
        if (((puVar2 != (undefined8 *)0x0) && (lVar4 = (**(code **)*puVar2)(), lVar4 != 0)) &&
           (pRVar3 = (Ref *)__dynamic_cast(lVar4,&Clonable::typeinfo,&Ref::typeinfo,
                                           0xfffffffffffffffe), pRVar3 != (Ref *)0x0)) {
          ccArrayAppendObjectWithResize(*(_ccArray **)(this_00 + 0x30),pRVar3);
        }
        plVar5 = plVar5 + 1;
        if (plVar6 < plVar5) {
          return this_00;
        }
        lVar4 = *plVar5;
      }
    }
  }
  return this_00;
}

