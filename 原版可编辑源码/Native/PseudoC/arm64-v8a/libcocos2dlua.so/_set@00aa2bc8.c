
/* cocos2d::ResizableBufferAdapter<cocos2d::Data>::_set(void*, unsigned long) */

void __thiscall
cocos2d::ResizableBufferAdapter<cocos2d::Data>::_set
          (ResizableBufferAdapter<cocos2d::Data> *this,void *param_1,ulong param_2)

{
                    /* try { // try from 00aa2bcc to 00ba2c17 has its CatchHandler @ 00aa2bcc
                       catch() { ... } // from try @ 00aa2bcc with catch @ 00aa2bcc
                       catch() { ... } // from try @ 00aa2c1c with catch @ 00aa2bcc */
  Data::clear(*(Data **)(this + 8));
  Data::fastSet(*(Data **)(this + 8),param_1,param_2);
  return;
}

