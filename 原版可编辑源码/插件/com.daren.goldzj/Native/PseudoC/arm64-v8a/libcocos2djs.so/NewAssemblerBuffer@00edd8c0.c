
/* v8::internal::NewAssemblerBuffer(int) */

void __thiscall v8::internal::NewAssemblerBuffer(internal *this,int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *in_x8;
  
  iVar1 = (int)this;
  puVar2 = operator_new(0x18);
  *puVar2 = &PTR_FUN_01ca11c0;
  if (iVar1 == 0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  else {
    pvVar3 = operator_new__((long)iVar1);
    puVar2[1] = pvVar3;
    puVar2[2] = (long)iVar1;
  }
  *in_x8 = puVar2;
  return;
}

