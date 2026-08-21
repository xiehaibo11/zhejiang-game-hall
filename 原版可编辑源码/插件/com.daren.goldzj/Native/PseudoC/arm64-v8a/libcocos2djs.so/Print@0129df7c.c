
/* v8::internal::compiler::Node::Print(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall v8::internal::compiler::Node::Print(Node *this,basic_ostream *param_1)

{
  char cVar1;
  long *plVar2;
  uint uVar3;
  Node *pNVar4;
  Node *pNVar5;
  long lVar6;
  locale alStack_38 [8];
  
  compiler::operator<<(param_1,this);
  std::__ndk1::ios_base::getloc();
  plVar2 = (long *)std::__ndk1::locale::use_facet(alStack_38,(id *)&std::__ndk1::ctype<char>::id);
  cVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,10);
  std::__ndk1::locale::~locale(alStack_38);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
  pNVar5 = this + 0x20;
  uVar3 = (byte)this[0x17] & 0xf;
  if (uVar3 == 0xf) {
    uVar3 = *(uint *)(*(long *)pNVar5 + 8);
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  if (uVar3 != 0) {
    lVar6 = (long)(int)uVar3 << 3;
    do {
      pNVar4 = *(Node **)pNVar5;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"  ",2);
      if (pNVar4 == (Node *)0x0) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"(NULL)",6);
      }
      else {
        compiler::operator<<(param_1,pNVar4);
      }
      std::__ndk1::ios_base::getloc();
      plVar2 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_38,(id *)&std::__ndk1::ctype<char>::id);
      cVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,10);
      std::__ndk1::locale::~locale(alStack_38);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar1);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
      lVar6 = lVar6 + -8;
      pNVar5 = pNVar5 + 8;
    } while (lVar6 != 0);
  }
  return;
}

