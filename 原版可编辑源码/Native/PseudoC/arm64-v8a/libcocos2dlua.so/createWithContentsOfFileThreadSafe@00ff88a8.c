
/* cocos2d::__Array::createWithContentsOfFileThreadSafe(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Ref * cocos2d::__Array::createWithContentsOfFileThreadSafe(basic_string *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  long *plVar4;
  Ref *this;
  undefined8 uVar5;
  Ref *pRVar6;
  Value *pVVar7;
  basic_string local_68 [16];
  void *local_58;
  Value *local_50;
  Value *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x120))(&local_50,plVar4,param_1);
  pVVar7 = local_48;
  pVVar2 = local_50;
  this = operator_new(0x38,(nothrow_t *)&std::nothrow);
  pVVar3 = pVVar2;
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ff8794 with catch @ 00ff8908
                        */
    *(undefined ***)this = &PTR____Array_01724b68;
    *(undefined ***)(this + 0x28) = &PTR_clone_01724b98;
    *(undefined8 *)(this + 0x30) = 0;
    uVar5 = ccArrayNew(((long)pVVar7 - (long)pVVar2) * 0x10000000 >> 0x20);
    *(undefined8 *)(this + 0x30) = uVar5;
    Ref::autorelease(this);
    pVVar2 = local_50;
    pVVar3 = local_50;
    pVVar7 = local_48;
  }
  for (; pVVar2 != pVVar7; pVVar2 = pVVar2 + 0x10) {
    cocos2d::Value::asString();
    pRVar6 = (Ref *)__String::create(local_68);
    ccArrayAppendObjectWithResize(*(_ccArray **)(this + 0x30),pRVar6);
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    pVVar3 = local_50;
  }
                    /* try { // try from 00ff8990 to 010f8993 has its CatchHandler @ 00ff8a20 */
  pVVar2 = pVVar3;
  if (pVVar3 != (Value *)0x0) {
    while (local_48 != pVVar3) {
      cocos2d::Value::~Value(local_48 + -0x10);
      pVVar2 = local_50;
      local_48 = local_48 + -0x10;
    }
    operator_delete(pVVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

