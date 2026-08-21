
/* se::internal::jsToSeValue(v8::Isolate*, v8::Local<v8::Value>, se::Value*) */

void se::internal::jsToSeValue(Isolate *param_1,Value *param_2,Value *param_3)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  Number *this;
  Boolean *this_00;
  long lVar4;
  RefCounter *this_01;
  ulong uVar5;
  size_t __n;
  void *pvVar6;
  double dVar7;
  ulong local_88;
  size_t local_80;
  void *local_78;
  HandleScope aHStack_70 [24];
  void *local_58;
  uint local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  v8::HandleScope::HandleScope(aHStack_70,param_1);
  uVar5 = *(ulong *)param_2;
  if (((uVar5 & 3) == 1) &&
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar5 - 1)) == 0x43)) {
    if ((*(uint *)(uVar5 + 0x17) & 0xfffffffe) == 10) {
      se::Value::setUndefined(param_3);
      goto LAB_0090db84;
    }
    if ((*(uint *)(uVar5 + 0x17) & 0xfffffffe) == 6) {
      se::Value::setNull(param_3);
      goto LAB_0090db84;
    }
  }
  uVar5 = v8::Value::IsNumber(param_2);
  if ((uVar5 & 1) != 0) {
    uVar3 = v8::Isolate::GetCurrentContext(param_1);
    this = (Number *)v8::Value::ToNumber(param_2,uVar3);
    if (this == (Number *)0x0) {
      se::Value::setUndefined(param_3);
    }
    else {
      dVar7 = (double)v8::Number::Value(this);
      se::Value::setNumber(param_3,dVar7);
    }
    goto LAB_0090db84;
  }
  uVar5 = *(ulong *)param_2;
  if (((uVar5 & 3) != 1) ||
     (0x3f < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar5 - 1)))) {
    uVar5 = v8::Value::IsBoolean(param_2);
    if ((uVar5 & 1) == 0) {
      uVar5 = v8::Value::IsObject(param_2);
      if ((uVar5 & 1) != 0) {
        uVar3 = v8::Isolate::GetCurrentContext(param_1);
        lVar4 = v8::Value::ToObject(param_2,uVar3);
        if (lVar4 == 0) {
          se::Value::setUndefined(param_3);
        }
        else {
          pvVar6 = (void *)getPrivate(param_1,lVar4);
          if ((pvVar6 == (void *)0x0) ||
             (this_01 = (RefCounter *)Object::getObjectWithPtr(pvVar6), this_01 == (RefCounter *)0x0
             )) {
            this_01 = (RefCounter *)Object::_createJSObject(0,lVar4);
          }
          se::Value::setObject(param_3,(Object *)this_01,true);
          RefCounter::decRef(this_01);
        }
      }
    }
    else {
      this_00 = (Boolean *)v8::Value::ToBoolean(param_2,param_1);
      if (this_00 == (Boolean *)0x0) {
        se::Value::setUndefined(param_3);
      }
      else {
        bVar2 = v8::Boolean::Value(this_00);
        se::Value::setBoolean(param_3,(bool)(bVar2 & 1));
      }
    }
    goto LAB_0090db84;
  }
  v8::String::Utf8Value::Utf8Value((Utf8Value *)&local_58,param_1,param_2);
  __n = (size_t)(int)local_50;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_88 = 0;
  if (0xffffffef < local_50) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (local_50 < 0x17) {
    pvVar6 = (void *)((ulong)&local_88 | 1);
    local_88 = (ulong)(byte)(local_50 << 1);
    if (local_50 != 0) goto LAB_0090db40;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar5);
    local_88 = uVar5 | 1;
    local_80 = __n;
    local_78 = pvVar6;
LAB_0090db40:
    memcpy(pvVar6,local_58,__n);
  }
  *(undefined1 *)((long)pvVar6 + __n) = 0;
  se::Value::setString(param_3,(basic_string *)&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  v8::String::Utf8Value::~Utf8Value((Utf8Value *)&local_58);
LAB_0090db84:
  v8::HandleScope::~HandleScope(aHStack_70);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

