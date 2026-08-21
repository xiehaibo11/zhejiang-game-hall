
/* cocostudio::DataReaderHelper::decodeMovementBone(cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*, cocostudio::DataReaderHelper::_DataInfo*) */

MovementBoneData *
cocostudio::DataReaderHelper::decodeMovementBone
          (CocoLoader *param_1,stExpCocoNode *param_2,_DataInfo *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  MovementBoneData *this;
  long lVar11;
  char *pcVar12;
  size_t sVar13;
  stExpCocoNode *psVar14;
  FrameData **ppFVar15;
  Ref *pRVar16;
  long lVar17;
  ulong uVar18;
  void *pvVar19;
  ulong uVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  undefined8 *local_80;
  undefined8 *local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (MovementBoneData *)0x0) {
    MovementBoneData::MovementBoneData(this);
  }
  (**(code **)(*(long *)this + 0x10))(this);
  uVar8 = stExpCocoNode::GetChildNum(param_2);
  lVar11 = stExpCocoNode::GetChildArray(param_2,param_1);
  if (0 < (int)uVar8) {
    uVar18 = 0;
    pvVar19 = (void *)((ulong)&local_80 | 1);
    do {
      psVar14 = (stExpCocoNode *)(lVar11 + uVar18 * 0x10);
      pcVar12 = (char *)stExpCocoNode::GetName(psVar14,param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,pcVar12);
      pcVar12 = (char *)stExpCocoNode::GetValue(psVar14,param_1);
      puVar7 = local_80;
      puVar1 = (undefined8 *)((ulong)local_80 >> 1 & 0x7f);
      if (((ulong)local_80 & 1) != 0) {
        puVar1 = local_78;
      }
      puVar2 = (undefined8 *)0x4;
      if (puVar1 < (undefined8 *)0x5) {
        puVar2 = puVar1;
      }
      if (puVar2 == (undefined8 *)0x0) {
LAB_00c52378:
        if ((undefined8 *)0x4 < puVar1 == (undefined8 *)0x3 < puVar1) goto LAB_00c523b0;
        if (pcVar12 != (char *)0x0) {
          sVar13 = strlen(pcVar12);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0x30),pcVar12,sVar13);
        }
      }
      else {
        pvVar3 = pvVar19;
        if (((ulong)local_80 & 1) != 0) {
          pvVar3 = local_70;
        }
        iVar9 = memcmp(pvVar3,"name",(size_t)puVar2);
        if (iVar9 == 0) goto LAB_00c52378;
LAB_00c523b0:
        puVar2 = (undefined8 *)0x2;
        if (puVar1 < (undefined8 *)0x3) {
          puVar2 = puVar1;
        }
        if (puVar2 == (undefined8 *)0x0) {
LAB_00c523dc:
          if ((undefined8 *)0x2 < puVar1 != (undefined8 *)0x1 < puVar1) {
            if (pcVar12 != (char *)0x0) {
              dVar22 = (double)cocos2d::utils::atof(pcVar12);
              *(float *)(this + 0x24) = (float)dVar22;
            }
            goto LAB_00c524e0;
          }
        }
        else {
          pvVar3 = pvVar19;
          if (((ulong)puVar7 & 1) != 0) {
            pvVar3 = local_70;
          }
          iVar9 = memcmp(pvVar3,&DAT_01412b7c,(size_t)puVar2);
          if (iVar9 == 0) goto LAB_00c523dc;
        }
        puVar2 = (undefined8 *)&DAT_0000000a;
        if (puVar1 < (undefined8 *)0xb) {
          puVar2 = puVar1;
        }
        if (puVar2 != (undefined8 *)0x0) {
          pvVar3 = pvVar19;
          if (((ulong)puVar7 & 1) != 0) {
            pvVar3 = local_70;
          }
          iVar9 = memcmp(pvVar3,"frame_data",(size_t)puVar2);
          if (iVar9 != 0) goto LAB_00c524e0;
        }
        if (&DAT_0000000a < puVar1 != (undefined8 *)0x9 < puVar1) {
          uVar10 = stExpCocoNode::GetChildNum(psVar14);
          uVar20 = (ulong)uVar10;
          psVar14 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar14,param_1);
          if (0 < (int)uVar10) {
            do {
              pRVar16 = (Ref *)decodeFrame(param_1,psVar14,param_3);
              MovementBoneData::addFrameData(this,(FrameData *)pRVar16);
              cocos2d::Ref::release(pRVar16);
              if (*(float *)(param_3 + 0x74) < 0.3) {
                fVar21 = *(float *)(this + 0x2c);
                *(int *)(pRVar16 + 0x58) = (int)fVar21;
                *(float *)(this + 0x2c) = fVar21 + (float)*(int *)(pRVar16 + 0x5c);
              }
              uVar20 = uVar20 - 1;
              psVar14 = psVar14 + 0x10;
            } while (uVar20 != 0);
          }
        }
      }
