
/* cocos2d::middleware::TypedArrayPool::pop(se::Object::TypedArrayType, unsigned long) */

Object * __thiscall
cocos2d::middleware::TypedArrayPool::pop(TypedArrayPool *this,ulong param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  Isolate *pIVar3;
  Object *this_00;
  undefined8 *puVar4;
  long lVar5;
  HandleScope aHStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = (long)((float)(int)((float)param_3 * 0.0009765625) * 1024.0);
  plVar2 = (long *)getObjPool(this,param_2,lVar5);
  if (plVar2[1] == *plVar2) {
    pIVar3 = (Isolate *)v8::Isolate::GetCurrent();
    v8::HandleScope::HandleScope(aHStack_50,pIVar3);
    this_00 = (Object *)se::Object::createTypedArray(param_2 & 0xffffffff,0,lVar5);
    se::Object::root(this_00);
    v8::HandleScope::~HandleScope(aHStack_50);
  }
  else {
    puVar4 = (undefined8 *)(plVar2[1] + -8);
    this_00 = (Object *)*puVar4;
    plVar2[1] = (long)puVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

