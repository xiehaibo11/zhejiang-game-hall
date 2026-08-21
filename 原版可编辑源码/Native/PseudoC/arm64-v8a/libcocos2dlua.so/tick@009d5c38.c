
/* WARNING: Removing unreachable block (ram,0x009d5d70) */
/* universe::core::Service::tick(float) */

void __thiscall universe::core::Service::tick(Service *this,float param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *local_58;
  undefined8 local_50;
  long local_48;
  
                    /* try { // try from 009d5c48 to 00ad5d63 has its CatchHandler @ 009cee70 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar7 = *(long *)(this + 0x110);
  lVar1 = *(long *)(this + 0x118);
  if (lVar7 != lVar1) {
    do {
      if (*(long **)(lVar7 + 0x20) == (long *)0x0) goto LAB_009d5dac;
      (**(code **)(**(long **)(lVar7 + 0x20) + 0x30))();
      lVar7 = lVar7 + 0x30;
    } while (lVar1 != lVar7);
    plVar5 = *(long **)(this + 0x110);
    plVar8 = *(long **)(this + 0x118);
joined_r0x009d5c98:
    if (plVar8 != plVar5) {
      plVar4 = (long *)plVar8[-2];
      plVar8 = plVar8 + -6;
      if (plVar8 != plVar4) goto code_r0x009d5cc4;
      pcVar6 = *(code **)(*plVar4 + 0x20);
      goto LAB_009d5ca8;
    }
    *(long **)(this + 0x118) = plVar5;
  }
  lVar7 = *(long *)(this + 0xf8);
  lVar1 = *(long *)(this + 0x100);
  do {
    if (lVar7 == lVar1) {
      Computational::tryPop();
      while (local_50 != (long *)0x0) {
        while( true ) {
          plVar5 = local_58;
          (**(code **)(*local_50 + 0x18))();
          Computational::tryPop();
          plVar8 = local_50;
          local_50 = local_58;
          if (plVar8 != (long *)0x0) break;
          local_58 = (long *)0x0;
          if (plVar5 == (long *)0x0) goto LAB_009d5d84;
        }
        (**(code **)(*plVar8 + 8))(plVar8);
                    /* try { // try from 009d5d64 to 00ad5dd3 has its CatchHandler @ 009d8198 */
        local_58 = (long *)0x0;
      }
LAB_009d5d84:
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar3 = (ulong)local_50 >> 0x20;
    local_50 = (long *)CONCAT44((int)uVar3,param_1);
    plVar5 = *(long **)(lVar7 + 0x20);
    if (plVar5 == (long *)0x0) {
LAB_009d5dac:
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    (**(code **)(*plVar5 + 0x30))(plVar5,&local_50);
    lVar7 = lVar7 + 0x30;
  } while( true );
code_r0x009d5cc4:
  if (plVar4 != (long *)0x0) {
    pcVar6 = *(code **)(*plVar4 + 0x28);
LAB_009d5ca8:
    (*pcVar6)();
  }
  goto joined_r0x009d5c98;
}

