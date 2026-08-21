
/* v8::internal::compiler::JSTypedLowering::ReduceJSToNumberInput(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSToNumberInput(JSTypedLowering *this,Node *param_1)

{
  ulong uVar1;
  Node *pNVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  int *local_18;
  
  local_18 = *(int **)(param_1 + 8);
  if (((local_18 == (int *)0x4021) ||
      (uVar1 = Type::SlowIs((Type *)&local_18,0x4021), (uVar1 & 1) != 0)) &&
     (*(short *)(*(long *)param_1 + 0x10) == 0x1e)) {
    uVar5 = *(undefined8 *)(*(long *)param_1 + 0x30);
    ObjectRef::ObjectRef((ObjectRef *)&local_40,*(undefined8 *)(this + 0x18),uVar5,0);
    uVar1 = ObjectRef::IsHeapObject((ObjectRef *)&local_40);
    if ((uVar1 & 1) == 0) {
LAB_01761d64:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    uVar1 = ObjectRef::IsString((ObjectRef *)&local_40);
    if ((uVar1 & 1) == 0) goto LAB_01761c90;
    ObjectRef::ObjectRef((ObjectRef *)&local_40,*(undefined8 *)(this + 0x18),uVar5,0);
    uVar1 = ObjectRef::IsHeapObject((ObjectRef *)&local_40);
    if ((uVar1 & 1) == 0) goto LAB_01761d64;
    local_50 = ObjectRef::AsString((ObjectRef *)&local_40);
    auVar6 = StringRef::ToNumber((StringRef *)local_50);
    dVar4 = auVar6._8_8_;
    if ((auVar6._0_8_ & 0xff) == 0) {
      pNVar2 = (Node *)NoChangeBecauseOfMissingData
                                 (*(JSHeapBroker **)(this + 0x18),"ReduceJSToNumberInput",0x3c3);
      return pNVar2;
    }
LAB_01761d04:
    param_1 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),dVar4);
  }
  else {
LAB_01761c90:
    if ((((ulong)local_18 & 1) == 0) && (*local_18 == 0)) {
      lVar3 = Type::AsHeapConstant((Type *)&local_18);
      uStack_38 = *(undefined8 *)(lVar3 + 0x10);
      local_40 = *(undefined8 *)(lVar3 + 8);
      auVar6 = ObjectRef::OddballToNumber((ObjectRef *)&local_40);
      dVar4 = auVar6._8_8_;
      if ((auVar6._0_8_ & 0xff) != 0) goto LAB_01761d04;
    }
    if ((local_18 != (int *)0x1c5f) &&
       (uVar1 = Type::SlowIs((Type *)&local_18,0x1c5f), (uVar1 & 1) == 0)) {
      if ((local_18 == (int *)0x101) ||
         (uVar1 = Type::SlowIs((Type *)&local_18,0x101), (uVar1 & 1) != 0)) {
        param_1 = (Node *)JSGraph::NaNConstant(*(JSGraph **)(this + 0x10));
      }
      else if ((local_18 == (int *)0x81) ||
              (uVar1 = Type::SlowIs((Type *)&local_18,0x81), (uVar1 & 1) != 0)) {
        param_1 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
      }
      else {
        param_1 = (Node *)0x0;
      }
    }
  }
  return param_1;
}

