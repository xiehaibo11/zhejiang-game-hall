
/* v8::internal::RegExpText::ToNode(v8::internal::RegExpCompiler*, v8::internal::RegExpNode*) */

undefined8 * __thiscall
v8::internal::RegExpText::ToNode(RegExpText *this,RegExpCompiler *param_1,RegExpNode *param_2)

{
  RegExpCompiler RVar1;
  undefined8 *puVar2;
  Zone *this_00;
  undefined8 uVar3;
  
  this_00 = *(Zone **)(param_1 + 0x448);
  puVar2 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < 0x50) {
    puVar2 = (undefined8 *)Zone::NewExpand(this_00,0x50);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar2 + 10;
  }
  RVar1 = param_1[0x34];
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[8] = this + 8;
  puVar2[6] = uVar3;
  puVar2[7] = param_2;
  *(RegExpCompiler *)(puVar2 + 9) = RVar1;
  *puVar2 = &PTR__RegExpNode_01cc85f8;
  puVar2[1] = 0;
  return puVar2;
}

