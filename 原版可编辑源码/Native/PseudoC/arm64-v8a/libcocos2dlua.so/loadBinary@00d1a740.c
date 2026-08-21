
/* cocos2d::Bundle3D::loadBinary(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Bundle3D::loadBinary(Bundle3D *this,basic_string *param_1)

{
  BundleReader *this_00;
  Bundle3D *pBVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  size_t sVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  Data *this_01;
  uint uVar12;
  undefined1 auVar13 [16];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined1 local_78;
  undefined1 local_77;
  int local_74;
  char local_70 [24];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this_01 = (Data *)(this + 0xd0);
  (*(code *)**(undefined8 **)this)();
  Data::clear(this_01);
  plVar3 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar3 + 0x28))(&local_90,plVar3,param_1);
  Data::operator=(this_01,(Data *)&local_90);
  Data::~Data((Data *)&local_90);
  uVar4 = Data::isNull(this_01);
  if ((uVar4 & 1) == 0) {
    this_00 = (BundleReader *)(this + 0xe0);
    pcVar5 = (char *)Data::getBytes(this_01);
    lVar6 = Data::getSize(this_01);
    BundleReader::init(this_00,pcVar5,lVar6);
    lVar6 = BundleReader::read(this_00,&local_74,1,4);
    if ((lVar6 != 4) || (local_74 != 0x423343)) goto LAB_00d1a818;
    auVar13 = BundleReader::read(this_00,&local_78,1,2);
    if (auVar13._0_8_ == 2) {
      local_70[0] = '\0';
      local_70[1] = '\0';
      local_70[2] = '\0';
      local_70[3] = '\0';
      local_70[4] = '\0';
      local_70[5] = '\0';
      local_70[6] = '\0';
      local_70[7] = '\0';
      local_70[8] = '\0';
      local_70[9] = '\0';
      local_70[10] = '\0';
      local_70[0xb] = '\0';
      local_70[0xc] = '\0';
      local_70[0xd] = '\0';
      local_70[0xe] = '\0';
      local_70[0xf] = '\0';
      local_70[0x10] = '\0';
      local_70[0x11] = '\0';
      local_70[0x12] = '\0';
      local_70[0x13] = '\0';
      FUN_00d1c170(local_70,auVar13._8_8_,"%d.%d",local_78,local_77);
      sVar8 = strlen(local_70);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x38),local_70,sVar8);
      pBVar1 = this + 0x120;
      lVar6 = BundleReader::read(this_00,pBVar1,4,1);
      if (lVar6 == 1) {
        lVar6 = *(long *)(this + 0x128);
        if (lVar6 != 0) {
          lVar11 = *(long *)(lVar6 + -8);
          if (lVar11 != 0) {
            lVar11 = lVar11 << 5;
            do {
              if ((*(byte *)(lVar6 + lVar11 + -0x20) & 1) != 0) {
                operator_delete(*(void **)(lVar6 + lVar11 + -0x10));
              }
              lVar11 = lVar11 + -0x20;
            } while (lVar11 != 0);
          }
          operator_delete__((long *)(lVar6 + -8));
          *(undefined8 *)(this + 0x128) = 0;
        }
        uVar12 = *(uint *)pBVar1;
        uVar4 = (ulong)uVar12;
        puVar9 = operator_new__(uVar4 << 5 | 8,(nothrow_t *)&std::nothrow);
        puVar10 = puVar9;
        if (puVar9 != (ulong *)0x0) {
          puVar10 = puVar9 + 1;
          *puVar9 = uVar4;
          if (uVar12 == 0) {
            *(ulong **)(this + 0x128) = puVar10;
            uVar7 = 1;
            goto LAB_00d1a82c;
          }
          lVar6 = uVar4 << 5;
          puVar9 = puVar10;
          do {
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
            lVar6 = lVar6 + -0x20;
            puVar9 = puVar9 + 4;
          } while (lVar6 != 0);
          uVar12 = *(uint *)pBVar1;
        }
        *(ulong **)(this + 0x128) = puVar10;
        if (uVar12 != 0) {
          lVar6 = 0;
          uVar4 = 0;
          do {
            BundleReader::readString();
            lVar11 = *(long *)(this + 0x128);
            puVar10 = (ulong *)(lVar11 + lVar6);
            if ((*puVar10 & 1) == 0) {
              *(undefined2 *)(lVar11 + lVar6) = 0;
            }
            else {
              *(undefined1 *)puVar10[2] = 0;
              puVar10[1] = 0;
              if ((*puVar10 & 1) != 0) {
                operator_delete((void *)puVar10[2]);
                *(undefined8 *)(lVar11 + lVar6) = 0;
              }
            }
            puVar10[2] = (ulong)local_80;
            puVar10[1] = uStack_88;
            *puVar10 = local_90;
            uStack_88 = 0;
            local_80 = (void *)0x0;
            local_90 = 0;
            if (((byte)*puVar10 & 1) != 0) {
              if (*(long *)(lVar11 + lVar6 + 8) != 0) goto LAB_00d1a9e8;
LAB_00d1aa7c:
              (*(code *)**(undefined8 **)this)(this);
              lVar6 = *(long *)(this + 0x128);
              if (lVar6 != 0) {
                lVar11 = *(long *)(lVar6 + -8);
                if (lVar11 != 0) {
                  lVar11 = lVar11 << 5;
                  do {
                    if ((*(byte *)(lVar6 + lVar11 + -0x20) & 1) != 0) {
                      operator_delete(*(void **)(lVar6 + lVar11 + -0x10));
                    }
                    lVar11 = lVar11 + -0x20;
                  } while (lVar11 != 0);
                }
                operator_delete__((long *)(lVar6 + -8));
                uVar7 = 0;
                *(undefined8 *)(this + 0x128) = 0;
                goto LAB_00d1a82c;
              }
              goto LAB_00d1a828;
            }
            if ((byte)((byte)*puVar10 >> 1) == 0) goto LAB_00d1aa7c;
LAB_00d1a9e8:
            lVar11 = BundleReader::read(this_00,(void *)(*(long *)(this + 0x128) + lVar6 + 0x18),4,1
                                       );
            if (lVar11 != 1) {
              if ((local_90 & 1) != 0) {
                operator_delete(local_80);
              }
              goto LAB_00d1aa7c;
            }
            lVar11 = BundleReader::read(this_00,(void *)(*(long *)(this + 0x128) + lVar6 + 0x1c),4,1
                                       );
            if ((local_90 & 1) != 0) {
              operator_delete(local_80);
            }
            if (lVar11 != 1) goto LAB_00d1aa7c;
            uVar4 = uVar4 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar4 < *(uint *)pBVar1);
        }
        uVar7 = 1;
        goto LAB_00d1a82c;
      }
      goto LAB_00d1a818;
    }
  }
  else {
LAB_00d1a818:
    (*(code *)**(undefined8 **)this)(this);
  }
LAB_00d1a828:
  uVar7 = 0;
LAB_00d1a82c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

