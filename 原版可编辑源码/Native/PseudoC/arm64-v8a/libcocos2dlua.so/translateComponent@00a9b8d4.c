
/* WARNING: Type propagation algorithm not settling */
/* fairygui::TranslationHelper::translateComponent(fairygui::PackageItem*) */

void fairygui::TranslationHelper::translateComponent(PackageItem *param_1)

{
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *this;
  char *pcVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  long lVar12;
  basic_string *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong *puVar16;
  basic_string *pbVar17;
  basic_string *in_x2;
  int iVar18;
  char *pcVar19;
  ByteBuffer *this_00;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  byte local_128 [8];
  ulong local_120;
  char *local_118;
  ulong local_110;
  ulong uStack_108;
  char *local_100;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d0;
  ulong uStack_c8;
  char *local_c0;
  Value aVStack_b8 [16];
  Value local_a8 [16];
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (DAT_017826a0 != 0) {
    std::__ndk1::operator+
              ((__ndk1 *)(*(long *)(param_1 + 0x28) + 0x28),(basic_string *)(param_1 + 0x38),in_x2);
    lVar12 = std::__ndk1::
             __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std...st,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>>>
             ::
             find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                       ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std___st,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>>>
                         *)&strings,(basic_string *)&local_d0);
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if (lVar12 != 0) {
      this_00 = *(ByteBuffer **)(param_1 + 0x88);
      ByteBuffer::seek(this_00,0,2);
      sVar6 = ByteBuffer::readShort(this_00);
      if (0 < sVar6) {
        pcVar19 = (char *)((ulong)&local_110 | 1);
        iVar20 = 0;
        this = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                *)(lVar12 + 0x28);
        do {
          sVar7 = ByteBuffer::readShort(this_00);
          iVar2 = *(int *)(this_00 + 0x1c);
          ByteBuffer::seek(this_00,iVar2,0);
          cVar4 = ByteBuffer::readByte(this_00);
          *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + 4;
          pbVar13 = (basic_string *)ByteBuffer::readS(this_00);
          iVar18 = (int)cVar4;
          if (cVar4 == '\t') {
            uVar14 = ByteBuffer::seek(this_00,iVar2,6);
            if ((uVar14 & 1) == 0) {
              iVar18 = 9;
            }
            else {
              cVar5 = ByteBuffer::readByte(this_00);
              iVar18 = (int)cVar5;
            }
          }
          ByteBuffer::seek(this_00,iVar2,1);
                    /* try { // try from 00a9ba84 to 00b9ba87 has its CatchHandler @ 00a9ba98 */
          FUN_007c1fb0(&local_d0,pbVar13,"-tips");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a9ba84 with catch @ 00a9ba98
                        */
          lVar12 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             (this,(basic_string *)&local_d0);
          if ((local_d0 & 1) != 0) {
            operator_delete(local_c0);
          }
          if (lVar12 != 0) {
            ByteBuffer::writeS(this_00,(basic_string *)(lVar12 + 0x28));
          }
                    /* try { // try from 00a9bad4 to 00b9bad7 has its CatchHandler @ 00a9baf0 */
          ByteBuffer::seek(this_00,iVar2,2);
          sVar8 = ByteBuffer::readShort(this_00);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a9bad4 with catch @ 00a9baf0
                        */
          if (0 < sVar8) {
            iVar21 = 0;
            do {
              sVar9 = ByteBuffer::readShort(this_00);
              iVar22 = *(int *)(this_00 + 0x1c);
              cVar5 = ByteBuffer::readByte(this_00);
              if (cVar5 == '\x06') {
                *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + 2;
                sVar10 = ByteBuffer::readShort(this_00);
                if (0 < sVar10) {
                  iVar23 = 0;
                  do {
                    pbVar15 = (byte *)ByteBuffer::readS(this_00);
                    uVar14 = (ulong)(*pbVar15 >> 1);
                    if ((*pbVar15 & 1) != 0) {
                      uVar14 = *(ulong *)(pbVar15 + 8);
                    }
                    if (uVar14 != 0) {
                      FUN_007c1fb0(&local_f0,pbVar13,"-texts_");
                      cocos2d::Value::Value((Value *)&local_90,iVar23);
                      cocos2d::Value::asString();
                      pcVar1 = pcVar19;
                      uVar14 = local_110 >> 1 & 0x7f;
                      if ((local_110 & 1) != 0) {
                        pcVar1 = local_100;
                        uVar14 = uStack_108;
                      }
                      puVar16 = (ulong *)std::__ndk1::
                                         basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                         ::append((
                                                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                                  *)&local_f0,pcVar1,uVar14);
                      local_c0 = (char *)puVar16[2];
                      uStack_c8 = puVar16[1];
                      local_d0 = *puVar16;
                      puVar16[1] = 0;
                      puVar16[2] = 0;
                      *puVar16 = 0;
                      lVar12 = std::__ndk1::
                               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                               ::
                               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                         (this,(basic_string *)&local_d0);
                      if ((local_d0 & 1) != 0) {
                        operator_delete(local_c0);
                      }
                      if ((local_110 & 1) != 0) {
                        operator_delete(local_100);
                      }
                      cocos2d::Value::~Value((Value *)&local_90);
                      if ((local_f0 & 1) != 0) {
                        operator_delete(local_e0);
                      }
                      if (lVar12 == 0) {
                        *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + 2;
                      }
                      else {
                        ByteBuffer::writeS(this_00,(basic_string *)(lVar12 + 0x28));
                      }
                    }
                    iVar23 = iVar23 + 1;
                  } while (sVar10 != iVar23);
                }
                uVar14 = ByteBuffer::readBool(this_00);
                if ((uVar14 & 1) != 0) {
                  FUN_007c1fb0(&local_d0,pbVar13,"-texts_def");
                  lVar12 = std::__ndk1::
                           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                           ::
                           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                     (this,(basic_string *)&local_d0);
                    /* try { // try from 00a9bc94 to 00b9bce7 has its CatchHandler @ 00a9bc94
                       catch() { ... } // from try @ 00a9bc94 with catch @ 00a9bc94
                       catch() { ... } // from try @ 00a9bdb0 with catch @ 00a9bc94
                       catch() { ... } // from try @ 00a9be50 with catch @ 00a9bc94 */
                  if ((local_d0 & 1) != 0) {
                    operator_delete(local_c0);
                  }
                  if (lVar12 != 0) {
                    ByteBuffer::writeS(this_00,(basic_string *)(lVar12 + 0x28));
                  }
                }
              }
              iVar21 = iVar21 + 1;
              *(int *)(this_00 + 0x1c) = iVar22 + sVar9;
            } while (iVar21 != sVar8);
          }
          if ((cVar4 == 9) && (1 < *(int *)this_00)) {
            ByteBuffer::seek(this_00,iVar2,4);
                    /* try { // try from 00a9bce8 to 00b9bcff has its CatchHandler @ 00a9be7c */
            *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + 2;
            sVar8 = ByteBuffer::readShort(this_00);
            *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + sVar8 * 4;
            sVar8 = ByteBuffer::readShort(this_00);
                    /* try { // try from 00a9bd04 to 00b9bd13 has its CatchHandler @ 00a9be78 */
            iVar21 = (int)sVar8;
            if (0 < iVar21) {
              do {
                pbVar17 = (basic_string *)ByteBuffer::readS(this_00);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)&local_d0,pbVar17);
                sVar8 = ByteBuffer::readShort(this_00);
                    /* try { // try from 00a9bd38 to 00b9bd43 has its CatchHandler @ 00a9be7c */
                if (sVar8 == 0) {
                  FUN_007c1fb0(&local_110,pbVar13,&DAT_013cdfed);
                  pcVar1 = (char *)((ulong)&local_d0 | 1);
                  uVar14 = local_d0 >> 1 & 0x7f;
                  if ((local_d0 & 1) != 0) {
                    pcVar1 = local_c0;
                    uVar14 = uStack_c8;
                  }
                  puVar16 = (ulong *)std::__ndk1::
                                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                               *)&local_110,pcVar1,uVar14);
                  local_e0 = (void *)puVar16[2];
                  uStack_e8 = puVar16[1];
                  local_f0 = *puVar16;
                  puVar16[1] = 0;
                  puVar16[2] = 0;
                  *puVar16 = 0;
                    /* try { // try from 00a9bdb0 to 00b9bdeb has its CatchHandler @ 00a9bc94 */
                  lVar12 = std::__ndk1::
                           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                           ::
                           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                     (this,(basic_string *)&local_f0);
                  if ((local_f0 & 1) != 0) {
                    operator_delete(local_e0);
                  }
                  if ((local_110 & 1) != 0) {
                    operator_delete(local_100);
                  }
                  if (lVar12 == 0) goto LAB_00a9bd40;
                    /* try { // try from 00a9bdec to 00b9bdff has its CatchHandler @ 00a9be7c */
                  ByteBuffer::writeS(this_00,(basic_string *)(lVar12 + 0x28));
                }
                else {
LAB_00a9bd40:
                  *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + 2;
                }
                if ((local_d0 & 1) != 0) {
                  operator_delete(local_c0);
                }
                    /* try { // try from 00a9bd14 to 00b9bd23 has its CatchHandler @ 00a9be74 */
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
            }
          }
          switch(iVar18) {
          case 6:
          case 7:
          case 8:
                    /* try { // try from 00a9be3c to 00b9be4f has its CatchHandler @ 00a9be8c */
            lVar12 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               (this,pbVar13);
            if (lVar12 != 0) {
                    /* try { // try from 00a9be50 to 00b9bec7 has its CatchHandler @ 00a9bc94 */
              ByteBuffer::seek(this_00,iVar2,6);
              ByteBuffer::writeS(this_00,(basic_string *)(lVar12 + 0x28));
            }
                    /* catch() { ... } // from try @ 00a9bd14 with catch @ 00a9be74 */
                    /* catch() { ... } // from try @ 00a9bd04 with catch @ 00a9be78 */
                    /* catch() { ... } // from try @ 00a9bce8 with catch @ 00a9be7c
                       catch() { ... } // from try @ 00a9bd38 with catch @ 00a9be7c
                       catch() { ... } // from try @ 00a9bdec with catch @ 00a9be7c */
            FUN_007c1fb0(&local_d0,pbVar13,"-prompt");
            lVar12 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               (this,(basic_string *)&local_d0);
                    /* catch() { ... } // from try @ 00a9bd54 with catch @ 00a9be8c
                       catch() { ... } // from try @ 00a9be3c with catch @ 00a9be8c */
            if ((local_d0 & 1) != 0) {
              operator_delete(local_c0);
            }
            if (lVar12 != 0) {
              ByteBuffer::seek(this_00,iVar2,4);
LAB_00a9b9c4:
              ByteBuffer::writeS(this_00,(basic_string *)(lVar12 + 0x28));
            }
            break;
          case 10:
            ByteBuffer::seek(this_00,iVar2,8);
            *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + 2;
            sVar8 = ByteBuffer::readShort(this_00);
            if (0 < sVar8) {
              iVar18 = 0;
              do {
                uVar11 = ByteBuffer::readUshort(this_00);
                iVar21 = *(int *)(this_00 + 0x1c);
                *(int *)(this_00 + 0x1c) = iVar21 + 2;
                FUN_007c1fb0(&local_f0,pbVar13,"-");
                    /* try { // try from 00a9c0a8 to 00b9c0f7 has its CatchHandler @ 00a9c0a8
                       catch() { ... } // from try @ 00a9c0a8 with catch @ 00a9c0a8
                       catch() { ... } // from try @ 00a9c130 with catch @ 00a9c0a8
                       catch() { ... } // from try @ 00a9c174 with catch @ 00a9c0a8 */
                cocos2d::Value::Value((Value *)&local_90,iVar18);
                cocos2d::Value::asString();
                pcVar1 = pcVar19;
                uVar14 = local_110 >> 1 & 0x7f;
                if ((local_110 & 1) != 0) {
                  pcVar1 = local_100;
                  uVar14 = uStack_108;
                }
                puVar16 = (ulong *)std::__ndk1::
                                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                   ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                             *)&local_f0,pcVar1,uVar14);
                local_c0 = (char *)puVar16[2];
                uStack_c8 = puVar16[1];
                local_d0 = *puVar16;
                puVar16[1] = 0;
                puVar16[2] = 0;
                *puVar16 = 0;
                    /* try { // try from 00a9c0f8 to 00b9c12f has its CatchHandler @ 00a9c1b4 */
                lVar12 = std::__ndk1::
                         __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                         ::
                         find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                   (this,(basic_string *)&local_d0);
                if ((local_d0 & 1) != 0) {
                  operator_delete(local_c0);
                }
                if ((local_110 & 1) != 0) {
                  operator_delete(local_100);
                }
                cocos2d::Value::~Value((Value *)&local_90);
                    /* try { // try from 00a9c130 to 00b9c15f has its CatchHandler @ 00a9c0a8 */
                if ((local_f0 & 1) != 0) {
                  operator_delete(local_e0);
                }
                if (lVar12 == 0) {
                  *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + 2;
                }
                else {
                  ByteBuffer::writeS(this_00,(basic_string *)(lVar12 + 0x28));
                }
                    /* try { // try from 00a9c160 to 00b9c173 has its CatchHandler @ 00a9c1b4 */
                FUN_007c1fb0(&local_110,pbVar13,"-");
                    /* try { // try from 00a9c174 to 00b9c1cf has its CatchHandler @ 00a9c0a8 */
                cocos2d::Value::Value(local_a8,iVar18);
                cocos2d::Value::asString();
                pcVar1 = (char *)((ulong)&local_90 | 1);
                uVar14 = local_90 >> 1 & 0x7f;
                if ((local_90 & 1) != 0) {
                  pcVar1 = local_80;
                  uVar14 = uStack_88;
                }
                puVar16 = (ulong *)std::__ndk1::
                                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                   ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                             *)&local_110,pcVar1,uVar14);
                local_e0 = (void *)puVar16[2];
                uStack_e8 = puVar16[1];
                local_f0 = *puVar16;
                    /* catch() { ... } // from try @ 00a9c0f8 with catch @ 00a9c1b4
                       catch() { ... } // from try @ 00a9c160 with catch @ 00a9c1b4 */
                puVar16[1] = 0;
                puVar16[2] = 0;
                *puVar16 = 0;
                    /* try { // try from 00a9c1d0 to 00b9c227 has its CatchHandler @ 00a9c1d0
                       catch() { ... } // from try @ 00a9c1d0 with catch @ 00a9c1d0
                       catch() { ... } // from try @ 00a9c2c0 with catch @ 00a9c1d0 */
                puVar16 = (ulong *)std::__ndk1::
                                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                   ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                             *)&local_f0,"-0",2);
                local_c0 = (char *)puVar16[2];
                uStack_c8 = puVar16[1];
                local_d0 = *puVar16;
                puVar16[1] = 0;
                puVar16[2] = 0;
                *puVar16 = 0;
                lVar12 = std::__ndk1::
                         __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                         ::
                         find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                   (this,(basic_string *)&local_d0);
                if ((local_d0 & 1) != 0) {
                  operator_delete(local_c0);
                }
                if ((local_f0 & 1) != 0) {
                  operator_delete(local_e0);
                }
                if ((local_90 & 1) != 0) {
                  operator_delete(local_80);
                }
                cocos2d::Value::~Value(local_a8);
                    /* try { // try from 00a9c228 to 00b9c23f has its CatchHandler @ 00a9c368 */
                if ((local_110 & 1) != 0) {
                  operator_delete(local_100);
                }
                if (lVar12 == 0) {
                  *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + 2;
                }
                else {
                  ByteBuffer::writeS(this_00,(basic_string *)(lVar12 + 0x28));
                    /* try { // try from 00a9c244 to 00b9c27f has its CatchHandler @ 00a9c364 */
                }
                if (1 < *(int *)this_00) {
                    /* try { // try from 00a9c28c to 00b9c2bf has its CatchHandler @ 00a9c36c */
                  *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + 6;
                  sVar9 = ByteBuffer::readShort(this_00);
                  *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + sVar9 * 4;
                  sVar9 = ByteBuffer::readShort(this_00);
                  iVar22 = (int)sVar9;
                  if (0 < iVar22) {
                    do {
                      pbVar17 = (basic_string *)ByteBuffer::readS(this_00);
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_d0,pbVar17);
                      sVar9 = ByteBuffer::readShort(this_00);
                      if (sVar9 == 0) {
                        FUN_007c1fb0(local_a8,pbVar13,"-");
                        cocos2d::Value::Value(aVStack_b8,iVar18);
                        cocos2d::Value::asString();
                        pcVar1 = (char *)((ulong)local_128 | 1);
                        uVar14 = (ulong)(local_128[0] >> 1);
                        if ((local_128[0] & 1) != 0) {
                          pcVar1 = local_118;
                          uVar14 = local_120;
                        }
                        puVar16 = (ulong *)std::__ndk1::
                                           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                           ::append((
                                                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                                  *)local_a8,pcVar1,uVar14);
                        local_80 = (char *)puVar16[2];
                        uStack_88 = puVar16[1];
                        local_90 = *puVar16;
                        puVar16[1] = 0;
                        puVar16[2] = 0;
                        *puVar16 = 0;
                    /* catch() { ... } // from try @ 00a9c244 with catch @ 00a9c364 */
                    /* catch() { ... } // from try @ 00a9c228 with catch @ 00a9c368 */
                    /* catch() { ... } // from try @ 00a9c28c with catch @ 00a9c36c */
                        puVar16 = (ulong *)std::__ndk1::
                                           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                           ::append((
                                                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                                  *)&local_90,"-",1);
                        local_100 = (char *)puVar16[2];
                        uStack_108 = puVar16[1];
                        local_110 = *puVar16;
                        puVar16[1] = 0;
                        puVar16[2] = 0;
                        *puVar16 = 0;
                        pcVar1 = (char *)((ulong)&local_d0 | 1);
                        uVar14 = local_d0 >> 1 & 0x7f;
                        if ((local_d0 & 1) != 0) {
                          pcVar1 = local_c0;
                          uVar14 = uStack_c8;
                        }
                        puVar16 = (ulong *)std::__ndk1::
                                           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                           ::append((
                                                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                                  *)&local_110,pcVar1,uVar14);
                        local_e0 = (void *)puVar16[2];
                        uStack_e8 = puVar16[1];
                        local_f0 = *puVar16;
                        puVar16[1] = 0;
                        puVar16[2] = 0;
                        *puVar16 = 0;
                        lVar12 = std::__ndk1::
                                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                                 ::
                                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                           (this,(basic_string *)&local_f0);
                        if ((local_f0 & 1) != 0) {
                          operator_delete(local_e0);
                        }
                        if ((local_110 & 1) != 0) {
                          operator_delete(local_100);
                        }
                        if ((local_90 & 1) != 0) {
                          operator_delete(local_80);
                        }
                        if ((local_128[0] & 1) != 0) {
                          operator_delete(local_118);
                        }
                        cocos2d::Value::~Value(aVStack_b8);
                        if (((byte)local_a8[0] & 1) != 0) {
                          operator_delete(local_98);
                        }
                        if (lVar12 == 0) goto LAB_00a9c2e8;
                        ByteBuffer::writeS(this_00,(basic_string *)(lVar12 + 0x28));
                      }
                      else {
LAB_00a9c2e8:
                        *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + 2;
                      }
                      if ((local_d0 & 1) != 0) {
                        operator_delete(local_c0);
                      }
                      iVar22 = iVar22 + -1;
                    /* try { // try from 00a9c2c0 to 00b9c387 has its CatchHandler @ 00a9c1d0 */
                    } while (iVar22 != 0);
                  }
                }
                iVar18 = iVar18 + 1;
                *(uint *)(this_00 + 0x1c) = iVar21 + (uVar11 & 0xffff);
              } while (iVar18 != sVar8);
            }
            break;
          case 0xb:
                    /* try { // try from 00a9c470 to 00b9c4bf has its CatchHandler @ 00a9c470
                       catch() { ... } // from try @ 00a9c470 with catch @ 00a9c470
                       catch() { ... } // from try @ 00a9c4f8 with catch @ 00a9c470
                       catch() { ... } // from try @ 00a9c53c with catch @ 00a9c470 */
            uVar14 = ByteBuffer::seek(this_00,iVar2,6);
            if (((uVar14 & 1) != 0) && (cVar4 = ByteBuffer::readByte(this_00), cVar4 == '\v')) {
              lVar12 = std::__ndk1::
                       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                       ::
                       find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                 (this,pbVar13);
              if (lVar12 == 0) {
                iVar18 = *(int *)(this_00 + 0x1c) + 2;
                *(int *)(this_00 + 0x1c) = iVar18;
              }
              else {
                ByteBuffer::writeS(this_00,(basic_string *)(lVar12 + 0x28));
                iVar18 = *(int *)(this_00 + 0x1c);
              }
              *(int *)(this_00 + 0x1c) = iVar18 + 2;
              uVar14 = ByteBuffer::readBool(this_00);
              iVar18 = *(int *)(this_00 + 0x1c);
              if ((uVar14 & 1) != 0) {
                    /* try { // try from 00a9c528 to 00b9c53b has its CatchHandler @ 00a9c57c */
                iVar18 = iVar18 + 4;
                *(int *)(this_00 + 0x1c) = iVar18;
              }
              *(int *)(this_00 + 0x1c) = iVar18 + 4;
                    /* try { // try from 00a9c53c to 00b9c597 has its CatchHandler @ 00a9c470 */
              uVar14 = ByteBuffer::readBool(this_00);
              if ((uVar14 & 1) != 0) {
                FUN_007c1fb0(&local_d0,pbVar13,"-prompt");
                lVar12 = std::__ndk1::
                         __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                         ::
                         find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                   (this,(basic_string *)&local_d0);
                goto LAB_00a9c564;
              }
            }
            break;
          case 0xc:
            uVar14 = ByteBuffer::seek(this_00,iVar2,6);
            if (((uVar14 & 1) != 0) && (cVar4 = ByteBuffer::readByte(this_00), cVar4 == '\f')) {
              lVar12 = std::__ndk1::
                       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                       ::
                       find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                 (this,pbVar13);
              if (lVar12 == 0) {
                *(int *)(this_00 + 0x1c) = *(int *)(this_00 + 0x1c) + 2;
              }
              else {
                ByteBuffer::writeS(this_00,(basic_string *)(lVar12 + 0x28));
              }
              FUN_007c1fb0(&local_d0,pbVar13,&DAT_013cdffa);
                    /* try { // try from 00a9c4f8 to 00b9c527 has its CatchHandler @ 00a9c470 */
              lVar12 = std::__ndk1::
                       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                       ::
                       find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                 (this,(basic_string *)&local_d0);
LAB_00a9c564:
              if ((local_d0 & 1) != 0) {
                operator_delete(local_c0);
              }
joined_r0x00a9c4c8:
              if (lVar12 != 0) goto LAB_00a9b9c4;
            }
            break;
          case 0xd:
            uVar14 = ByteBuffer::seek(this_00,iVar2,6);
            if (((uVar14 & 1) != 0) && (cVar4 = ByteBuffer::readByte(this_00), cVar4 == '\r')) {
              sVar8 = ByteBuffer::readShort(this_00);
              if (0 < sVar8) {
                iVar18 = 0;
                do {
                  sVar9 = ByteBuffer::readShort(this_00);
                  iVar21 = *(int *)(this_00 + 0x1c);
                  FUN_007c1fb0(&local_f0,pbVar13,"-");
                  cocos2d::Value::Value((Value *)&local_90,iVar18);
                  cocos2d::Value::asString();
                  pcVar1 = pcVar19;
                  uVar14 = local_110 >> 1 & 0x7f;
                  if ((local_110 & 1) != 0) {
                    pcVar1 = local_100;
                    uVar14 = uStack_108;
                  }
                  puVar16 = (ulong *)std::__ndk1::
                                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                               *)&local_f0,pcVar1,uVar14);
                  local_c0 = (char *)puVar16[2];
                  uStack_c8 = puVar16[1];
                  local_d0 = *puVar16;
                  puVar16[1] = 0;
                  puVar16[2] = 0;
                  *puVar16 = 0;
                  lVar12 = std::__ndk1::
                           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                           ::
                           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                     (this,(basic_string *)&local_d0);
                  if ((local_d0 & 1) != 0) {
                    operator_delete(local_c0);
                  }
                  if ((local_110 & 1) != 0) {
                    operator_delete(local_100);
                  }
                  cocos2d::Value::~Value((Value *)&local_90);
                  if ((local_f0 & 1) != 0) {
                    operator_delete(local_e0);
                  }
                  if (lVar12 != 0) {
                    ByteBuffer::writeS(this_00,(basic_string *)(lVar12 + 0x28));
                  }
                  iVar18 = iVar18 + 1;
                  *(int *)(this_00 + 0x1c) = iVar21 + sVar9;
                } while (sVar8 != iVar18);
              }
                    /* try { // try from 00a9c4c0 to 00b9c4f7 has its CatchHandler @ 00a9c57c */
              lVar12 = std::__ndk1::
                       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                       ::
                       find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                 (this,pbVar13);
              goto joined_r0x00a9c4c8;
            }
          }
          iVar20 = iVar20 + 1;
          *(int *)(this_00 + 0x1c) = iVar2 + sVar7;
        } while (iVar20 != sVar6);
      }
    }
  }
                    /* catch() { ... } // from try @ 00a9c4c0 with catch @ 00a9c57c
                       catch() { ... } // from try @ 00a9c528 with catch @ 00a9c57c */
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

