
/* dragonBones::CCFactory::CCFactory() */

void __thiscall dragonBones::CCFactory::CCFactory(CCFactory *this)

{
  long lVar1;
  Ref *pRVar2;
  DragonBones *this_00;
  long lVar3;
  code *pcVar4;
  Scheduler *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  undefined **local_90 [4];
  undefined ***local_70;
  long local_58;
  
                    /* try { // try from 0095fe88 to 00a5febb has its CatchHandler @ 0095ff88 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this[8] = (CCFactory)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(CCFactory **)(this + 0x10) = this + 0x18;
                    /* try { // try from 0095febc to 00a5fecf has its CatchHandler @ 0095ff54 */
  *(long *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 **)(this + 0x48) = &BaseFactory::_jsonParser;
  *(undefined8 *)(this + 0x38) = 0;
                    /* try { // try from 0095fed4 to 00a5ff07 has its CatchHandler @ 0095ff58 */
  *(undefined ***)this = &PTR__CCFactory_016d7da0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(CCFactory **)(this + 0x28) = this + 0x30;
  *(undefined8 *)(this + 0x50) = 0;
  if (_dragonBonesInstance == (DragonBones *)0x0) {
    pRVar2 = (Ref *)CCArmatureDisplay::create();
    cocos2d::Ref::retain(pRVar2);
                    /* try { // try from 0095ff08 to 00a5ffa3 has its CatchHandler @ 0095fdd0 */
    this_00 = operator_new(0x48);
    if (pRVar2 == (Ref *)0x0) {
      pRVar2 = (Ref *)0x0;
    }
    else {
      pRVar2 = pRVar2 + *(long *)(*(long *)pRVar2 + -0x18);
    }
    DragonBones::DragonBones(this_00,(IEventDispatcher *)pRVar2);
    DragonBones::yDown = 0;
    _dragonBonesInstance = this_00;
    lVar3 = cocos2d::Director::getInstance();
    this_01 = *(Scheduler **)(lVar3 + 0xa0);
    local_70 = local_90;
                    /* catch() { ... } // from try @ 0095febc with catch @ 0095ff54 */
                    /* catch() { ... } // from try @ 0095fed4 with catch @ 0095ff58 */
    local_90[0] = &PTR_FUN_0169d8f0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_a8,"dragonBonesClock");
                    /* catch() { ... } // from try @ 0095fe88 with catch @ 0095ff88 */
    cocos2d::Scheduler::schedule
              (this_01,(function *)local_90,this,0.0,false,(basic_string *)local_a8);
    if (((byte)local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_90 == local_70) {
      pcVar4 = (code *)(*local_70)[4];
    }
    else {
      if (local_70 == (undefined ***)0x0) goto LAB_0095ffcc;
      pcVar4 = (code *)(*local_70)[5];
    }
    (*pcVar4)();
  }
LAB_0095ffcc:
  *(DragonBones **)(this + 0x40) = _dragonBonesInstance;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

