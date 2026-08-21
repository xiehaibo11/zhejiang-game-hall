
/* v8::internal::AstValueFactory::NewConsString(v8::internal::AstRawString const*,
   v8::internal::AstRawString const*) */

undefined8 * __thiscall
v8::internal::AstValueFactory::NewConsString
          (AstValueFactory *this,AstRawString *param_1,AstRawString *param_2)

{
  Zone *pZVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  pZVar1 = *(Zone **)(this + 0x448);
  puVar2 = *(undefined8 **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar2) < 0x18) {
    puVar2 = (undefined8 *)Zone::NewExpand(pZVar1,0x18);
  }
  else {
    *(undefined8 **)(pZVar1 + 0x10) = puVar2 + 3;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  **(undefined8 **)(this + 0x30) = puVar2;
  *(undefined8 **)(this + 0x30) = puVar2;
  pZVar1 = *(Zone **)(this + 0x448);
  if (*(int *)(param_1 + 0x10) != 0) {
    if (puVar2[1] != 0) {
      puVar3 = *(undefined8 **)(pZVar1 + 0x10);
      if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar3) < 0x10) {
        puVar3 = (undefined8 *)Zone::NewExpand(pZVar1,0x10);
      }
      else {
        *(undefined8 **)(pZVar1 + 0x10) = puVar3 + 2;
      }
      uVar4 = puVar2[1];
      puVar3[1] = puVar2[2];
      *puVar3 = uVar4;
      puVar2[2] = puVar3;
    }
    puVar2[1] = param_1;
    pZVar1 = *(Zone **)(this + 0x448);
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    if (puVar2[1] != 0) {
      puVar3 = *(undefined8 **)(pZVar1 + 0x10);
      if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar3) < 0x10) {
        puVar3 = (undefined8 *)Zone::NewExpand(pZVar1,0x10);
      }
      else {
        *(undefined8 **)(pZVar1 + 0x10) = puVar3 + 2;
      }
      uVar4 = puVar2[1];
      puVar3[1] = puVar2[2];
      *puVar3 = uVar4;
      puVar2[2] = puVar3;
    }
    puVar2[1] = param_2;
  }
  return puVar2;
}

