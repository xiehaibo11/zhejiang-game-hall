
/* v8::internal::compiler::NodeHashCache::Constructor::Constructor(v8::internal::compiler::NodeHashCache*,
   v8::internal::compiler::Operator const*, int, v8::internal::compiler::Node**,
   v8::internal::compiler::Type) */

void __thiscall
v8::internal::compiler::NodeHashCache::Constructor::Constructor
          (Constructor *this,undefined8 *param_1,Operator *param_2,uint param_3,Node **param_4,
          undefined8 param_6)

{
  Node *pNVar1;
  uint uVar2;
  long lVar3;
  Node *pNVar4;
  Node *this_00;
  Node *pNVar5;
  Node *this_01;
  ulong uVar6;
  int iVar7;
  
  *(undefined8 **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  if (param_1[9] == param_1[8]) {
    lVar3 = Graph::NewNode((Graph *)*param_1,param_2,param_3,param_4,false);
    *(long *)(this + 0x10) = lVar3;
  }
  else {
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1[9] + -8);
    param_1[9] = param_1[9] + -8;
    pNVar4 = *(Node **)(this + 0x10);
    if ((~*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0) {
      uVar2 = *(uint *)(*(long *)(pNVar4 + 0x20) + 8);
    }
    else {
      uVar2 = *(uint *)(pNVar4 + 0x14) >> 0x18 & 0xf;
    }
    if ((int)param_3 <= (int)uVar2) {
      Node::TrimInputCount(pNVar4,param_3);
    }
    if (0 < (int)param_3) {
      uVar6 = 0;
      iVar7 = -1;
      do {
        pNVar4 = *(Node **)(this + 0x10);
        if ((long)uVar6 < (long)(int)uVar2) {
          this_01 = param_4[uVar6];
          pNVar1 = pNVar4 + 0x20;
          pNVar5 = pNVar1;
          if ((*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar5 = (Node *)(*(long *)pNVar1 + 0x10);
          }
          this_00 = *(Node **)(pNVar5 + uVar6 * 8);
          if (this_00 != this_01) {
            if ((*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar4 = *(Node **)pNVar1;
            }
            if (this_00 != (Node *)0x0) {
              Node::RemoveUse(this_00,(Use *)(pNVar4 + (long)iVar7 * 0x18));
            }
            *(Node **)(pNVar5 + uVar6 * 8) = this_01;
            if (this_01 != (Node *)0x0) {
              Node::AppendUse(this_01,(Use *)(pNVar4 + (long)iVar7 * 0x18));
            }
          }
        }
        else {
          Node::AppendInput(pNVar4,*(Zone **)**(undefined8 **)this,param_4[uVar6]);
        }
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (param_3 != uVar6);
    }
    NodeProperties::ChangeOp(*(Node **)(this + 0x10),param_2);
    lVar3 = *(long *)(this + 0x10);
  }
  *(undefined8 *)(lVar3 + 8) = param_6;
  return;
}

