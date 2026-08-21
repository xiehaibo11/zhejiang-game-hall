
/* v8::internal::RegExpLookaround::Builder::Builder(bool, v8::internal::RegExpNode*, int, int, int,
   int) */

void __thiscall
v8::internal::RegExpLookaround::Builder::Builder
          (Builder *this,bool param_1,RegExpNode *param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  undefined8 *puVar1;
  Zone *this_00;
  
  *(RegExpNode **)(this + 0x10) = param_2;
  *this = (Builder)param_1;
  *(int *)(this + 0x18) = param_3;
  *(int *)(this + 0x1c) = param_4;
  if (param_1) {
    puVar1 = (undefined8 *)
             ActionNode::PositiveSubmatchSuccess(param_3,param_4,param_5,param_6,param_2);
  }
  else {
    this_00 = *(Zone **)(param_2 + 0x30);
    puVar1 = *(undefined8 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar1) < 0x50) {
      puVar1 = (undefined8 *)Zone::NewExpand(this_00,0x50);
    }
    else {
      *(undefined8 **)(this_00 + 0x10) = puVar1 + 10;
    }
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[6] = this_00;
    puVar1[4] = 0;
    *(int *)(puVar1 + 8) = param_4;
    *(int *)((long)puVar1 + 0x44) = param_5;
    *(int *)(puVar1 + 9) = param_6;
    *(undefined4 *)(puVar1 + 7) = 2;
    *(int *)((long)puVar1 + 0x3c) = param_3;
    *puVar1 = &PTR__RegExpNode_01cc8798;
    puVar1[1] = 0;
  }
  *(undefined8 **)(this + 8) = puVar1;
  return;
}

