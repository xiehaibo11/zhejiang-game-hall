
/* v8::internal::DeclarationScope::DeclareGeneratorObjectVar(v8::internal::AstRawString const*) */

undefined8 * __thiscall
v8::internal::DeclarationScope::DeclareGeneratorObjectVar
          (DeclarationScope *this,AstRawString *param_1)

{
  Zone *pZVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  DeclarationScope *pDVar4;
  
  pDVar4 = this;
  if (((byte)this[0x82] & 1) != 0) goto LAB_014a1ec0;
  do {
    do {
      pDVar4 = *(DeclarationScope **)(pDVar4 + 8);
    } while (((byte)pDVar4[0x82] & 1) == 0);
LAB_014a1ec0:
  } while ((pDVar4[0x80] == (DeclarationScope)0x6) || (pDVar4[0x80] == (DeclarationScope)0x0));
  pZVar1 = *(Zone **)this;
  puVar3 = *(undefined8 **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar3) < 0x30) {
    puVar3 = (undefined8 *)Zone::NewExpand(pZVar1,0x30);
  }
  else {
    *(undefined8 **)(pZVar1 + 0x10) = puVar3 + 6;
  }
  *puVar3 = pDVar4;
  puVar3[1] = param_1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0xffffffffffffffff;
  *(undefined2 *)(puVar3 + 5) = 0x1003;
  **(undefined8 **)(pDVar4 + 0x40) = puVar3;
  *(undefined8 **)(pDVar4 + 0x40) = puVar3 + 3;
  puVar2 = *(undefined8 **)(this + 0xd8);
  if (puVar2 == (undefined8 *)0x0) {
    pZVar1 = *(Zone **)this;
    puVar2 = *(undefined8 **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar2) < 0x10) {
      puVar2 = (undefined8 *)Zone::NewExpand(pZVar1,0x10);
    }
    else {
      *(undefined8 **)(pZVar1 + 0x10) = puVar2 + 2;
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 **)(this + 0xd8) = puVar2;
  }
  puVar2[1] = puVar3;
  *(ushort *)(puVar3 + 5) = *(ushort *)(puVar3 + 5) | 0x800;
  return puVar3;
}

