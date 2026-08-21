
/* cocos2d::renderer::Technique::Technique(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::Vector<cocos2d::renderer::Pass*> const&) */

void __thiscall
cocos2d::renderer::Technique::Technique(Technique *this,basic_string *param_1,Vector *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__Technique_01c69480;
  iVar3 = _genID + 1;
  *(int *)(this + 0xc) = _genID;
  _genID = iVar3;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if ((vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>> *)
      (this + 0x18) !=
      (vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>> *)param_2)
  {
    std::__ndk1::vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>>::
    assign<cocos2d::renderer::Pass**>
              ((vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>> *)
               (this + 0x18),*(Pass ***)param_2,*(Pass ***)(param_2 + 8));
    puVar2 = *(undefined8 **)(this + 0x20);
    for (puVar1 = *(undefined8 **)(this + 0x18); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      Ref::retain((Ref *)*puVar1);
    }
  }
  return;
}

