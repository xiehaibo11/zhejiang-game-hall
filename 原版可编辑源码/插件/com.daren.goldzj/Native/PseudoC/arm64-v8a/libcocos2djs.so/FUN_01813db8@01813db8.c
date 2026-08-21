
void FUN_01813db8(__shared_weak_count *param_1,__shared_weak_count *param_2,basic_string *param_3,
                 uint param_4)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  bool bVar3;
  collate_byname<char> *this;
  collate_byname<wchar_t> *this_00;
  ctype_byname<char> *this_01;
  ctype_byname<wchar_t> *this_02;
  undefined8 *puVar4;
  codecvt<wchar_t,char,mbstate_t> *this_03;
  void *pvVar5;
  numpunct_byname<char> *this_04;
  numpunct_byname<wchar_t> *this_05;
  __locale_t p_Var6;
  undefined8 uVar7;
  __shared_weak_count *p_Var8;
  __shared_count *this_06;
  basic_string *pbVar9;
  __shared_weak_count *p_Var10;
  long lVar11;
  __shared_weak_count *p_Var12;
  basic_string *pbVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  __shared_weak_count *p_Var17;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  p_Var8 = param_1 + 0x10;
  p_Var1 = param_1 + 0x110;
  *(undefined ***)param_1 = &PTR_FUN_01cdb9e0;
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  p_Var2 = param_1 + 0x18;
  p_Var17 = param_1 + 0x30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)p_Var17 = 0;
  param_1[0x110] = (__shared_weak_count)0x1;
  *(__shared_weak_count **)(param_1 + 0x18) = p_Var1;
  *(__shared_weak_count **)(param_1 + 0x20) = p_Var1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined2 *)(param_1 + 0x120) = 0x2a02;
  *(__shared_weak_count **)(param_1 + 0x10) = p_Var17;
  param_1[0x122] = (__shared_weak_count)0x0;
  p_Var10 = p_Var1;
  if (param_1 != param_2) {
    FUN_01828350(p_Var8,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    p_Var10 = *(__shared_weak_count **)p_Var2;
  }
  p_Var12 = *(__shared_weak_count **)p_Var8;
  if (p_Var10 != p_Var12) {
    uVar15 = 0;
    uVar16 = 1;
    do {
      if (*(__shared_count **)(p_Var12 + uVar15 * 8) != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(*(__shared_count **)(p_Var12 + uVar15 * 8));
        p_Var10 = *(__shared_weak_count **)p_Var2;
        p_Var12 = *(__shared_weak_count **)p_Var8;
      }
      bVar3 = uVar16 < (ulong)((long)p_Var10 - (long)p_Var12 >> 3);
      uVar15 = uVar16;
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (bVar3);
  }
  if ((param_4 >> 3 & 1) != 0) {
    this = operator_new(0x18);
    std::__ndk1::collate_byname<char>::collate_byname(this,param_3,0);
    FUN_018120f0(param_1,this);
    this_00 = operator_new(0x18);
    std::__ndk1::collate_byname<wchar_t>::collate_byname(this_00,param_3,0);
    FUN_01812220(param_1,this_00);
  }
  if ((param_4 & 1) != 0) {
    this_01 = operator_new(0x28);
    std::__ndk1::ctype_byname<char>::ctype_byname(this_01,param_3,0);
    FUN_01812350(param_1,this_01);
    this_02 = operator_new(0x18);
    std::__ndk1::ctype_byname<wchar_t>::ctype_byname(this_02,param_3,0);
    FUN_01812480(param_1,this_02);
    puVar4 = operator_new(0x10);
    *puVar4 = &PTR__codecvt_byname_01cddbc0;
    puVar4[1] = 0xffffffffffffffff;
    FUN_018125b0(param_1);
    this_03 = operator_new(0x18);
    pbVar13 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar13 = param_3 + 1;
    }
    std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt(this_03,(char *)pbVar13,0);
    *(undefined ***)this_03 = &PTR__codecvt_byname_01cddc38;
    FUN_018126e0(param_1,this_03);
    puVar4 = operator_new(0x10);
    *puVar4 = &PTR__codecvt_byname_01cddcb0;
    puVar4[1] = 0xffffffffffffffff;
    FUN_01812810(param_1);
    puVar4 = operator_new(0x10);
    *puVar4 = &PTR__codecvt_byname_01cddd28;
    puVar4[1] = 0xffffffffffffffff;
    FUN_01812940(param_1);
  }
  if ((param_4 >> 4 & 1) != 0) {
    pvVar5 = operator_new(0x88);
    FUN_01812e00(pvVar5,param_3,0);
    FUN_01812cd0(param_1,pvVar5);
    pvVar5 = operator_new(0x88);
    FUN_0181300c(pvVar5,param_3,0);
    FUN_01812edc(param_1,pvVar5);
    pvVar5 = operator_new(0x88);
    FUN_01813218(pvVar5,param_3,0);
    FUN_018130e8(param_1,pvVar5);
    pvVar5 = operator_new(0x88);
    FUN_01813424(pvVar5,param_3,0);
    FUN_018132f4(param_1,pvVar5);
  }
  if ((param_4 >> 1 & 1) != 0) {
    this_04 = operator_new(0x30);
    *(undefined8 *)(this_04 + 0x28) = 0;
    *(undefined2 *)(this_04 + 0x10) = 0x2c2e;
    *(undefined ***)this_04 = &PTR__numpunct_01cdbce0;
    *(undefined8 *)(this_04 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(this_04 + 0x18) = 0;
    *(undefined8 *)(this_04 + 0x20) = 0;
    pbVar13 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar13 = param_3 + 1;
    }
    std::__ndk1::numpunct_byname<char>::__init(this_04,(char *)pbVar13);
    FUN_01812a70(param_1,this_04);
    this_05 = operator_new(0x30);
    *(undefined8 *)(this_05 + 0x28) = 0;
    *(undefined8 *)(this_05 + 0x18) = 0;
    *(undefined8 *)(this_05 + 0x20) = 0;
    *(undefined ***)this_05 = &PTR__numpunct_01cdbd30;
    *(undefined8 *)(this_05 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(this_05 + 0x10) = 0x2c0000002e;
    pbVar13 = param_3 + 1;
    if (((byte)*param_3 & 1) != 0) {
      pbVar13 = *(basic_string **)(param_3 + 0x10);
    }
    std::__ndk1::numpunct_byname<wchar_t>::__init(this_05,(char *)pbVar13);
    FUN_01812ba0(param_1,this_05);
  }
  if ((param_4 >> 2 & 1) == 0) {
LAB_018142cc:
    if ((param_4 >> 5 & 1) != 0) {
      puVar4 = operator_new(0x10);
      *puVar4 = &PTR__facet_01cddb10;
      puVar4[1] = 0xffffffffffffffff;
      FUN_018139c0(param_1);
      puVar4 = operator_new(0x10);
      *puVar4 = &PTR__facet_01cddb68;
      puVar4[1] = 0xffffffffffffffff;
      FUN_01813af0(param_1);
    }
    if (*(long *)(lVar11 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  puVar4 = operator_new(0x440);
  *puVar4 = &PTR____shared_weak_count_01cdcd50;
  puVar4[1] = 0xffffffffffffffff;
  puVar4[2] = &PTR___weeks_01cdcdb0;
  std::__ndk1::__time_get_storage<char>::__time_get_storage
            ((__time_get_storage<char> *)(puVar4 + 3),param_3);
  *puVar4 = &PTR_FUN_01cdcf60;
  puVar4[2] = &PTR_FUN_01cdcff8;
  FUN_01813500(param_1,puVar4);
  puVar4 = operator_new(0x440);
  *puVar4 = &PTR____shared_weak_count_01cdce60;
  puVar4[1] = 0xffffffffffffffff;
  puVar4[2] = &PTR___weeks_01cdcec0;
  std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
            ((__time_get_storage<wchar_t> *)(puVar4 + 3),param_3);
  *puVar4 = &PTR_FUN_01cdd0a0;
  puVar4[2] = &PTR_FUN_01cdd138;
  FUN_01813630(param_1,puVar4);
  p_Var10 = operator_new(0x18);
  *(undefined ***)p_Var10 = &PTR__facet_01cdbd80;
  *(undefined8 *)(p_Var10 + 8) = 0xffffffffffffffff;
  pbVar13 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_3 & 1) == 0) {
    pbVar13 = param_3 + 1;
  }
  pbVar9 = (basic_string *)0x0;
  p_Var6 = newlocale(0x1fbf,(char *)pbVar13,(__locale_t)0x0);
  *(__locale_t *)(p_Var10 + 0x10) = p_Var6;
  if (p_Var6 == (__locale_t)0x0) {
    std::__ndk1::operator+
              ((__ndk1 *)"time_put_byname failed to construct for ",(char *)param_3,pbVar9);
    FUN_01819190(local_80);
  }
  else {
    *(undefined ***)p_Var10 = &PTR_FUN_01cdd2b0;
    FUN_01813760(param_1,p_Var10);
    p_Var10 = operator_new(0x18);
    *(undefined ***)p_Var10 = &PTR__facet_01cdbd80;
    *(undefined8 *)(p_Var10 + 8) = 0xffffffffffffffff;
    pbVar13 = param_3 + 1;
    if (((byte)*param_3 & 1) != 0) {
      pbVar13 = *(basic_string **)(param_3 + 0x10);
    }
    pbVar9 = (basic_string *)0x0;
    p_Var6 = newlocale(0x1fbf,(char *)pbVar13,(__locale_t)0x0);
    *(__locale_t *)(p_Var10 + 0x10) = p_Var6;
    if (p_Var6 != (__locale_t)0x0) {
      *(undefined ***)p_Var10 = &PTR_FUN_01cdd2f8;
      FUN_01813890(param_1,p_Var10);
      goto LAB_018142cc;
    }
  }
  std::__ndk1::operator+
            ((__ndk1 *)"time_put_byname failed to construct for ",(char *)param_3,pbVar9);
  uVar7 = FUN_01819190(local_80);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  std::__ndk1::__shared_weak_count::~__shared_weak_count(p_Var10);
  operator_delete(p_Var10);
  __cxa_begin_catch(uVar7);
  lVar11 = *(long *)p_Var2;
  lVar14 = *(long *)p_Var8;
  if (lVar11 != lVar14) {
    uVar15 = 0;
    uVar16 = 1;
    do {
      this_06 = *(__shared_count **)(lVar14 + uVar15 * 8);
      if (this_06 != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__release_shared(this_06);
        lVar11 = *(long *)p_Var2;
        lVar14 = *(long *)p_Var8;
      }
      bVar3 = uVar16 < (ulong)(lVar11 - lVar14 >> 3);
      uVar15 = uVar16;
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (bVar3);
  }
  uVar7 = __cxa_rethrow();
  __cxa_end_catch();
  if (((byte)param_1[0x120] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x130));
  }
  p_Var8 = *(__shared_weak_count **)p_Var8;
  if (p_Var8 != (__shared_weak_count *)0x0) {
    *(__shared_weak_count **)p_Var2 = p_Var8;
    if (p_Var8 == p_Var17) {
      *p_Var1 = (__shared_weak_count)0x0;
    }
    else {
      operator_delete(p_Var8);
    }
  }
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar7);
}

