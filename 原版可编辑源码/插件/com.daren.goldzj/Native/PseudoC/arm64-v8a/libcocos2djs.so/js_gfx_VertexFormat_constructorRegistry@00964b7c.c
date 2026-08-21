
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* js_gfx_VertexFormat_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_VertexFormat_constructorRegistry(FunctionCallbackInfo *param_1)

{
  Value *pVVar1;
  long lVar2;
  ulong *puVar3;
  Value *pVVar4;
  bool bVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  Object *this;
  undefined8 *puVar10;
  Object *pOVar11;
  ulong uVar12;
  Object *pOVar13;
  ulong *puVar14;
  void *__dest;
  VertexFormat *this_00;
  void *__src;
  ulong *puVar15;
  ulong uVar16;
  Value *local_158;
  Value *local_150;
  undefined8 local_148;
  HandleScope aHStack_140 [24];
  bool local_128 [4];
  uint local_124;
  ulong *local_120;
  ulong *local_118;
  ulong *puStack_110;
  State aSStack_108 [40];
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  byte local_c2;
  Value aVStack_c0 [16];
  Value aVStack_b0 [16];
  Value aVStack_a0 [16];
  Value aVStack_90 [16];
  Value aVStack_80 [8];
  char local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_140,*(Isolate **)(*(long *)param_1 + 8));
  local_158 = (Value *)0x0;
  local_150 = (Value *)0x0;
  local_148 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_158,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_158);
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_cocos2d_renderer_VertexFormat_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_renderer_VertexFormat_finalizeRegistry);
  se::State::State(aSStack_108,this,(vector *)&local_158);
  puVar10 = (undefined8 *)se::State::args(aSStack_108);
  pVVar1 = (Value *)*puVar10;
  if (puVar10[1] - (long)pVVar1 == 0x10) {
    local_118 = (ulong *)0x0;
    puStack_110 = (ulong *)0x0;
    local_120 = (ulong *)0x0;
    if (pVVar1[8] == (Value)0x5) {
      pOVar11 = (Object *)se::Value::toObject(pVVar1);
      uVar12 = se::Object::isArray(pOVar11);
      if ((uVar12 & 1) != 0) {
        pOVar11 = (Object *)se::Value::toObject(pVVar1);
        local_124 = 0;
        uVar7 = se::Object::getArrayLength(pOVar11,&local_124);
        if (local_124 != 0 && ((uVar7 ^ 0xffffffff) & 1) == 0) {
          se::Value::Value(aVStack_80);
          se::Value::Value(aVStack_90);
          se::Value::Value(aVStack_a0);
          se::Value::Value(aVStack_b0);
          se::Value::Value(aVStack_c0);
          local_128[0] = false;
          if (local_124 != 0) {
            uVar7 = 0;
            do {
              uVar8 = se::Object::getArrayElement(pOVar11,uVar7,aVStack_80);
              if (local_78 == '\x05' && ((uVar8 ^ 0xffffffff) & 1) == 0) {
                pOVar13 = (Object *)se::Value::toObject(aVStack_80);
                se::Object::getProperty(pOVar13,"name",aVStack_90);
                pOVar13 = (Object *)se::Value::toObject(aVStack_80);
                se::Object::getProperty(pOVar13,"type",aVStack_a0);
                pOVar13 = (Object *)se::Value::toObject(aVStack_80);
                se::Object::getProperty(pOVar13,"num",aVStack_b0);
                pOVar13 = (Object *)se::Value::toObject(aVStack_80);
                uVar12 = se::Object::getProperty(pOVar13,"normalize",aVStack_c0);
                if ((uVar12 & 1) != 0) {
                  seval_to_boolean(aVStack_c0,local_128);
                }
                puVar14 = (ulong *)se::Value::toString(aVStack_90);
                uVar6 = se::Value::toUint16(aVStack_a0);
                uVar9 = se::Value::toUint32(aVStack_b0);
                bVar5 = local_128[0];
                uStack_d8 = 0;
                local_d0 = (void *)0x0;
                local_e0 = 0;
                if ((*puVar14 & 1) == 0) {
                  local_d0 = (void *)puVar14[2];
                  uStack_d8 = puVar14[1];
                  local_e0 = *puVar14;
                }
                else {
                  uVar12 = puVar14[1];
                  if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  __src = (void *)puVar14[2];
                  if (uVar12 < 0x17) {
                    local_e0 = (ulong)(byte)((int)uVar12 << 1);
                    __dest = (void *)((ulong)&local_e0 | 1);
                    if (uVar12 != 0) goto LAB_00964e20;
                  }
                  else {
                    uVar16 = uVar12 + 0x10 & 0xfffffffffffffff0;
                    __dest = operator_new(uVar16);
                    local_e0 = uVar16 | 1;
                    uStack_d8 = uVar12;
                    local_d0 = __dest;
LAB_00964e20:
                    memcpy(__dest,__src,uVar12);
                  }
                  *(undefined1 *)((long)__dest + uVar12) = 0;
                }
                local_c2 = bVar5;
                local_c8 = uVar9;
                local_c4 = uVar6;
                if (local_118 < puStack_110) {
                  local_118[2] = (ulong)local_d0;
                  local_118[1] = uStack_d8;
                  *local_118 = local_e0;
                  uStack_d8 = 0;
                  local_d0 = (void *)0x0;
                  local_e0 = 0;
                  *(bool *)((long)local_118 + 0x1e) = bVar5;
                  *(undefined2 *)((long)local_118 + 0x1c) = uVar6;
                  *(undefined4 *)(local_118 + 3) = uVar9;
                  local_118 = local_118 + 4;
                }
                else {
                  std::__ndk1::
                  vector<cocos2d::renderer::VertexFormat::Info,std::__ndk1::allocator<cocos2d::renderer::VertexFormat::Info>>
                  ::__push_back_slow_path<cocos2d::renderer::VertexFormat::Info>
                            ((vector<cocos2d::renderer::VertexFormat::Info,std::__ndk1::allocator<cocos2d::renderer::VertexFormat::Info>>
                              *)&local_120,(Info *)&local_e0);
                  if ((local_e0 & 1) != 0) {
                    operator_delete(local_d0);
                  }
                }
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < local_124);
          }
          se::Value::~Value(aVStack_c0);
          se::Value::~Value(aVStack_b0);
          se::Value::~Value(aVStack_a0);
          se::Value::~Value(aVStack_90);
          se::Value::~Value(aVStack_80);
        }
      }
    }
    this_00 = operator_new(0x58);
    cocos2d::renderer::VertexFormat::VertexFormat(this_00,(vector *)&local_120);
    puVar14 = local_120;
    puVar15 = local_118;
    if (local_120 != (ulong *)0x0) {
      while (puVar3 = puVar15, puVar3 != puVar14) {
        puVar15 = puVar3 + -4;
        if ((*puVar15 & 1) != 0) {
          operator_delete((void *)puVar3[-2]);
        }
      }
      local_118 = puVar14;
      operator_delete(local_120);
    }
    pOVar11 = (Object *)se::State::thisObject(aSStack_108);
    se::Object::setPrivateData(pOVar11,this_00);
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp, 866): wrong number of arguments: %d\n"
                        ,(ulong)(puVar10[1] - (long)pVVar1) >> 4);
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_gfx_VertexFormat_constructor",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                        ,0x365);
  }
  se::Value::Value((Value *)&local_e0);
  uVar12 = se::Object::getProperty(this,"_ctor",(Value *)&local_e0);
  if ((uVar12 & 1) != 0) {
    pOVar11 = (Object *)se::Value::toObject((Value *)&local_e0);
    se::Object::call(pOVar11,(vector *)&local_158,this,(Value *)0x0);
  }
  se::Value::~Value((Value *)&local_e0);
  se::State::~State(aSStack_108);
  pVVar4 = local_158;
  pVVar1 = local_150;
  if (local_158 != (Value *)0x0) {
    while (pVVar1 != pVVar4) {
      se::Value::~Value(pVVar1 + -0x10);
      pVVar1 = pVVar1 + -0x10;
    }
    local_150 = pVVar4;
    operator_delete(local_158);
  }
  v8::HandleScope::~HandleScope(aHStack_140);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

