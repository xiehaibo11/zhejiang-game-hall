
/* cocos2d::middleware::IOTypedArray::IOTypedArray(se::Object::TypedArrayType, unsigned long, bool)
    */

void __thiscall
cocos2d::middleware::IOTypedArray::IOTypedArray
          (IOTypedArray *this,ulong param_2,undefined8 param_3,byte param_4)

{
  long lVar1;
  TypedArrayPool *this_00;
  undefined8 uVar2;
  Object *this_01;
  Isolate *pIVar3;
  HandleScope aHStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__IOTypedArray_01c91cc0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  this[0x28] = (IOTypedArray)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(int *)(this + 0xa0) = (int)param_2;
  *(undefined8 *)(this + 0x10) = param_3;
  this[0xb0] = (IOTypedArray)(param_4 & 1);
  if ((param_4 & 1) == 0) {
    pIVar3 = (Isolate *)v8::Isolate::GetCurrent();
    v8::HandleScope::HandleScope(aHStack_60,pIVar3);
    this_01 = (Object *)
              se::Object::createTypedArray
                        (*(undefined4 *)(this + 0xa0),0,*(undefined8 *)(this + 0x10));
    *(Object **)(this + 0xa8) = this_01;
    se::Object::root(this_01);
    v8::HandleScope::~HandleScope(aHStack_60);
  }
  else {
    if (TypedArrayPool::_instance == (TypedArrayPool *)0x0) {
      this_00 = operator_new(0x20);
      TypedArrayPool::TypedArrayPool(this_00);
      param_2 = (ulong)*(uint *)(this + 0xa0);
      param_3 = *(undefined8 *)(this + 0x10);
      TypedArrayPool::_instance = this_00;
    }
    uVar2 = TypedArrayPool::pop(TypedArrayPool::_instance,param_2,param_3);
    *(undefined8 *)(this + 0xa8) = uVar2;
  }
  pIVar3 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_60,pIVar3);
  se::Object::getTypedArrayData
            (*(Object **)(this + 0xa8),(uchar **)(this + 8),(ulong *)(this + 0x10));
  v8::HandleScope::~HandleScope(aHStack_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

