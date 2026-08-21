
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* se::ScriptEngine::evalString(char const*, long, se::Value*, char const*) */

undefined4 __thiscall
se::ScriptEngine::evalString
          (ScriptEngine *this,char *param_1,long param_2,Value *param_3,char *param_4)

{
  size_t __n;
  char *__s;
  byte *__s2;
  byte bVar1;
  ulong __n_00;
  long lVar2;
  bool bVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  pthread_t __thread2;
  size_t sVar7;
  undefined1 *puVar8;
  void *__dest;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  Script *pSVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined4 uVar15;
  void *pvVar16;
  pthread_t __thread1;
  undefined1 *puVar17;
  ulong uVar18;
  ulong local_128;
  ulong uStack_120;
  undefined1 *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  ulong local_e8;
  void *local_e0;
  HandleScope aHStack_d8 [24];
  ulong local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  TryCatch aTStack_a0 [48];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __thread1 = *(pthread_t *)(this + 0x1e0);
  __thread2 = pthread_self();
  iVar6 = pthread_equal(__thread1,__thread2);
  if (iVar6 == 0) {
    uVar15 = 0;
    goto LAB_0090c88c;
  }
  if (param_2 < 0) {
    param_2 = strlen(param_1);
  }
  __s = "(no filename)";
  if (param_4 != (char *)0x0) {
    __s = param_4;
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = (undefined1 *)0x0;
  sVar7 = strlen(__s);
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    puVar17 = (undefined1 *)((ulong)&local_c0 | 1);
    local_c0 = CONCAT71(local_c0._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_0090c4a8;
  }
  else {
    uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
    puVar17 = operator_new(uVar10);
    local_c0 = uVar10 | 1;
    uStack_b8 = sVar7;
    local_b0 = puVar17;
LAB_0090c4a8:
    memcpy(puVar17,__s,sVar7);
  }
  puVar17[sVar7] = 0;
  if (((DAT_01d37240 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_01d37240), iVar6 != 0)) {
    DAT_01d37238._6_2_ = 0;
    DAT_01d37228 = 0x28;
    DAT_01d37238._1_4_ = 0x2f737470;
    DAT_01d37230._1_7_ = 0x7263732d6b6369;
    DAT_01d37238._0_1_ = 0x69;
    _DAT_01d37229 = 0x712f706d65742f;
    DAT_01d37230._0_1_ = 0x75;
    DAT_01d37238._5_1_ = 0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01d37228,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d37240);
  }
  puVar4 = local_b0;
  uVar10 = local_c0;
  sVar7 = CONCAT71(DAT_01d37230._1_7_,(undefined1)DAT_01d37230);
  __s2 = (byte *)CONCAT26(DAT_01d37238._6_2_,
                          CONCAT15(DAT_01d37238._5_1_,
                                   CONCAT41(DAT_01d37238._1_4_,(undefined1)DAT_01d37238)));
  puVar17 = (undefined1 *)((ulong)&local_c0 | 1);
  if ((local_c0 & 1) != 0) {
    puVar17 = local_b0;
  }
  if ((DAT_01d37228 & 1) == 0) {
    __s2 = &DAT_01d37229;
    sVar7 = (ulong)(DAT_01d37228 >> 1);
  }
  if (sVar7 == 0) {
    lVar9 = 0;
    uVar18 = (ulong)((byte)local_c0 >> 1);
    if ((local_c0 & 1) != 0) {
      uVar18 = uStack_b8;
    }
LAB_0090c58c:
    uVar14 = lVar9 + sVar7;
    __n_00 = uVar18 - uVar14;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = (undefined1 *)0x0;
    if (uVar18 < uVar14) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    if (0xffffffffffffffef < __n_00) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n_00 < 0x17) {
      puVar8 = (undefined1 *)((ulong)&local_128 | 1);
      local_128 = (ulong)(byte)((int)__n_00 << 1);
      if (__n_00 != 0) goto LAB_0090c5f4;
      *puVar8 = 0;
    }
    else {
      uVar18 = __n_00 + 0x10 & 0xfffffffffffffff0;
      puVar8 = operator_new(uVar18);
      local_128 = uVar18 | 1;
      uStack_120 = __n_00;
      local_118 = puVar8;
LAB_0090c5f4:
      memcpy(puVar8,puVar17 + uVar14,__n_00);
      puVar8[__n_00] = 0;
    }
    if ((uVar10 & 1) != 0) {
      *puVar4 = 0;
      uStack_b8 = 0;
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
    }
    local_b0 = local_118;
    uStack_b8 = uStack_120;
    local_c0 = local_128;
  }
  else {
    uVar18 = (ulong)((byte)local_c0 >> 1);
    if ((local_c0 & 1) != 0) {
      uVar18 = uStack_b8;
    }
    if ((long)sVar7 <= (long)uVar18) {
      bVar1 = *__s2;
      puVar8 = puVar17;
      uVar14 = uVar18;
      do {
        __n = (uVar14 - sVar7) + 1;
        if ((__n == 0) || (puVar8 = memchr(puVar8,(uint)bVar1,__n), puVar8 == (undefined1 *)0x0))
        break;
        iVar6 = memcmp(puVar8,__s2,sVar7);
        if (iVar6 == 0) {
          if ((puVar8 != puVar17 + uVar18) && (lVar9 = (long)puVar8 - (long)puVar17, lVar9 != -1))
          goto LAB_0090c58c;
          break;
        }
        puVar8 = puVar8 + 1;
        uVar14 = (long)(puVar17 + uVar18) - (long)puVar8;
      } while ((long)sVar7 <= (long)uVar14);
    }
  }
  v8::HandleScope::HandleScope(aHStack_d8,*(Isolate **)(this + 0x90));
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = (void *)0x0;
  if (0xffffffffffffffef < (ulong)param_2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if ((ulong)param_2 < 0x17) {
    pvVar16 = (void *)((ulong)&local_f0 | 1);
    local_f0 = (ulong)(byte)((int)param_2 << 1);
    __dest = pvVar16;
    if (param_2 != 0) goto LAB_0090c6a8;
  }
  else {
    uVar10 = param_2 + 0x10U & 0xfffffffffffffff0;
    __dest = operator_new(uVar10);
    local_f0 = uVar10 | 1;
    pvVar16 = (void *)((ulong)&local_f0 | 1);
    local_e8 = param_2;
    local_e0 = __dest;
LAB_0090c6a8:
    memcpy(__dest,param_1,param_2);
  }
  *(undefined1 *)((long)__dest + param_2) = 0;
  if ((local_f0 & 1) != 0) {
    pvVar16 = local_e0;
  }
  lVar9 = v8::String::NewFromUtf8(*(undefined8 *)(this + 0x90),pvVar16,0,0xffffffff);
  if (lVar9 == 0) {
LAB_0090c860:
    uVar15 = 0;
  }
  else {
    puVar17 = (undefined1 *)((ulong)&local_c0 | 1);
    if ((local_c0 & 1) != 0) {
      puVar17 = local_b0;
    }
    uVar10 = v8::String::NewFromUtf8(*(undefined8 *)(this + 0x90),puVar17,0,0xffffffff);
    if (uVar10 == 0) goto LAB_0090c860;
    uStack_120 = 0;
    local_110 = 0;
    local_118 = (undefined1 *)0x0;
    local_100 = 0;
    uStack_f8 = 0;
    local_108 = 0;
    local_128 = uVar10;
    if (*(ulong **)(this + 0x80) == (ulong *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = v8::HandleScope::CreateHandle(*(Isolate **)(this + 0x90),**(ulong **)(this + 0x80));
    }
    pSVar12 = (Script *)v8::Script::Compile(uVar11,lVar9,&local_128);
    if (pSVar12 == (Script *)0x0) {
LAB_0090c844:
      __android_log_print(6,"jswrapper","ScriptEngine::evalString script %s, failed!\n",__s);
      goto LAB_0090c860;
    }
    v8::TryCatch::TryCatch(aTStack_a0,*(Isolate **)(this + 0x90));
    if (*(ulong **)(this + 0x80) == (ulong *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = v8::HandleScope::CreateHandle(*(Isolate **)(this + 0x90),**(ulong **)(this + 0x80));
    }
    puVar13 = (ulong *)v8::Script::Run(pSVar12,uVar11);
    if (puVar13 == (ulong *)0x0) {
      bVar3 = false;
    }
    else {
      uVar10 = *puVar13;
      if (((uVar10 & 3) == 1) &&
         (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar10 - 1)) == 0x43)) {
        bVar5 = (*(uint *)(uVar10 + 0x17) & 0xfffffffe) != 10;
      }
      else {
        bVar5 = true;
      }
      bVar3 = true;
      if ((param_3 != (Value *)0x0) && (bVar5)) {
        internal::jsToSeValue(*(undefined8 *)(this + 0x90));
        bVar3 = true;
      }
    }
    uVar10 = v8::TryCatch::HasCaught(aTStack_a0);
    if ((uVar10 & 1) != 0) {
      uVar11 = v8::TryCatch::Message(aTStack_a0);
      __android_log_print(6,"jswrapper","ScriptEngine::evalString catch exception:\n");
      onMessageCallback(uVar11);
    }
    v8::TryCatch::~TryCatch(aTStack_a0);
    if (!bVar3) goto LAB_0090c844;
    uVar15 = 1;
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  v8::HandleScope::~HandleScope(aHStack_d8);
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
LAB_0090c88c:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

