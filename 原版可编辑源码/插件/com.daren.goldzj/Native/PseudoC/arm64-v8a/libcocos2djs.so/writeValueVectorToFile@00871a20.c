
/* cocos2d::FileUtils::writeValueVectorToFile(std::__ndk1::vector<cocos2d::Value,
   std::__ndk1::allocator<cocos2d::Value> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

bool __thiscall
cocos2d::FileUtils::writeValueVectorToFile(FileUtils *this,vector *param_1,basic_string *param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  XMLDocument *this_00;
  XMLNode *pXVar7;
  XMLElement *this_01;
  XMLAttribute *this_02;
  XMLNode *pXVar8;
  byte local_70 [16];
  char *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  this_00 = operator_new(0x280,(nothrow_t *)&std::nothrow);
  if (this_00 != (XMLDocument *)0x0) {
    tinyxml2::XMLDocument::XMLDocument(this_00,1,0);
    pXVar7 = (XMLNode *)
             tinyxml2::XMLDocument::NewDeclaration(this_00,"xml version=\"1.0\" encoding=\"UTF-8\"")
    ;
    if (pXVar7 != (XMLNode *)0x0) {
      tinyxml2::XMLNode::InsertEndChild((XMLNode *)this_00,pXVar7);
      pXVar7 = (XMLNode *)
               tinyxml2::XMLDocument::NewElement
                         (this_00,
                          "!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\""
                         );
      tinyxml2::XMLNode::InsertEndChild((XMLNode *)this_00,pXVar7);
      this_01 = (XMLElement *)tinyxml2::XMLDocument::NewElement(this_00,"plist");
      if (this_01 != (XMLElement *)0x0) {
        this_02 = (XMLAttribute *)tinyxml2::XMLElement::FindOrCreateAttribute(this_01,"version");
        tinyxml2::XMLAttribute::SetAttribute(this_02,"1.0");
        tinyxml2::XMLNode::InsertEndChild((XMLNode *)this_00,(XMLNode *)this_01);
        pXVar7 = (XMLNode *)tinyxml2::XMLDocument::NewElement(this_00,"array");
        lVar3 = *(long *)(param_1 + 8);
        for (lVar2 = *(long *)param_1; lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
          pXVar8 = (XMLNode *)FUN_0087bd90(lVar2,this_00);
          if (pXVar8 != (XMLNode *)0x0) {
            tinyxml2::XMLNode::InsertEndChild(pXVar7,pXVar8);
          }
        }
        if (pXVar7 != (XMLNode *)0x0) {
          tinyxml2::XMLNode::InsertEndChild((XMLNode *)this_01,pXVar7);
          (**(code **)(*(long *)this + 0xe8))(local_70,this,param_2);
          pcVar1 = (char *)((ulong)local_70 | 1);
          if ((local_70[0] & 1) != 0) {
            pcVar1 = local_60;
          }
          iVar6 = tinyxml2::XMLDocument::SaveFile(this_00,pcVar1,false);
          bVar5 = iVar6 == 0;
          if ((local_70[0] & 1) != 0) {
            operator_delete(local_60);
          }
          (**(code **)(*(long *)this_00 + 0x88))(this_00);
          goto LAB_00871bc4;
        }
      }
    }
    (**(code **)(*(long *)this_00 + 0x88))(this_00);
  }
  bVar5 = false;
LAB_00871bc4:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}

