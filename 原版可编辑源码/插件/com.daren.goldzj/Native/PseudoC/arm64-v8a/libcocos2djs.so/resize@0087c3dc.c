
/* cocos2d::ResizableBufferAdapter<cocos2d::Data>::resize(unsigned long) */

void __thiscall
cocos2d::ResizableBufferAdapter<cocos2d::Data>::resize
          (ResizableBufferAdapter<cocos2d::Data> *this,ulong param_1)

{
  ulong uVar1;
  void *__ptr;
  uchar *puVar2;
  
  uVar1 = Data::getSize(*(Data **)(this + 8));
  if (uVar1 != param_1) {
    __ptr = (void *)Data::takeBuffer(*(Data **)(this + 8),(long *)0x0);
    puVar2 = realloc(__ptr,param_1);
    if (puVar2 != (uchar *)0x0) {
      Data::fastSet(*(Data **)(this + 8),puVar2,param_1);
      return;
    }
  }
  return;
}

