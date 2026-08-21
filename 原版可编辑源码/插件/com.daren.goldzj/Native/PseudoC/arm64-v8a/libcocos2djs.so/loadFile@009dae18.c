
/* cocos2d::WebViewImpl::loadFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::WebViewImpl::loadFile(WebViewImpl *this,basic_string *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  void *__src;
  bool bVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  ulong *puVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  void *__dest;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  undefined1 local_a0;
  undefined4 uStack_9f;
  byte bStack_9b;
  byte bStack_9a;
  byte bStack_99;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  ulong local_80;
  byte *local_78;
  byte local_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined5 uStack_66;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined6 uStack_5f;
  undefined1 uStack_59;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  local_70 = 0x2c;
  uStack_5f = 0x2f7465737361;
  uStack_67 = 0x61;
  uStack_66 = 0x696f72646e;
  uStack_61 = 100;
  uStack_60 = 0x5f;
  uStack_6f = 0x2f2f3a656c6966;
  uStack_68 = 0x2f;
  uStack_59 = 0;
  plVar9 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar9 + 0x40))(local_88,plVar9,param_1);
  uStack_97 = 0;
  local_a0 = 0xe;
  uStack_9f = 0x65737361;
  bStack_9b = 0x74;
  bStack_9a = 0x73;
  bStack_99 = 0x2f;
  uStack_98 = 0;
  bVar7 = ((byte)local_88[0] & 1) != 0;
  pbVar2 = (byte *)((ulong)local_88 | 1);
  if (bVar7) {
    pbVar2 = local_78;
  }
  local_90 = 0;
  uStack_b0 = 0;
  local_a8 = (void *)0x0;
  uVar14 = (ulong)((byte)local_88[0] >> 1);
  if (bVar7) {
    uVar14 = local_80;
  }
  local_b8 = 0;
  if (6 < (long)uVar14) {
    pbVar1 = pbVar2 + uVar14;
    pbVar10 = pbVar2;
    uVar12 = uVar14;
    do {
      if ((uVar12 - 6 == 0) || (pbVar10 = memchr(pbVar10,0x61,uVar12 - 6), pbVar10 == (byte *)0x0))
      break;
                    /* try { // try from 009daf10 to 00adafbb has its CatchHandler @ 009db04c */
      iVar8 = memcmp(pbVar10,(void *)((ulong)&local_a0 | 1),7);
      if (iVar8 == 0) {
        if ((pbVar10 != pbVar1) && ((long)pbVar10 - (long)pbVar2 != -1)) {
          pbVar10 = pbVar2;
          if (uVar14 != 0) goto LAB_009daf68;
          uVar14 = 0xffffffffffffffff;
          goto LAB_009db12c;
        }
        break;
      }
      pbVar10 = pbVar10 + 1;
      uVar12 = (long)pbVar1 - (long)pbVar10;
    } while (6 < (long)uVar12);
  }
                    /* try { // try from 009dafbc to 00adb0a3 has its CatchHandler @ 009dae10 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_b8
         ,(char *)pbVar2,uVar14);
  goto LAB_009dafcc;
  while( true ) {
    uVar14 = uVar14 - 1;
    pbVar13 = pbVar1;
    pbVar10 = pbVar10 + 1;
    if (uVar14 == 0) break;
LAB_009daf68:
    bVar4 = *pbVar10;
    uVar5 = bVar4 - 0x61;
    pbVar13 = pbVar10;
    if ((((uVar5 < 0x13) && ((1 << (ulong)(uVar5 & 0x1f) & 0x40011U) != 0)) ||
        ((uint)bVar4 == (uint)bStack_9b)) || ((bVar4 == bStack_9a || (bVar4 == bStack_99)))) break;
  }
  uVar14 = (long)pbVar13 - (long)pbVar2;
  if (pbVar13 == pbVar1) {
    uVar14 = 0xffffffffffffffff;
  }
LAB_009db12c:
  puVar11 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::replace(local_88,uVar14,7,(char *)((ulong)&local_70 | 1),0x16);
  if (puVar11 != &local_b8) {
    uVar14 = puVar11[1];
    pbVar2 = (byte *)puVar11[2];
    if (((byte)*puVar11 & 1) == 0) {
      pbVar2 = (byte *)((long)puVar11 + 1);
      uVar14 = (ulong)(byte)((byte)*puVar11 >> 1);
    }
                    /* try { // try from 009db168 to 00adb177 has its CatchHandler @ 009db6f8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_b8,(char *)pbVar2,uVar14);
  }
LAB_009dafcc:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_59,CONCAT61(uStack_5f,uStack_60)));
  }
  __src = local_a8;
  uVar14 = uStack_b0;
  uStack_66 = 0;
  uStack_61 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_59 = 0;
  local_70 = 0x10;
  uStack_6f = 0x6c694664616f6c;
  uStack_68 = 0x65;
  uStack_67 = 0;
  uVar3 = *(undefined4 *)(this + 8);
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = (void *)0x0;
  if ((local_b8 & 1) == 0) {
    local_c0 = local_a8;
    uStack_c8 = uStack_b0;
    local_d0 = local_b8;
    goto LAB_009db0a0;
  }
  if (0xffffffffffffffef < uStack_b0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* catch() { ... } // from try @ 009daf10 with catch @ 009db04c */
  if (uStack_b0 < 0x17) {
    __dest = (void *)((ulong)&local_d0 | 1);
    local_d0 = (ulong)(byte)((int)uStack_b0 << 1);
    if (uStack_b0 != 0) goto LAB_009db08c;
  }
  else {
    uVar12 = uStack_b0 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar12);
    local_d0 = uVar12 | 1;
    uStack_c8 = uVar14;
    local_c0 = __dest;
LAB_009db08c:
    memcpy(__dest,__src,uVar14);
  }
  *(undefined1 *)((long)__dest + uVar14) = 0;
LAB_009db0a0:
                    /* try { // try from 009db0a4 to 00adb167 has its CatchHandler @ 009db0a4
                       catch() { ... } // from try @ 009db0a4 with catch @ 009db0a4
                       catch() { ... } // from try @ 009db5d8 with catch @ 009db0a4 */
  JniHelper::
  callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&DAT_01d38750,&local_70,uVar3,&local_d0);
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_70 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_59,CONCAT61(uStack_5f,uStack_60)));
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

