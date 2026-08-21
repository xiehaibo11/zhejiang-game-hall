
void FUN_018385c4(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_440;
  undefined1 auStack_434 [1024];
  int local_34;
  long *local_28;
  
  puVar2 = (undefined8 *)__cxa_get_globals_fast();
  if ((puVar2 == (undefined8 *)0x0) || (plVar7 = (long *)*puVar2, plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01838484("terminating");
  }
  uVar3 = __cxxabiv1::__isOurExceptionClass((_Unwind_Exception *)(plVar7 + 0xc));
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01838484("terminating with %s foreign exception",PTR_s_uncaught_01d359e8);
  }
  lVar4 = __cxxabiv1::__getExceptionClass((_Unwind_Exception *)(plVar7 + 0xc));
  if (lVar4 == 0x434c4e47432b2b01) {
    local_28 = (long *)*plVar7;
  }
  else {
    local_28 = plVar7 + 0x10;
  }
  lVar4 = plVar7[1];
  local_440 = 0x400;
  uVar5 = __cxa_demangle(*(undefined8 *)(lVar4 + 8),auStack_434,&local_440,&local_34);
  if (local_34 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + 8);
  }
  uVar3 = FUN_018368fc(&std::exception::typeinfo,lVar4,&local_28);
  puVar1 = PTR_s_uncaught_01d359e8;
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01838484("terminating with %s exception of type %s",PTR_s_uncaught_01d359e8,uVar5);
  }
  uVar6 = (**(code **)(*local_28 + 0x10))();
                    /* WARNING: Subroutine does not return */
  FUN_01838484("terminating with %s exception of type %s: %s",puVar1,uVar5,uVar6);
}

