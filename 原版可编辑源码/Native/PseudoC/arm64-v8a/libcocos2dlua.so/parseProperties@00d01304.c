
/* cocosbuilder::NodeLoader::parseProperties(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*) */

void cocosbuilder::NodeLoader::parseProperties(Node *param_1,Node *param_2,CCBReader *param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  byte bVar6;
  basic_string bVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  CCBAnimationManager *this;
  CCBFile *pCVar16;
  __Array *this_00;
  Ref *pRVar17;
  void *pvVar18;
  byte *pbVar19;
  ulong *puVar20;
  undefined8 uVar21;
  CCBReader *in_x3;
  char *pcVar22;
  void *pvVar23;
  long lVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined8 *puVar27;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  Size aSStack_88 [8];
  basic_string local_80 [16];
  char *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar10 = CCBReader::readInt(in_x3,false);
  iVar11 = CCBReader::readInt(in_x3,false);
  if (0 < iVar11 + iVar10) {
    pcVar22 = (char *)((ulong)local_80 | 1);
    iVar26 = 0;
    pvVar23 = (void *)((ulong)&local_a0 | 1);
    do {
      uVar12 = CCBReader::readInt(in_x3,false);
      CCBReader::readCachedString();
      bVar9 = CCBReader::readByte(in_x3);
      bVar8 = bVar9 < 2;
      if ((param_2 == (Node *)0x0) ||
         (lVar15 = __dynamic_cast(param_2,&cocos2d::Node::typeinfo,&CCBFile::typeinfo,0),
         lVar15 == 0)) {
        if (iVar10 <= iVar26) {
          this = (CCBAnimationManager *)CCBReader::getAnimationManager(in_x3);
          pCVar16 = (CCBFile *)CCBAnimationManager::getRootNode(this);
          if (param_2 == (Node *)pCVar16) {
            this_00 = (__Array *)(**(code **)(*(long *)param_2 + 0x2f0))(param_2);
            if (this_00 == (__Array *)0x0) {
              this_00 = (__Array *)cocos2d::__Array::create();
              (**(code **)(*(long *)param_2 + 0x300))(param_2,this_00);
            }
            pRVar17 = (Ref *)cocos2d::__String::create(local_80);
            cocos2d::__Array::addObject(this_00,pRVar17);
          }
        }
      }
      else {
        lVar15 = CCBFile::getCCBFileNode((CCBFile *)param_2);
        if ((lVar15 != 0) && (iVar10 <= iVar26)) {
          param_2 = (Node *)CCBFile::getCCBFileNode((CCBFile *)param_2);
          lVar15 = (**(code **)(*(long *)param_2 + 0x2f0))();
          if (lVar15 == 0) {
LAB_00d01500:
            bVar6 = 0;
          }
          else {
            lVar24 = **(long **)(lVar15 + 0x30);
            if (lVar24 < 1) goto LAB_00d01500;
            puVar25 = (undefined8 *)(*(long **)(lVar15 + 0x30))[2];
            puVar27 = puVar25 + lVar24 + -1;
            for (; (puVar25 <= puVar27 && ((__String *)*puVar25 != (__String *)0x0));
                puVar25 = puVar25 + 1) {
              pcVar1 = pcVar22;
              if (((byte)local_80[0] & 1) != 0) {
                pcVar1 = local_70;
              }
              iVar13 = cocos2d::__String::compare((__String *)*puVar25,pcVar1);
              if (iVar13 == 0) {
                bVar6 = 1;
                goto LAB_00d01504;
              }
            }
            bVar6 = 0;
          }
LAB_00d01504:
          bVar8 = (bool)(bVar9 < 2 & bVar6);
        }
      }
      switch(uVar12) {
      case 0:
        (**(code **)(*(long *)param_1 + 0x30))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x110))(param_1,param_2,param_3,pcVar1);
        }
        break;
      case 1:
        (**(code **)(*(long *)param_1 + 0x48))(&local_a0,param_1,param_2,param_3);
        pcVar1 = local_70;
        bVar7 = local_80[0];
        if (bVar8) {
          cocos2d::Size::Size(aSStack_88,(Size *)&local_a0);
          pcVar2 = pcVar22;
          if (((byte)bVar7 & 1) != 0) {
            pcVar2 = pcVar1;
          }
          (**(code **)(*(long *)param_1 + 0x128))(param_1,param_2,param_3,pcVar2,aSStack_88);
        }
        break;
      case 2:
        (**(code **)(*(long *)param_1 + 0x38))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x118))(param_1,param_2,param_3,pcVar1);
        }
        break;
      case 3:
        (**(code **)(*(long *)param_1 + 0x40))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x120))(param_1,param_2,param_3,pcVar1);
        }
        break;
      case 4:
        pvVar18 = (void *)(**(code **)(*(long *)param_1 + 0x50))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x130))(param_1,param_2,param_3,pcVar1,pvVar18);
        }
        goto LAB_00d01e00;
      case 5:
        (**(code **)(*(long *)param_1 + 0x60))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x140))(param_1,param_2,param_3,pcVar1);
        }
        break;
      case 6:
        uVar14 = (**(code **)(*(long *)param_1 + 0x70))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x150))(param_1,param_2,param_3,pcVar1,uVar14);
        }
        break;
      case 7:
        (**(code **)(*(long *)param_1 + 0x58))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x138))(param_1,param_2,param_3,pcVar1);
        }
        break;
      case 8:
        pvVar18 = (void *)(**(code **)(*(long *)param_1 + 0x80))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x160))(param_1,param_2,param_3,pcVar1,pvVar18);
        }
        goto LAB_00d01e00;
      case 9:
        uVar12 = (**(code **)(*(long *)param_1 + 0x88))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x170))(param_1,param_2,param_3,pcVar1,uVar12 & 1);
        }
        break;
      case 10:
        uVar21 = (**(code **)(*(long *)param_1 + 0x90))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x178))(param_1,param_2,param_3,pcVar1,uVar21);
        }
        break;
      case 0xb:
        uVar21 = (**(code **)(*(long *)param_1 + 0xa0))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x188))(param_1,param_2,param_3,pcVar1,uVar21);
        }
        break;
      case 0xc:
        uVar14 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 400))(param_1,param_2,param_3,pcVar1,uVar14);
        }
        break;
      case 0xd:
        (**(code **)(*(long *)param_1 + 0xb0))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x198))(param_1,param_2,param_3,pcVar1);
        }
        break;
      case 0xe:
        pvVar18 = (void *)(**(code **)(*(long *)param_1 + 0xb8))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x1a0))(param_1,param_2,param_3,pcVar1,pvVar18);
        }
        goto LAB_00d01e00;
      case 0xf:
        pvVar18 = (void *)(**(code **)(*(long *)param_1 + 0xc0))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x1a8))(param_1,param_2,param_3,pcVar1,pvVar18);
        }
        goto LAB_00d01e00;
      case 0x10:
        uVar21 = (**(code **)(*(long *)param_1 + 200))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x1b0))(param_1,param_2,param_3,pcVar1,uVar21);
        }
        break;
      case 0x11:
        pbVar19 = (byte *)CCBReader::getCCBRootPath(in_x3);
        (**(code **)(*(long *)param_1 + 0xd0))(local_b8,param_1,param_2,param_3);
        uVar3 = *(ulong *)(pbVar19 + 8);
        pbVar4 = *(byte **)(pbVar19 + 0x10);
        if ((*pbVar19 & 1) == 0) {
          pbVar4 = pbVar19 + 1;
          uVar3 = (ulong)(*pbVar19 >> 1);
        }
        puVar20 = (ulong *)std::__ndk1::
                           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           ::insert(local_b8,0,(char *)pbVar4,uVar3);
        local_90 = (void *)puVar20[2];
        uStack_98 = puVar20[1];
        local_a0 = *puVar20;
        puVar20[1] = 0;
        puVar20[2] = 0;
        *puVar20 = 0;
        if (((byte)local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          pvVar18 = pvVar23;
          if ((local_a0 & 1) != 0) {
            pvVar18 = local_90;
          }
          (**(code **)(*(long *)param_1 + 0x1b8))(param_1,param_2,param_3,pcVar1,pvVar18);
        }
        goto LAB_00d01fb0;
      case 0x12:
        (**(code **)(*(long *)param_1 + 0xe0))(&local_a0,param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          pvVar18 = pvVar23;
          if ((local_a0 & 1) != 0) {
            pvVar18 = local_90;
          }
          (**(code **)(*(long *)param_1 + 0x1c8))(param_1,param_2,param_3,pcVar1,pvVar18);
        }
        goto LAB_00d01fb0;
      case 0x13:
        (**(code **)(*(long *)param_1 + 0xe8))(&local_a0,param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          pvVar18 = pvVar23;
          if ((local_a0 & 1) != 0) {
            pvVar18 = local_90;
          }
          (**(code **)(*(long *)param_1 + 0x1d0))(param_1,param_2,param_3,pcVar1,pvVar18);
        }
        goto LAB_00d01fb0;
      case 0x14:
        uVar14 = (**(code **)(*(long *)param_1 + 0x78))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x158))(param_1,param_2,param_3,pcVar1,uVar14);
        }
        break;
      case 0x15:
        pvVar18 = (void *)(**(code **)(*(long *)param_1 + 0xf0))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x1d8))(param_1,param_2,param_3,pcVar1,pvVar18);
        }
