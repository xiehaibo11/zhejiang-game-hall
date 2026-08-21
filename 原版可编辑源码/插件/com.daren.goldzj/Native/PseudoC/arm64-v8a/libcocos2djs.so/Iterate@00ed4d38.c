
/* v8::internal::HandleScopeImplementer::Iterate(v8::internal::RootVisitor*) */

void __thiscall
v8::internal::HandleScopeImplementer::Iterate(HandleScopeImplementer *this,RootVisitor *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)this;
  uVar2 = *(undefined8 *)(lVar1 + 0x95a0);
  uVar4 = *(undefined8 *)(lVar1 + 0x95b8);
  uVar3 = *(undefined8 *)(lVar1 + 0x95b0);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(lVar1 + 0x95a8);
  *(undefined8 *)(this + 0x78) = uVar2;
  *(undefined8 *)(this + 0x90) = uVar4;
  *(undefined8 *)(this + 0x88) = uVar3;
  IterateThis(this,param_1);
  return;
}

