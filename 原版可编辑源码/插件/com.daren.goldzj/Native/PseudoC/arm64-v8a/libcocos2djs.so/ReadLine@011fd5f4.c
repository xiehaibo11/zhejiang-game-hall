
/* v8::internal::ReadLine(char const*) */

void * v8::internal::ReadLine(char *param_1)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long *plVar7;
  ulong uVar8;
  void *pvVar9;
  char acStack_172 [258];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  fputs(param_1,(FILE *)waitpid);
  fflush((FILE *)waitpid);
  uVar8 = 0;
  pvVar9 = (void *)0x0;
  do {
    lVar4 = __fgets_chk(acStack_172 + 2,0x100,&__sF,0x100);
    if (lVar4 == 0) {
      pvVar6 = (void *)0x0;
      if (pvVar9 != (void *)0x0) {
        operator_delete__(pvVar9);
        pvVar6 = (void *)0x0;
      }
      goto LAB_011fd7b0;
    }
    uVar5 = __strlen_chk(acStack_172 + 2,0x100);
    if (uVar5 < 2) {
      if (uVar5 != 0) goto LAB_011fd6f0;
      bVar3 = true;
      if (pvVar9 == (void *)0x0) goto LAB_011fd750;
LAB_011fd704:
      uVar1 = uVar5 + uVar8 + 1;
      pvVar6 = operator_new__(uVar1,(nothrow_t *)&std::nothrow);
      if (pvVar6 == (void *)0x0) {
        plVar7 = (long *)V8::GetCurrentPlatform();
        (**(code **)(*plVar7 + 0x18))();
        pvVar6 = operator_new__(uVar1,(nothrow_t *)&std::nothrow);
        if (pvVar6 == (void *)0x0) {
LAB_011fd78c:
                    /* WARNING: Subroutine does not return */
          FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
        }
      }
      MemCopy(pvVar6,pvVar9,uVar8);
      operator_delete__(pvVar9);
    }
    else {
      if ((acStack_172[uVar5] == '\\') && (acStack_172[uVar5 + 1] == '\n')) {
        acStack_172[uVar5] = '\n';
        acStack_172[uVar5 + 1] = '\0';
        bVar3 = true;
        uVar5 = uVar5 - 1;
      }
      else {
LAB_011fd6f0:
        bVar3 = acStack_172[uVar5 + 1] != '\n';
      }
      if (pvVar9 != (void *)0x0) goto LAB_011fd704;
LAB_011fd750:
      pvVar6 = operator_new__(uVar5 + 1,(nothrow_t *)&std::nothrow);
      if (pvVar6 == (void *)0x0) {
        plVar7 = (long *)V8::GetCurrentPlatform();
        (**(code **)(*plVar7 + 0x18))();
        pvVar6 = operator_new__(uVar5 + 1,(nothrow_t *)&std::nothrow);
        if (pvVar6 == (void *)0x0) goto LAB_011fd78c;
      }
    }
    MemCopy((void *)((long)pvVar6 + uVar8),acStack_172 + 2,uVar5);
    uVar8 = uVar5 + uVar8;
    pvVar9 = pvVar6;
  } while (bVar3);
  *(undefined1 *)((long)pvVar6 + uVar8) = 0;
LAB_011fd7b0:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return pvVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

