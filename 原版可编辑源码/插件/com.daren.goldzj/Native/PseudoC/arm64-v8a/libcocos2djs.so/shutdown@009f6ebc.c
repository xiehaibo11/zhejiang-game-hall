
/* universe::core::Service::shutdown() */

void __thiscall universe::core::Service::shutdown(Service *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long *local_50;
  long local_48;
  
                    /* try { // try from 009f6ebc to 00af6ecf has its CatchHandler @ 009f71c4 */
                    /* try { // try from 009f6ed4 to 00af6eeb has its CatchHandler @ 009f71a8 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = *(long *)(this + 0xe0);
  lVar2 = *(long *)(this + 0xe8);
                    /* try { // try from 009f6eec to 00af6ef7 has its CatchHandler @ 009f718c */
  iVar6 = (int)((ulong)(lVar2 - lVar1) >> 3);
  if (0 < iVar6) {
    iVar8 = 0;
    do {
      local_50 = (long *)0x0;
                    /* try { // try from 009f6f04 to 00af6f5f has its CatchHandler @ 009f71c0 */
      Computational::push((Computational *)this,&local_50);
      plVar4 = local_50;
      local_50 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
    if (0 < iVar6) {
      lVar7 = 0;
      uVar5 = (ulong)(lVar2 - lVar1) >> 3 & 0xffffffff;
      do {
        std::__ndk1::thread::join((thread *)(*(long *)(this + 0xe0) + lVar7));
        uVar5 = uVar5 - 1;
        lVar7 = lVar7 + 8;
      } while (uVar5 != 0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 009f6f68 to 00af6f9f has its CatchHandler @ 009f717c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

