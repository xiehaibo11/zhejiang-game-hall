
/* cocos2d::renderer::Effect::init(cocos2d::Vector<cocos2d::renderer::Technique*> const&) */

void __thiscall cocos2d::renderer::Effect::init(Effect *this,Vector *param_1)

{
  vector<cocos2d::renderer::Technique*,std::__ndk1::allocator<cocos2d::renderer::Technique*>>
  *this_00;
  Effect *pEVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 009bf8e4 to 00abfa43 has its CatchHandler @ 009bfad0 */
  this_00 = (vector<cocos2d::renderer::Technique*,std::__ndk1::allocator<cocos2d::renderer::Technique*>>
             *)(this + 0x10);
  if (this_00 !=
      (vector<cocos2d::renderer::Technique*,std::__ndk1::allocator<cocos2d::renderer::Technique*>> *
      )param_1) {
    pEVar1 = this + 0x18;
    puVar2 = *(undefined8 **)(this + 0x10);
    if (puVar2 != *(undefined8 **)pEVar1) {
      do {
        puVar3 = puVar2 + 1;
        Ref::release((Ref *)*puVar2);
        puVar2 = puVar3;
      } while (puVar3 != *(undefined8 **)pEVar1);
      puVar2 = *(undefined8 **)this_00;
    }
    *(undefined8 **)pEVar1 = puVar2;
    std::__ndk1::
    vector<cocos2d::renderer::Technique*,std::__ndk1::allocator<cocos2d::renderer::Technique*>>::
    assign<cocos2d::renderer::Technique**>
              (this_00,*(Technique ***)param_1,*(Technique ***)(param_1 + 8));
    puVar3 = *(undefined8 **)pEVar1;
    for (puVar2 = *(undefined8 **)this_00; puVar2 != puVar3; puVar2 = puVar2 + 1) {
      Ref::retain((Ref *)*puVar2);
    }
  }
  if (0 < *(long *)(this + 0x18) - (long)*(undefined8 **)this_00) {
    *(undefined8 *)(this + 0x28) = **(undefined8 **)this_00;
  }
  return;
}

