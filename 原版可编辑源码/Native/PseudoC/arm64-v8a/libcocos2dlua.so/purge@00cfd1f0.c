
/* cocosbuilder::NodeLoaderLibrary::purge(bool) */

void __thiscall cocosbuilder::NodeLoaderLibrary::purge(NodeLoaderLibrary *this,bool param_1)

{
  bool bVar1;
  NodeLoaderLibrary *pNVar2;
  long lVar3;
  NodeLoaderLibrary *pNVar4;
  
  if (param_1) {
    pNVar4 = *(NodeLoaderLibrary **)(this + 0x28);
    while (pNVar4 != this + 0x30) {
      cocos2d::Ref::release(*(Ref **)(pNVar4 + 0x38));
      pNVar2 = *(NodeLoaderLibrary **)(pNVar4 + 8);
      if (*(NodeLoaderLibrary **)(pNVar4 + 8) == (NodeLoaderLibrary *)0x0) {
        pNVar2 = pNVar4 + 0x10;
        bVar1 = *(NodeLoaderLibrary **)*(NodeLoaderLibrary **)pNVar2 != pNVar4;
        pNVar4 = *(NodeLoaderLibrary **)pNVar2;
        if (bVar1) {
          do {
            lVar3 = *(long *)pNVar2;
            pNVar2 = (NodeLoaderLibrary *)(lVar3 + 0x10);
            pNVar4 = *(NodeLoaderLibrary **)pNVar2;
          } while (*(long *)pNVar4 != lVar3);
        }
      }
      else {
        do {
          pNVar4 = pNVar2;
          pNVar2 = *(NodeLoaderLibrary **)pNVar4;
        } while (*(NodeLoaderLibrary **)pNVar4 != (NodeLoaderLibrary *)0x0);
      }
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>>>
             *)(this + 0x28),*(__tree_node **)(this + 0x30));
  *(NodeLoaderLibrary **)(this + 0x28) = this + 0x30;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}

