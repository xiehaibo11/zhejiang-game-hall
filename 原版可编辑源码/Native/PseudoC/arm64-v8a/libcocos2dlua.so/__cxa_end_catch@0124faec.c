
void __cxa_end_catch(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = (long *)__cxa_get_globals_fast();
  plVar6 = (long *)*plVar4;
  if (plVar6 != (long *)0x0) {
    if ((ulong)plVar6[0xc] >> 8 == 0x434c4e47432b2b) {
      iVar1 = (int)plVar6[6];
      if (iVar1 < 0) {
        *(int *)(plVar6 + 6) = iVar1 + 1;
        if (iVar1 == -1) {
          *plVar4 = plVar6[5];
        }
      }
      else {
        *(int *)(plVar6 + 6) = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          *plVar4 = plVar6[5];
          plVar4 = plVar6;
          if ((char)plVar6[0xc] == '\x01') {
            plVar4 = (long *)(*plVar6 + -0x80);
            FUN_0125131c(plVar6);
          }
          do {
            lVar5 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 + -1 == 0) {
            if ((code *)plVar4[2] != (code *)0x0) {
              (*(code *)plVar4[2])(plVar4 + 0x10);
            }
            FUN_0125131c(plVar4);
          }
        }
      }
    }
    else {
      _Unwind_DeleteException();
      *plVar4 = 0;
    }
  }
  return;
}

