
/* universe::network::GuoPengFei::setSRSType(int) */

void __thiscall universe::network::GuoPengFei::setSRSType(GuoPengFei *this,int param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined *puVar4;
  
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar1 = (char *)Translated::getInstance();
                    /* try { // try from 00a0b288 to 00b0b2db has its CatchHandler @ 00a0b360 */
    Translated::log(pcVar1,"GuoPengFei: delete 29");
  }
  if (param_1 == 1) {
                    /* try { // try from 00a0b2dc to 00b0b30b has its CatchHandler @ 00a0b238 */
    puVar2 = operator_new(0x38);
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    *puVar2 = &PTR___cxa_pure_virtual_016a2148;
    Encryption::setDefaultAesKey((Encryption *)(puVar2 + 1));
                    /* try { // try from 00a0b30c to 00b0b31f has its CatchHandler @ 00a0b360 */
    puVar4 = &Proxy33::vtable;
  }
  else {
    if (param_1 != 0) goto LAB_00a0b328;
    puVar2 = operator_new(0x38);
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    *puVar2 = &PTR___cxa_pure_virtual_016a2148;
    Encryption::setDefaultAesKey((Encryption *)(puVar2 + 1));
    puVar4 = &Packer32::vtable;
  }
  *puVar2 = puVar4 + 0x10;
  pvVar3 = *(void **)(this + 0x3b0);
  *(undefined8 **)(this + 0x3b0) = puVar2;
                    /* try { // try from 00a0b320 to 00b0b37b has its CatchHandler @ 00a0b238 */
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
LAB_00a0b328:
  *(int *)(this + 0x418) = param_1;
  return;
}

