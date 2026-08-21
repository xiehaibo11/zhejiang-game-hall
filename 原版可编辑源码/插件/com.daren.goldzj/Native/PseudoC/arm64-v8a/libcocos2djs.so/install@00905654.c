
/* se::Class::install() */

undefined8 __thiscall se::Class::install(Class *this)

{
  char cVar1;
  FunctionTemplate *pFVar2;
  long lVar3;
  undefined8 uVar4;
  Object *pOVar5;
  Object *pOVar6;
  undefined8 uVar7;
  Class *pCVar8;
  Object *pOVar9;
  
  pOVar9 = *(Object **)(this + 0x20);
  if (pOVar9 != (Object *)0x0) {
    if (*(ulong **)(this + 0x38) == (ulong *)0x0) {
      pFVar2 = (FunctionTemplate *)0x0;
    }
    else {
      pFVar2 = (FunctionTemplate *)
               v8::HandleScope::CreateHandle(DAT_01d37198,**(ulong **)(this + 0x38));
      pOVar9 = *(Object **)(this + 0x20);
    }
    lVar3 = Object::_getClass(pOVar9);
    if (*(ulong **)(lVar3 + 0x38) == (ulong *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = v8::HandleScope::CreateHandle(DAT_01d37198,**(ulong **)(lVar3 + 0x38));
    }
    v8::FunctionTemplate::Inherit(pFVar2,uVar4);
  }
  uVar4 = v8::Isolate::GetCurrentContext((Isolate *)DAT_01d37198);
  if (*(ulong **)(this + 0x38) == (ulong *)0x0) {
    pFVar2 = (FunctionTemplate *)0x0;
  }
  else {
    pFVar2 = (FunctionTemplate *)
             v8::HandleScope::CreateHandle(DAT_01d37198,**(ulong **)(this + 0x38));
  }
  pOVar5 = (Object *)v8::FunctionTemplate::GetFunction(pFVar2,uVar4);
  uVar7 = 0;
  if (pOVar5 != (Object *)0x0) {
    if (((byte)*this & 1) == 0) {
      pCVar8 = this + 1;
    }
    else {
      pCVar8 = *(Class **)(this + 0x10);
    }
    lVar3 = v8::String::NewFromUtf8(DAT_01d37198,pCVar8,0,0xffffffff);
    uVar7 = 0;
    if (lVar3 != 0) {
      pOVar6 = (Object *)Object::_getJSObject(*(Object **)(this + 0x18));
      cVar1 = v8::Object::Set(pOVar6,uVar4,lVar3,pOVar5);
      if (cVar1 == '\0') {
        uVar7 = 0;
      }
      else {
        lVar3 = v8::String::NewFromUtf8(DAT_01d37198,"prototype",0,0xffffffff);
        uVar7 = 0;
        if ((lVar3 != 0) && (lVar3 = v8::Object::Get(pOVar5,uVar4,lVar3), uVar7 = 0, lVar3 != 0)) {
          if (this[0x48] != (Class)0x0) {
            pOVar9 = (Object *)Object::_createJSObject(this,lVar3);
            *(Object **)(this + 0x28) = pOVar9;
            Object::root(pOVar9);
          }
          uVar7 = 1;
        }
      }
    }
  }
  return uVar7;
}

