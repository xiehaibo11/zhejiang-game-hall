
/* cocostudio::DataReaderHelper::decodeBoneDisplay(cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*, cocostudio::DataReaderHelper::_DataInfo*) */

ParticleDisplayData *
cocostudio::DataReaderHelper::decodeBoneDisplay
          (CocoLoader *param_1,stExpCocoNode *param_2,_DataInfo *param_3)

{
  ParticleDisplayData *pPVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  stExpCocoNode *this;
  char *pcVar9;
  ParticleDisplayData *this_00;
  stExpCocoNode *psVar10;
  size_t sVar11;
  long lVar12;
  void *pvVar13;
  ulong uVar14;
  double dVar15;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  this = (stExpCocoNode *)stExpCocoNode::GetChildArray(param_2,param_1);
  psVar10 = this + 0x10;
  pcVar9 = (char *)stExpCocoNode::GetName(psVar10,param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,pcVar9);
  stExpCocoNode::GetValue(psVar10,param_1);
  bVar5 = local_80[0];
  uVar14 = (ulong)((byte)local_80[0] >> 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar14 = local_78;
  }
  sVar11 = 0xb;
  if (uVar14 < 0xc) {
    sVar11 = uVar14;
  }
  if (sVar11 == 0) {
LAB_00c5175c:
    if (0xb < uVar14 != 10 < uVar14) {
      pcVar9 = (char *)stExpCocoNode::GetValue(psVar10,param_1);
      iVar6 = atoi(pcVar9);
      if (iVar6 == 0) {
        this_00 = operator_new(0x98,(nothrow_t *)&std::nothrow);
        if (this_00 != (ParticleDisplayData *)0x0) {
          SpriteDisplayData::SpriteDisplayData((SpriteDisplayData *)this_00);
        }
        pcVar9 = (char *)stExpCocoNode::GetValue(this,param_1);
        if (pcVar9 != (char *)0x0) {
          sVar11 = strlen(pcVar9);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this_00 + 0x28),pcVar9,sVar11);
        }
        psVar10 = (stExpCocoNode *)stExpCocoNode::GetChildArray(this + 0x20,param_1);
        if (psVar10 != (stExpCocoNode *)0x0) {
          uVar7 = stExpCocoNode::GetChildNum(psVar10);
          uVar14 = (ulong)uVar7;
          psVar10 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar10,param_1);
          if (0 < (int)uVar7) {
            pvVar13 = (void *)((ulong)local_80 | 1);
            do {
              pcVar9 = (char *)stExpCocoNode::GetName(psVar10,param_1);
              sVar11 = strlen(pcVar9);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (local_80,pcVar9,sVar11);
              pcVar9 = (char *)stExpCocoNode::GetValue(psVar10,param_1);
              bVar5 = local_80[0];
              uVar2 = (ulong)((byte)local_80[0] >> 1);
              if (((byte)local_80[0] & 1) != 0) {
                uVar2 = local_78;
              }
              sVar11 = uVar2;
              if (1 < uVar2) {
                sVar11 = 1;
              }
              if (sVar11 == 0) {
LAB_00c51ac0:
                if (1 < uVar2 == (uVar2 != 0)) {
                  if (sVar11 != 0) goto LAB_00c51b04;
                  goto LAB_00c51b24;
                }
                dVar15 = (double)cocos2d::utils::atof(pcVar9);
                *(float *)(this_00 + 100) = (float)(dVar15 * (double)s_PositionReadScale);
              }
              else {
                pvVar3 = pvVar13;
                if (((byte)local_80[0] & 1) != 0) {
                  pvVar3 = local_70;
                }
                iVar8 = memcmp(pvVar3,"x",sVar11);
                if (iVar8 == 0) goto LAB_00c51ac0;
LAB_00c51b04:
                pvVar3 = pvVar13;
                if (((byte)bVar5 & 1) != 0) {
                  pvVar3 = local_70;
                }
                iVar8 = memcmp(pvVar3,&DAT_014a23fd,sVar11);
                if (iVar8 == 0) {
LAB_00c51b24:
                  if (1 < uVar2 != (uVar2 != 0)) {
                    dVar15 = (double)cocos2d::utils::atof(pcVar9);
                    *(float *)(this_00 + 0x68) = (float)(dVar15 * (double)s_PositionReadScale);
                    goto LAB_00c51a40;
                  }
                }
                sVar11 = 2;
                if (uVar2 < 3) {
                  sVar11 = uVar2;
                }
                if (sVar11 == 0) {
LAB_00c51b6c:
                  if (2 < uVar2 == 1 < uVar2) {
                    if (sVar11 != 0) goto LAB_00c51b9c;
                    goto LAB_00c51bbc;
                  }
                  dVar15 = (double)cocos2d::utils::atof(pcVar9);
                  *(float *)(this_00 + 0x78) = (float)dVar15;
                }
                else {
                  pvVar3 = pvVar13;
                  if (((byte)bVar5 & 1) != 0) {
                    pvVar3 = local_70;
                  }
                  iVar8 = memcmp(pvVar3,"cX",sVar11);
                  if (iVar8 == 0) goto LAB_00c51b6c;
LAB_00c51b9c:
                  pvVar3 = pvVar13;
                  if (((byte)bVar5 & 1) != 0) {
                    pvVar3 = local_70;
                  }
                  iVar8 = memcmp(pvVar3,"cY",sVar11);
                  if (iVar8 == 0) {
LAB_00c51bbc:
                    if (2 < uVar2 == 1 < uVar2) {
                      if (sVar11 != 0) goto LAB_00c51bec;
                      goto LAB_00c51c0c;
                    }
                    dVar15 = (double)cocos2d::utils::atof(pcVar9);
                    *(float *)(this_00 + 0x7c) = (float)dVar15;
                  }
                  else {
LAB_00c51bec:
                    pvVar3 = pvVar13;
                    if (((byte)bVar5 & 1) != 0) {
                      pvVar3 = local_70;
                    }
                    iVar8 = memcmp(pvVar3,&DAT_0141ba7c,sVar11);
                    if (iVar8 == 0) {
LAB_00c51c0c:
                      if (2 < uVar2 == 1 < uVar2) {
                        if (sVar11 != 0) goto LAB_00c51c3c;
                        if (2 < uVar2 == 1 < uVar2) goto LAB_00c51a40;
                        goto LAB_00c51c74;
                      }
                      dVar15 = (double)cocos2d::utils::atof(pcVar9);
                      *(float *)(this_00 + 0x70) = (float)dVar15;
                    }
                    else {
LAB_00c51c3c:
                      pvVar3 = pvVar13;
                      if (((byte)bVar5 & 1) != 0) {
                        pvVar3 = local_70;
                      }
                      iVar8 = memcmp(pvVar3,&DAT_0141ba80,sVar11);
                      if ((iVar8 == 0) && (2 < uVar2 != 1 < uVar2)) {
LAB_00c51c74:
                        dVar15 = (double)cocos2d::utils::atof(pcVar9);
                        *(float *)(this_00 + 0x74) = (float)dVar15;
                      }
                    }
                  }
                }
              }
LAB_00c51a40:
              uVar14 = uVar14 - 1;
              psVar10 = psVar10 + 0x10;
            } while (uVar14 != 0);
          }
          *(ulong *)(this_00 + 100) =
               CONCAT44((float)((ulong)*(undefined8 *)(this_00 + 100) >> 0x20) *
                        *(float *)(param_3 + 0x38),
                        (float)*(undefined8 *)(this_00 + 100) * *(float *)(param_3 + 0x38));
        }
      }
      else if (iVar6 == 1) {
        this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
        if (this_00 != (ParticleDisplayData *)0x0) {
          ArmatureDisplayData::ArmatureDisplayData((ArmatureDisplayData *)this_00);
        }
        pcVar9 = (char *)stExpCocoNode::GetValue(param_2,param_1);
        if (pcVar9 != (char *)0x0) {
          sVar11 = strlen(pcVar9);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this_00 + 0x28),pcVar9,sVar11);
        }
      }
      else if (iVar6 == 2) {
        this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
        if (this_00 != (ParticleDisplayData *)0x0) {
          ParticleDisplayData::ParticleDisplayData(this_00);
        }
        uVar7 = stExpCocoNode::GetChildNum(param_2);
        uVar14 = (ulong)uVar7;
        psVar10 = (stExpCocoNode *)stExpCocoNode::GetChildArray(param_2,param_1);
        if (0 < (int)uVar7) {
          pPVar1 = this_00 + 0x28;
          do {
            pcVar9 = (char *)stExpCocoNode::GetName(psVar10,param_1);
            sVar11 = strlen(pcVar9);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_80,pcVar9,sVar11);
            lVar12 = stExpCocoNode::GetValue(psVar10,param_1);
            uVar2 = (ulong)((byte)local_80[0] >> 1);
            if (((byte)local_80[0] & 1) != 0) {
              uVar2 = local_78;
            }
            sVar11 = uVar2;
            if (4 < uVar2) {
              sVar11 = 5;
            }
            if (sVar11 == 0) {
LAB_00c518d8:
              if ((lVar12 != 0) && (uVar2 == 5)) {
                if (*(long *)param_3 == 0) {
                  FUN_007c1fb0(&local_98,param_3 + 0x58,lVar12);
                }
                else {
                  FUN_007c1fb0(&local_98,*(long *)param_3 + 0x38,lVar12);
                }
                if (((byte)*pPVar1 & 1) == 0) {
                  *(undefined2 *)pPVar1 = 0;
                }
                else {
                  **(undefined1 **)(this_00 + 0x38) = 0;
                  *(undefined8 *)(this_00 + 0x30) = 0;
                  if (((byte)this_00[0x28] & 1) != 0) {
                    operator_delete(*(void **)(this_00 + 0x38));
                    *(undefined8 *)(this_00 + 0x28) = 0;
                  }
                }
                *(undefined8 *)(this_00 + 0x38) = local_88;
                *(undefined8 *)(this_00 + 0x30) = uStack_90;
                *(undefined8 *)pPVar1 = local_98;
              }
            }
            else {
              pvVar13 = (void *)((ulong)local_80 | 1);
              if (((byte)local_80[0] & 1) != 0) {
                pvVar13 = local_70;
              }
              iVar8 = memcmp(pvVar13,"plist",sVar11);
              if (iVar8 == 0) goto LAB_00c518d8;
            }
            uVar14 = uVar14 - 1;
            psVar10 = psVar10 + 0x10;
          } while (uVar14 != 0);
        }
      }
      else {
        this_00 = operator_new(0x98,(nothrow_t *)&std::nothrow);
        if (this_00 != (ParticleDisplayData *)0x0) {
          SpriteDisplayData::SpriteDisplayData((SpriteDisplayData *)this_00);
        }
      }
      *(int *)(this_00 + 0x24) = iVar6;
      bVar5 = local_80[0];
      goto joined_r0x00c51ce4;
    }
  }
  else {
    pvVar13 = (void *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pvVar13 = local_70;
    }
    iVar6 = memcmp(pvVar13,"displayType",sVar11);
    if (iVar6 == 0) goto LAB_00c5175c;
  }
  this_00 = (ParticleDisplayData *)0x0;
joined_r0x00c51ce4:
  if (((byte)bVar5 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

