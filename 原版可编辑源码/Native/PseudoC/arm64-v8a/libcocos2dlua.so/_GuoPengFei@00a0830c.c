
/* universe::network::GuoPengFei::~GuoPengFei() */

void __thiscall universe::network::GuoPengFei::~GuoPengFei(GuoPengFei *this)

{
  char *pcVar1;
  GuoPengFei *pGVar2;
  long *plVar3;
  code *pcVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
                    /* catch() { ... } // from try @ 00a082dc with catch @ 00a08324 */
  *(undefined ***)this = &PTR__GuoPengFei_016a1f20;
  pcVar1 = (char *)Translated::getInstance();
  Translated::log(pcVar1,"GuoPengFei ~TcpConnection %d start",(ulong)*(uint *)(this + 0x45c));
                    /* try { // try from 00a08344 to 00b0838b has its CatchHandler @ 00a08344
                       catch() { ... } // from try @ 00a08344 with catch @ 00a08344
                       catch() { ... } // from try @ 00a083b8 with catch @ 00a08344 */
  if (*(long *)(this + 0x2b0) != 0) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,"GuoPengFei~TcpConnection %d 1",(ulong)*(uint *)(this + 0x45c));
    **(undefined8 **)(this + 0x2b0) = 0;
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,"GuoPengFei~TcpConnection %d 2",(ulong)*(uint *)(this + 0x45c));
    *(undefined8 *)(this + 0x2b0) = 0;
    pcVar1 = (char *)Translated::getInstance();
                    /* try { // try from 00a0838c to 00b083b7 has its CatchHandler @ 00a08410 */
    Translated::log(pcVar1,"GuoPengFei~TcpConnection %d 3",(ulong)*(uint *)(this + 0x45c));
  }
  pcVar1 = (char *)Translated::getInstance();
  Translated::log(pcVar1,&DAT_012f88df,(ulong)*(uint *)(this + 0x45c));
  if (*(long *)(this + 0x2b8) != 0) {
    pcVar1 = (char *)Translated::getInstance();
                    /* try { // try from 00a083b8 to 00b0842b has its CatchHandler @ 00a08344 */
    Translated::log(pcVar1,0x12f88fd,(ulong)*(uint *)(this + 0x45c));
    **(undefined8 **)(this + 0x2b8) = 0;
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,"GuoPengFei~TcpConnection %d 6",(ulong)*(uint *)(this + 0x45c));
    *(undefined8 *)(this + 0x2b8) = 0;
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,"GuoPengFei~TcpConnection %d 7",(ulong)*(uint *)(this + 0x45c));
  }
  pcVar1 = (char *)Translated::getInstance();
  Translated::log(pcVar1,"GuoPengFei~TcpConnection %d 8",(ulong)*(uint *)(this + 0x45c));
                    /* catch() { ... } // from try @ 00a0838c with catch @ 00a08410 */
  cancelConnectTimer(this);
  pcVar1 = (char *)Translated::getInstance();
  Translated::log(pcVar1,&DAT_012f8975,(ulong)*(uint *)(this + 0x45c));
                    /* try { // try from 00a0842c to 00b0847b has its CatchHandler @ 00a0842c
                       catch() { ... } // from try @ 00a0842c with catch @ 00a0842c
                       catch() { ... } // from try @ 00a084b4 with catch @ 00a0842c
                       catch() { ... } // from try @ 00a084f8 with catch @ 00a0842c */
  stopHeartBeat(this);
  pcVar1 = (char *)Translated::getInstance();
  Translated::log(pcVar1,"GuoPengFei~TcpConnection %d 10",(ulong)*(uint *)(this + 0x45c));
  pcVar1 = (char *)Translated::getInstance();
  Translated::log(pcVar1,&DAT_012f89b2,(ulong)*(uint *)(this + 0x45c));
  closeServer(this);
  pcVar1 = (char *)Translated::getInstance();
  Translated::log(pcVar1,0x12f89d1,(ulong)*(uint *)(this + 0x45c));
  pGVar2 = *(GuoPengFei **)(this + 0x490);
                    /* try { // try from 00a0847c to 00b084b3 has its CatchHandler @ 00a08538 */
  if (this + 0x470 == pGVar2) {
    pcVar4 = *(code **)(*(long *)pGVar2 + 0x20);
LAB_00a0849c:
    (*pcVar4)();
  }
  else if (pGVar2 != (GuoPengFei *)0x0) {
    pcVar4 = *(code **)(*(long *)pGVar2 + 0x28);
    goto LAB_00a0849c;
  }
  puVar6 = *(void **)(this + 0x430);
  while (puVar6 != (void *)0x0) {
    pvVar5 = (void *)*puVar6;
    operator_delete(puVar6);
                    /* try { // try from 00a084b4 to 00b084e3 has its CatchHandler @ 00a0842c */
    puVar6 = pvVar5;
  }
  pvVar5 = *(void **)(this + 0x420);
  *(undefined8 *)(this + 0x420) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  if (((byte)this[0x3f8] & 1) == 0) {
    if (((byte)this[0x3e0] & 1) != 0) goto LAB_00a084f4;
LAB_00a084d8:
    puVar6 = *(undefined8 **)(this + 0x3c8);
  }
  else {
                    /* try { // try from 00a084e4 to 00b084f7 has its CatchHandler @ 00a08538 */
    operator_delete(*(void **)(this + 0x408));
    if (((byte)this[0x3e0] & 1) == 0) goto LAB_00a084d8;
LAB_00a084f4:
                    /* try { // try from 00a084f8 to 00b08553 has its CatchHandler @ 00a0842c */
    operator_delete(*(void **)(this + 0x3f0));
    puVar6 = *(undefined8 **)(this + 0x3c8);
  }
  while (puVar6 != (void *)0x0) {
    plVar3 = (long *)puVar6[8];
    pvVar5 = (void *)*puVar6;
    if (puVar6 + 4 == plVar3) {
      pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_00a08510:
      (*pcVar4)();
    }
    else {
                    /* catch() { ... } // from try @ 00a0847c with catch @ 00a08538
                       catch() { ... } // from try @ 00a084e4 with catch @ 00a08538 */
      if (plVar3 != (long *)0x0) {
        pcVar4 = *(code **)(*plVar3 + 0x28);
        goto LAB_00a08510;
      }
    }
    operator_delete(puVar6);
    puVar6 = pvVar5;
  }
  pvVar5 = *(void **)(this + 0x3b8);
  *(undefined8 *)(this + 0x3b8) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x3b0);
  *(undefined8 *)(this + 0x3b0) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x390);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x398) = pvVar5;
    operator_delete(pvVar5);
  }
  IncludeHistory::~IncludeHistory((IncludeHistory *)(this + 0x2c0));
  pGVar2 = *(GuoPengFei **)(this + 0xd0);
  if (this + 0xb0 == pGVar2) {
    pcVar4 = *(code **)(*(long *)pGVar2 + 0x20);
LAB_00a085a8:
    (*pcVar4)();
  }
  else if (pGVar2 != (GuoPengFei *)0x0) {
    pcVar4 = *(code **)(*(long *)pGVar2 + 0x28);
    goto LAB_00a085a8;
  }
  pGVar2 = *(GuoPengFei **)(this + 0xa0);
  if (this + 0x80 == pGVar2) {
    pcVar4 = *(code **)(*(long *)pGVar2 + 0x20);
LAB_00a085d4:
    (*pcVar4)();
  }
  else if (pGVar2 != (GuoPengFei *)0x0) {
    pcVar4 = *(code **)(*(long *)pGVar2 + 0x28);
    goto LAB_00a085d4;
  }
  pGVar2 = *(GuoPengFei **)(this + 0x70);
  if (this + 0x50 == pGVar2) {
    pcVar4 = *(code **)(*(long *)pGVar2 + 0x20);
LAB_00a08600:
    (*pcVar4)();
  }
  else if (pGVar2 != (GuoPengFei *)0x0) {
    pcVar4 = *(code **)(*(long *)pGVar2 + 0x28);
    goto LAB_00a08600;
  }
  pGVar2 = *(GuoPengFei **)(this + 0x40);
  if (this + 0x20 == pGVar2) {
    pcVar4 = *(code **)(*(long *)pGVar2 + 0x20);
  }
  else {
    if (pGVar2 == (GuoPengFei *)0x0) goto LAB_00a08630;
    pcVar4 = *(code **)(*(long *)pGVar2 + 0x28);
  }
  (*pcVar4)();
LAB_00a08630:
  plVar3 = *(long **)(this + 8);
  *(undefined ***)this = &PTR__Literally_016a0200;
  *(undefined8 *)(this + 8) = 0;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a0865c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))();
  return;
}

