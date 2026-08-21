
/* v8::internal::compiler::WasmGraphBuilder::BuildCallNode(v8::internal::Signature<v8::internal::wasm::ValueType>*,
   v8::internal::Vector<v8::internal::compiler::Node*>, int, v8::internal::compiler::Node*,
   v8::internal::compiler::Operator const*) */

undefined8
v8::internal::compiler::WasmGraphBuilder::BuildCallNode
          (long param_1,long param_2,undefined8 *param_3,undefined8 param_4,int param_5,
          Node *param_6,Operator *param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  Node **local_118;
  Node **local_110;
  long *local_108;
  Node *local_100 [19];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_6 == (Node *)0x0) {
    param_6 = *(Node **)(param_1 + 0x30);
  }
  *(undefined1 *)(param_1 + 0x61) = 1;
  lVar4 = *(long *)(param_2 + 8);
  local_108 = &local_68;
  uVar1 = lVar4 + 4;
  local_118 = local_100;
  if (0x13 < uVar1) {
    local_110 = local_100;
    base::SmallVector<v8::internal::compiler::Node*,19ul>::Grow
              ((SmallVector<v8::internal::compiler::Node*,19ul> *)&local_118,uVar1);
  }
  local_110 = local_118 + uVar1;
  *local_118 = (Node *)*param_3;
  local_118[1] = param_6;
  if (lVar4 != 0) {
    memcpy(local_118 + 2,param_3 + 1,lVar4 * 8);
  }
  local_118[lVar4 + 2] = (Node *)**(undefined8 **)(param_1 + 0x20);
  local_118[lVar4 + 3] = (Node *)**(undefined8 **)(param_1 + 0x18);
  uVar3 = Graph::NewNode((Graph *)**(undefined8 **)(param_1 + 8),param_7,(int)uVar1,local_118,false)
  ;
  **(undefined8 **)(param_1 + 0x20) = uVar3;
  if ((0 < param_5) && (*(SourcePositionTable **)(param_1 + 0x78) != (SourcePositionTable *)0x0)) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(param_1 + 0x78),uVar3,
               (-(ulong)(param_5 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_5 + 1U) << 1) &
               0xffff80007fffffff);
  }
  if (local_118 != local_100) {
    free(local_118);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