LAB_00c524e0:
      if (((ulong)local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar8);
  }
  ppFVar15 = *(FrameData ***)(this + 0x48);
  fVar21 = *(float *)(param_3 + 0x74);
  lVar11 = (long)*(FrameData ***)(this + 0x50) - (long)ppFVar15;
  lVar17 = lVar11 >> 3;
  if (fVar21 < 1.0) {
    local_78 = (undefined8 *)0x0;
    local_70 = (void *)0x0;
    local_80 = (undefined8 *)0x0;
    lVar6 = lVar17;
    if ((MovementBoneData *)&local_80 != this + 0x48) {
      std::__ndk1::vector<cocostudio::FrameData*,std::__ndk1::allocator<cocostudio::FrameData*>>::
      assign<cocostudio::FrameData**>
                ((vector<cocostudio::FrameData*,std::__ndk1::allocator<cocostudio::FrameData*>> *)
                 &local_80,ppFVar15,*(FrameData ***)(this + 0x50));
      puVar7 = local_78;
      for (puVar1 = local_80; puVar1 != puVar7; puVar1 = puVar1 + 1) {
        cocos2d::Ref::retain((Ref *)*puVar1);
      }
    }
    while ((puVar7 = local_78, puVar1 = local_80, 0 < lVar11 && (lVar11 = lVar6 + -1, lVar11 != 0)))
    {
      lVar4 = local_80[lVar6 + -2];
      fVar23 = *(float *)(local_80[lVar6 + -1] + 0x30) - *(float *)(lVar4 + 0x30);
      fVar21 = *(float *)(local_80[lVar6 + -1] + 0x34) - *(float *)(lVar4 + 0x34);
      if ((fVar23 < -3.1415927) || (3.1415927 < fVar23)) {
        *(float *)(lVar4 + 0x30) =
             (float)(*(double *)(&DAT_01412ae8 + (ulong)(fVar23 < 0.0) * 8) +
                    (double)*(float *)(lVar4 + 0x30));
      }
      lVar6 = lVar11;
      if ((fVar21 < -3.1415927) || (3.1415927 < fVar21)) {
        *(float *)(lVar4 + 0x34) =
             (float)(*(double *)(&DAT_01412ae8 + (ulong)(fVar21 < 0.0) * 8) +
                    (double)*(float *)(lVar4 + 0x34));
      }
    }
    for (; puVar1 != puVar7; puVar1 = puVar1 + 1) {
      cocos2d::Ref::release((Ref *)*puVar1);
    }
    local_78 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      operator_delete(local_80);
    }
    fVar21 = *(float *)(param_3 + 0x74);
  }
  if ((fVar21 < 0.3) && (0 < *(long *)(this + 0x50) - *(long *)(this + 0x48))) {
    pRVar16 = *(Ref **)(*(long *)(this + 0x48) + (lVar17 + -1) * 8);
    MovementBoneData::addFrameData(this,(FrameData *)pRVar16);
    cocos2d::Ref::release(pRVar16);
    *(int *)(pRVar16 + 0x58) = (int)*(float *)(this + 0x2c);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

