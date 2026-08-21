
void FUN_011f6874(__shared_weak_count *param_1,__shared_weak_count *param_2,basic_string *param_3,
                 uint param_4)

{
  __shared_weak_count *p_Var1;
  long lVar2;
  ulong uVar3;
  __shared_count *p_Var4;
  collate_byname<char> *this;
  collate_byname<wchar_t> *this_00;
  ctype_byname<char> *this_01;
  ctype_byname<wchar_t> *this_02;
  undefined8 *puVar5;
  codecvt<wchar_t,char,mbstate_t> *this_03;
  void *pvVar6;
  numpunct_byname<char> *this_04;
  numpunct_byname<wchar_t> *this_05;
  __shared_weak_count *this_06;
  __locale_t p_Var7;
  undefined8 uVar8;
  basic_string *pbVar9;
  basic_string *pbVar10;
  undefined8 *puVar11;
  __shared_weak_count *p_Var12;
  __shared_weak_count *p_Var13;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0172e3a0;
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  p_Var13 = param_1 + 0x30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)p_Var13 = 0;
  p_Var1 = param_1 + 0x110;
  p_Var12 = param_1 + 0x10;
  *(__shared_weak_count **)p_Var12 = p_Var13;
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
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x120),"*");
  if (param_1 != param_2) {
    FUN_01207e60(p_Var12,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  }
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  puVar11 = *(undefined8 **)(param_1 + 0x18);
  if (puVar11 != puVar5) {
    p_Var4 = (__shared_count *)*puVar5;
    uVar3 = 1;
    while( true ) {
      if (p_Var4 != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(p_Var4);
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        puVar11 = *(undefined8 **)(param_1 + 0x18);
      }
      if ((ulong)((long)puVar11 - (long)puVar5 >> 3) <= uVar3) break;
      p_Var4 = (__shared_count *)puVar5[uVar3];
      uVar3 = (ulong)((int)uVar3 + 1);
    }
  }
  if ((param_4 >> 3 & 1) != 0) {
    this = operator_new(0x18);
    std::__ndk1::collate_byname<char>::collate_byname(this,param_3,0);
    FUN_011f4ba8(param_1,this);
    this_00 = operator_new(0x18);
    std::__ndk1::collate_byname<wchar_t>::collate_byname(this_00,param_3,0);
    FUN_011f4cd8(param_1,this_00);
  }
  if ((param_4 & 1) != 0) {
    this_01 = operator_new(0x28);
    std::__ndk1::ctype_byname<char>::ctype_byname(this_01,param_3,0);
    FUN_011f4e08(param_1,this_01);
    this_02 = operator_new(0x18);
    std::__ndk1::ctype_byname<wchar_t>::ctype_byname(this_02,param_3,0);
    FUN_011f4f38(param_1,this_02);
    puVar5 = operator_new(0x10);
    *puVar5 = &PTR__codecvt_byname_01730580;
    puVar5[1] = 0xffffffffffffffff;
    FUN_011f5068(param_1);
    this_03 = operator_new(0x18);
    pbVar10 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar10 = param_3 + 1;
    }
    std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt(this_03,(char *)pbVar10,0);
    *(undefined ***)this_03 = &PTR__codecvt_byname_017305f8;
    FUN_011f5198(param_1,this_03);
    puVar5 = operator_new(0x10);
    *puVar5 = &PTR__codecvt_byname_01730670;
    puVar5[1] = 0xffffffffffffffff;
    FUN_011f52c8(param_1);
    puVar5 = operator_new(0x10);
    *puVar5 = &PTR__codecvt_byname_017306e8;
    puVar5[1] = 0xffffffffffffffff;
    FUN_011f53f8(param_1);
  }
  if ((param_4 >> 4 & 1) != 0) {
    pvVar6 = operator_new(0x88);
    FUN_011f58b8(pvVar6,param_3,0);
    FUN_011f5788(param_1,pvVar6);
    pvVar6 = operator_new(0x88);
    FUN_011f5ac4(pvVar6,param_3,0);
    FUN_011f5994(param_1,pvVar6);
    pvVar6 = operator_new(0x88);
    FUN_011f5cd0(pvVar6,param_3,0);
    FUN_011f5ba0(param_1,pvVar6);
    pvVar6 = operator_new(0x88);
    FUN_011f5edc(pvVar6,param_3,0);
    FUN_011f5dac(param_1,pvVar6);
  }
  if ((param_4 >> 1 & 1) != 0) {
    this_04 = operator_new(0x30);
    *(undefined8 *)(this_04 + 0x28) = 0;
    *(undefined2 *)(this_04 + 0x10) = 0x2c2e;
    *(undefined ***)this_04 = &PTR__numpunct_0172e6a0;
    *(undefined8 *)(this_04 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(this_04 + 0x18) = 0;
    *(undefined8 *)(this_04 + 0x20) = 0;
    pbVar10 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar10 = param_3 + 1;
    }
    std::__ndk1::numpunct_byname<char>::__init(this_04,(char *)pbVar10);
    FUN_011f5528(param_1,this_04);
    this_05 = operator_new(0x30);
    *(undefined8 *)(this_05 + 0x28) = 0;
    *(undefined8 *)(this_05 + 0x18) = 0;
    *(undefined8 *)(this_05 + 0x20) = 0;
    *(undefined ***)this_05 = &PTR__numpunct_0172e6f0;
    *(undefined8 *)(this_05 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(this_05 + 0x10) = 0x2c0000002e;
    pbVar10 = param_3 + 1;
    if (((byte)*param_3 & 1) != 0) {
      pbVar10 = *(basic_string **)(param_3 + 0x10);
    }
    std::__ndk1::numpunct_byname<wchar_t>::__init(this_05,(char *)pbVar10);
    FUN_011f5658(param_1,this_05);
  }
  if ((param_4 >> 2 & 1) != 0) {
    puVar5 = operator_new(0x440);
    *puVar5 = &PTR____shared_weak_count_0172f710;
    puVar5[1] = 0xffffffffffffffff;
    puVar5[2] = &PTR___weeks_0172f770;
    std::__ndk1::__time_get_storage<char>::__time_get_storage
              ((__time_get_storage<char> *)(puVar5 + 3),param_3);
    *puVar5 = &PTR_FUN_0172f920;
    puVar5[2] = &PTR_FUN_0172f9b8;
    FUN_011f5fb8(param_1,puVar5);
    puVar5 = operator_new(0x440);
    *puVar5 = &PTR____shared_weak_count_0172f820;
    puVar5[1] = 0xffffffffffffffff;
    puVar5[2] = &PTR___weeks_0172f880;
    std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
              ((__time_get_storage<wchar_t> *)(puVar5 + 3),param_3);
    *puVar5 = &PTR_FUN_0172fa60;
    puVar5[2] = &PTR_FUN_0172faf8;
    FUN_011f60e8(param_1,puVar5);
    this_06 = operator_new(0x18);
    *(undefined ***)this_06 = &PTR__facet_0172e740;
    *(undefined8 *)(this_06 + 8) = 0xffffffffffffffff;
    pbVar10 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar10 = param_3 + 1;
    }
    pbVar9 = (basic_string *)0x0;
    p_Var7 = newlocale(0x1fbf,(char *)pbVar10,(__locale_t)0x0);
    *(__locale_t *)(this_06 + 0x10) = p_Var7;
    if (p_Var7 == (__locale_t)0x0) {
      std::__ndk1::operator+
                ((__ndk1 *)"time_put_byname failed to construct for ",(char *)param_3,pbVar9);
      FUN_011f98b4(local_80);
    }
    else {
      *(undefined ***)this_06 = &PTR_FUN_0172fc70;
      FUN_011f6218(param_1,this_06);
      this_06 = operator_new(0x18);
      *(undefined ***)this_06 = &PTR__facet_0172e740;
      *(undefined8 *)(this_06 + 8) = 0xffffffffffffffff;
      pbVar10 = param_3 + 1;
      if (((byte)*param_3 & 1) != 0) {
        pbVar10 = *(basic_string **)(param_3 + 0x10);
      }
      pbVar9 = (basic_string *)0x0;
      p_Var7 = newlocale(0x1fbf,(char *)pbVar10,(__locale_t)0x0);
      *(__locale_t *)(this_06 + 0x10) = p_Var7;
      if (p_Var7 != (__locale_t)0x0) {
        *(undefined ***)this_06 = &PTR_FUN_0172fcb8;
        FUN_011f6348(param_1,this_06);
        goto LAB_011f6d6c;
      }
    }
    std::__ndk1::operator+
              ((__ndk1 *)"time_put_byname failed to construct for ",(char *)param_3,pbVar9);
    uVar8 = FUN_011f98b4(local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    std::__ndk1::__shared_weak_count::~__shared_weak_count(this_06);
    operator_delete(this_06);
    __cxa_begin_catch(uVar8);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    puVar11 = *(undefined8 **)(param_1 + 0x18);
    if (puVar11 != puVar5) {
      p_Var4 = (__shared_count *)*puVar5;
      uVar3 = 1;
      while( true ) {
        if (p_Var4 != (__shared_count *)0x0) {
          std::__ndk1::__shared_count::__release_shared(p_Var4);
          puVar5 = *(undefined8 **)(param_1 + 0x10);
          puVar11 = *(undefined8 **)(param_1 + 0x18);
        }
        if ((ulong)((long)puVar11 - (long)puVar5 >> 3) <= uVar3) break;
        p_Var4 = (__shared_count *)puVar5[uVar3];
        uVar3 = (ulong)((int)uVar3 + 1);
      }
    }
    uVar8 = __cxa_rethrow();
    __cxa_end_catch();
    if (((byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (param_1 + 0x120) & 1) == 0) {
      p_Var12 = *(__shared_weak_count **)p_Var12;
    }
    else {
      operator_delete(*(void **)(param_1 + 0x130));
      p_Var12 = *(__shared_weak_count **)p_Var12;
    }
    if (p_Var12 != (__shared_weak_count *)0x0) {
      *(__shared_weak_count **)(param_1 + 0x18) = p_Var12;
      if (p_Var12 == p_Var13) {
        *p_Var1 = (__shared_weak_count)0x0;
      }
      else {
        operator_delete(p_Var12);
      }
    }
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar8);
  }
LAB_011f6d6c:
  if ((param_4 >> 5 & 1) != 0) {
    puVar5 = operator_new(0x10);
    *puVar5 = &PTR__facet_017304d0;
    puVar5[1] = 0xffffffffffffffff;
    FUN_011f6478(param_1);
    puVar5 = operator_new(0x10);
    *puVar5 = &PTR__facet_01730528;
    puVar5[1] = 0xffffffffffffffff;
    FUN_011f65a8(param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

