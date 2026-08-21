
/* v8::internal::Factory::NewError(v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::MessageTemplate, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>) */

void __thiscall
v8::internal::Factory::NewError
          (Factory *this,undefined8 param_2,ulong param_3,Factory *param_4,Factory *param_5,
          Factory *param_6)

{
  Factory *pFVar1;
  Factory *pFVar2;
  Factory *pFVar3;
  undefined8 uVar4;
  long lVar5;
  char *__s;
  ulong *puVar6;
  ulong uVar7;
  char *local_50;
  size_t sStack_48;
  
  uVar4 = *(undefined8 *)(this + 0x95a0);
  lVar5 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  if (*(int *)(*(long *)(this + 0x9508) + 8) == 0) {
    pFVar1 = this + 0xa0;
    pFVar2 = pFVar1;
    if (param_4 != (Factory *)0x0) {
      pFVar2 = param_4;
    }
    pFVar3 = pFVar1;
    if (param_5 != (Factory *)0x0) {
      pFVar3 = param_5;
    }
    if (param_6 != (Factory *)0x0) {
      pFVar1 = param_6;
    }
    puVar6 = (ulong *)ErrorUtils::MakeGenericError(this,param_2,param_3,pFVar2,pFVar3,pFVar1,2);
    if (puVar6 == (ulong *)0x0) {
      uVar7 = *(ulong *)(this + 0x2bd8);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(this + 0x95a0);
        if (puVar6 == *(ulong **)(this + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
        }
        *(ulong **)(this + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar7;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
      }
      *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0xa8);
    }
  }
  else {
    __s = (char *)MessageFormatter::TemplateString(param_3 & 0xffffffff);
    sStack_48 = strlen(__s);
    local_50 = __s;
    puVar6 = (ulong *)NewStringFromOneByte(this,&local_50,0);
    if (puVar6 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  uVar7 = *puVar6;
  *(undefined8 *)(this + 0x95a0) = uVar4;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
  if (*(long *)(this + 0x95a8) != lVar5) {
    *(long *)(this + 0x95a8) = lVar5;
    HandleScope::DeleteExtensions((Isolate *)this);
  }
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(this + 0x95a0);
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar7;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
  }
  return;
}

