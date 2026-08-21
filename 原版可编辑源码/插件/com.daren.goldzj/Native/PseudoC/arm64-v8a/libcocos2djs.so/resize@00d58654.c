
/* cocos2d::middleware::IOTypedArray::resize(unsigned long, bool) */

void __thiscall
cocos2d::middleware::IOTypedArray::resize(IOTypedArray *this,ulong param_1,bool param_2)

{
  long lVar1;
  TypedArrayPool *pTVar2;
  Object *this_00;
  Isolate *pIVar3;
  uchar *local_70;
  HandleScope aHStack_68 [24];
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = param_1;
  if (*(ulong *)(this + 0x10) < param_1) {
    if (this[0xb0] == (IOTypedArray)0x0) {
      pIVar3 = (Isolate *)v8::Isolate::GetCurrent();
      v8::HandleScope::HandleScope(aHStack_68,pIVar3);
      this_00 = (Object *)se::Object::createTypedArray(*(undefined4 *)(this + 0xa0),0,local_50);
      se::Object::root(this_00);
      v8::HandleScope::~HandleScope(aHStack_68);
    }
    else {
      if (TypedArrayPool::_instance == (TypedArrayPool *)0x0) {
        pTVar2 = operator_new(0x20);
        TypedArrayPool::TypedArrayPool(pTVar2);
        TypedArrayPool::_instance = pTVar2;
      }
      this_00 = (Object *)
                TypedArrayPool::pop(TypedArrayPool::_instance,*(undefined4 *)(this + 0xa0),param_1);
    }
    local_70 = (uchar *)0x0;
    pIVar3 = (Isolate *)v8::Isolate::GetCurrent();
    v8::HandleScope::HandleScope(aHStack_68,pIVar3);
    se::Object::getTypedArrayData(this_00,&local_70,&local_50);
    if (param_2) {
      memcpy(local_70,*(void **)(this + 8),*(size_t *)(this + 0x10));
    }
    if (this[0xb0] == (IOTypedArray)0x0) {
      se::Object::unroot(*(Object **)(this + 0xa8));
      se::RefCounter::decRef(*(RefCounter **)(this + 0xa8));
    }
    else {
      if (TypedArrayPool::_instance == (TypedArrayPool *)0x0) {
        pTVar2 = operator_new(0x20);
        TypedArrayPool::TypedArrayPool(pTVar2);
        TypedArrayPool::_instance = pTVar2;
      }
      TypedArrayPool::push
                (TypedArrayPool::_instance,*(undefined4 *)(this + 0xa0),*(undefined8 *)(this + 0x10)
                 ,*(undefined8 *)(this + 0xa8));
    }
    *(Object **)(this + 0xa8) = this_00;
    *(uchar **)(this + 8) = local_70;
    this[0x28] = (IOTypedArray)0x0;
    *(ulong *)(this + 0x10) = local_50;
    v8::HandleScope::~HandleScope(aHStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

