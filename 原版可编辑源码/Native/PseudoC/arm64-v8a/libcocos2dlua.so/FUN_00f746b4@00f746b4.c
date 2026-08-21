
XMLNode * FUN_00f746b4(Value *param_1,XMLDocument *param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  XMLNode *pXVar6;
  undefined8 uVar7;
  XMLNode *pXVar8;
  byte local_60 [16];
  char *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pXVar8 = (XMLNode *)0x0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 2:
    pXVar8 = (XMLNode *)tinyxml2::XMLDocument::NewElement(param_2,"integer");
    cocos2d::Value::asString();
    pcVar1 = (char *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pcVar1 = local_50;
    }
    pXVar6 = (XMLNode *)tinyxml2::XMLDocument::NewText(param_2,pcVar1);
    goto LAB_00f74898;
  case 4:
  case 5:
    pXVar8 = (XMLNode *)tinyxml2::XMLDocument::NewElement(param_2,"real");
    cocos2d::Value::asString();
    pcVar1 = (char *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pcVar1 = local_50;
    }
    pXVar6 = (XMLNode *)tinyxml2::XMLDocument::NewText(param_2,pcVar1);
    goto LAB_00f74898;
  case 6:
    cocos2d::Value::asString();
    pcVar1 = (char *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pcVar1 = local_50;
    }
    pXVar8 = (XMLNode *)tinyxml2::XMLDocument::NewElement(param_2,pcVar1);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    break;
  case 7:
    pXVar8 = (XMLNode *)tinyxml2::XMLDocument::NewElement(param_2,"string");
    cocos2d::Value::asString();
    pcVar1 = (char *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pcVar1 = local_50;
    }
    pXVar6 = (XMLNode *)tinyxml2::XMLDocument::NewText(param_2,pcVar1);
LAB_00f74898:
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    tinyxml2::XMLNode::InsertEndChild(pXVar8,pXVar6);
    break;
  case 8:
    plVar5 = (long *)cocos2d::Value::asValueVector(param_1);
    pXVar8 = (XMLNode *)tinyxml2::XMLDocument::NewElement(param_2,"array");
    lVar3 = plVar5[1];
    for (lVar2 = *plVar5; lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
      pXVar6 = (XMLNode *)FUN_00f746b4(lVar2,param_2);
      if (pXVar6 != (XMLNode *)0x0) {
        tinyxml2::XMLNode::InsertEndChild(pXVar8,pXVar6);
      }
    }
    break;
  case 9:
    uVar7 = cocos2d::Value::asValueMap(param_1);
    pXVar8 = (XMLNode *)FUN_00f66d34(uVar7,param_2);
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return pXVar8;
    }
    goto LAB_00f748e4;
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return pXVar8;
  }
LAB_00f748e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

