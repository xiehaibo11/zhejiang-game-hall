
/* cocos2d::CSLoader::createTimeline(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall cocos2d::CSLoader::createTimeline(CSLoader *this,basic_string *param_1)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  ActionTimelineCache *this_00;
  undefined8 uVar5;
  byte local_50 [8];
  ulong local_48;
  int *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  getExtentionName(this,param_1);
  this_00 = (ActionTimelineCache *)cocostudio::timeline::ActionTimelineCache::getInstance();
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 10) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    iVar4 = memcmp(piVar2,"ExportJson",10);
    if (iVar4 == 0) {
LAB_00cb0628:
      uVar5 = cocostudio::timeline::ActionTimelineCache::createActionFromJson
                        (this_00,(basic_string *)this);
      goto joined_r0x00cb063c;
    }
  }
  else if (uVar1 == 4) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x6e6f736a) goto LAB_00cb0628;
  }
  else if (uVar1 == 3) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    iVar4 = memcmp(piVar2,&DAT_01412b23,3);
    if (iVar4 == 0) {
      uVar5 = cocostudio::timeline::ActionTimelineCache::createActionWithFlatBuffersFile
                        (this_00,(basic_string *)this);
      goto joined_r0x00cb063c;
    }
  }
  uVar5 = 0;
joined_r0x00cb063c:
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

