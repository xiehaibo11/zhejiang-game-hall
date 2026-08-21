
/* cocos2d::CSLoader::createTimeline(cocos2d::Data const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 cocos2d::CSLoader::createTimeline(Data *param_1,basic_string *param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  ActionTimelineCache *this;
  undefined8 uVar4;
  void *__src;
  ulong uVar5;
  void *__dest;
  ulong uVar6;
  ulong local_98;
  ulong local_90;
  void *local_88;
  Data aDStack_80 [16];
  byte local_70 [8];
  ulong local_68;
  int *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  getExtentionName((CSLoader *)param_2,param_2);
  this = (ActionTimelineCache *)cocostudio::timeline::ActionTimelineCache::getInstance();
  uVar5 = (ulong)(local_70[0] >> 1);
  if ((local_70[0] & 1) != 0) {
    uVar5 = local_68;
  }
  if (uVar5 == 10) {
    piVar1 = (int *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      piVar1 = local_60;
    }
    iVar3 = memcmp(piVar1,"ExportJson",10);
    if (iVar3 == 0) {
LAB_00cb095c:
      __src = (void *)Data::getBytes((Data *)param_1);
      uVar5 = Data::getSize((Data *)param_1);
      local_90 = 0;
      local_88 = (void *)0x0;
      local_98 = 0;
      if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar5 < 0x17) {
        __dest = (void *)((ulong)&local_98 | 1);
        local_98 = (ulong)(byte)((int)uVar5 << 1);
        if (uVar5 != 0) goto LAB_00cb09c4;
      }
      else {
        uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar6);
        local_98 = uVar6 | 1;
        local_90 = uVar5;
        local_88 = __dest;
LAB_00cb09c4:
        memcpy(__dest,__src,uVar5);
      }
      *(undefined1 *)((long)__dest + uVar5) = 0;
      uVar4 = cocostudio::timeline::ActionTimelineCache::createActionFromContent
                        (this,param_2,(basic_string *)&local_98);
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      goto joined_r0x00cb0a00;
    }
  }
  else if (uVar5 == 4) {
    piVar1 = (int *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      piVar1 = local_60;
    }
    if (*piVar1 == 0x6e6f736a) goto LAB_00cb095c;
  }
  else if (uVar5 == 3) {
    piVar1 = (int *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      piVar1 = local_60;
    }
    iVar3 = memcmp(piVar1,&DAT_01412b23,3);
    if (iVar3 == 0) {
      Data::Data(aDStack_80,(Data *)param_1);
      uVar4 = cocostudio::timeline::ActionTimelineCache::createActionWithDataBuffer
                        (this,aDStack_80,param_2);
      Data::~Data(aDStack_80);
      goto joined_r0x00cb0a00;
    }
  }
  uVar4 = 0;
joined_r0x00cb0a00:
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

