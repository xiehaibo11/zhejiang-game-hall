
void FUN_00a9ac0c(ByteBuffer *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  GPathPoint *__src;
  byte bVar2;
  char cVar3;
  short sVar4;
  TransitionItem *pTVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  ulong uVar8;
  Transition *pTVar9;
  GPath *this;
  void *pvVar10;
  char *pcVar11;
  float *pfVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ByteBuffer *unaff_x19;
  int unaff_w21;
  int unaff_w22;
  ulong uVar16;
  int unaff_w24;
  size_t __n;
  GPathPoint *__dest;
  ulong *unaff_x28;
  long unaff_x29;
  undefined4 uVar17;
  float fVar18;
  long in_stack_00000008;
  vector<fairygui::TransitionItem*,std::__ndk1::allocator<fairygui::TransitionItem*>>
  *in_stack_00000010;
  long in_stack_00000018;
  int iStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  
  do {
    cVar3 = fairygui::ByteBuffer::readByte(param_1);
    if (cVar3 == '\x02') {
      uStack0000000000000070 = fairygui::ByteBuffer::readFloat(unaff_x19);
      uStack0000000000000074 = fairygui::ByteBuffer::readFloat(unaff_x19);
      uStack0000000000000060 = fairygui::ByteBuffer::readFloat(unaff_x19);
      uStack0000000000000064 = fairygui::ByteBuffer::readFloat(unaff_x19);
      uStack0000000000000050 = fairygui::ByteBuffer::readFloat(unaff_x19);
      uStack0000000000000054 = fairygui::ByteBuffer::readFloat(unaff_x19);
      fairygui::GPathPoint::GPathPoint
                ((GPathPoint *)&stack0x00000028,(Vec3 *)&stack0x00000070,(Vec3 *)&stack0x00000060,
                 (Vec3 *)&stack0x00000050);
    }
    else if (cVar3 == 1) {
      uStack0000000000000070 = fairygui::ByteBuffer::readFloat(unaff_x19);
      uStack0000000000000074 = fairygui::ByteBuffer::readFloat(unaff_x19);
      uStack0000000000000060 = fairygui::ByteBuffer::readFloat(unaff_x19);
      uStack0000000000000064 = fairygui::ByteBuffer::readFloat(unaff_x19);
      fairygui::GPathPoint::GPathPoint
                ((GPathPoint *)&stack0x00000028,(Vec3 *)&stack0x00000070,(Vec3 *)&stack0x00000060);
    }
    else {
      uStack0000000000000070 = fairygui::ByteBuffer::readFloat(unaff_x19);
      uStack0000000000000074 = fairygui::ByteBuffer::readFloat(unaff_x19);
      fairygui::GPathPoint::GPathPoint((GPathPoint *)&stack0x00000028,&stack0x00000070,(int)cVar3);
    }
    __src = DAT_01782650;
    puVar13 = (undefined8 *)*unaff_x28;
    if (puVar13 < (undefined8 *)unaff_x28[1]) {
      DAT_01782658 = (GPathPoint *)(puVar13 + 5);
      puVar13[4] = in_stack_00000048;
      puVar13[1] = in_stack_00000030;
      *puVar13 = in_stack_00000028;
      puVar13[3] = in_stack_00000040;
      puVar13[2] = in_stack_00000038;
    }
    else {
      __n = (long)puVar13 - (long)DAT_01782650;
      uVar8 = ((long)__n >> 3) * -0x3333333333333333 + 1;
      if (0x666666666666666 < uVar8) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      lVar14 = (long)unaff_x28[1] - (long)DAT_01782650 >> 3;
      uVar16 = 0x666666666666666;
      if ((ulong)(lVar14 * -0x3333333333333333) < 0x333333333333333) {
        uVar15 = lVar14 * -0x6666666666666666;
        uVar16 = uVar8;
        if (uVar8 <= uVar15) {
          uVar16 = uVar15;
        }
        if (uVar16 != 0) goto LAB_00a9ad60;
        pvVar10 = (void *)0x0;
      }
      else {
LAB_00a9ad60:
        pvVar10 = operator_new(uVar16 * 0x28);
      }
      puVar13 = (undefined8 *)((long)pvVar10 + ((long)__n >> 3) * 8);
                    /* try { // try from 00a9ad74 to 00b9adbf has its CatchHandler @ 00a9ad74
                       catch() { ... } // from try @ 00a9ad74 with catch @ 00a9ad74
                       catch() { ... } // from try @ 00a9addc with catch @ 00a9ad74 */
      pvVar10 = (void *)((long)pvVar10 + uVar16 * 0x28);
      __dest = (GPathPoint *)((long)puVar13 - __n);
      puVar13[4] = in_stack_00000048;
      puVar13[1] = in_stack_00000030;
      *puVar13 = in_stack_00000028;
      puVar13[3] = in_stack_00000040;
      puVar13[2] = in_stack_00000038;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      DAT_01782650 = __dest;
      DAT_01782658 = (GPathPoint *)(puVar13 + 5);
      DAT_01782660 = pvVar10;
      if (__src != (GPathPoint *)0x0) {
                    /* try { // try from 00a9adc0 to 00b9addb has its CatchHandler @ 00a9ae58 */
        operator_delete(__src);
      }
    }
    unaff_w24 = unaff_w24 + -1;
    param_1 = unaff_x19;
    if (unaff_w24 == 0) {
      fairygui::GPath::create
                (*(GPath **)(*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) + 0x20),DAT_01782650,
                 (int)((ulong)((long)DAT_01782658 - (long)DAT_01782650) >> 3) * -0x33333333);
LAB_00a9a8a4:
      do {
        unaff_w21 = unaff_w21 + 1;
        *(int *)(unaff_x19 + 0x1c) = unaff_w22 + (short)uStack0000000000000024;
        if (unaff_w21 == iStack0000000000000020) {
          if (*(long *)(in_stack_00000008 + 0x28) == *(long *)(unaff_x29 + -0x58)) {
                    /* catch() { ... } // from try @ 00a9adc0 with catch @ 00a9ae58 */
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uStack0000000000000024 = fairygui::ByteBuffer::readShort(unaff_x19);
        unaff_w22 = *(int *)(unaff_x19 + 0x1c);
        fairygui::ByteBuffer::seek(unaff_x19,unaff_w22,0);
        pTVar5 = operator_new(0xa0);
        cVar3 = fairygui::ByteBuffer::readByte(unaff_x19);
        fairygui::TransitionItem::TransitionItem(pTVar5,(int)cVar3);
        *(TransitionItem **)(unaff_x29 + -0x60) = pTVar5;
        puVar13 = *(undefined8 **)(in_stack_00000018 + 0x50);
        if (puVar13 == *(undefined8 **)(in_stack_00000018 + 0x58)) {
          std::__ndk1::
          vector<fairygui::TransitionItem*,std::__ndk1::allocator<fairygui::TransitionItem*>>::
          __push_back_slow_path<fairygui::TransitionItem*const&>
                    (in_stack_00000010,(TransitionItem **)(unaff_x29 + -0x60));
        }
        else {
          *puVar13 = pTVar5;
          *(undefined8 **)(in_stack_00000018 + 0x50) = puVar13 + 1;
        }
        uVar17 = fairygui::ByteBuffer::readFloat(unaff_x19);
        **(undefined4 **)(unaff_x29 + -0x60) = uVar17;
        sVar4 = fairygui::ByteBuffer::readShort(unaff_x19);
        if (sVar4 < 0) {
          pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(*(long *)(unaff_x29 + -0x60) + 8);
          if (pbVar6 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&cocos2d::STD_STRING_EMPTY) {
            pcVar11 = DAT_01792428;
            uVar8 = DAT_01792420;
            if ((cocos2d::STD_STRING_EMPTY & 1) == 0) {
              pcVar11 = &DAT_01792419;
              uVar8 = (ulong)(cocos2d::STD_STRING_EMPTY >> 1);
            }
            goto LAB_00a9a9c8;
          }
        }
        else {
          lVar14 = fairygui::GComponent::getChildAt
                             (*(GComponent **)(in_stack_00000018 + 0x40),(int)sVar4);
          pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(*(long *)(unaff_x29 + -0x60) + 8);
          if (pbVar6 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)(lVar14 + 0x48)) {
            uVar8 = *(ulong *)(lVar14 + 0x50);
            pcVar11 = *(char **)(lVar14 + 0x58);
            if ((*(byte *)(lVar14 + 0x48) & 1) == 0) {
              pcVar11 = (char *)(lVar14 + 0x49);
              uVar8 = (ulong)(*(byte *)(lVar14 + 0x48) >> 1);
            }
LAB_00a9a9c8:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (pbVar6,pcVar11,uVar8);
          }
        }
        pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 fairygui::ByteBuffer::readS(unaff_x19);
        pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (*(long *)(unaff_x29 + -0x60) + 0x30);
        if (pbVar6 != pbVar7) {
          uVar8 = *(ulong *)(pbVar7 + 8);
          pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(pbVar7 + 0x10);
          if (((byte)*pbVar7 & 1) == 0) {
            pbVar1 = pbVar7 + 1;
            uVar8 = (ulong)((byte)*pbVar7 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pbVar6,(char *)pbVar1,uVar8);
        }
        uVar8 = fairygui::ByteBuffer::readBool(unaff_x19);
        if ((uVar8 & 1) == 0) {
                    /* try { // try from 00a9addc to 00b9ae8f has its CatchHandler @ 00a9ad74 */
          if (*(float *)(in_stack_00000018 + 0xb8) < **(float **)(unaff_x29 + -0x60)) {
            *(float *)(in_stack_00000018 + 0xb8) = **(float **)(unaff_x29 + -0x60);
          }
          pTVar9 = (Transition *)fairygui::ByteBuffer::seek(unaff_x19,unaff_w22,2);
          fairygui::Transition::decodeValue
                    (pTVar9,*(TransitionItem **)(unaff_x29 + -0x60),unaff_x19,
                     *(void **)(*(TransitionItem **)(unaff_x29 + -0x60) + 0x48));
          goto LAB_00a9a8a4;
        }
        fairygui::ByteBuffer::seek(unaff_x19,unaff_w22,1);
        pvVar10 = operator_new(0x70);
        *(undefined8 *)((long)pvVar10 + 0x28) = 0;
        *(undefined8 *)((long)pvVar10 + 0x20) = 0;
        *(undefined8 *)((long)pvVar10 + 0x38) = 0;
        *(undefined8 *)((long)pvVar10 + 0x30) = 0;
        *(undefined8 *)((long)pvVar10 + 0x18) = 0;
        *(undefined8 *)((long)pvVar10 + 0x10) = 0;
        *(undefined8 *)((long)pvVar10 + 0x60) = 0;
        *(undefined4 *)((long)pvVar10 + 4) = 5;
        puVar13 = operator_new(0x14);
        *puVar13 = 0;
        puVar13[1] = 0;
        *(undefined2 *)(puVar13 + 2) = 0x101;
        *(undefined1 *)((long)puVar13 + 0x12) = 0;
        *(undefined8 *)((long)pvVar10 + 0x10) = puVar13;
        puVar13 = operator_new(0x14);
        lVar14 = *(long *)(unaff_x29 + -0x60);
        *puVar13 = 0;
        puVar13[1] = 0;
        *(undefined2 *)(puVar13 + 2) = 0x101;
        *(undefined1 *)((long)puVar13 + 0x12) = 0;
        *(undefined8 **)((long)pvVar10 + 0x18) = puVar13;
        *(void **)(lVar14 + 0x28) = pvVar10;
        fVar18 = (float)fairygui::ByteBuffer::readFloat(unaff_x19);
        pfVar12 = *(float **)(unaff_x29 + -0x60);
        **(float **)(pfVar12 + 10) = fVar18;
        fVar18 = fVar18 + *pfVar12;
        if (*(float *)(in_stack_00000018 + 0xb8) < fVar18) {
          *(float *)(in_stack_00000018 + 0xb8) = fVar18;
        }
        cVar3 = fairygui::ByteBuffer::readByte(unaff_x19);
        *(int *)(*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) + 4) = (int)cVar3;
        uVar17 = fairygui::ByteBuffer::readInt(unaff_x19);
        *(undefined4 *)(*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) + 8) = uVar17;
        bVar2 = fairygui::ByteBuffer::readBool(unaff_x19);
        *(byte *)(*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) + 0xc) = bVar2 & 1;
        pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 fairygui::ByteBuffer::readS(unaff_x19);
        pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) + 0x28);
        if (pbVar6 != pbVar7) {
          uVar8 = *(ulong *)(pbVar7 + 8);
          pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(pbVar7 + 0x10);
          if (((byte)*pbVar7 & 1) == 0) {
            pbVar1 = pbVar7 + 1;
            uVar8 = (ulong)((byte)*pbVar7 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pbVar6,(char *)pbVar1,uVar8);
        }
        pTVar9 = (Transition *)fairygui::ByteBuffer::seek(unaff_x19,unaff_w22,2);
        fairygui::Transition::decodeValue
                  (pTVar9,*(TransitionItem **)(unaff_x29 + -0x60),unaff_x19,
                   *(void **)(*(long *)(*(TransitionItem **)(unaff_x29 + -0x60) + 0x28) + 0x10));
        pTVar9 = (Transition *)fairygui::ByteBuffer::seek(unaff_x19,unaff_w22,3);
        fairygui::Transition::decodeValue
                  (pTVar9,*(TransitionItem **)(unaff_x29 + -0x60),unaff_x19,
                   *(void **)(*(long *)(*(TransitionItem **)(unaff_x29 + -0x60) + 0x28) + 0x18));
      } while ((*(int *)unaff_x19 < 2) ||
              (unaff_w24 = fairygui::ByteBuffer::readInt(unaff_x19), unaff_w24 < 1));
      this = operator_new(0x38);
      fairygui::GPath::GPath(this);
      *(GPath **)(*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) + 0x20) = this;
      DAT_01782658 = DAT_01782650;
      cocos2d::Vec3::Vec3((Vec3 *)&stack0x00000070);
      cocos2d::Vec3::Vec3((Vec3 *)&stack0x00000060);
      cocos2d::Vec3::Vec3((Vec3 *)&stack0x00000050);
    }
  } while( true );
}

