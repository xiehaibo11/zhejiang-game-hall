
/* cocos2d::Image::saveToFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) */

uint __thiscall cocos2d::Image::saveToFile(Image *this,basic_string *param_1,bool param_2)

{
  ulong uVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  byte local_60 [8];
  ulong local_58;
  int *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar6 = Texture2D::getPixelFormatInfoMap();
  plVar7 = *(long **)(lVar6 + 8);
  if (plVar7 != (long *)0x0) {
    uVar3 = *(uint *)(this + 0x48);
    do {
      while ((int)uVar3 < *(int *)((long)plVar7 + 0x1c)) {
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_00f7fe6c;
      }
      if ((int)uVar3 <= *(int *)((long)plVar7 + 0x1c)) {
        if (plVar7 != (long *)0x0) {
          uVar5 = 0;
          if (((uVar3 & 0xfffffffe) != 2) || ((char)plVar7[6] != '\0')) goto LAB_00f7ff18;
          plVar7 = (long *)FileUtils::getInstance();
          (**(code **)(*plVar7 + 0x138))(local_60,plVar7,param_1);
          uVar1 = (ulong)(local_60[0] >> 1);
          if ((local_60[0] & 1) != 0) {
            uVar1 = local_58;
          }
          if (uVar1 == 4) {
            piVar2 = (int *)((ulong)local_60 | 1);
            if ((local_60[0] & 1) != 0) {
              piVar2 = local_50;
            }
            if (*piVar2 == 0x676e702e) {
              uVar5 = saveImageToPNG(this,param_1,param_2);
            }
            else {
              if (*piVar2 != 0x67706a2e) goto LAB_00f7ff04;
              uVar5 = saveImageToJPG(this,param_1);
            }
          }
          else {
LAB_00f7ff04:
            uVar5 = 0;
          }
          if ((local_60[0] & 1) != 0) {
            operator_delete(local_50);
          }
LAB_00f7ff18:
          if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return uVar5 & 1;
        }
        break;
      }
      plVar7 = (long *)plVar7[1];
    } while (plVar7 != (long *)0x0);
  }
LAB_00f7fe6c:
                    /* WARNING: Subroutine does not return */
  FUN_007d44e0("map::at:  key not found");
}

