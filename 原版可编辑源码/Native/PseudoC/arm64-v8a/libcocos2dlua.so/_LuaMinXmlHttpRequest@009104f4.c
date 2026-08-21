
/* WARNING: Type propagation algorithm not settling */
/* LuaMinXmlHttpRequest::~LuaMinXmlHttpRequest() */

void __thiscall LuaMinXmlHttpRequest::~LuaMinXmlHttpRequest(LuaMinXmlHttpRequest *this)

{
  LuaMinXmlHttpRequest *pLVar1;
  LuaMinXmlHttpRequest *pLVar2;
  LuaMinXmlHttpRequest LVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  pLVar1 = this + 0xd0;
                    /* try { // try from 00910520 to 00a10537 has its CatchHandler @ 0091070c */
  *(undefined ***)this = &PTR__LuaMinXmlHttpRequest_0169c2d8;
  if (*(long *)(this + 0xe8) != 0) {
    puVar4 = *(void **)(this + 0xe0);
    while (puVar4 != (void *)0x0) {
                    /* try { // try from 00910544 to 00a10557 has its CatchHandler @ 009106a0 */
      pvVar5 = (void *)*puVar4;
      if ((*(byte *)(puVar4 + 5) & 1) != 0) {
        operator_delete((void *)puVar4[7]);
      }
      if ((*(byte *)(puVar4 + 2) & 1) != 0) {
        operator_delete((void *)puVar4[4]);
      }
      operator_delete(puVar4);
      puVar4 = pvVar5;
    }
    lVar6 = *(long *)(this + 0xd8);
    *(undefined8 *)(this + 0xe0) = 0;
                    /* try { // try from 00910574 to 00a1057b has its CatchHandler @ 00910680 */
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
                    /* try { // try from 0091057c to 00a1062b has its CatchHandler @ 00910460 */
        *(undefined8 *)(*(long *)pLVar1 + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    *(undefined8 *)(this + 0xe8) = 0;
  }
  pLVar2 = this + 0xf8;
  if (*(long *)(this + 0x110) != 0) {
    puVar4 = *(void **)(this + 0x108);
    while (puVar4 != (void *)0x0) {
      pvVar5 = (void *)*puVar4;
      if ((*(byte *)(puVar4 + 5) & 1) != 0) {
        operator_delete((void *)puVar4[7]);
      }
      if ((*(byte *)(puVar4 + 2) & 1) != 0) {
        operator_delete((void *)puVar4[4]);
      }
      operator_delete(puVar4);
      puVar4 = pvVar5;
    }
    lVar6 = *(long *)(this + 0x100);
    *(undefined8 *)(this + 0x108) = 0;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        *(undefined8 *)(*(long *)pLVar2 + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    *(undefined8 *)(this + 0x110) = 0;
  }
  if (*(Ref **)(this + 0xc0) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0xc0));
    *(undefined8 *)(this + 0xc0) = 0;
  }
  puVar4 = *(void **)(this + 0x108);
  while (puVar4 != (void *)0x0) {
                    /* try { // try from 00910638 to 00a1073b has its CatchHandler @ 00910460 */
    pvVar5 = (void *)*puVar4;
    if ((*(byte *)(puVar4 + 5) & 1) != 0) {
      operator_delete((void *)puVar4[7]);
    }
    if ((*(byte *)(puVar4 + 2) & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
                    /* try { // try from 0091062c to 00a10637 has its CatchHandler @ 00910678 */
    operator_delete(puVar4);
    puVar4 = pvVar5;
  }
  pvVar5 = *(void **)pLVar2;
  *(undefined8 *)pLVar2 = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  puVar4 = *(void **)(this + 0xe0);
  while (puVar4 != (void *)0x0) {
    pvVar5 = (void *)*puVar4;
    if ((*(byte *)(puVar4 + 5) & 1) != 0) {
      operator_delete((void *)puVar4[7]);
    }
                    /* catch() { ... } // from try @ 00910544 with catch @ 009106a0 */
                    /* catch() { ... } // from try @ 009104e8 with catch @ 009106a4 */
    if ((*(byte *)(puVar4 + 2) & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
                    /* catch() { ... } // from try @ 00910574 with catch @ 00910680 */
    operator_delete(puVar4);
    puVar4 = pvVar5;
  }
  pvVar5 = *(void **)pLVar1;
  *(undefined8 *)pLVar1 = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  if (((byte)this[0x98] & 1) == 0) {
    LVar3 = this[0x70];
  }
  else {
                    /* catch() { ... } // from try @ 00910520 with catch @ 0091070c */
    operator_delete(*(void **)(this + 0xa8));
    LVar3 = this[0x70];
  }
  if (((byte)LVar3 & 1) == 0) {
    LVar3 = this[0x58];
  }
  else {
                    /* catch() { ... } // from try @ 009104bc with catch @ 00910720 */
    operator_delete(*(void **)(this + 0x80));
    LVar3 = this[0x58];
  }
  if (((byte)LVar3 & 1) == 0) {
    LVar3 = this[0x40];
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    LVar3 = this[0x40];
  }
  if (((byte)LVar3 & 1) == 0) {
    LVar3 = this[0x28];
  }
  else {
                    /* try { // try from 0091073c to 00a10793 has its CatchHandler @ 0091073c
                       catch() { ... } // from try @ 0091073c with catch @ 0091073c
                       catch() { ... } // from try @ 009107d4 with catch @ 0091073c
                       catch() { ... } // from try @ 00910818 with catch @ 0091073c */
    operator_delete(*(void **)(this + 0x50));
    LVar3 = this[0x28];
  }
  if (((byte)LVar3 & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

