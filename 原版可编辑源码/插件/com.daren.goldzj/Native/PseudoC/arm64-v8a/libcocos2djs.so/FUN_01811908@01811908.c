
void FUN_01811908(undefined8 *param_1,basic_string *param_2,long param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  char *pcVar1;
  long lVar2;
  bool bVar3;
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
  long lVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *param_1 = &PTR_FUN_01cdb9e0;
  param_1[1] = param_3 + -1;
  param_1[7] = 0;
  param_1[6] = 0;
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
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[2] = param_1 + 6;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(this,param_2);
  if (((DAT_01d52de0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d52de0), iVar4 != 0)) {
    FUN_0180fcb8(&DAT_01d53a00,1);
    DAT_01d52dd0 = (undefined8 *)&DAT_01d53a00;
    DAT_01d52dd8 = &DAT_01d52dd0;
    __cxa_guard_release(&DAT_01d52de0);
  }
  if (DAT_01d52dd0 != param_1) {
    FUN_01828350(param_1 + 2,DAT_01d52dd0[2],DAT_01d52dd0[3]);
  }
  lVar9 = param_1[2];
  lVar10 = param_1[3];
  if (lVar10 != lVar9) {
    uVar12 = 0;
    uVar13 = 1;
    do {
      this_00 = *(__shared_count **)(lVar9 + uVar12 * 8);
      if (this_00 != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(this_00);
        lVar9 = param_1[2];
        lVar10 = param_1[3];
      }
      bVar3 = uVar13 < (ulong)(lVar10 - lVar9 >> 3);
      uVar12 = uVar13;
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (bVar3);
  }
  this_01 = operator_new(0x18);
  std::__ndk1::collate_byname<char>::collate_byname(this_01,(basic_string *)this,0);
  FUN_018120f0(param_1,this_01);
  this_02 = operator_new(0x18);
  std::__ndk1::collate_byname<wchar_t>::collate_byname(this_02,(basic_string *)this,0);
  FUN_01812220(param_1,this_02);
  this_03 = operator_new(0x28);
  std::__ndk1::ctype_byname<char>::ctype_byname(this_03,(basic_string *)this,0);
  FUN_01812350(param_1,this_03);
  this_04 = operator_new(0x18);
  std::__ndk1::ctype_byname<wchar_t>::ctype_byname(this_04,(basic_string *)this,0);
  FUN_01812480(param_1,this_04);
  puVar5 = operator_new(0x10);
  *puVar5 = &PTR__codecvt_byname_01cddbc0;
  puVar5[1] = 0xffffffffffffffff;
  FUN_018125b0(param_1);
  this_05 = operator_new(0x18);
  pcVar11 = (char *)param_1[0x26];
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    pcVar11 = (char *)((long)param_1 + 0x121);
  }
  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt(this_05,pcVar11,0);
  *(undefined ***)this_05 = &PTR__codecvt_byname_01cddc38;
  FUN_018126e0(param_1,this_05);
  puVar5 = operator_new(0x10);
  *puVar5 = &PTR__codecvt_byname_01cddcb0;
  puVar5[1] = 0xffffffffffffffff;
  FUN_01812810(param_1);
  puVar5 = operator_new(0x10);
  *puVar5 = &PTR__codecvt_byname_01cddd28;
  puVar5[1] = 0xffffffffffffffff;
  FUN_01812940(param_1);
  this_06 = operator_new(0x30);
  *(undefined8 *)(this_06 + 0x28) = 0;
  *(undefined2 *)(this_06 + 0x10) = 0x2c2e;
  *(undefined ***)this_06 = &PTR__numpunct_01cdbce0;
  *(undefined8 *)(this_06 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(this_06 + 0x18) = 0;
  *(undefined8 *)(this_06 + 0x20) = 0;
  pcVar11 = (char *)((long)param_1 + 0x121);
  pcVar1 = pcVar11;
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    pcVar1 = (char *)param_1[0x26];
  }
  std::__ndk1::numpunct_byname<char>::__init(this_06,pcVar1);
  FUN_01812a70(param_1,this_06);
  this_07 = operator_new(0x30);
  *(undefined8 *)(this_07 + 0x28) = 0;
  *(undefined8 *)(this_07 + 0x10) = 0x2c0000002e;
  *(undefined8 *)(this_07 + 0x18) = 0;
  *(undefined8 *)(this_07 + 0x20) = 0;
  *(undefined ***)this_07 = &PTR__numpunct_01cdbd30;
  *(undefined8 *)(this_07 + 8) = 0xffffffffffffffff;
  pcVar1 = pcVar11;
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    pcVar1 = (char *)param_1[0x26];
  }
  std::__ndk1::numpunct_byname<wchar_t>::__init(this_07,pcVar1);
  FUN_01812ba0(param_1,this_07);
  pvVar6 = operator_new(0x88);
  FUN_01812e00(pvVar6,this,0);
  FUN_01812cd0(param_1,pvVar6);
  pvVar6 = operator_new(0x88);
  FUN_0181300c(pvVar6,this,0);
  FUN_01812edc(param_1,pvVar6);
  pvVar6 = operator_new(0x88);
  FUN_01813218(pvVar6,this,0);
  FUN_018130e8(param_1,pvVar6);
  pvVar6 = operator_new(0x88);
  FUN_01813424(pvVar6,this,0);
  FUN_018132f4(param_1,pvVar6);
  puVar5 = operator_new(0x440);
  *puVar5 = &PTR____shared_weak_count_01cdcd50;
  puVar5[1] = 0xffffffffffffffff;
  puVar5[2] = &PTR___weeks_01cdcdb0;
  std::__ndk1::__time_get_storage<char>::__time_get_storage
            ((__time_get_storage<char> *)(puVar5 + 3),(basic_string *)this);
  *puVar5 = &PTR_FUN_01cdcf60;
  puVar5[2] = &PTR_FUN_01cdcff8;
  FUN_01813500(param_1,puVar5);
  puVar5 = operator_new(0x440);
  *puVar5 = &PTR____shared_weak_count_01cdce60;
  puVar5[1] = 0xffffffffffffffff;
  puVar5[2] = &PTR___weeks_01cdcec0;
  std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
            ((__time_get_storage<wchar_t> *)(puVar5 + 3),(basic_string *)this);
  *puVar5 = &PTR_FUN_01cdd0a0;
  puVar5[2] = &PTR_FUN_01cdd138;
  FUN_01813630(param_1,puVar5);
  puVar5 = operator_new(0x18);
  *puVar5 = &PTR__facet_01cdbd80;
  puVar5[1] = 0xffffffffffffffff;
  pcVar1 = pcVar11;
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    pcVar1 = (char *)param_1[0x26];
  }
  pbVar8 = (basic_string *)0x0;
  p_Var7 = newlocale(0x1fbf,pcVar1,(__locale_t)0x0);
  puVar5[2] = p_Var7;
  if (p_Var7 == (__locale_t)0x0) {
    std::__ndk1::operator+((__ndk1 *)"time_put_byname failed to construct for ",(char *)this,pbVar8)
    ;
    FUN_01819190(auStack_80);
  }
  else {
    *puVar5 = &PTR_FUN_01cdd2b0;
    FUN_01813760(param_1,puVar5);
    puVar5 = operator_new(0x18);
    *puVar5 = &PTR__facet_01cdbd80;
    puVar5[1] = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
      pcVar11 = (char *)param_1[0x26];
    }
    pbVar8 = (basic_string *)0x0;
    p_Var7 = newlocale(0x1fbf,pcVar11,(__locale_t)0x0);
    puVar5[2] = p_Var7;
    if (p_Var7 != (__locale_t)0x0) {
      *puVar5 = &PTR_FUN_01cdd2f8;
      FUN_01813890(param_1,puVar5);
      puVar5 = operator_new(0x10);
      *puVar5 = &PTR__facet_01cddb10;
      puVar5[1] = 0xffffffffffffffff;
      FUN_018139c0(param_1);
      puVar5 = operator_new(0x10);
      *puVar5 = &PTR__facet_01cddb68;
      puVar5[1] = 0xffffffffffffffff;
      FUN_01813af0(param_1);
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
      goto LAB_01811ef8;
    }
  }
  std::__ndk1::operator+((__ndk1 *)"time_put_byname failed to construct for ",(char *)this,pbVar8);
  FUN_01819190(auStack_80);
LAB_01811ef8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

