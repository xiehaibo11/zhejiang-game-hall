
/* cocos2d::PUScriptCompiler::convertToAST(std::__ndk1::list<cocos2d::PUConcreteNode*,
   std::__ndk1::allocator<cocos2d::PUConcreteNode*> > const&,
   std::__ndk1::list<cocos2d::PUAbstractNode*, std::__ndk1::allocator<cocos2d::PUAbstractNode*> >&)
    */

void __thiscall
cocos2d::PUScriptCompiler::convertToAST(PUScriptCompiler *this,list *param_1,list *param_2)

{
  list *plVar1;
  
  *(undefined8 *)(this + 0x58) = 0;
  *(list **)(this + 0x60) = param_2;
  for (plVar1 = *(list **)(param_1 + 8); param_1 != plVar1; plVar1 = *(list **)(plVar1 + 8)) {
    visit(this,*(PUConcreteNode **)(plVar1 + 0x10));
  }
  return;
}

