
void * cpBodyNewKinematic(void)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = calloc(1,0xb8);
  uVar2 = cpBodyInit(0,0);
  cpBodySetType(uVar2,1);
  return pvVar1;
}

