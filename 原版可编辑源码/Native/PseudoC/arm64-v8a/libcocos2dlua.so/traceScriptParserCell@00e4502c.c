
/* cocos2d::traceScriptParserCell(std::__ndk1::list<cocos2d::PUConcreteNode*,
   std::__ndk1::allocator<cocos2d::PUConcreteNode*> >&, int) */

list * cocos2d::traceScriptParserCell(list *param_1,int param_2)

{
  uint uVar1;
  list *plVar2;
  byte *pbVar3;
  list *plVar4;
  
  plVar4 = *(list **)(param_1 + 8);
  plVar2 = param_1;
  if (param_1 != plVar4) {
    do {
      pbVar3 = *(byte **)(plVar4 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        pbVar3 = pbVar3 + 1;
      }
      else {
        pbVar3 = *(byte **)(pbVar3 + 0x10);
      }
      uVar1 = printf("%s,##%d\n",pbVar3,(ulong)(uint)param_2);
      plVar2 = (list *)(ulong)uVar1;
      if (*(long *)(*(long *)(plVar4 + 0x10) + 0x48) != 0) {
        plVar2 = (list *)traceScriptParserCell
                                   ((list *)(*(long *)(plVar4 + 0x10) + 0x38),param_2 + 1);
      }
      plVar4 = *(list **)(plVar4 + 8);
    } while (param_1 != plVar4);
  }
  return plVar2;
}

