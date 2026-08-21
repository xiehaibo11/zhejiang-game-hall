
/* cocos2d::ResizableBufferAdapter<cocos2d::Data>::resize(unsigned long) */

void __thiscall
cocos2d::ResizableBufferAdapter<cocos2d::Data>::resize
          (ResizableBufferAdapter<cocos2d::Data> *this,ulong param_1)

{
  ulong uVar1;
  void *__ptr;
  uchar *puVar2;
  
                    /* try { // try from 00aa2b64 to 00ba2bcb has its CatchHandler @ 00aa2810 */
                    /* catch() { ... } // from try @ 00aa298c with catch @ 00aa2b78
                       catch() { ... } // from try @ 00aa2b5c with catch @ 00aa2b78 */
                    /* catch() { ... } // from try @ 00aa2968 with catch @ 00aa2b7c */
  uVar1 = Data::getSize(*(Data **)(this + 8));
                    /* catch() { ... } // from try @ 00aa294c with catch @ 00aa2b80 */
  if (uVar1 != param_1) {
    __ptr = (void *)Data::getBytes(*(Data **)(this + 8));
    puVar2 = realloc(__ptr,param_1);
    if (puVar2 != (uchar *)0x0) {
                    /* catch() { ... } // from try @ 00aa2928 with catch @ 00aa2bb0 */
      Data::fastSet(*(Data **)(this + 8),puVar2,param_1);
      return;
    }
  }
  return;
}

