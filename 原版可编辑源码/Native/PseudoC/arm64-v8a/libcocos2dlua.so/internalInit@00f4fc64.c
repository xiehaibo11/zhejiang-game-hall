
/* cocos2d::TMXMapInfo::internalInit(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::TMXMapInfo::internalInit(TMXMapInfo *this,basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string bVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  basic_string *pbVar6;
  void *pvVar7;
  TMXMapInfo *pTVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
                    /* try { // try from 00f4fc68 to 0104fdc3 has its CatchHandler @ 00f4f410 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    plVar4 = (long *)FileUtils::getInstance();
    (**(code **)(*plVar4 + 0x50))(&local_70,plVar4,param_1);
    pTVar8 = this + 0xd8;
    if (((byte)*pTVar8 & 1) == 0) {
      *(undefined2 *)pTVar8 = 0;
    }
    else {
      **(undefined1 **)(this + 0xe8) = 0;
      *(undefined8 *)(this + 0xe0) = 0;
      if (((byte)this[0xd8] & 1) != 0) {
        operator_delete(*(void **)(this + 0xe8));
        *(undefined8 *)(this + 0xd8) = 0;
      }
    }
    *(undefined8 *)(this + 0xe8) = local_60;
    *(undefined8 *)(this + 0xe0) = uStack_68;
    *(undefined8 *)pTVar8 = local_70;
  }
  bVar2 = *param_2;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if ((uVar1 != 0) &&
     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0xf0) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2)) {
    pbVar6 = *(basic_string **)(param_2 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0xf0),(char *)pbVar6,uVar1);
  }
  pvVar7 = *(void **)(this + 0x80);
  if ((ulong)(*(long *)(this + 0x90) - (long)pvVar7 >> 3) < 4) {
    lVar9 = *(long *)(this + 0x88) - (long)pvVar7;
    pvVar5 = operator_new(0x20);
    if (0 < lVar9) {
      __memcpy_chk(pvVar5,pvVar7,lVar9,0x20);
      pvVar7 = *(void **)(this + 0x80);
    }
    *(void **)(this + 0x80) = pvVar5;
    *(long *)(this + 0x88) = (long)pvVar5 + lVar9;
    *(long *)(this + 0x90) = (long)pvVar5 + 0x20;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x108),"",0);
                    /* try { // try from 00f4fdc4 to 0104fdcb has its CatchHandler @ 00f508c4 */
  this[0xa4] = (TMXMapInfo)0x0;
  *(undefined4 *)(this + 0x98) = 0;
                    /* try { // try from 00f4fdcc to 0104ff5b has its CatchHandler @ 00f4f410 */
  *(undefined4 *)(this + 0xa0) = 1;
  *(undefined4 *)(this + 0x148) = 0xffffffff;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

