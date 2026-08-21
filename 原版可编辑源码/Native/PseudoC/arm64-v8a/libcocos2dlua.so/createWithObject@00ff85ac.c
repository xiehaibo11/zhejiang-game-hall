
/* cocos2d::__Array::createWithObject(cocos2d::Ref*) */

Ref * cocos2d::__Array::createWithObject(Ref *param_1)

{
  Ref *this;
  _ccArray *p_Var1;
  
  this = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 00ff84dc with catch @ 00ff85d4 */
    Ref::Ref(this);
                    /* catch() { ... } // from try @ 00ff84f0 with catch @ 00ff85dc */
                    /* catch() { ... } // from try @ 00ff8544 with catch @ 00ff85ec */
    *(undefined ***)this = &PTR____Array_01724b68;
    *(undefined ***)(this + 0x28) = &PTR_clone_01724b98;
    *(undefined8 *)(this + 0x30) = 0;
    p_Var1 = (_ccArray *)ccArrayNew(7);
    *(_ccArray **)(this + 0x30) = p_Var1;
    ccArrayAppendObjectWithResize(p_Var1,param_1);
    Ref::autorelease(this);
  }
  return this;
}

