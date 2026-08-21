
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::DataReaderHelper::decodeFrame(cocostudio::CocoLoader*, cocostudio::stExpCocoNode*,
   cocostudio::DataReaderHelper::_DataInfo*) */

FrameData *
cocostudio::DataReaderHelper::decodeFrame
          (CocoLoader *param_1,stExpCocoNode *param_2,_DataInfo *param_3)

{
  size_t __n;
  size_t sVar1;
  long lVar2;
  double dVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FrameData *this;
  long lVar8;
  char *pcVar9;
  size_t sVar10;
  void *pvVar11;
  stExpCocoNode *psVar12;
  void *pvVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (this != (FrameData *)0x0) {
    FrameData::FrameData(this);
  }
  decodeNode((BaseData *)this,param_1,param_2,param_3);
  uVar5 = stExpCocoNode::GetChildNum(param_2);
  lVar8 = stExpCocoNode::GetChildArray(param_2,param_1);
  if (0 < (int)uVar5) {
    uVar16 = 0;
    pvVar13 = (void *)((ulong)local_80 | 1);
    do {
      psVar12 = (stExpCocoNode *)(lVar8 + uVar16 * 0x10);
      pcVar9 = (char *)stExpCocoNode::GetName(psVar12,param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_80,pcVar9);
      pcVar9 = (char *)stExpCocoNode::GetValue(psVar12,param_1);
      bVar4 = local_80[0];
      uVar14 = (ulong)((byte)local_80[0] >> 1);
      if (((byte)local_80[0] & 1) != 0) {
        uVar14 = local_78;
      }
      sVar10 = 3;
      if (uVar14 < 4) {
        sVar10 = uVar14;
      }
      if (sVar10 == 0) {
LAB_00c52890:
        if (3 < uVar14 == 2 < uVar14) goto LAB_00c528c8;
        *(undefined4 *)(this + 0x60) = 0;
        if (pcVar9 != (char *)0x0) {
          iVar6 = atoi(pcVar9);
          *(int *)(this + 0x60) = iVar6;
        }
      }
      else {
        pvVar11 = pvVar13;
        if (((byte)local_80[0] & 1) != 0) {
          pvVar11 = local_70;
        }
        iVar6 = memcmp(pvVar11,&DAT_01412b78,sVar10);
        if (iVar6 == 0) goto LAB_00c52890;
LAB_00c528c8:
        __n = 2;
        if (uVar14 < 3) {
          __n = uVar14;
        }
        if (__n == 0) {
LAB_00c528fc:
          if (2 < uVar14 != 1 < uVar14) {
            if (pcVar9 != (char *)0x0) {
              iVar6 = atoi(pcVar9);
              *(int *)(this + 0x74) = iVar6;
            }
            goto joined_r0x00c528c0;
          }
        }
        else {
          pvVar11 = pvVar13;
          if (((byte)bVar4 & 1) != 0) {
            pvVar11 = local_70;
          }
          iVar6 = memcmp(pvVar11,&DAT_01412ba9,__n);
          if (iVar6 == 0) goto LAB_00c528fc;
        }
        sVar1 = 6;
        if (uVar14 < 7) {
          sVar1 = uVar14;
        }
        if (sVar1 == 0) {
LAB_00c52964:
          if (6 < uVar14 == 5 < uVar14) {
            if (sVar1 != 0) goto LAB_00c529a0;
            goto LAB_00c529c4;
          }
          if (pcVar9 != (char *)0x0) {
            iVar6 = atoi(pcVar9);
            *(int *)(this + 0x78) = iVar6;
          }
        }
        else {
          pvVar11 = pvVar13;
          if (((byte)bVar4 & 1) != 0) {
            pvVar11 = local_70;
          }
          iVar6 = memcmp(pvVar11,&DAT_01412c79,sVar1);
          if (iVar6 == 0) goto LAB_00c52964;
LAB_00c529a0:
          pvVar11 = pvVar13;
          if (((byte)bVar4 & 1) != 0) {
            pvVar11 = local_70;
          }
          iVar6 = memcmp(pvVar11,&DAT_01412c80,sVar1);
          if (iVar6 == 0) {
LAB_00c529c4:
            if (6 < uVar14 != 5 < uVar14) {
              if (pcVar9 != (char *)0x0) {
                iVar6 = atoi(pcVar9);
                *(int *)(this + 0x7c) = iVar6;
              }
              goto joined_r0x00c528c0;
            }
          }
          sVar1 = 10;
          if (uVar14 < 0xb) {
            sVar1 = uVar14;
          }
          if (sVar1 == 0) {
LAB_00c52a2c:
            if (10 < uVar14 != 9 < uVar14) {
              this[0x70] = (FrameData)0x1;
              if ((pcVar9 != (char *)0x0) && (iVar6 = strcmp("1",pcVar9), iVar6 != 0)) {
                this[0x70] = (FrameData)0x0;
              }
              goto joined_r0x00c528c0;
            }
          }
          else {
            pvVar11 = pvVar13;
            if (((byte)bVar4 & 1) != 0) {
              pvVar11 = local_70;
            }
            iVar6 = memcmp(pvVar11,"tweenFrame",sVar1);
            if (iVar6 == 0) goto LAB_00c52a2c;
          }
          if (sVar10 == 0) {
            if (3 < uVar14 != 2 < uVar14) goto LAB_00c52ac4;
          }
          else {
            pvVar11 = pvVar13;
            if (((byte)bVar4 & 1) != 0) {
              pvVar11 = local_70;
            }
            iVar6 = memcmp(pvVar11,&DAT_01412b7f,sVar10);
            if ((iVar6 == 0) && (3 < uVar14 != 2 < uVar14)) {
LAB_00c52ac4:
              if (pcVar9 != (char *)0x0) {
                sVar10 = strlen(pcVar9);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(this + 0x80),pcVar9,sVar10);
              }
              goto joined_r0x00c528c0;
            }
          }
          if (__n == 0) {
LAB_00c52b3c:
            if (2 < uVar14 == 1 < uVar14) {
              if (__n != 0) goto LAB_00c52b9c;
              goto LAB_00c52bc0;
            }
            if ((*(float *)(param_3 + 0x74) < 0.3) &&
               (*(undefined4 *)(this + 0x5c) = 1, pcVar9 != (char *)0x0)) {
              iVar6 = atoi(pcVar9);
              *(int *)(this + 0x5c) = iVar6;
            }
          }
          else {
            pvVar11 = pvVar13;
            if (((byte)bVar4 & 1) != 0) {
              pvVar11 = local_70;
            }
            iVar6 = memcmp(pvVar11,"dr",__n);
            if (iVar6 == 0) goto LAB_00c52b3c;
LAB_00c52b9c:
            pvVar11 = pvVar13;
            if (((byte)bVar4 & 1) != 0) {
              pvVar11 = local_70;
            }
            iVar6 = memcmp(pvVar11,"fi",__n);
            if (iVar6 == 0) {
LAB_00c52bc0:
              if (2 < uVar14 != 1 < uVar14) {
                if ((pcVar9 != (char *)0x0) && (0.3 <= *(float *)(param_3 + 0x74))) {
                  iVar6 = atoi(pcVar9);
                  *(int *)(this + 0x58) = iVar6;
                }
                goto joined_r0x00c528c0;
              }
            }
            sVar10 = 4;
            if (uVar14 < 5) {
              sVar10 = uVar14;
            }
            if (sVar10 == 0) {
              if (4 < uVar14 != 3 < uVar14) goto LAB_00c52c78;
            }
            else {
              pvVar11 = pvVar13;
              if (((byte)bVar4 & 1) != 0) {
                pvVar11 = local_70;
              }
              iVar6 = memcmp(pvVar11,&DAT_01412c87,sVar10);
              if ((iVar6 == 0) && (4 < uVar14 != 3 < uVar14)) {
LAB_00c52c78:
                uVar7 = stExpCocoNode::GetChildNum(psVar12);
                if (uVar7 != 0) {
                  uVar14 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
                  if ((ulong)(long)(int)uVar7 >> 0x3e != 0) {
                    uVar14 = 0xffffffffffffffff;
                  }
                  pvVar11 = operator_new__(uVar14,(nothrow_t *)&std::nothrow);
                  *(void **)(this + 0x68) = pvVar11;
                  psVar12 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar12,param_1);
                  if (0 < (int)uVar7) {
                    lVar15 = 0;
                    do {
                      pcVar9 = (char *)stExpCocoNode::GetValue(psVar12,param_1);
                      if (pcVar9 != (char *)0x0) {
                        dVar3 = (double)cocos2d::utils::atof(pcVar9);
                        *(float *)(*(long *)(this + 0x68) + lVar15) = (float)dVar3;
                      }
                      lVar15 = lVar15 + 4;
                      psVar12 = psVar12 + 0x10;
                    } while ((ulong)uVar7 * 4 - lVar15 != 0);
                  }
                }
              }
            }
          }
        }
      }
joined_r0x00c528c0:
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

