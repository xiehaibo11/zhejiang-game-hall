
/* v8::internal::ActionNode::ClearCaptures(v8::internal::Interval, v8::internal::RegExpNode*) */

void v8::internal::ActionNode::ClearCaptures(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  Zone *this;
  undefined8 uVar2;
  
  this = *(Zone **)(param_2 + 0x30);
  puVar1 = *(undefined8 **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)puVar1) < 0x58) {
    puVar1 = (undefined8 *)Zone::NewExpand(this,0x58);
  }
  else {
    *(undefined8 **)(this + 0x10) = puVar1 + 0xb;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 10) = 6;
  puVar1[6] = uVar2;
  puVar1[7] = param_2;
  *(int *)(puVar1 + 8) = (int)param_1;
  *(int *)((long)puVar1 + 0x44) = (int)((ulong)param_1 >> 0x20);
  *puVar1 = &PTR__RegExpNode_01cc8590;
  puVar1[1] = 0;
  return;
}

