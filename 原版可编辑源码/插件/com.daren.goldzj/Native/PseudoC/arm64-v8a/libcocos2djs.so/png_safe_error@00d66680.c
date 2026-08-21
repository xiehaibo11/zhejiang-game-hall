
void png_safe_error(long param_1,char *param_2)

{
  long lVar1;
  __jmp_buf_tag *__env;
  long *plVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  plVar2 = *(long **)(param_1 + 0x128);
  if (plVar2 != (long *)0x0) {
    if ((param_2 == (char *)0x0) || (cVar3 = *param_2, cVar3 == '\0')) {
      uVar6 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar6 = uVar5 + 1;
        *(char *)((long)plVar2 + uVar5 + 0x24) = cVar3;
        if (0x3e < uVar6) break;
        cVar3 = param_2[uVar5 + 1];
        uVar5 = uVar6;
      } while (cVar3 != '\0');
    }
    *(undefined1 *)((long)plVar2 + uVar6 + 0x24) = 0;
    *(uint *)(plVar2 + 4) = *(uint *)(plVar2 + 4) | 2;
    if ((*plVar2 != 0) &&
       (__env = *(__jmp_buf_tag **)(*plVar2 + 0x10), __env != (__jmp_buf_tag *)0x0)) {
                    /* WARNING: Subroutine does not return */
      longjmp(__env,1);
    }
    *(undefined1 *)((long)plVar2 + 0x24) = 0x62;
    *(undefined8 *)((long)plVar2 + 0x25) = 0x6a676e6f6c206461;
    *(undefined4 *)((long)plVar2 + 0x2d) = 0x203a706d;
    *(undefined1 *)((long)plVar2 + 0x31) = 0;
    if ((param_2 == (char *)0x0) || (cVar3 = *param_2, cVar3 == '\0')) {
      lVar4 = 0xd;
    }
    else {
      lVar1 = 0;
      do {
        lVar4 = lVar1;
        *(char *)((long)plVar2 + lVar4 + 0x31) = cVar3;
        if (0x3e < lVar4 + 0xeU) break;
        cVar3 = param_2[lVar4 + 1];
        lVar1 = lVar4 + 1;
      } while (cVar3 != '\0');
      lVar4 = lVar4 + 0xe;
    }
    *(undefined1 *)((long)plVar2 + lVar4 + 0x24) = 0;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

