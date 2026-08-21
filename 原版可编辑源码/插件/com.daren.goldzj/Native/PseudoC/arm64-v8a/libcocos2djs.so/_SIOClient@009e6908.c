
/* cocos2d::network::SIOClient::~SIOClient() */

void __thiscall cocos2d::network::SIOClient::~SIOClient(SIOClient *this)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__SIOClient_01c6beb8;
  puVar1 = *(void **)(this + 0x68);
  do {
    if (puVar1 == (void *)0x0) {
      pvVar4 = *(void **)(this + 0x58);
                    /* try { // try from 009e6988 to 00ae6a3f has its CatchHandler @ 009e6700 */
      *(undefined8 *)(this + 0x58) = 0;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      if (((byte)this[0x28] & 1) != 0) {
                    /* catch() { ... } // from try @ 009e6804 with catch @ 009e699c
                       catch() { ... } // from try @ 009e6944 with catch @ 009e699c */
        operator_delete(*(void **)(this + 0x38));
      }
      if (((byte)this[0x10] & 1) != 0) {
        operator_delete(*(void **)(this + 0x20));
      }
                    /* catch() { ... } // from try @ 009e67c0 with catch @ 009e69b4 */
                    /* catch() { ... } // from try @ 009e676c with catch @ 009e69b8 */
                    /* catch() { ... } // from try @ 009e6764 with catch @ 009e69c0 */
      Ref::~Ref((Ref *)this);
      return;
    }
    plVar2 = (long *)puVar1[10];
    pvVar4 = (void *)*puVar1;
                    /* try { // try from 009e6944 to 00ae6987 has its CatchHandler @ 009e699c */
    if (puVar1 + 6 == plVar2) {
      pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_009e6960:
      (*pcVar3)();
    }
    else if (plVar2 != (long *)0x0) {
      pcVar3 = *(code **)(*plVar2 + 0x28);
      goto LAB_009e6960;
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar4;
  } while( true );
}

