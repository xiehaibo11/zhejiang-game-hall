
/* v8::internal::Parser::IgnoreCompletion(v8::internal::Statement*) */

undefined8 * __thiscall v8::internal::Parser::IgnoreCompletion(Parser *this,Statement *param_1)

{
  Zone *pZVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  pZVar1 = *(Zone **)(this + 0x68);
  puVar2 = *(undefined8 **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar2) < 0x20) {
    puVar2 = (undefined8 *)Zone::NewExpand(pZVar1,0x20);
  }
  else {
    *(undefined8 **)(pZVar1 + 0x10) = puVar2 + 4;
  }
  pZVar1 = *(Zone **)(this + 0x68);
  *puVar2 = 0x47ffffffff;
  puVar3 = *(undefined8 **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar3) < 8) {
    puVar3 = (undefined8 *)Zone::NewExpand(pZVar1,8);
  }
  else {
    *(undefined8 **)(pZVar1 + 0x10) = puVar3 + 1;
  }
  puVar2[1] = puVar3;
  puVar2[3] = 0;
  puVar2[2] = 0x100000001;
  *(uint *)((long)puVar2 + 4) = *(uint *)((long)puVar2 + 4) | 0x80;
  *puVar3 = param_1;
  return puVar2;
}

