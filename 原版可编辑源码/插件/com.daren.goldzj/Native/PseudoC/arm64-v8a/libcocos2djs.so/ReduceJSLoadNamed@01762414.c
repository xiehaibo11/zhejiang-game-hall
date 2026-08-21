
/* v8::internal::compiler::JSTypedLowering::ReduceJSLoadNamed(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSLoadNamed(JSTypedLowering *this,Node *param_1)

{
  Node *pNVar1;
  undefined8 *puVar2;
  ulong uVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  Graph *this_00;
  long lVar6;
  ObjectRef aOStack_68 [16];
  ObjectRef aOStack_58 [16];
  long local_48;
  Node *local_28;
  
  pNVar1 = (Node *)NodeProperties::GetValueInput(param_1,0);
  lVar6 = *(long *)(pNVar1 + 8);
  uVar5 = *(undefined8 *)(this + 0x18);
  local_48 = lVar6;
  puVar2 = (undefined8 *)NamedAccessOf(*(Operator **)param_1);
  ObjectRef::ObjectRef(aOStack_58,uVar5,*puVar2,0);
  uVar3 = ObjectRef::IsName(aOStack_58);
  if ((uVar3 & 1) != 0) {
    ObjectRef::ObjectRef
              (aOStack_68,*(undefined8 *)(this + 0x18),
               *(long *)(*(long *)(this + 0x10) + 0x168) + 0x7b8,0);
    uVar3 = ObjectRef::IsName(aOStack_68);
    if ((uVar3 & 1) != 0) {
      uVar3 = ObjectRef::equals(aOStack_58,aOStack_68);
      if (((uVar3 & 1) == 0) ||
         ((lVar6 != 0x4021 && (uVar3 = Type::SlowIs((Type *)&local_48,0x4021), (uVar3 & 1) == 0))))
      {
        uVar5 = 0;
      }
      else {
        this_00 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar4 = (Operator *)
                 SimplifiedOperatorBuilder::StringLength
                           ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_28 = pNVar1;
        uVar5 = Graph::NewNode(this_00,pOVar4,1,&local_28,false);
        (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar5,0,0);
      }
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsName()");
}

