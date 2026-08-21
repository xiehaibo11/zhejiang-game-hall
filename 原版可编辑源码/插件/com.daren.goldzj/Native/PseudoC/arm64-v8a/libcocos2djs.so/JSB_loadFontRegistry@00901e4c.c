
/* WARNING: Type propagation algorithm not settling */
/* JSB_loadFontRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_loadFontRegistry(FunctionCallbackInfo *param_1)

{
  __shared_weak_count *p_Var1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  Value *pVVar6;
  bool bVar7;
  void *pvVar8;
  long *plVar9;
  ulong uVar10;
  char *pcVar11;
  Value *pVVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar16;
  char *pcVar17;
  char *pcVar18;
  Isolate *pIVar19;
  char *pcVar20;
  char *pcVar21;
  void *__dest;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  Value *local_280;
  Value *local_278;
  undefined8 local_270;
  HandleScope aHStack_268 [24];
  char *local_250;
  char *pcStack_248;
  char *local_240;
  ulong local_230;
  ulong uStack_228;
  void *local_220;
  byte local_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined4 local_20f;
  undefined1 local_20b;
  undefined2 uStack_20a;
  void *local_208;
  basic_regex<char,std::__ndk1::regex_traits<char>> abStack_200 [48];
  __shared_weak_count *local_1d0;
  char *local_1c0;
  char *pcStack_1b8;
  char *local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  void *local_198;
  ulong local_190;
  ulong uStack_188;
  void *local_180;
  State aSStack_178 [40];
  void *local_150;
  void *local_148;
  undefined8 local_140;
  undefined8 local_138 [2];
  undefined1 local_128;
  undefined1 local_110;
  undefined1 local_f8;
  undefined1 local_f0;
  char *local_e0;
  char *pcStack_d8;
  char *local_d0;
  undefined1 uStack_c8;
  undefined7 local_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  long local_68;
  char *pcVar15;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar19 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_268,pIVar19);
  local_280 = (Value *)0x0;
  local_278 = (Value *)0x0;
  local_270 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_280,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_280);
  pvVar8 = (void *)se::internal::getPrivate(pIVar19,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_178,pvVar8,(vector *)&local_280);
  plVar9 = (long *)se::State::args(aSStack_178);
  if (plVar9[1] == *plVar9) {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_platform_android.cpp, 87): wrong number of arguments: %d, was expecting %d\n"
                        ,0,1);
  }
  else {
    pVVar12 = (Value *)se::State::rval(aSStack_178);
    se::Value::setNull(pVVar12);
    uStack_188 = 0;
    local_180 = (void *)0x0;
    local_190 = 0;
    uVar10 = seval_to_std_string((Value *)*plVar9,(basic_string *)&local_190);
    if ((uVar10 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_platform_android.cpp"
                          ,0x3b,"JSB_loadFont");
      __android_log_print(6,"jswrapper",
                          "JSB_loadFont : Error processing argument: originalFamilyName");
      bVar7 = false;
    }
    else {
      local_1a0 = 0;
      local_198 = (void *)0x0;
      local_1a8 = 0;
      uVar10 = seval_to_std_string((Value *)(*plVar9 + 0x10),(basic_string *)&local_1a8);
      if ((uVar10 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_platform_android.cpp"
                            ,0x3f,"JSB_loadFont");
        __android_log_print(6,"jswrapper","JSB_loadFont : Error processing argument: source");
        bVar7 = false;
      }
      else {
        local_1c0 = (char *)0x0;
        pcStack_1b8 = (char *)0x0;
        local_1b0 = (char *)0x0;
        FUN_00877378(abStack_200,"url\\(\\s*\'\\s*(.*?)\\s*\'\\s*\\)",0);
        uVar10 = local_1a8 >> 1 & 0x7f;
        pvVar8 = (void *)((ulong)&local_1a8 | 1);
        if ((local_1a8 & 1) != 0) {
          uVar10 = local_1a0;
          pvVar8 = local_198;
        }
        local_150 = (void *)0x0;
        local_148 = (void *)0x0;
        local_140 = 0;
        local_128 = 0;
        local_110 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        uStack_bf = 0;
        uStack_c0 = 0;
        pcStack_d8 = (char *)0x0;
        local_e0 = (char *)0x0;
        uStack_c8 = 0;
        local_c7 = 0;
        local_d0 = (char *)0x0;
        bVar7 = std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
                __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                          (abStack_200,pvVar8,(long)pvVar8 + uVar10,&local_e0,0);
        std::__ndk1::
        match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
        ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                  ((match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                    *)&local_150,pvVar8,(long)pvVar8 + uVar10,&local_e0,0);
        if (local_e0 != (char *)0x0) {
          pcStack_d8 = local_e0;
          operator_delete(local_e0);
        }
        if (bVar7) {
          puVar2 = (undefined8 *)((long)local_150 + 0x18);
          if ((ulong)(((long)local_148 - (long)local_150 >> 3) * -0x5555555555555555) < 2) {
            puVar2 = local_138;
          }
          if (*(char *)(puVar2 + 2) == '\0') {
            local_e0 = (char *)0x0;
            pcStack_d8 = (char *)0x0;
            local_d0 = (char *)0x0;
          }
          else {
            pcVar15 = (char *)*puVar2;
            pcVar21 = (char *)puVar2[1];
            local_e0 = (char *)0x0;
            pcStack_d8 = (char *)0x0;
            local_d0 = (char *)0x0;
            pcVar20 = pcVar21 + -(long)pcVar15;
            if ((char *)0xffffffffffffffef < pcVar20) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (pcVar20 < (char *)0x17) {
              local_e0 = (char *)(ulong)(byte)((int)pcVar20 << 1);
              pcVar11 = (char *)((ulong)&local_e0 | 1);
            }
            else {
              pcVar11 = operator_new((ulong)(pcVar20 + 0x10) & 0xfffffffffffffff0);
              local_e0 = (char *)((ulong)(pcVar20 + 0x10) & 0xfffffffffffffff0 | 1);
              pcStack_d8 = pcVar20;
              local_d0 = pcVar11;
            }
            if (pcVar15 != pcVar21) {
              pcVar13 = pcVar11;
              if ((pcVar20 < (char *)0x20) ||
                 ((pcVar11 < pcVar21 && (pcVar15 < pcVar11 + (long)pcVar20)))) {
LAB_009022c8:
                do {
                  pcVar14 = pcVar15 + 1;
                  *pcVar13 = *pcVar15;
                  pcVar13 = pcVar13 + 1;
                  pcVar15 = pcVar14;
                } while (pcVar21 != pcVar14);
              }
              else {
                pcVar17 = (char *)((ulong)pcVar20 & 0xffffffffffffffe0);
                pcVar13 = pcVar15 + 0x10;
                pcVar14 = pcVar11 + 0x10;
                pcVar18 = pcVar17;
                do {
                  pcVar5 = pcVar13 + -8;
                  uVar23 = *(undefined8 *)(pcVar13 + -0x10);
                  uVar25 = *(undefined8 *)(pcVar13 + 8);
                  uVar24 = *(undefined8 *)pcVar13;
                  pcVar13 = pcVar13 + 0x20;
                  pcVar18 = pcVar18 + -0x20;
                  *(undefined8 *)(pcVar14 + -8) = *(undefined8 *)pcVar5;
                  *(undefined8 *)(pcVar14 + -0x10) = uVar23;
                  *(undefined8 *)(pcVar14 + 8) = uVar25;
                  *(undefined8 *)pcVar14 = uVar24;
                  pcVar14 = pcVar14 + 0x20;
                } while (pcVar18 != (char *)0x0);
                pcVar13 = pcVar11 + (long)pcVar17;
                pcVar15 = pcVar15 + (long)pcVar17;
                if (pcVar17 != pcVar20) goto LAB_009022c8;
              }
              pcVar11 = pcVar11 + (long)pcVar20;
            }
            *pcVar11 = '\0';
          }
          if (((ulong)local_1c0 & 1) != 0) {
            *local_1b0 = '\0';
            pcStack_1b8 = (char *)0x0;
            if (((ulong)local_1c0 & 1) != 0) {
              operator_delete(local_1b0);
            }
          }
          local_1b0 = local_d0;
          pcStack_1b8 = pcStack_d8;
          local_1c0 = local_e0;
        }
        plVar9 = (long *)cocos2d::FileUtils::getInstance();
        (**(code **)(*plVar9 + 0x40))(&local_e0,plVar9,&local_1c0);
        if (((ulong)local_1c0 & 1) != 0) {
          *local_1b0 = '\0';
          pcStack_1b8 = (char *)0x0;
          if (((ulong)local_1c0 & 1) != 0) {
            operator_delete(local_1b0);
          }
        }
        pcVar20 = pcStack_d8;
        pcVar21 = local_e0;
        pcStack_1b8 = pcStack_d8;
        local_1c0 = local_e0;
        local_1b0 = local_d0;
        pcVar15 = (char *)((ulong)local_e0 >> 1 & 0x7f);
        if (((ulong)local_e0 & 1) != 0) {
          pcVar15 = pcStack_d8;
        }
        if (pcVar15 == (char *)0x0) {
          pcVar15 = (char *)((ulong)&local_1c0 | 1);
          if (((ulong)local_e0 & 1) != 0) {
            pcVar15 = local_d0;
          }
          __android_log_print(6,"jswrapper","Font (%s) doesn\'t exist!",pcVar15);
        }
        else {
          local_e0 = (char *)0x0;
          pcStack_d8 = (char *)0x0;
          local_d0 = (char *)0x0;
          local_d0 = operator_new(0x30);
          pvVar8 = local_180;
          uVar10 = uStack_188;
          uStack_20a = 0;
          builtin_strncpy(local_d0,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
          local_218 = 0x18;
          local_20f = 0x65636166;
          local_208 = (void *)0x0;
          uStack_228 = 0;
          local_220 = (void *)0x0;
          pcStack_d8 = (char *)0x2d;
          local_e0 = (char *)0x31;
          uStack_217 = 0x70795464616f6c;
          uStack_210 = 0x65;
          local_20b = 0;
          local_230 = 0;
          if ((local_190 & 1) == 0) {
            local_220 = local_180;
            uStack_228 = uStack_188;
            local_230 = local_190;
          }
          else {
            if (0xffffffffffffffef < uStack_188) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_188 < 0x17) {
              __dest = (void *)((ulong)&local_230 | 1);
              local_230 = (ulong)(byte)((int)uStack_188 << 1);
              if (uStack_188 != 0) goto LAB_0090247c;
            }
            else {
              uVar22 = uStack_188 + 0x10 & 0xfffffffffffffff0;
              __dest = operator_new(uVar22);
              local_230 = uVar22 | 1;
              uStack_228 = uVar10;
              local_220 = __dest;
LAB_0090247c:
              memcpy(__dest,pvVar8,uVar10);
            }
            *(undefined1 *)((long)__dest + uVar10) = 0;
          }
          pcVar15 = local_1b0;
          local_250 = (char *)0x0;
          pcStack_248 = (char *)0x0;
          local_240 = (char *)0x0;
          if (((ulong)pcVar21 & 1) == 0) {
            local_240 = local_1b0;
            pcStack_248 = pcStack_1b8;
            local_250 = local_1c0;
          }
          else {
            if ((char *)0xffffffffffffffef < pcVar20) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (pcVar20 < (char *)0x17) {
              pcVar21 = (char *)((ulong)&local_250 | 1);
              local_250 = (char *)(ulong)(byte)((int)pcVar20 << 1);
              if (pcVar20 != (char *)0x0) goto LAB_009024fc;
            }
            else {
              pcVar21 = operator_new((ulong)(pcVar20 + 0x10) & 0xfffffffffffffff0);
              local_250 = (char *)((ulong)(pcVar20 + 0x10) & 0xfffffffffffffff0 | 1);
              pcStack_248 = pcVar20;
              local_240 = pcVar21;
LAB_009024fc:
              memcpy(pcVar21,pcVar15,(size_t)pcVar20);
            }
            pcVar21[(long)pcVar20] = '\0';
          }
          cocos2d::JniHelper::
          callStaticVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (&local_e0,&local_218,&local_230,&local_250);
          if (((ulong)local_250 & 1) != 0) {
            operator_delete(local_240);
          }
          if ((local_230 & 1) != 0) {
            operator_delete(local_220);
          }
          if ((local_218 & 1) != 0) {
            operator_delete(local_208);
          }
          if (((ulong)local_e0 & 1) != 0) {
            operator_delete(local_d0);
          }
          pVVar12 = (Value *)se::State::rval(aSStack_178);
          se::Value::setString(pVVar12,(basic_string *)&local_190);
        }
        if (local_150 != (void *)0x0) {
          local_148 = local_150;
          operator_delete(local_150);
        }
        if (local_1d0 != (__shared_weak_count *)0x0) {
          p_Var1 = local_1d0 + 8;
          do {
            lVar16 = *(long *)p_Var1;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar7) {
              *(long *)p_Var1 = lVar16 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*(long *)local_1d0 + 0x10))(local_1d0);
            std::__ndk1::__shared_weak_count::__release_weak(local_1d0);
          }
        }
        std::__ndk1::locale::~locale((locale *)abStack_200);
        if (((ulong)local_1c0 & 1) != 0) {
          operator_delete(local_1b0);
        }
        bVar7 = true;
      }
      if ((local_1a8 & 1) != 0) {
        operator_delete(local_198);
      }
    }
    if ((local_190 & 1) != 0) {
      operator_delete(local_180);
    }
    if (bVar7) goto LAB_00902180;
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n","JSB_loadFont",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_platform_android.cpp"
                      ,0x5a);
LAB_00902180:
  pVVar12 = (Value *)se::State::rval(aSStack_178);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_178);
  pVVar6 = local_280;
  pVVar12 = local_278;
  if (local_280 != (Value *)0x0) {
    while (pVVar12 != pVVar6) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
    }
    local_278 = pVVar6;
    operator_delete(local_280);
  }
  v8::HandleScope::~HandleScope(aHStack_268);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

