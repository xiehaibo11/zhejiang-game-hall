
/* v8::internal::compiler::PropertyAccessBuilder::ResolveHolder(v8::internal::compiler::PropertyAccessInfo
   const&, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::PropertyAccessBuilder::ResolveHolder
          (PropertyAccessBuilder *this,PropertyAccessInfo *param_1,Node *param_2)

{
  JSGraph *this_00;
  ObjectRef aOStack_30 [16];
  
  if (*(long *)(param_1 + 0x58) != 0) {
    this_00 = *(JSGraph **)this;
    ObjectRef::ObjectRef(aOStack_30,*(undefined8 *)(this + 8),*(long *)(param_1 + 0x58),1);
    param_2 = (Node *)JSGraph::Constant(this_00,aOStack_30);
  }
  return param_2;
}

