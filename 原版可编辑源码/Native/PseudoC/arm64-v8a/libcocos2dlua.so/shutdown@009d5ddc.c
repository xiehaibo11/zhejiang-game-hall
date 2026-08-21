
/* universe::core::Service::shutdown() */

void __thiscall universe::core::Service::shutdown(Service *this)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *local_50;
  long local_48;
  
                    /* try { // try from 009d5dec to 00ad5e5b has its CatchHandler @ 009d8194 */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar1 = *(long *)(this + 0xe0);
  lVar2 = *(long *)(this + 0xe8);
  uVar7 = (ulong)(lVar2 - lVar1) >> 3;
  iVar6 = (int)uVar7;
  if (0 < iVar6) {
    uVar7 = uVar7 & 0xffffffff;
    do {
      local_50 = (long *)0x0;
      Computational::push((Computational *)this,&local_50);
      plVar5 = local_50;
      local_50 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      uVar3 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar3;
    } while (uVar3 != 0);
    if (0 < iVar6) {
                    /* try { // try from 009d5e5c to 00ad615f has its CatchHandler @ 009cee70 */
      lVar8 = 0;
      uVar7 = (ulong)(lVar2 - lVar1) >> 3 & 0xffffffff;
      do {
        std::__ndk1::thread::join((thread *)(*(long *)(this + 0xe0) + lVar8));
        uVar7 = uVar7 - 1;
        lVar8 = lVar8 + 8;
      } while (uVar7 != 0);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

