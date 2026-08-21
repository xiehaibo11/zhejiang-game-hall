
/* v8::internal::ActionNode::BeginSubmatch(int, int, v8::internal::RegExpNode*) */

undefined8 * v8::internal::ActionNode::BeginSubmatch(int param_1,int param_2,RegExpNode *param_3)

{
  undefined8 *puVar1;
  Zone *this;
  undefined8 uVar2;
  
  this = *(Zone **)(param_3 + 0x30);
  puVar1 = *(undefined8 **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)puVar1) < 0x58) {
    puVar1 = (undefined8 *)Zone::NewExpand(this,0x58);
  }
  else {
    *(undefined8 **)(this + 0x10) = puVar1 + 0xb;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 10) = 3;
  puVar1[6] = uVar2;
  puVar1[7] = param_3;
  *(int *)(puVar1 + 8) = param_1;
  *(int *)((long)puVar1 + 0x44) = param_2;
  *puVar1 = &PTR__RegExpNode_01cc8590;
  puVar1[1] = 0;
  return puVar1;
}

