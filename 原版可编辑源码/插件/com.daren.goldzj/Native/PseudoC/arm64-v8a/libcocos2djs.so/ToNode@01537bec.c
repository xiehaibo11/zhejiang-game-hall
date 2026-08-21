
/* v8::internal::RegExpBackReference::ToNode(v8::internal::RegExpCompiler*,
   v8::internal::RegExpNode*) */

undefined8 * __thiscall
v8::internal::RegExpBackReference::ToNode
          (RegExpBackReference *this,RegExpCompiler *param_1,RegExpNode *param_2)

{
  int iVar1;
  RegExpCompiler RVar2;
  undefined8 *puVar3;
  Zone *this_00;
  undefined8 uVar4;
  
  this_00 = *(Zone **)(param_1 + 0x448);
  puVar3 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) < 0x50) {
    puVar3 = (undefined8 *)Zone::NewExpand(this_00,0x50);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar3 + 10;
  }
  RVar2 = param_1[0x34];
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  iVar1 = *(int *)(*(long *)(this + 8) + 0x10);
  *(undefined4 *)(puVar3 + 9) = *(undefined4 *)(this + 0x18);
  *puVar3 = &PTR__RegExpNode_01cc86c8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = uVar4;
  puVar3[7] = param_2;
  *(int *)(puVar3 + 8) = iVar1 << 1;
  *(uint *)((long)puVar3 + 0x44) = iVar1 << 1 | 1;
  *(RegExpCompiler *)((long)puVar3 + 0x4c) = RVar2;
  return puVar3;
}