LAB_00d01d38:
        if (pvVar18 != (void *)0x0) goto LAB_00d01d3c;
        break;
      case 0x16:
        uVar21 = (**(code **)(*(long *)param_1 + 0x98))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x180))(param_1,param_2,param_3,pcVar1,uVar21);
        }
        break;
      case 0x17:
        uVar21 = (**(code **)(*(long *)param_1 + 0x100))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x1e8))(param_1,param_2,param_3,pcVar1,uVar21);
        }
        break;
      case 0x18:
        (**(code **)(*(long *)param_1 + 0xd8))(&local_a0,param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          pvVar18 = pvVar23;
          if ((local_a0 & 1) != 0) {
            pvVar18 = local_90;
          }
          (**(code **)(*(long *)param_1 + 0x1c0))(param_1,param_2,param_3,pcVar1,pvVar18);
        }
LAB_00d01fb0:
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        break;
      case 0x19:
        pvVar18 = (void *)(**(code **)(*(long *)param_1 + 0xf8))(param_1,param_2,param_3);
        if (!bVar8 || pvVar18 == (void *)0x0) goto LAB_00d01d38;
        pcVar1 = pcVar22;
        if (((byte)local_80[0] & 1) != 0) {
          pcVar1 = local_70;
        }
        (**(code **)(*(long *)param_1 + 0x1e0))(param_1,param_2,param_3,pcVar1,pvVar18);
LAB_00d01d3c:
        operator_delete(pvVar18);
        break;
      case 0x1a:
        (**(code **)(*(long *)param_1 + 0x68))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x148))(param_1,param_2,param_3,pcVar1);
        }
        break;
      case 0x1b:
        pvVar18 = (void *)(**(code **)(*(long *)param_1 + 0x108))(param_1,param_2,param_3);
        if (bVar8) {
          pcVar1 = pcVar22;
          if (((byte)local_80[0] & 1) != 0) {
            pcVar1 = local_70;
          }
          (**(code **)(*(long *)param_1 + 0x168))(param_1,param_2,param_3,pcVar1,pvVar18);
        }
LAB_00d01e00:
        if (pvVar18 != (void *)0x0) {
          operator_delete__(pvVar18);
        }
        break;
      default:
        cocos2d::log("Unexpected property type: \'%d\'!\n",(ulong)uVar12);
      }
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      iVar26 = iVar26 + 1;
    } while (iVar26 != iVar11 + iVar10);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

