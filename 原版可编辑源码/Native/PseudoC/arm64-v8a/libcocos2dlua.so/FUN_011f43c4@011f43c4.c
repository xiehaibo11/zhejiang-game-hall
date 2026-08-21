
void FUN_011f43c4(undefined8 *param_1,basic_string *param_2,long param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  __shared_count *this_00;
  collate_byname<char> *this_01;
  collate_byname<wchar_t> *this_02;
  ctype_byname<char> *this_03;
  ctype_byname<wchar_t> *this_04;
  undefined8 *puVar5;
  codecvt<wchar_t,char,mbstate_t> *this_05;
  numpunct_byname<char> *this_06;
  numpunct_byname<wchar_t> *this_07;
  void *pvVar6;
  __locale_t p_Var7;
  basic_string *pbVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *param_1 = &PTR_FUN_0172e3a0;
  param_1[1] = param_3 + -1;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[2] = param_1 + 6;
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[3] = param_1 + 0x22;
  param_1[4] = param_1 + 0x22;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(this,param_2);
  if (((DAT_017942f0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_017942f0), iVar4 != 0)) {
    FUN_011f2770(&DAT_01794f10,1);
    DAT_017942e0 = (undefined8 *)&DAT_01794f10;
    DAT_017942e8 = &DAT_017942e0;
    __cxa_guard_release(&DAT_017942f0);
  }
  if (DAT_017942e0 != param_1) {
    FUN_01207e60(param_1 + 2,DAT_017942e0[2],DAT_017942e0[3]);
  }
  puVar5 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  if (puVar9 != puVar5) {
    this_00 = (__shared_count *)*puVar5;
    uVar3 = 1;
    while( true ) {
      if (this_00 != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(this_00);
        puVar5 = (undefined8 *)param_1[2];
        puVar9 = (undefined8 *)param_1[3];
      }
      if ((ulong)((long)puVar9 - (long)puVar5 >> 3) <= uVar3) break;
      this_00 = (__shared_count *)puVar5[uVar3];
      uVar3 = (ulong)((int)uVar3 + 1);
    }
  }
  this_01 = operator_new(0x18);
  std::__ndk1::collate_byname<char>::collate_byname(this_01,(basic_string *)this,0);
  FUN_011f4ba8(param_1,this_01);
  this_02 = operator_new(0x18);
  std::__ndk1::collate_byname<wchar_t>::collate_byname(this_02,(basic_string *)this,0);
  FUN_011f4cd8(param_1,this_02);
  this_03 = operator_new(0x28);
  std::__ndk1::ctype_byname<char>::ctype_byname(this_03,(basic_string *)this,0);
  FUN_011f4e08(param_1,this_03);
  this_04 = operator_new(0x18);
  std::__ndk1::ctype_byname<wchar_t>::ctype_byname(this_04,(basic_string *)this,0);
  FUN_011f4f38(param_1,this_04);
  puVar5 = operator_new(0x10);
  *puVar5 = &PTR__codecvt_byname_01730580;
  puVar5[1] = 0xffffffffffffffff;
  FUN_011f5068(param_1);
  this_05 = operator_new(0x18);
  pcVar10 = (char *)param_1[0x26];
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    pcVar10 = (char *)((long)param_1 + 0x121);
  }
  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt(this_05,pcVar10,0);
  *(undefined ***)this_05 = &PTR__codecvt_byname_017305f8;
  FUN_011f5198(param_1,this_05);
  puVar5 = operator_new(0x10);
  *puVar5 = &PTR__codecvt_byname_01730670;
  puVar5[1] = 0xffffffffffffffff;
  FUN_011f52c8(param_1);
  puVar5 = operator_new(0x10);
  *puVar5 = &PTR__codecvt_byname_017306e8;
  puVar5[1] = 0xffffffffffffffff;
  FUN_011f53f8(param_1);
  this_06 = operator_new(0x30);
  *(undefined8 *)(this_06 + 0x28) = 0;
  *(undefined2 *)(this_06 + 0x10) = 0x2c2e;
  *(undefined ***)this_06 = &PTR__numpunct_0172e6a0;
  *(undefined8 *)(this_06 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(this_06 + 0x18) = 0;
  *(undefined8 *)(this_06 + 0x20) = 0;
  pcVar10 = (char *)((long)param_1 + 0x121);
  pcVar1 = pcVar10;
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    pcVar1 = (char *)param_1[0x26];
  }
  std::__ndk1::numpunct_byname<char>::__init(this_06,pcVar1);
  FUN_011f5528(param_1,this_06);
  this_07 = operator_new(0x30);
  *(undefined8 *)(this_07 + 0x28) = 0;
  *(undefined8 *)(this_07 + 0x10) = 0x2c0000002e;
  *(undefined8 *)(this_07 + 0x18) = 0;
  *(undefined8 *)(this_07 + 0x20) = 0;
  *(undefined ***)this_07 = &PTR__numpunct_0172e6f0;
  *(undefined8 *)(this_07 + 8) = 0xffffffffffffffff;
  pcVar1 = pcVar10;
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    pcVar1 = (char *)param_1[0x26];
  }
  std::__ndk1::numpunct_byname<wchar_t>::__init(this_07,pcVar1);
  FUN_011f5658(param_1,this_07);
  pvVar6 = operator_new(0x88);
  FUN_011f58b8(pvVar6,this,0);
  FUN_011f5788(param_1,pvVar6);
  pvVar6 = operator_new(0x88);
  FUN_011f5ac4(pvVar6,this,0);
  FUN_011f5994(param_1,pvVar6);
  pvVar6 = operator_new(0x88);
  FUN_011f5cd0(pvVar6,this,0);
  FUN_011f5ba0(param_1,pvVar6);
  pvVar6 = operator_new(0x88);
  FUN_011f5edc(pvVar6,this,0);
  FUN_011f5dac(param_1,pvVar6);
  puVar5 = operator_new(0x440);
  *puVar5 = &PTR____shared_weak_count_0172f710;
  puVar5[1] = 0xffffffffffffffff;
  puVar5[2] = &PTR___weeks_0172f770;
  std::__ndk1::__time_get_storage<char>::__time_get_storage
            ((__time_get_storage<char> *)(puVar5 + 3),(basic_string *)this);
  *puVar5 = &PTR_FUN_0172f920;
  puVar5[2] = &PTR_FUN_0172f9b8;
  FUN_011f5fb8(param_1,puVar5);
  puVar5 = operator_new(0x440);
  *puVar5 = &PTR____shared_weak_count_0172f820;
  puVar5[1] = 0xffffffffffffffff;
  puVar5[2] = &PTR___weeks_0172f880;
  std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
            ((__time_get_storage<wchar_t> *)(puVar5 + 3),(basic_string *)this);
  *puVar5 = &PTR_FUN_0172fa60;
  puVar5[2] = &PTR_FUN_0172faf8;
  FUN_011f60e8(param_1,puVar5);
  puVar5 = operator_new(0x18);
  *puVar5 = &PTR__facet_0172e740;
  puVar5[1] = 0xffffffffffffffff;
  pcVar1 = pcVar10;
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    pcVar1 = (char *)param_1[0x26];
  }
  pbVar8 = (basic_string *)0x0;
  p_Var7 = newlocale(0x1fbf,pcVar1,(__locale_t)0x0);
  puVar5[2] = p_Var7;
  if (p_Var7 == (__locale_t)0x0) {
    std::__ndk1::operator+((__ndk1 *)"time_put_byname failed to construct for ",(char *)this,pbVar8)
    ;
    FUN_011f98b4(auStack_80);
  }
  else {
    *puVar5 = &PTR_FUN_0172fc70;
    FUN_011f6218(param_1,puVar5);
    puVar5 = operator_new(0x18);
    *puVar5 = &PTR__facet_0172e740;
    puVar5[1] = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
      pcVar10 = (char *)param_1[0x26];
    }
    pbVar8 = (basic_string *)0x0;
    p_Var7 = newlocale(0x1fbf,pcVar10,(__locale_t)0x0);
    puVar5[2] = p_Var7;
    if (p_Var7 != (__locale_t)0x0) {
      *puVar5 = &PTR_FUN_0172fcb8;
      FUN_011f6348(param_1,puVar5);
      puVar5 = operator_new(0x10);
      *puVar5 = &PTR__facet_017304d0;
      puVar5[1] = 0xffffffffffffffff;
      FUN_011f6478(param_1);
      puVar5 = operator_new(0x10);
      *puVar5 = &PTR__facet_01730528;
      puVar5[1] = 0xffffffffffffffff;
      FUN_011f65a8(param_1);
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
      goto LAB_011f49a8;
    }
  }
  std::__ndk1::operator+((__ndk1 *)"time_put_byname failed to construct for ",(char *)this,pbVar8);
  FUN_011f98b4(auStack_80);
LAB_011f49a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

