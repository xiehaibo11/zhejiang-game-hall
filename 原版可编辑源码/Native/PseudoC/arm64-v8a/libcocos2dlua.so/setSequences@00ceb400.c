
/* cocosbuilder::CCBAnimationManager::setSequences(cocos2d::Vector<cocosbuilder::CCBSequence*>
   const&) */

void __thiscall
cocosbuilder::CCBAnimationManager::setSequences(CCBAnimationManager *this,Vector *param_1)

{
  vector<cocosbuilder::CCBSequence*,std::__ndk1::allocator<cocosbuilder::CCBSequence*>> *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  this_00 = (vector<cocosbuilder::CCBSequence*,std::__ndk1::allocator<cocosbuilder::CCBSequence*>> *
            )(this + 0x30);
  if (this_00 !=
      (vector<cocosbuilder::CCBSequence*,std::__ndk1::allocator<cocosbuilder::CCBSequence*>> *)
      param_1) {
    puVar3 = *(undefined8 **)(this + 0x30);
    puVar1 = *(undefined8 **)(this + 0x38);
    if (puVar3 != puVar1) {
      do {
        puVar2 = puVar3 + 1;
        cocos2d::Ref::release((Ref *)*puVar3);
        puVar3 = puVar2;
      } while (puVar1 != puVar2);
      puVar3 = *(undefined8 **)this_00;
    }
    *(undefined8 **)(this + 0x38) = puVar3;
    std::__ndk1::
    vector<cocosbuilder::CCBSequence*,std::__ndk1::allocator<cocosbuilder::CCBSequence*>>::
    assign<cocosbuilder::CCBSequence**>
              (this_00,*(CCBSequence ***)param_1,*(CCBSequence ***)(param_1 + 8));
    puVar1 = *(undefined8 **)(this + 0x38);
    for (puVar3 = *(undefined8 **)(this + 0x30); puVar3 != puVar1; puVar3 = puVar3 + 1) {
      cocos2d::Ref::retain((Ref *)*puVar3);
    }
  }
  return;
}

