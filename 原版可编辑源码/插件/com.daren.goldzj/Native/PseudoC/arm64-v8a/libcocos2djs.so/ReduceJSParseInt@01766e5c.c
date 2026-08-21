
/* v8::internal::compiler::JSTypedLowering::ReduceJSParseInt(v8::internal::compiler::Node*) */

long __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSParseInt(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long local_40;
  long local_38;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  lVar4 = *(long *)(lVar1 + 8);
  local_38 = lVar4;
  lVar2 = NodeProperties::GetValueInput(param_1,1);
  local_40 = *(long *)(lVar2 + 8);
  lVar2 = *(long *)(this + 0x30);
  if (lVar4 == *(long *)(lVar2 + 400)) {
LAB_01766ec8:
    if ((local_40 != *(long *)(lVar2 + 0x110)) &&
       (uVar3 = Type::SlowIs((Type *)&local_40), (uVar3 & 1) == 0)) {
      if ((local_40 != *(long *)(*(long *)(this + 0x30) + 0x108)) &&
         (uVar3 = Type::SlowIs((Type *)&local_40), (uVar3 & 1) == 0)) goto LAB_01766f24;
    }
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,lVar1,0,0);
  }
  else {
    uVar3 = Type::SlowIs((Type *)&local_38);
    if ((uVar3 & 1) != 0) {
      lVar2 = *(long *)(this + 0x30);
      goto LAB_01766ec8;
    }
LAB_01766f24:
    lVar1 = 0;
  }
  return lVar1;
}

