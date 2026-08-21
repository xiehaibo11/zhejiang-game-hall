
/* v8::internal::JsonStringifier::StackPush(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::JsonStringifier::StackPush(JsonStringifier *this,int *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_40;
  int *local_38;
  
  lVar6 = *(long *)this;
  local_40 = param_3;
  local_38 = param_2;
  uVar1 = GetCurrentStackPosition();
  if (uVar1 < *(ulong *)(lVar6 + 0x58)) {
    Isolate::StackOverflow(*(Isolate **)this);
LAB_0104c128:
    uVar2 = 2;
  }
  else {
    lVar4 = *(long *)(this + 0x58);
    puVar3 = *(undefined8 **)(this + 0x60);
    lVar6 = (long)puVar3 - lVar4;
    if (lVar6 != 0) {
      uVar1 = 0;
      puVar5 = (undefined8 *)(lVar4 + 8);
      do {
        if (*(int *)*puVar5 == *param_2) {
          uVar2 = ConstructCircularStructureErrorMessage(this,param_3);
          puVar3 = (undefined8 *)Factory::NewTypeError(*(Factory **)this,0x22,uVar2,0,0);
          Isolate::Throw(*(Isolate **)this,*puVar3,0);
          goto LAB_0104c128;
        }
        uVar1 = uVar1 + 1;
        puVar5 = puVar5 + 2;
      } while (uVar1 < (ulong)(lVar6 >> 4));
    }
    if (puVar3 < *(undefined8 **)(this + 0x68)) {
      *puVar3 = param_3;
      puVar3[1] = local_38;
      *(long *)(this + 0x60) = *(long *)(this + 0x60) + 0x10;
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::Handle<v8::internal::Object>,v8::internal::Handle<v8::internal::Object>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::Handle<v8::internal::Object>,v8::internal::Handle<v8::internal::Object>>>>
      ::
      __emplace_back_slow_path<v8::internal::Handle<v8::internal::Object>&,v8::internal::Handle<v8::internal::Object>&>
                ((vector<std::__ndk1::pair<v8::internal::Handle<v8::internal::Object>,v8::internal::Handle<v8::internal::Object>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::Handle<v8::internal::Object>,v8::internal::Handle<v8::internal::Object>>>>
                  *)(this + 0x58),(Handle *)&local_40,(Handle *)&local_38);
    }
    uVar2 = 1;
  }
  return uVar2;
}

