
/* MyXMLVisitor::pushBackFontElement(MyXMLVisitor::Attributes const&) */

void __thiscall MyXMLVisitor::pushBackFontElement(MyXMLVisitor *this,Attributes *param_1)

{
  Attributes *pAVar1;
  
  pAVar1 = *(Attributes **)(this + 0x10);
  if (pAVar1 != *(Attributes **)(this + 0x18)) {
    std::__ndk1::allocator<MyXMLVisitor::Attributes>::
    construct<MyXMLVisitor::Attributes,MyXMLVisitor::Attributes_const&>
              ((allocator<MyXMLVisitor::Attributes> *)(this + 0x18),pAVar1,param_1);
    *(Attributes **)(this + 0x10) = pAVar1 + 0x60;
    return;
  }
  std::__ndk1::vector<MyXMLVisitor::Attributes,std::__ndk1::allocator<MyXMLVisitor::Attributes>>::
  __push_back_slow_path<MyXMLVisitor::Attributes_const&>
            ((vector<MyXMLVisitor::Attributes,std::__ndk1::allocator<MyXMLVisitor::Attributes>> *)
             (this + 8),param_1);
  return;
}

