
XMLNode * FUN_0087195c(long param_1,XMLDocument *param_2)

{
  XMLNode *this;
  XMLNode *pXVar1;
  XMLNode *pXVar2;
  char *pcVar3;
  long *plVar4;
  
  this = (XMLNode *)tinyxml2::XMLDocument::NewElement(param_2,"dict");
  for (plVar4 = *(long **)(param_1 + 0x10); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    pXVar1 = (XMLNode *)tinyxml2::XMLDocument::NewElement(param_2,"key");
    tinyxml2::XMLNode::InsertEndChild(this,pXVar1);
    if ((*(byte *)(plVar4 + 2) & 1) == 0) {
      pcVar3 = (char *)((long)plVar4 + 0x11);
    }
    else {
      pcVar3 = (char *)plVar4[4];
    }
    pXVar2 = (XMLNode *)tinyxml2::XMLDocument::NewText(param_2,pcVar3);
    tinyxml2::XMLNode::InsertEndChild(pXVar1,pXVar2);
    pXVar1 = (XMLNode *)FUN_0087bd90(plVar4 + 5,param_2);
    if (pXVar1 != (XMLNode *)0x0) {
      tinyxml2::XMLNode::InsertEndChild(this,pXVar1);
    }
  }
  return this;
}

