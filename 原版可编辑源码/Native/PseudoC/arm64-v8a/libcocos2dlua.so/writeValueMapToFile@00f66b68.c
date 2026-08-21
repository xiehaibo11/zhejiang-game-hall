
/* cocos2d::FileUtils::writeValueMapToFile(std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

bool __thiscall
cocos2d::FileUtils::writeValueMapToFile
          (FileUtils *this,unordered_map *param_1,basic_string *param_2)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  XMLDocument *this_00;
  XMLNode *pXVar5;
  XMLElement *this_01;
  XMLAttribute *this_02;
  byte local_60 [16];
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = operator_new(0x280,(nothrow_t *)&std::nothrow);
  if (this_00 != (XMLDocument *)0x0) {
    tinyxml2::XMLDocument::XMLDocument(this_00,1,0);
    pXVar5 = (XMLNode *)
             tinyxml2::XMLDocument::NewDeclaration(this_00,"xml version=\"1.0\" encoding=\"UTF-8\"")
    ;
    if (pXVar5 != (XMLNode *)0x0) {
      tinyxml2::XMLNode::InsertEndChild((XMLNode *)this_00,pXVar5);
      pXVar5 = (XMLNode *)
               tinyxml2::XMLDocument::NewElement
                         (this_00,
                          "!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\""
                         );
      tinyxml2::XMLNode::InsertEndChild((XMLNode *)this_00,pXVar5);
      this_01 = (XMLElement *)tinyxml2::XMLDocument::NewElement(this_00,"plist");
      if (this_01 != (XMLElement *)0x0) {
        this_02 = (XMLAttribute *)tinyxml2::XMLElement::FindOrCreateAttribute(this_01,"version");
        tinyxml2::XMLAttribute::SetAttribute(this_02,"1.0");
        tinyxml2::XMLNode::InsertEndChild((XMLNode *)this_00,(XMLNode *)this_01);
        pXVar5 = (XMLNode *)FUN_00f66d34(param_1,this_00);
        if (pXVar5 != (XMLNode *)0x0) {
          tinyxml2::XMLNode::InsertEndChild((XMLNode *)this_01,pXVar5);
          (**(code **)(*(long *)this + 0x118))(local_60,this,param_2);
          pcVar1 = (char *)((ulong)local_60 | 1);
          if ((local_60[0] & 1) != 0) {
            pcVar1 = local_50;
          }
          iVar4 = tinyxml2::XMLDocument::SaveFile(this_00,pcVar1,false);
          bVar3 = iVar4 == 0;
          if ((local_60[0] & 1) != 0) {
            operator_delete(local_50);
          }
          (**(code **)(*(long *)this_00 + 0x88))(this_00);
          goto LAB_00f66ccc;
        }
      }
    }
    (**(code **)(*(long *)this_00 + 0x88))(this_00);
  }
  bVar3 = false;
LAB_00f66ccc:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

