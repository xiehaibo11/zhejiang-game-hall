
/* v8::internal::compiler::Node::ReplaceUses(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::Node::ReplaceUses(Node *this,Node *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(this + 0x18);
  if (*(undefined8 **)(this + 0x18) != (undefined8 *)0x0) {
    do {
      puVar3 = puVar2;
      lVar1 = 0x10;
      if ((*(uint *)(puVar3 + 2) & 1) != 0) {
        lVar1 = 0x20;
      }
      *(Node **)((long)puVar3 + lVar1 + (ulong)(*(uint *)(puVar3 + 2) >> 1) * 0x20 + 0x18) = param_1
      ;
      puVar2 = (undefined8 *)*puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
    *puVar3 = *(undefined8 *)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x18) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x18) + 8) = puVar3;
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  }
  *(undefined8 *)(this + 0x18) = 0;
  return;
}

