
/* cocos2d::Pass::setVertexAttribBinding(cocos2d::VertexAttribBinding*) */

void __thiscall cocos2d::Pass::setVertexAttribBinding(Pass *this,VertexAttribBinding *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x68);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(VertexAttribBinding **)(this + 0x68) = param_1;
    if (param_1 != (VertexAttribBinding *)0x0) {
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

