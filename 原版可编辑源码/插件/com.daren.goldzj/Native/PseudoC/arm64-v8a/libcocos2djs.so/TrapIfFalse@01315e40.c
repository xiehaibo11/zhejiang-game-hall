
/* v8::internal::compiler::WasmGraphBuilder::TrapIfFalse(v8::internal::wasm::TrapReason,
   v8::internal::compiler::Node*, int) */

undefined8 __thiscall
v8::internal::compiler::WasmGraphBuilder::TrapIfFalse
          (WasmGraphBuilder *this,undefined8 param_2,Node *param_3,int param_4)

{
  Graph *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  Node *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((*(long *)(this + 0x10) == 0) || (*(char *)(*(long *)(this + 0x10) + 9) == '\0')) {
    param_2 = 0xc;
  }
  else if (0xb < (uint)param_2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::TrapUnless
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],param_2);
  local_38 = **(undefined8 **)(this + 0x18);
  uStack_40 = **(undefined8 **)(this + 0x20);
  local_48 = param_3;
  uVar2 = Graph::NewNode(this_00,pOVar1,3,&local_48,false);
  **(undefined8 **)(this + 0x18) = uVar2;
  if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(this + 0x78),uVar2,
               (-(ulong)(param_4 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_4 + 1U) << 1) &
               0xffff80007fffffff);
  }
  return uVar2;
}

