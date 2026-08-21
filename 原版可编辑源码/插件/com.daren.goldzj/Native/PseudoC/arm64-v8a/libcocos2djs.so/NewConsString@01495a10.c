
/* v8::internal::AstValueFactory::NewConsString() */

void __thiscall v8::internal::AstValueFactory::NewConsString(AstValueFactory *this)

{
  undefined8 *puVar1;
  Zone *this_00;
  
  this_00 = *(Zone **)(this + 0x448);
  puVar1 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar1) < 0x18) {
    puVar1 = (undefined8 *)Zone::NewExpand(this_00,0x18);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar1 + 3;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  **(undefined8 **)(this + 0x30) = puVar1;
  *(undefined8 **)(this + 0x30) = puVar1;
  return;
}

