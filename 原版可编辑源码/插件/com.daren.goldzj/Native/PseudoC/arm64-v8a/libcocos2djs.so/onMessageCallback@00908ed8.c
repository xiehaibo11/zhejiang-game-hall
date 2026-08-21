
/* WARNING: Type propagation algorithm not settling */
/* se::ScriptEngine::onMessageCallback(v8::Local<v8::Message>, v8::Local<v8::Value>) */

void se::ScriptEngine::onMessageCallback(Message *param_1)

{
  Value *pVVar1;
  void *pvVar2;
  long lVar3;
  char *pcVar4;
  Value *pVVar5;
  int iVar6;
  ScriptEngine *pSVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  Object *pOVar15;
  basic_string *pbVar16;
  byte *pbVar17;
  byte local_188 [8];
  ulong local_180;
  char *local_178;
  Value *local_170;
  Value *pVStack_168;
  Value *local_160;
  ulong local_150;
  ulong uStack_148;
  void *local_140;
  ulong local_130;
  ulong uStack_128;
  void *local_120;
  ulong local_110;
  basic_string *pbStack_108;
  Value *local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  void *local_b8;
  ulong local_b0;
  char *local_a8;
  byte *local_a0;
  char local_98;
  void *local_90;
  Value aVStack_88 [16];
  Value aVStack_78 [16];
  Value aVStack_68 [16];
  Value aVStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (DAT_01d37220 == (ScriptEngine *)0x0) {
    pSVar7 = operator_new(0x210);
    ScriptEngine(pSVar7);
    DAT_01d37220 = pSVar7;
  }
  pSVar7 = DAT_01d37220;
  uVar8 = v8::Message::Get(param_1);
  se::Value::Value(aVStack_58);
  uVar9 = v8::Isolate::GetCurrent();
  internal::jsToSeValue(uVar9,uVar8,aVStack_58);
  v8::Message::GetScriptOrigin();
  se::Value::Value(aVStack_68);
  uVar8 = v8::Isolate::GetCurrent();
  internal::jsToSeValue(uVar8,local_f0,aVStack_68);
  se::Value::Value(aVStack_78);
  uVar8 = v8::Isolate::GetCurrent();
  internal::jsToSeValue(uVar8,local_e8,aVStack_78);
  se::Value::Value(aVStack_88);
  uVar8 = v8::Isolate::GetCurrent();
  internal::jsToSeValue(uVar8,local_e0,aVStack_88);
  se::Value::toStringForce();
  puVar10 = (undefined8 *)
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_a0,":",1);
  local_160 = (Value *)puVar10[2];
  pVStack_168 = (Value *)puVar10[1];
  local_170 = (Value *)*puVar10;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  se::Value::toStringForce();
  uVar14 = (ulong)local_b8 >> 1 & 0x7f;
  pcVar4 = (char *)((ulong)&local_b8 | 1);
  if (((ulong)local_b8 & 1) != 0) {
    uVar14 = local_b0;
    pcVar4 = local_a8;
  }
  puVar11 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_170,pcVar4,uVar14);
  local_140 = (void *)puVar11[2];
  uStack_148 = puVar11[1];
  local_150 = *puVar11;
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = 0;
  puVar11 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_150,":",1);
  local_120 = (void *)puVar11[2];
  uStack_128 = puVar11[1];
  local_130 = *puVar11;
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = 0;
  se::Value::toStringForce();
  uVar14 = (ulong)(local_188[0] >> 1);
  pcVar4 = (char *)((ulong)local_188 | 1);
  if ((local_188[0] & 1) != 0) {
    uVar14 = local_180;
    pcVar4 = local_178;
  }
  puVar11 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_130,pcVar4,uVar14);
  local_100 = (Value *)puVar11[2];
  pbStack_108 = (basic_string *)puVar11[1];
  local_110 = *puVar11;
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = 0;
  if ((local_188[0] & 1) != 0) {
    operator_delete(local_178);
  }
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  if ((local_150 & 1) != 0) {
    operator_delete(local_140);
  }
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  uVar8 = se::Value::toString(aVStack_58);
  FUN_008d57d4(&local_150,uVar8,", location: ");
  pbVar16 = (basic_string *)(local_110 >> 1 & 0x7f);
  pVVar1 = (Value *)((ulong)&local_110 | 1);
  if ((local_110 & 1) != 0) {
    pbVar16 = pbStack_108;
    pVVar1 = local_100;
  }
  puVar11 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_150,(char *)pVVar1,(ulong)pbVar16);
  local_120 = (void *)puVar11[2];
  uStack_128 = puVar11[1];
  local_130 = *puVar11;
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = 0;
  if ((local_150 & 1) != 0) {
    operator_delete(local_140);
  }
  v8::Message::GetStackTrace(param_1);
  FUN_00909784(&local_150);
  uVar14 = local_150 >> 1 & 0x7f;
  if ((local_150 & 1) != 0) {
    uVar14 = uStack_148;
  }
  if (uVar14 != 0) {
    iVar6 = se::Value::toInt32(aVStack_78);
    if (iVar6 == 0) {
      pbVar16 = (basic_string *)0xb;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_110,"(see stack)",0xb);
    }
    std::__ndk1::operator+((__ndk1 *)"\nSTACK:\n",(char *)&local_150,pbVar16);
    pVVar1 = (Value *)((ulong)local_170 >> 1 & 0x7f);
    pVVar5 = (Value *)((ulong)&local_170 | 1);
    if (((ulong)local_170 & 1) != 0) {
      pVVar1 = pVStack_168;
      pVVar5 = local_160;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_130,(char *)pVVar5,(ulong)pVVar1);
    if (((ulong)local_170 & 1) != 0) {
      operator_delete(local_160);
    }
  }
  pvVar2 = (void *)((ulong)&local_130 | 1);
  if ((local_130 & 1) != 0) {
    pvVar2 = local_120;
  }
  __android_log_print(6,"jswrapper","ERROR: %s\n",pvVar2);
  pVVar1 = (Value *)((ulong)&local_110 | 1);
  if ((local_110 & 1) != 0) {
    pVVar1 = local_100;
  }
  pbVar12 = (byte *)se::Value::toString(aVStack_58);
  pbVar17 = *(byte **)(pbVar12 + 0x10);
  plVar13 = *(long **)(pSVar7 + 0x1a0);
  if ((*pbVar12 & 1) == 0) {
    pbVar17 = pbVar12 + 1;
  }
  pvVar2 = (void *)((ulong)&local_150 | 1);
  if ((local_150 & 1) != 0) {
    pvVar2 = local_140;
  }
  if (plVar13 != (long *)0x0) {
    local_170 = pVVar1;
    local_b8 = pvVar2;
    local_a0 = pbVar17;
    (**(code **)(*plVar13 + 0x30))(plVar13,&local_170,&local_a0,&local_b8);
  }
  plVar13 = *(long **)(pSVar7 + 0x1d0);
  if (plVar13 != (long *)0x0) {
    local_170 = pVVar1;
    local_b8 = pvVar2;
    local_a0 = pbVar17;
    (**(code **)(*plVar13 + 0x30))(plVar13,&local_170,&local_a0,&local_b8);
  }
  if (pSVar7[0x20f] == (ScriptEngine)0x0) {
    pSVar7[0x20f] = (ScriptEngine)0x1;
    se::Value::Value((Value *)&local_a0);
    if (((*(Object **)(pSVar7 + 0xa0) != (Object *)0x0) &&
        (uVar14 = Object::getProperty(*(Object **)(pSVar7 + 0xa0),"__errorHandler",
                                      (Value *)&local_a0), (uVar14 & 1) != 0)) &&
       (local_98 == '\x05')) {
      pOVar15 = (Object *)se::Value::toObject((Value *)&local_a0);
      uVar14 = Object::isFunction(pOVar15);
      if ((uVar14 & 1) != 0) {
        local_170 = (Value *)0x0;
        pVStack_168 = (Value *)0x0;
        local_160 = (Value *)0x0;
        std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
        __push_back_slow_path<se::Value_const&>
                  ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_170,aVStack_68);
        if (pVStack_168 == local_160) {
          std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
          __push_back_slow_path<se::Value_const&>
                    ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_170,aVStack_78);
        }
        else {
          se::Value::Value(pVStack_168,aVStack_78);
          pVStack_168 = pVStack_168 + 0x10;
        }
        if (pVStack_168 == local_160) {
          std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
          __push_back_slow_path<se::Value_const&>
                    ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_170,aVStack_58);
        }
        else {
          se::Value::Value(pVStack_168,aVStack_58);
          pVStack_168 = pVStack_168 + 0x10;
        }
        se::Value::Value((Value *)&local_b8,(basic_string *)&local_150);
        if (pVStack_168 < local_160) {
          se::Value::Value(pVStack_168,(Value *)&local_b8);
          pVStack_168 = pVStack_168 + 0x10;
        }
        else {
          std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
          __push_back_slow_path<se::Value>
                    ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_170,
                     (Value *)&local_b8);
        }
        se::Value::~Value((Value *)&local_b8);
        pOVar15 = (Object *)se::Value::toObject((Value *)&local_a0);
        Object::call(pOVar15,(vector *)&local_170,*(Object **)(pSVar7 + 0xa0),(Value *)0x0);
        pVVar5 = local_170;
        pVVar1 = pVStack_168;
        if (local_170 != (Value *)0x0) {
          while (pVVar1 != pVVar5) {
            se::Value::~Value(pVVar1 + -0x10);
            pVVar1 = pVVar1 + -0x10;
          }
          pVStack_168 = pVVar5;
          operator_delete(local_170);
        }
      }
    }
    pSVar7[0x20f] = (ScriptEngine)0x0;
    se::Value::~Value((Value *)&local_a0);
  }
  else {
    __android_log_print(6,"jswrapper","ERROR: __errorHandler has exception\n");
  }
  if ((local_150 & 1) != 0) {
    operator_delete(local_140);
  }
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  if ((local_110 & 1) != 0) {
    operator_delete(local_100);
  }
  se::Value::~Value(aVStack_88);
  se::Value::~Value(aVStack_78);
  se::Value::~Value(aVStack_68);
  se::Value::~Value(aVStack_58);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

