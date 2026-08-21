
/* fairygui::Transition::setValue(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::vector<cocos2d::Value,
   std::__ndk1::allocator<cocos2d::Value> > const&) */

void __thiscall
fairygui::Transition::setValue(Transition *this,basic_string *param_1,vector *param_2)

{
  size_t __n;
  size_t sVar1;
  long *plVar2;
  basic_string bVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  basic_string *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  basic_string *pbVar10;
  void *pvVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined4 uVar16;
  Color4B local_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar14 = *(long **)(this + 0x48);
  plVar2 = *(long **)(this + 0x50);
  if (plVar14 != plVar2) {
    do {
      lVar15 = *plVar14;
      bVar5 = *(byte *)(lVar15 + 0x30);
      bVar3 = *param_1;
      uVar8 = (ulong)(bVar5 >> 1);
      sVar1 = uVar8;
      if ((bVar5 & 1) != 0) {
        sVar1 = *(size_t *)(lVar15 + 0x38);
      }
      __n = (ulong)((byte)bVar3 >> 1);
      if (((byte)bVar3 & 1) != 0) {
        __n = *(size_t *)(param_1 + 8);
      }
      if (sVar1 == __n) {
        pvVar11 = *(void **)(lVar15 + 0x40);
        if ((bVar5 & 1) == 0) {
          pvVar11 = (void *)(lVar15 + 0x31);
        }
        pbVar7 = param_1 + 1;
        if (((byte)bVar3 & 1) != 0) {
          pbVar7 = *(basic_string **)(param_1 + 0x10);
        }
        if ((bVar5 & 1) == 0) {
          if (sVar1 != 0) {
            pbVar10 = (basic_string *)(lVar15 + 0x31);
            do {
              if (*pbVar10 != *pbVar7) goto LAB_00a98420;
              uVar8 = uVar8 - 1;
              pbVar10 = pbVar10 + 1;
              pbVar7 = pbVar7 + 1;
            } while (uVar8 != 0);
          }
LAB_00a984a8:
          lVar13 = *(long *)(lVar15 + 0x28);
          if (lVar13 == 0) goto LAB_00a984d4;
LAB_00a984b0:
          puVar9 = (undefined8 *)(lVar13 + 0x10);
        }
        else {
          if (sVar1 == 0) goto LAB_00a984a8;
          iVar6 = memcmp(pvVar11,pbVar7,sVar1);
          lVar13 = *(long *)(lVar15 + 0x28);
          if (iVar6 != 0) goto joined_r0x00a984a0;
          if (lVar13 != 0) goto LAB_00a984b0;
LAB_00a984d4:
          puVar9 = (undefined8 *)(lVar15 + 0x48);
        }
LAB_00a984d8:
        if (*(uint *)(lVar15 + 0x20) < 0x10) {
          pbVar12 = (byte *)*puVar9;
          switch(*(uint *)(lVar15 + 0x20)) {
          default:
            pbVar12[0x10] = 1;
            pbVar12[0x11] = 1;
            uVar16 = cocos2d::Value::asFloat(*(Value **)param_2);
            *(undefined4 *)pbVar12 = uVar16;
            lVar15 = *(long *)param_2;
LAB_00a98510:
            uVar16 = cocos2d::Value::asFloat((Value *)(lVar15 + 0x10));
            *(undefined4 *)(pbVar12 + 4) = uVar16;
            break;
          case 4:
          case 5:
            uVar16 = cocos2d::Value::asFloat(*(Value **)param_2);
            *(undefined4 *)pbVar12 = uVar16;
            break;
          case 6:
            uVar16 = cocos2d::Value::asUnsignedInt(*(Value **)param_2);
            cocos2d::Color4B::Color4B
                      (&local_80,(uchar)((uint)uVar16 >> 0x10),(uchar)((uint)uVar16 >> 8),
                       (uchar)uVar16,(uchar)((uint)uVar16 >> 0x18));
            uVar16 = NEON_ucvtf((uint)(byte)local_80);
            *(undefined4 *)pbVar12 = uVar16;
            uVar16 = NEON_ucvtf((uint)bStack_7f);
            *(undefined4 *)(pbVar12 + 4) = uVar16;
            uVar16 = NEON_ucvtf((uint)bStack_7e);
            *(undefined4 *)(pbVar12 + 8) = uVar16;
            uVar16 = NEON_ucvtf((uint)bStack_7d);
            *(undefined4 *)(pbVar12 + 0xc) = uVar16;
            break;
          case 7:
            uVar16 = cocos2d::Value::asInt(*(Value **)param_2);
            *(undefined4 *)pbVar12 = uVar16;
            if (1 < (ulong)(*(long *)(param_2 + 8) - *(long *)param_2 >> 4)) {
              bVar5 = cocos2d::Value::asBool((Value *)(*(long *)param_2 + 0x10));
              pbVar12[4] = bVar5 & 1;
            }
            break;
          case 8:
            bVar5 = cocos2d::Value::asBool(*(Value **)param_2);
            *pbVar12 = bVar5 & 1;
            break;
          case 9:
            cocos2d::Value::asString();
            if ((*pbVar12 & 1) == 0) {
              pbVar12[0] = 0;
              pbVar12[1] = 0;
            }
            else {
              **(undefined1 **)(pbVar12 + 0x10) = 0;
              pbVar12[8] = 0;
              pbVar12[9] = 0;
              pbVar12[10] = 0;
              pbVar12[0xb] = 0;
              pbVar12[0xc] = 0;
              pbVar12[0xd] = 0;
              pbVar12[0xe] = 0;
              pbVar12[0xf] = 0;
              if ((*pbVar12 & 1) != 0) {
                operator_delete(*(void **)(pbVar12 + 0x10));
                pbVar12[0] = 0;
                pbVar12[1] = 0;
                pbVar12[2] = 0;
                pbVar12[3] = 0;
                pbVar12[4] = 0;
                pbVar12[5] = 0;
                pbVar12[6] = 0;
                pbVar12[7] = 0;
              }
            }
            *(undefined8 *)(pbVar12 + 0x10) = local_70;
            *(undefined8 *)(pbVar12 + 8) = uStack_78;
            *(ulong *)pbVar12 =
                 CONCAT44(uStack_7c,
                          CONCAT13(bStack_7d,CONCAT12(bStack_7e,CONCAT11(bStack_7f,local_80))));
            if (1 < (ulong)(*(long *)(param_2 + 8) - *(long *)param_2 >> 4)) {
              uVar16 = cocos2d::Value::asFloat((Value *)(*(long *)param_2 + 0x10));
              *(undefined4 *)(pbVar12 + 0x18) = uVar16;
            }
            break;
          case 10:
            cocos2d::Value::asString();
            if ((*pbVar12 & 1) == 0) {
              pbVar12[0] = 0;
              pbVar12[1] = 0;
            }
            else {
              **(undefined1 **)(pbVar12 + 0x10) = 0;
              pbVar12[8] = 0;
              pbVar12[9] = 0;
              pbVar12[10] = 0;
              pbVar12[0xb] = 0;
              pbVar12[0xc] = 0;
              pbVar12[0xd] = 0;
              pbVar12[0xe] = 0;
              pbVar12[0xf] = 0;
              if ((*pbVar12 & 1) != 0) {
                operator_delete(*(void **)(pbVar12 + 0x10));
                pbVar12[0] = 0;
                pbVar12[1] = 0;
                pbVar12[2] = 0;
                pbVar12[3] = 0;
                pbVar12[4] = 0;
                pbVar12[5] = 0;
                pbVar12[6] = 0;
                pbVar12[7] = 0;
              }
            }
            *(undefined8 *)(pbVar12 + 0x10) = local_70;
            *(undefined8 *)(pbVar12 + 8) = uStack_78;
            *(ulong *)pbVar12 =
                 CONCAT44(uStack_7c,
                          CONCAT13(bStack_7d,CONCAT12(bStack_7e,CONCAT11(bStack_7f,local_80))));
            if (1 < (ulong)(*(long *)(param_2 + 8) - *(long *)param_2 >> 4)) {
              uVar16 = cocos2d::Value::asInt((Value *)(*(long *)param_2 + 0x10));
              *(undefined4 *)(pbVar12 + 0x18) = uVar16;
            }
            break;
          case 0xb:
            uVar16 = cocos2d::Value::asFloat(*(Value **)param_2);
            *(undefined4 *)pbVar12 = uVar16;
            lVar15 = *(long *)param_2;
            if (1 < (ulong)(*(long *)(param_2 + 8) - lVar15 >> 4)) goto LAB_00a98510;
            break;
          case 0xc:
            uVar16 = cocos2d::Value::asFloat(*(Value **)param_2);
            *(undefined4 *)pbVar12 = uVar16;
            uVar16 = cocos2d::Value::asFloat((Value *)(*(long *)param_2 + 0x10));
            *(undefined4 *)(pbVar12 + 4) = uVar16;
            uVar16 = cocos2d::Value::asFloat((Value *)(*(long *)param_2 + 0x20));
            *(undefined4 *)(pbVar12 + 8) = uVar16;
            uVar16 = cocos2d::Value::asFloat((Value *)(*(long *)param_2 + 0x30));
            *(undefined4 *)(pbVar12 + 0xc) = uVar16;
            break;
          case 0xe:
          case 0xf:
            cocos2d::Value::asString();
            if ((*pbVar12 & 1) == 0) {
              pbVar12[0] = 0;
              pbVar12[1] = 0;
            }
            else {
              **(undefined1 **)(pbVar12 + 0x10) = 0;
              pbVar12[8] = 0;
              pbVar12[9] = 0;
              pbVar12[10] = 0;
              pbVar12[0xb] = 0;
              pbVar12[0xc] = 0;
              pbVar12[0xd] = 0;
              pbVar12[0xe] = 0;
              pbVar12[0xf] = 0;
              if ((*pbVar12 & 1) != 0) {
                operator_delete(*(void **)(pbVar12 + 0x10));
                pbVar12[0] = 0;
                pbVar12[1] = 0;
                pbVar12[2] = 0;
                pbVar12[3] = 0;
                pbVar12[4] = 0;
                pbVar12[5] = 0;
                pbVar12[6] = 0;
                pbVar12[7] = 0;
              }
            }
            *(undefined8 *)(pbVar12 + 0x10) = local_70;
            *(undefined8 *)(pbVar12 + 8) = uStack_78;
            *(ulong *)pbVar12 =
                 CONCAT44(uStack_7c,
                          CONCAT13(bStack_7d,CONCAT12(bStack_7e,CONCAT11(bStack_7f,local_80))));
          }
        }
      }
      else {
LAB_00a98420:
        lVar13 = *(long *)(lVar15 + 0x28);
joined_r0x00a984a0:
        if (lVar13 != 0) {
          bVar5 = *(byte *)(lVar13 + 0x28);
          uVar8 = (ulong)(bVar5 >> 1);
          sVar1 = uVar8;
          if ((bVar5 & 1) != 0) {
            sVar1 = *(size_t *)(lVar13 + 0x30);
          }
          if (sVar1 == __n) {
            pvVar11 = *(void **)(lVar13 + 0x38);
            if ((bVar5 & 1) == 0) {
              pvVar11 = (void *)(lVar13 + 0x29);
            }
            pbVar7 = param_1 + 1;
            if (((byte)bVar3 & 1) != 0) {
              pbVar7 = *(basic_string **)(param_1 + 0x10);
            }
            if ((bVar5 & 1) == 0) {
              if (__n != 0) {
                pbVar10 = (basic_string *)(lVar13 + 0x29);
                do {
                  if (*pbVar10 != *pbVar7) goto LAB_00a98394;
                  uVar8 = uVar8 - 1;
                  pbVar10 = pbVar10 + 1;
                  pbVar7 = pbVar7 + 1;
                } while (uVar8 != 0);
              }
            }
            else if ((__n != 0) && (iVar6 = memcmp(pvVar11,pbVar7,__n), iVar6 != 0))
            goto LAB_00a98394;
            puVar9 = (undefined8 *)(lVar13 + 0x18);
            goto LAB_00a984d8;
          }
        }
      }
LAB_00a98394:
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar2);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

