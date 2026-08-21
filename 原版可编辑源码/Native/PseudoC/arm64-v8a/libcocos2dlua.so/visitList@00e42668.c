
/* cocos2d::PUScriptCompiler::visitList(std::__ndk1::list<cocos2d::PUConcreteNode*,
   std::__ndk1::allocator<cocos2d::PUConcreteNode*> > const&) */

void __thiscall cocos2d::PUScriptCompiler::visitList(PUScriptCompiler *this,list *param_1)

{
  list *plVar1;
  
  for (plVar1 = *(list **)(param_1 + 8); param_1 != plVar1; plVar1 = *(list **)(plVar1 + 8)) {
    visit(this,*(PUConcreteNode **)(plVar1 + 0x10));
  }
  return;
}

