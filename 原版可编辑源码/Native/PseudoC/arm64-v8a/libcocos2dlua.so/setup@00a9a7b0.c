
/* fairygui::Transition::setup(fairygui::ByteBuffer*) */

void __thiscall fairygui::Transition::setup(Transition *this,ByteBuffer *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  int iVar2;
  long lVar3;
  GPathPoint *__src;
  byte bVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar11;
  TransitionItem *pTVar12;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  undefined8 *puVar16;
  Transition *pTVar17;
  GPath *this_00;
  char *pcVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  GPathPoint *pGVar22;
  size_t __n;
  GPathPoint *__dest;
  float fVar23;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TransitionItem *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            ByteBuffer::readS(param_1);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x28) != pbVar11) {
    uVar14 = *(ulong *)(pbVar11 + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar11 + 0x10);
    if (((byte)*pbVar11 & 1) == 0) {
      pbVar1 = pbVar11 + 1;
      uVar14 = (ulong)((byte)*pbVar11 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x28),(char *)pbVar1,uVar14);
  }
  uVar9 = ByteBuffer::readInt(param_1);
  *(undefined4 *)(this + 0xb0) = uVar9;
  bVar4 = ByteBuffer::readBool(param_1);
  this[0xbc] = (Transition)(bVar4 & 1);
  uVar9 = ByteBuffer::readInt(param_1);
  *(undefined4 *)(this + 0xc0) = uVar9;
  uVar9 = ByteBuffer::readFloat(param_1);
  *(undefined4 *)(this + 0xc4) = uVar9;
  sVar6 = ByteBuffer::readShort(param_1);
  if (0 < sVar6) {
    iVar20 = 0;
    do {
      sVar7 = ByteBuffer::readShort(param_1);
      iVar2 = *(int *)(param_1 + 0x1c);
      ByteBuffer::seek(param_1,iVar2,0);
      pTVar12 = operator_new(0xa0);
      cVar5 = ByteBuffer::readByte(param_1);
      TransitionItem::TransitionItem(pTVar12,(int)cVar5);
      puVar16 = *(undefined8 **)(this + 0x50);
      local_70 = pTVar12;
      if (puVar16 == *(undefined8 **)(this + 0x58)) {
        std::__ndk1::
        vector<fairygui::TransitionItem*,std::__ndk1::allocator<fairygui::TransitionItem*>>::
        __push_back_slow_path<fairygui::TransitionItem*const&>
                  ((vector<fairygui::TransitionItem*,std::__ndk1::allocator<fairygui::TransitionItem*>>
                    *)(this + 0x48),&local_70);
      }
      else {
        *puVar16 = pTVar12;
        *(undefined8 **)(this + 0x50) = puVar16 + 1;
      }
      uVar9 = ByteBuffer::readFloat(param_1);
      *(undefined4 *)local_70 = uVar9;
      sVar8 = ByteBuffer::readShort(param_1);
      if (sVar8 < 0) {
        pTVar12 = local_70 + 8;
        if (pTVar12 != (TransitionItem *)&cocos2d::STD_STRING_EMPTY) {
          pcVar18 = DAT_01792428;
          uVar14 = DAT_01792420;
          if ((cocos2d::STD_STRING_EMPTY & 1) == 0) {
            pcVar18 = &DAT_01792419;
            uVar14 = (ulong)(cocos2d::STD_STRING_EMPTY >> 1);
          }
          goto LAB_00a9a9c8;
        }
      }
      else {
        lVar13 = GComponent::getChildAt(*(GComponent **)(this + 0x40),(int)sVar8);
        pTVar12 = local_70 + 8;
        if (pTVar12 != (TransitionItem *)(lVar13 + 0x48)) {
          uVar14 = *(ulong *)(lVar13 + 0x50);
          pcVar18 = *(char **)(lVar13 + 0x58);
          if ((*(byte *)(lVar13 + 0x48) & 1) == 0) {
            pcVar18 = (char *)(lVar13 + 0x49);
            uVar14 = (ulong)(*(byte *)(lVar13 + 0x48) >> 1);
          }
LAB_00a9a9c8:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)pTVar12,pcVar18,uVar14);
        }
      }
      pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                ByteBuffer::readS(param_1);
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (local_70 + 0x30) != pbVar11) {
        uVar14 = *(ulong *)(pbVar11 + 8);
        pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar11 + 0x10);
        if (((byte)*pbVar11 & 1) == 0) {
          pbVar1 = pbVar11 + 1;
          uVar14 = (ulong)((byte)*pbVar11 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_70 + 0x30),(char *)pbVar1,uVar14);
      }
      uVar14 = ByteBuffer::readBool(param_1);
      if ((uVar14 & 1) == 0) {
        if (*(float *)(this + 0xb8) < *(float *)local_70) {
          *(float *)(this + 0xb8) = *(float *)local_70;
        }
        pTVar17 = (Transition *)ByteBuffer::seek(param_1,iVar2,2);
        decodeValue(pTVar17,local_70,param_1,*(void **)(local_70 + 0x48));
      }
      else {
        ByteBuffer::seek(param_1,iVar2,1);
        pvVar15 = operator_new(0x70);
        *(undefined8 *)((long)pvVar15 + 0x28) = 0;
        *(undefined8 *)((long)pvVar15 + 0x20) = 0;
        *(undefined8 *)((long)pvVar15 + 0x38) = 0;
        *(undefined8 *)((long)pvVar15 + 0x30) = 0;
        *(undefined8 *)((long)pvVar15 + 0x18) = 0;
        *(undefined8 *)((long)pvVar15 + 0x10) = 0;
        *(undefined8 *)((long)pvVar15 + 0x60) = 0;
        *(undefined4 *)((long)pvVar15 + 4) = 5;
        puVar16 = operator_new(0x14);
        *puVar16 = 0;
        puVar16[1] = 0;
        *(undefined2 *)(puVar16 + 2) = 0x101;
        *(undefined1 *)((long)puVar16 + 0x12) = 0;
        *(undefined8 *)((long)pvVar15 + 0x10) = puVar16;
        puVar16 = operator_new(0x14);
        *puVar16 = 0;
        puVar16[1] = 0;
        *(undefined2 *)(puVar16 + 2) = 0x101;
        *(undefined1 *)((long)puVar16 + 0x12) = 0;
        *(undefined8 **)((long)pvVar15 + 0x18) = puVar16;
        *(void **)(local_70 + 0x28) = pvVar15;
        fVar23 = (float)ByteBuffer::readFloat(param_1);
        **(float **)(local_70 + 0x28) = fVar23;
        if (*(float *)(this + 0xb8) < fVar23 + *(float *)local_70) {
          *(float *)(this + 0xb8) = fVar23 + *(float *)local_70;
        }
        cVar5 = ByteBuffer::readByte(param_1);
        *(int *)(*(long *)(local_70 + 0x28) + 4) = (int)cVar5;
        uVar9 = ByteBuffer::readInt(param_1);
        *(undefined4 *)(*(long *)(local_70 + 0x28) + 8) = uVar9;
        bVar4 = ByteBuffer::readBool(param_1);
        *(byte *)(*(long *)(local_70 + 0x28) + 0xc) = bVar4 & 1;
        pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  ByteBuffer::readS(param_1);
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (*(long *)(local_70 + 0x28) + 0x28) != pbVar11) {
          uVar14 = *(ulong *)(pbVar11 + 8);
          pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(pbVar11 + 0x10);
          if (((byte)*pbVar11 & 1) == 0) {
            pbVar1 = pbVar11 + 1;
            uVar14 = (ulong)((byte)*pbVar11 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(*(long *)(local_70 + 0x28) + 0x28),(char *)pbVar1,uVar14);
        }
        pTVar17 = (Transition *)ByteBuffer::seek(param_1,iVar2,2);
        decodeValue(pTVar17,local_70,param_1,*(void **)(*(long *)(local_70 + 0x28) + 0x10));
        pTVar17 = (Transition *)ByteBuffer::seek(param_1,iVar2,3);
        decodeValue(pTVar17,local_70,param_1,*(void **)(*(long *)(local_70 + 0x28) + 0x18));
        if ((1 < *(int *)param_1) && (iVar10 = ByteBuffer::readInt(param_1), 0 < iVar10)) {
          this_00 = operator_new(0x38);
          GPath::GPath(this_00);
          *(GPath **)(*(long *)(local_70 + 0x28) + 0x20) = this_00;
          DAT_01782658 = DAT_01782650;
          cocos2d::Vec3::Vec3((Vec3 *)&uStack_80);
          cocos2d::Vec3::Vec3((Vec3 *)&uStack_90);
          cocos2d::Vec3::Vec3((Vec3 *)&uStack_a0);
          do {
            while( true ) {
              cVar5 = ByteBuffer::readByte(param_1);
              if (cVar5 == '\x02') {
                uStack_80 = ByteBuffer::readFloat(param_1);
                uStack_7c = ByteBuffer::readFloat(param_1);
                uStack_90 = ByteBuffer::readFloat(param_1);
                uStack_8c = ByteBuffer::readFloat(param_1);
                uStack_a0 = ByteBuffer::readFloat(param_1);
                uStack_9c = ByteBuffer::readFloat(param_1);
                GPathPoint::GPathPoint
                          ((GPathPoint *)&uStack_c8,(Vec3 *)&uStack_80,(Vec3 *)&uStack_90,
                           (Vec3 *)&uStack_a0);
              }
              else if (cVar5 == 1) {
                uStack_80 = ByteBuffer::readFloat(param_1);
                uStack_7c = ByteBuffer::readFloat(param_1);
                uStack_90 = ByteBuffer::readFloat(param_1);
                uStack_8c = ByteBuffer::readFloat(param_1);
                GPathPoint::GPathPoint
                          ((GPathPoint *)&uStack_c8,(Vec3 *)&uStack_80,(Vec3 *)&uStack_90);
              }
              else {
                uStack_80 = ByteBuffer::readFloat(param_1);
                uStack_7c = ByteBuffer::readFloat(param_1);
                GPathPoint::GPathPoint((GPathPoint *)&uStack_c8,&uStack_80,(int)cVar5);
              }
              __src = DAT_01782650;
              if (DAT_01782660 <= DAT_01782658) break;
              *(undefined8 *)(DAT_01782658 + 0x20) = uStack_a8;
              *(undefined8 *)(DAT_01782658 + 8) = uStack_c0;
              *(undefined8 *)DAT_01782658 = uStack_c8;
              *(undefined8 *)(DAT_01782658 + 0x18) = uStack_b0;
              *(undefined8 *)(DAT_01782658 + 0x10) = uStack_b8;
              DAT_01782658 = DAT_01782658 + 0x28;
LAB_00a9ac00:
              iVar10 = iVar10 + -1;
              if (iVar10 == 0) goto LAB_00a9adf8;
            }
            __n = (long)DAT_01782658 - (long)DAT_01782650;
            uVar14 = ((long)__n >> 3) * -0x3333333333333333 + 1;
            if (0x666666666666666 < uVar14) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            lVar13 = (long)DAT_01782660 - (long)DAT_01782650 >> 3;
            uVar21 = 0x666666666666666;
            if ((ulong)(lVar13 * -0x3333333333333333) < 0x333333333333333) {
              uVar19 = lVar13 * -0x6666666666666666;
              uVar21 = uVar14;
              if (uVar14 <= uVar19) {
                uVar21 = uVar19;
              }
              if (uVar21 != 0) goto LAB_00a9ad60;
              pvVar15 = (void *)0x0;
            }
            else {
LAB_00a9ad60:
              pvVar15 = operator_new(uVar21 * 0x28);
            }
            puVar16 = (undefined8 *)((long)pvVar15 + ((long)__n >> 3) * 8);
            pGVar22 = (GPathPoint *)((long)pvVar15 + uVar21 * 0x28);
            __dest = (GPathPoint *)((long)puVar16 - __n);
            puVar16[4] = uStack_a8;
            puVar16[1] = uStack_c0;
            *puVar16 = uStack_c8;
            puVar16[3] = uStack_b0;
            puVar16[2] = uStack_b8;
            if (0 < (long)__n) {
              memcpy(__dest,__src,__n);
            }
            DAT_01782650 = __dest;
            DAT_01782658 = (GPathPoint *)(puVar16 + 5);
            DAT_01782660 = pGVar22;
            if (__src == (GPathPoint *)0x0) goto LAB_00a9ac00;
            operator_delete(__src);
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
LAB_00a9adf8:
          GPath::create(*(GPath **)(*(long *)(local_70 + 0x28) + 0x20),DAT_01782650,
                        (int)((ulong)((long)DAT_01782658 - (long)DAT_01782650) >> 3) * -0x33333333);
        }
      }
      iVar20 = iVar20 + 1;
      *(int *)(param_1 + 0x1c) = iVar2 + sVar7;
    } while (iVar20 != sVar6);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

