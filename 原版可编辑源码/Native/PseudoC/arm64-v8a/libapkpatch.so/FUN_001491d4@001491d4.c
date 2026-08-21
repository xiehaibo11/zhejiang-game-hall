
void FUN_001491d4(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_440;
  undefined1 auStack_434 [1024];
  int local_34;
  long *local_18;
  
  plVar2 = (long *)__cxa_get_globals_fast();
  if ((plVar2 == (long *)0x0) || (lVar7 = *plVar2, lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0014937c("terminating");
  }
  uVar3 = FUN_001488a4(lVar7 + 0x60);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0014937c("terminating with %s foreign exception",PTR_s_uncaught_0016ba50);
  }
  lVar4 = FUN_00148898(lVar7 + 0x60);
  if (lVar4 == 0x434c4e47432b2b01) {
    local_18 = *(long **)(lVar7 + 8);
  }
  else {
    local_18 = (long *)(lVar7 + 0x80);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  local_440 = 0x400;
  uVar5 = __cxa_demangle(*(undefined8 *)(lVar7 + 8),auStack_434,&local_440,&local_34);
  if (local_34 != 0) {
    uVar5 = *(undefined8 *)(lVar7 + 8);
  }
  uVar3 = FUN_0015f720(&std::exception::typeinfo,lVar7,&local_18);
  puVar1 = PTR_s_uncaught_0016ba50;
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0014937c("terminating with %s exception of type %s",PTR_s_uncaught_0016ba50,uVar5);
  }
  uVar6 = (**(code **)(*local_18 + 0x10))();
                    /* WARNING: Subroutine does not return */
  FUN_0014937c("terminating with %s exception of type %s: %s",puVar1,uVar5,uVar6);
}

