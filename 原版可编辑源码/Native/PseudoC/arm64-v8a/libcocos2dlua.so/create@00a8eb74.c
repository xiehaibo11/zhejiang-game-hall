
/* fairygui::GTreeNode::create(bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

Ref * fairygui::GTreeNode::create(bool param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  Ref *this;
  
                    /* catch() { ... } // from try @ 00a8ea90 with catch @ 00a8eb90 */
  this = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined ***)this = &PTR__GTreeNode_016a71a8;
    *(undefined8 *)(this + 0x3e) = 0;
    cocos2d::Value::Value((Value *)(this + 0x48));
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    this[0x45] = (Ref)param_1;
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x70) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
      uVar1 = *(ulong *)(param_2 + 8);
      pbVar2 = *(basic_string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        pbVar2 = param_2 + 1;
        uVar1 = (ulong)((byte)*param_2 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x70),(char *)pbVar2,uVar1);
    }
    cocos2d::Ref::autorelease(this);
  }
  return this;
}

