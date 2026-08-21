
/* cocos2d::middleware::IOTypedArray::~IOTypedArray() */

void __thiscall cocos2d::middleware::IOTypedArray::~IOTypedArray(IOTypedArray *this)

{
  TypedArrayPool *this_00;
  IOTypedArray *pIVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined ***)this = &PTR__IOTypedArray_01c91cc0;
  if (this[0xb0] == (IOTypedArray)0x0) {
    se::Object::unroot(*(Object **)(this + 0xa8));
    se::RefCounter::decRef(*(RefCounter **)(this + 0xa8));
  }
  else {
    if (TypedArrayPool::_instance == (TypedArrayPool *)0x0) {
      this_00 = operator_new(0x20);
      TypedArrayPool::TypedArrayPool(this_00);
      TypedArrayPool::_instance = this_00;
    }
    TypedArrayPool::push
              (TypedArrayPool::_instance,*(undefined4 *)(this + 0xa0),*(undefined8 *)(this + 0x10),
               *(undefined8 *)(this + 0xa8));
  }
  *(undefined8 *)(this + 0xa8) = 0;
  pIVar1 = *(IOTypedArray **)(this + 0x90);
  *(undefined ***)this = &PTR__IOBuffer_01c8e178;
  *(undefined8 *)(this + 8) = 0;
  if (this + 0x70 == pIVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pIVar1 + 0x20);
  }
  else {
    if (pIVar1 == (IOTypedArray *)0x0) goto LAB_00d585e8;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pIVar1 + 0x28);
  }
  (*UNRECOVERED_JUMPTABLE)();
LAB_00d585e8:
  pIVar1 = *(IOTypedArray **)(this + 0x60);
  if (this + 0x40 == pIVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pIVar1 + 0x20);
  }
  else {
    if (pIVar1 == (IOTypedArray *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pIVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00d5861c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

