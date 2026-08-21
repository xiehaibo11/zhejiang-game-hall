
/* cocos2d::TextureCube::init(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

undefined8 __thiscall
cocos2d::TextureCube::init
          (TextureCube *this,basic_string *param_1,basic_string *param_2,basic_string *param_3,
          basic_string *param_4,basic_string *param_5,basic_string *param_6)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  basic_string *pbVar7;
  Image *pIVar8;
  long lVar9;
  uint local_70;
  uint local_6c;
  long local_68;
  
                    /* catch() { ... } // from try @ 00ff34dc with catch @ 00ff3474 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00ff3498 to 010f349f has its CatchHandler @ 00ff3524 */
  pbVar7 = param_1;
  if (*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x88) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar7 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar7 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
                    /* try { // try from 00ff34c4 to 010f34db has its CatchHandler @ 00ff352c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x88),(char *)pbVar7,uVar1);
    pbVar7 = *(basic_string **)(this + 0x88);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pbVar7 + 0x18) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
                    /* try { // try from 00ff34dc to 010f355f has its CatchHandler @ 00ff3474 */
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pbVar7 + 0x18),(char *)pbVar2,uVar1);
    pbVar7 = *(basic_string **)(this + 0x88);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pbVar7 + 0x30) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3) {
    uVar1 = *(ulong *)(param_3 + 8);
    pbVar2 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar2 = param_3 + 1;
      uVar1 = (ulong)((byte)*param_3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pbVar7 + 0x30),(char *)pbVar2,uVar1);
    pbVar7 = *(basic_string **)(this + 0x88);
  }
                    /* catch() { ... } // from try @ 00ff3498 with catch @ 00ff3524 */
                    /* catch() { ... } // from try @ 00ff34c4 with catch @ 00ff352c */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pbVar7 + 0x48) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4) {
    uVar1 = *(ulong *)(param_4 + 8);
    pbVar2 = *(basic_string **)(param_4 + 0x10);
    if (((byte)*param_4 & 1) == 0) {
      pbVar2 = param_4 + 1;
      uVar1 = (ulong)((byte)*param_4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pbVar7 + 0x48),(char *)pbVar2,uVar1);
    pbVar7 = *(basic_string **)(this + 0x88);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pbVar7 + 0x60) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_5) {
    uVar1 = *(ulong *)(param_5 + 8);
    pbVar2 = *(basic_string **)(param_5 + 0x10);
    if (((byte)*param_5 & 1) == 0) {
      pbVar2 = param_5 + 1;
      uVar1 = (ulong)((byte)*param_5 >> 1);
    }
                    /* try { // try from 00ff3574 to 010f35d3 has its CatchHandler @ 00ff3574
                       catch() { ... } // from try @ 00ff3574 with catch @ 00ff3574
                       catch() { ... } // from try @ 00ff3658 with catch @ 00ff3574
                       catch() { ... } // from try @ 00ff36a4 with catch @ 00ff3574 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pbVar7 + 0x60),(char *)pbVar2,uVar1);
    pbVar7 = *(basic_string **)(this + 0x88);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pbVar7 + 0x78) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_6) {
    uVar1 = *(ulong *)(param_6 + 8);
    pbVar2 = *(basic_string **)(param_6 + 0x10);
    if (((byte)*param_6 & 1) == 0) {
      pbVar2 = param_6 + 1;
      uVar1 = (ulong)((byte)*param_6 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pbVar7 + 0x78),(char *)pbVar2,uVar1);
  }
  puVar4 = operator_new(0x30);
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  uVar5 = createImage(param_1);
  *puVar4 = uVar5;
  uVar5 = createImage(param_2);
  puVar4[1] = uVar5;
                    /* try { // try from 00ff35d4 to 010f35f3 has its CatchHandler @ 00ff3750 */
  uVar5 = createImage(param_3);
  puVar4[2] = uVar5;
  uVar5 = createImage(param_4);
  puVar4[3] = uVar5;
  uVar5 = createImage(param_5);
  puVar4[4] = uVar5;
                    /* try { // try from 00ff35f8 to 010f35ff has its CatchHandler @ 00ff3740 */
  uVar5 = createImage(param_6);
  puVar4[5] = uVar5;
                    /* try { // try from 00ff3604 to 010f360b has its CatchHandler @ 00ff3730 */
  glGenTextures(1,&local_6c);
  GL::bindTextureN(0,local_6c,0x8513);
  lVar9 = 0;
                    /* try { // try from 00ff3628 to 010f3637 has its CatchHandler @ 00ff3720 */
  do {
    pIVar8 = (Image *)puVar4[lVar9];
    pvVar6 = (void *)getImageData(pIVar8,(PixelFormat *)&local_70);
                    /* try { // try from 00ff364c to 010f3657 has its CatchHandler @ 00ff36dc */
    if ((local_70 & 0xfffffffd) == 0) {
                    /* try { // try from 00ff36a4 to 010f3763 has its CatchHandler @ 00ff3574 */
      glTexImage2D((int)lVar9 + 0x8515,0,0x1908,*(undefined4 *)(pIVar8 + 0x38),
                   *(undefined4 *)(pIVar8 + 0x3c),0,0x1908,0x1401,pvVar6);
    }
    else {
                    /* try { // try from 00ff3658 to 010f3697 has its CatchHandler @ 00ff3574 */
      if (local_70 == 3) {
        glTexImage2D((int)lVar9 + 0x8515,0,0x1907,*(undefined4 *)(pIVar8 + 0x38),
                     *(undefined4 *)(pIVar8 + 0x3c),0,0x1907,0x1401,pvVar6);
      }
    }
    if ((pvVar6 != (void *)0x0) && (pvVar6 != *(void **)(pIVar8 + 0x28))) {
                    /* try { // try from 00ff3698 to 010f36a3 has its CatchHandler @ 00ff36d8 */
      operator_delete__(pvVar6);
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 6);
  glTexParameteri(0x8513,0x2800,0x2601);
                    /* catch() { ... } // from try @ 00ff3698 with catch @ 00ff36d8 */
                    /* catch() { ... } // from try @ 00ff364c with catch @ 00ff36dc */
  glTexParameteri(0x8513,0x2801,0x2601);
  glTexParameteri(0x8513,0x2802,0x812f);
  glTexParameteri(0x8513,0x2803,0x812f);
  *(uint *)(this + 0x30) = local_6c;
  GL::bindTextureN(0,0,0x8513);
                    /* catch() { ... } // from try @ 00ff3628 with catch @ 00ff3720 */
  if ((Ref *)*puVar4 != (Ref *)0x0) {
    Ref::release((Ref *)*puVar4);
  }
                    /* catch() { ... } // from try @ 00ff3604 with catch @ 00ff3730 */
  if ((Ref *)puVar4[1] != (Ref *)0x0) {
    Ref::release((Ref *)puVar4[1]);
  }
  if ((Ref *)puVar4[2] != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 00ff35f8 with catch @ 00ff3740 */
    Ref::release((Ref *)puVar4[2]);
  }
  if ((Ref *)puVar4[3] != (Ref *)0x0) {
    Ref::release((Ref *)puVar4[3]);
  }
                    /* catch() { ... } // from try @ 00ff35d4 with catch @ 00ff3750 */
  if ((Ref *)puVar4[4] != (Ref *)0x0) {
    Ref::release((Ref *)puVar4[4]);
  }
  if ((Ref *)puVar4[5] != (Ref *)0x0) {
    Ref::release((Ref *)puVar4[5]);
  }
  operator_delete(puVar4);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

