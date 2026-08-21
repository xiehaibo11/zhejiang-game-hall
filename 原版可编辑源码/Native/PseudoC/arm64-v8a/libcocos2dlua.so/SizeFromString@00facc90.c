
/* cocos2d::SizeFromString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::SizeFromString(cocos2d *this,basic_string *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  Size *in_x8;
  double dVar8;
  double dVar9;
  Size aSStack_58 [8];
  byte *local_50;
  byte *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  Size::Size(in_x8,(Size *)&Size::ZERO);
  local_48 = (byte *)0x0;
  uStack_40 = 0;
  local_50 = (byte *)0x0;
  uVar6 = FUN_00fac564(this,&local_50);
  if ((uVar6 & 1) != 0) {
    if ((*local_50 & 1) == 0) {
      pbVar7 = local_50 + 1;
    }
    else {
      pbVar7 = *(byte **)(local_50 + 0x10);
    }
    dVar8 = (double)utils::atof((char *)pbVar7);
    if ((local_50[0x18] & 1) == 0) {
      pbVar7 = local_50 + 0x19;
    }
    else {
      pbVar7 = *(byte **)(local_50 + 0x28);
    }
    dVar9 = (double)utils::atof((char *)pbVar7);
    Size::Size(aSStack_58,(float)dVar8,(float)dVar9);
    Size::operator=(in_x8,aSStack_58);
  }
  pbVar7 = local_50;
  if (local_50 != (byte *)0x0) {
    if (local_48 != local_50) {
      bVar1 = local_48[-0x18];
      pbVar5 = local_48 + -0x18;
      pbVar4 = local_48;
      while( true ) {
        pbVar3 = pbVar5;
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        if (pbVar7 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar5 = pbVar3 + -0x18;
        pbVar4 = pbVar3;
      }
    }
    local_48 = pbVar7;
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

