
void FUN_008f61f8(long param_1)

{
  __shared_weak_count *p_Var1;
  basic_string bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  Value *pVVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  Object *pOVar9;
  long lVar10;
  ulong uVar11;
  __shared_weak_count *p_Var12;
  int *piVar13;
  Object *local_d0;
  Object *local_c8;
  Object *local_c0;
  Value *local_b8;
  Value *local_b0;
  Value *local_a8;
  HandleScope aHStack_a0 [24];
  Object *local_88 [2];
  Data aDStack_78 [16];
  Value aVStack_68 [16];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pIVar8 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_a0,pIVar8);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  se::Value::Value(aVStack_68);
  if (*(char *)(param_1 + 8) == '\0') {
    lVar10 = param_1 + 0x31;
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      lVar10 = *(long *)(param_1 + 0x40);
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp, 913): initWithImageFile: %s failed!\n"
                        ,lVar10);
  }
  else {
    pOVar9 = (Object *)se::Object::createPlainObject();
    se::HandleObject::HandleObject((HandleObject *)&local_c0,pOVar9);
    cocos2d::Data::Data(aDStack_78);
    cocos2d::Data::fastSet
              (aDStack_78,*(uchar **)(*(uint **)(param_1 + 0x10) + 4),
               (ulong)**(uint **)(param_1 + 0x10));
    Data_to_seval(aDStack_78,aVStack_68);
    cocos2d::Data::takeBuffer(aDStack_78,(long *)0x0);
    se::Object::setProperty(local_c0,"data",aVStack_68);
    pOVar9 = local_c0;
    se::Value::Value((Value *)local_88,*(uint *)(*(long *)(param_1 + 0x10) + 4));
    se::Object::setProperty(pOVar9,"width",(Value *)local_88);
    se::Value::~Value((Value *)local_88);
    pOVar9 = local_c0;
    se::Value::Value((Value *)local_88,*(uint *)(*(long *)(param_1 + 0x10) + 8));
    se::Object::setProperty(pOVar9,"height",(Value *)local_88);
    se::Value::~Value((Value *)local_88);
    pOVar9 = local_c0;
    se::Value::Value((Value *)local_88,*(bool *)(*(long *)(param_1 + 0x10) + 0x27));
    se::Object::setProperty(pOVar9,"premultiplyAlpha",(Value *)local_88);
    se::Value::~Value((Value *)local_88);
    pOVar9 = local_c0;
    se::Value::Value((Value *)local_88,*(uchar *)(*(long *)(param_1 + 0x10) + 0x24));
    se::Object::setProperty(pOVar9,"bpp",(Value *)local_88);
    se::Value::~Value((Value *)local_88);
    pOVar9 = local_c0;
    se::Value::Value((Value *)local_88,*(bool *)(*(long *)(param_1 + 0x10) + 0x26));
    se::Object::setProperty(pOVar9,"hasAlpha",(Value *)local_88);
    se::Value::~Value((Value *)local_88);
    pOVar9 = local_c0;
    se::Value::Value((Value *)local_88,*(bool *)(*(long *)(param_1 + 0x10) + 0x28));
    se::Object::setProperty(pOVar9,"compressed",(Value *)local_88);
    se::Value::~Value((Value *)local_88);
    pOVar9 = local_c0;
    se::Value::Value((Value *)local_88,*(uchar *)(*(long *)(param_1 + 0x10) + 0x25));
    se::Object::setProperty(pOVar9,"numberOfMipmaps",(Value *)local_88);
    se::Value::~Value((Value *)local_88);
    lVar10 = *(long *)(param_1 + 0x10);
    if ((ulong)*(byte *)(lVar10 + 0x25) != 0) {
      pOVar9 = (Object *)se::Object::createArrayObject((ulong)*(byte *)(lVar10 + 0x25));
      se::HandleObject::HandleObject((HandleObject *)&local_c8,pOVar9);
      pOVar9 = local_c0;
      se::Value::Value((Value *)local_88,(HandleObject *)&local_c8,false);
      se::Object::setProperty(pOVar9,"mipmaps",(Value *)local_88);
      se::Value::~Value((Value *)local_88);
      if (*(char *)(*(long *)(param_1 + 0x10) + 0x25) != '\0') {
        uVar11 = 0;
        piVar13 = (int *)(*(long *)(param_1 + 0x20) + 0x3c);
        do {
          pOVar9 = (Object *)se::Object::createPlainObject();
          se::HandleObject::HandleObject((HandleObject *)&local_d0,pOVar9);
          pOVar9 = local_d0;
          se::Value::Value((Value *)local_88,piVar13[-1]);
          se::Object::setProperty(pOVar9,"offset",(Value *)local_88);
          se::Value::~Value((Value *)local_88);
          pOVar9 = local_d0;
          se::Value::Value((Value *)local_88,*piVar13);
          se::Object::setProperty(pOVar9,"length",(Value *)local_88);
          se::Value::~Value((Value *)local_88);
          pOVar9 = local_c8;
          se::Value::Value((Value *)local_88,(HandleObject *)&local_d0,false);
          se::Object::setArrayElement(pOVar9,(uint)uVar11,(Value *)local_88);
          se::Value::~Value((Value *)local_88);
          se::HandleObject::~HandleObject((HandleObject *)&local_d0);
          uVar11 = uVar11 + 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 < *(byte *)(*(long *)(param_1 + 0x10) + 0x25));
      }
      se::HandleObject::~HandleObject((HandleObject *)&local_c8);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    pOVar9 = local_c0;
    se::Value::Value((Value *)local_88,*(uint *)(lVar10 + 0x18));
    se::Object::setProperty(pOVar9,"glFormat",(Value *)local_88);
    se::Value::~Value((Value *)local_88);
    pOVar9 = local_c0;
    se::Value::Value((Value *)local_88,*(uint *)(*(long *)(param_1 + 0x10) + 0x1c));
    se::Object::setProperty(pOVar9,"glInternalFormat",(Value *)local_88);
    se::Value::~Value((Value *)local_88);
    se::Value::Value((Value *)local_88,*(uint *)(*(long *)(param_1 + 0x10) + 0x20));
    se::Object::setProperty(local_c0,"glType",(Value *)local_88);
    se::Value::~Value((Value *)local_88);
    se::Value::Value((Value *)local_88,(HandleObject *)&local_c0,false);
    if (local_b0 < local_a8) {
      se::Value::Value(local_b0,(Value *)local_88);
      local_b0 = local_b0 + 0x10;
    }
    else {
      std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
      __push_back_slow_path<se::Value>
                ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,(Value *)local_88)
      ;
    }
    se::Value::~Value((Value *)local_88);
    p_Var12 = *(__shared_weak_count **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (p_Var12 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var12 + 8;
      do {
        lVar10 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)p_Var12 + 0x10))(p_Var12);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var12);
      }
    }
    cocos2d::Data::~Data(aDStack_78);
    se::HandleObject::~HandleObject((HandleObject *)&local_c0);
  }
  bVar2 = *(basic_string *)(param_1 + 0x48);
  uVar11 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar11 = *(ulong *)(param_1 + 0x50);
  }
  if (uVar11 != 0) {
    pOVar9 = (Object *)se::Object::createPlainObject();
    se::HandleObject::HandleObject((HandleObject *)local_88,pOVar9);
    se::Value::Value((Value *)aDStack_78,(basic_string *)(param_1 + 0x48));
    se::Object::setProperty(local_88[0],"errorMsg",(Value *)aDStack_78);
    se::Value::~Value((Value *)aDStack_78);
    se::Value::Value((Value *)aDStack_78,(HandleObject *)local_88,false);
    if (local_b0 < local_a8) {
      se::Value::Value(local_b0,(Value *)aDStack_78);
      local_b0 = local_b0 + 0x10;
    }
    else {
      std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
      __push_back_slow_path<se::Value>
                ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,
                 (Value *)aDStack_78);
    }
    se::Value::~Value((Value *)aDStack_78);
    se::HandleObject::~HandleObject((HandleObject *)local_88);
  }
  pOVar9 = (Object *)se::Value::toObject(*(Value **)(param_1 + 0x60));
  se::Object::call(pOVar9,(vector *)&local_b8,(Object *)0x0,(Value *)0x0);
  p_Var12 = *(__shared_weak_count **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (p_Var12 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var12 + 8;
    do {
      lVar10 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*(long *)p_Var12 + 0x10))(p_Var12);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var12);
    }
  }
  se::Value::~Value(aVStack_68);
  pVVar7 = local_b8;
  pVVar6 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar6 != pVVar7) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_b0 = pVVar7;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

