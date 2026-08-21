
/* cocos2d::PointFromString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

float cocos2d::PointFromString(basic_string *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  double dVar8;
  float fVar9;
  byte *local_60;
  byte *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = (byte *)0x0;
  uStack_50 = 0;
  local_60 = (byte *)0x0;
  uVar6 = FUN_00fac564(param_1,&local_60);
  fVar9 = 0.0;
  if ((uVar6 & 1) != 0) {
    if ((*local_60 & 1) == 0) {
      pbVar7 = local_60 + 1;
    }
    else {
      pbVar7 = *(byte **)(local_60 + 0x10);
    }
    dVar8 = (double)utils::atof((char *)pbVar7);
    if ((local_60[0x18] & 1) == 0) {
      pbVar7 = local_60 + 0x19;
    }
    else {
      pbVar7 = *(byte **)(local_60 + 0x28);
    }
    utils::atof((char *)pbVar7);
    fVar9 = (float)dVar8;
  }
  pbVar7 = local_60;
  if (local_60 != (byte *)0x0) {
    if (local_58 != local_60) {
      bVar1 = local_58[-0x18];
      pbVar5 = local_58 + -0x18;
      pbVar4 = local_58;
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
                    /* try { // try from 00facbec to 010ad237 has its CatchHandler @ 00fac854 */
    local_58 = pbVar7;
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return fVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

