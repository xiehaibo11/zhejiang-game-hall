
/* void std::__ndk1::allocator<MyXMLVisitor::Attributes>::construct<MyXMLVisitor::Attributes,
   MyXMLVisitor::Attributes const&>(MyXMLVisitor::Attributes*, MyXMLVisitor::Attributes const&) */

void __thiscall
std::__ndk1::allocator<MyXMLVisitor::Attributes>::
construct<MyXMLVisitor::Attributes,MyXMLVisitor::Attributes_const&>
          (allocator<MyXMLVisitor::Attributes> *this,Attributes *param_1,Attributes *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_1,(basic_string *)param_2);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x18),(basic_string *)(param_2 + 0x18));
  uVar2 = *(undefined8 *)(param_2 + 0x3f);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x47) = *(undefined8 *)(param_2 + 0x47);
  *(undefined8 *)(param_1 + 0x3f) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  cocos2d::Size::Size((Size *)(param_1 + 0x50),(Size *)(param_2 + 0x50));
  uVar1 = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(param_2 + 0x5b);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  return;
}

