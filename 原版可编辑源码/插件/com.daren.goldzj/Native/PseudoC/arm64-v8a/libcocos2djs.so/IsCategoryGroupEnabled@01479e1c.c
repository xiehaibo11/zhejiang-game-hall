
/* v8::platform::tracing::TraceConfig::IsCategoryGroupEnabled(char const*) const */

undefined8 __thiscall
v8::platform::tracing::TraceConfig::IsCategoryGroupEnabled(TraceConfig *this,char *param_1)

{
  byte *__s1;
  byte *pbVar1;
  byte bVar2;
  size_t sVar3;
  long lVar4;
  bool bVar5;
  byte *pbVar6;
  size_t sVar7;
  bool bVar8;
  int iVar9;
  size_t sVar10;
  byte *__s2;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong local_1a0;
  size_t local_198;
  byte *local_190;
  undefined **local_188;
  undefined8 local_180;
  undefined **local_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_198 = 0;
  local_190 = (byte *)0x0;
  local_1a0 = 0;
  sVar10 = strlen(param_1);
  if (0xffffffffffffffef < sVar10) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sVar10 < 0x17) {
    pbVar13 = (byte *)((ulong)&local_1a0 | 1);
    local_1a0 = CONCAT71(local_1a0._1_7_,(char)((int)sVar10 << 1));
    if (sVar10 == 0) goto LAB_01479ec0;
  }
  else {
    uVar14 = sVar10 + 0x10 & 0xfffffffffffffff0;
    pbVar13 = operator_new(uVar14);
    local_1a0 = uVar14 | 1;
    local_198 = sVar10;
    local_190 = pbVar13;
  }
  memcpy(pbVar13,param_1,sVar10);
LAB_01479ec0:
  pbVar13[sVar10] = 0;
  local_188 = (undefined **)0x1c670a0;
  local_108[0] = (undefined **)0x1c670c8;
  local_180 = 0;
  local_178 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init
            ((ios_base *)local_108,
             (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_170);
  local_78 = 0xffffffff;
  local_188 = &PTR__basic_stringstream_01c66f88;
  local_170 = &PTR__basic_streambuf_01c671a8;
  local_108[0] = &PTR__basic_stringstream_01c66fd8;
  local_80 = 0;
  local_178 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::locale::locale(alStack_168);
  local_170 = &PTR__basic_stringbuf_01c67100;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x18;
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &local_170,(basic_string *)&local_1a0);
  if ((local_1a0 & 1) != 0) {
    operator_delete(local_190);
  }
  do {
    if (*(int *)(alStack_168 + (long)local_188[-3]) != 0) {
      uVar11 = 0;
      goto LAB_0147a07c;
    }
    local_198 = 0;
    local_190 = (byte *)0x0;
    local_1a0 = 0;
    std::__ndk1::getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
              ((basic_istream *)&local_188,(basic_string *)&local_1a0,',');
    uVar14 = local_1a0;
    pbVar13 = *(byte **)(this + 8);
    pbVar1 = *(byte **)(this + 0x10);
    if (pbVar13 != pbVar1) {
      uVar12 = local_1a0 >> 1 & 0x7f;
      sVar10 = uVar12;
      __s1 = (byte *)((ulong)&local_1a0 | 1);
      if ((local_1a0 & 1) != 0) {
        sVar10 = local_198;
        __s1 = local_190;
      }
      do {
        bVar2 = *pbVar13;
        sVar3 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar3 = *(size_t *)(pbVar13 + 8);
        }
        if (sVar10 == sVar3) {
          __s2 = *(byte **)(pbVar13 + 0x10);
          if ((bVar2 & 1) == 0) {
            __s2 = pbVar13 + 1;
          }
          pbVar6 = (byte *)((ulong)&local_1a0 | 1);
          sVar3 = uVar12;
          sVar7 = sVar10;
          if ((uVar14 & 1) == 0) {
            while( true ) {
              if (sVar7 == 0) goto LAB_0147a078;
              if (*pbVar6 != *__s2) break;
              sVar3 = sVar3 - 1;
              __s2 = __s2 + 1;
              pbVar6 = pbVar6 + 1;
              sVar7 = sVar3;
            }
          }
          else if ((sVar10 == 0) || (iVar9 = memcmp(__s1,__s2,sVar10), iVar9 == 0)) {
            bVar8 = true;
            goto LAB_0147a068;
          }
        }
        pbVar13 = pbVar13 + 0x18;
      } while (pbVar13 != pbVar1);
    }
    bVar5 = false;
    bVar8 = false;
    if ((uVar14 & 1) != 0) {
LAB_0147a068:
      bVar5 = bVar8;
      operator_delete(local_190);
    }
  } while (!bVar5);
LAB_0147a078:
  uVar11 = 1;
LAB_0147a07c:
  local_188 = &PTR__basic_stringstream_01c66f88;
  local_178 = &PTR__basic_stringstream_01c66fb0;
  local_108[0] = &PTR__basic_stringstream_01c66fd8;
  local_170 = &PTR__basic_stringbuf_01c67100;
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  local_170 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_168);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

