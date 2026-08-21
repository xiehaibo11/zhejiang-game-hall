
long * FUN_00163640(undefined8 param_1,long *param_2,uint *param_3,uint param_4,long param_5)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (0xc < (param_4 & 0xf)) {
code_r0x0016391c:
    fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
    fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = (uint *)*param_2;
  switch(param_4 & 0xf) {
  case 0:
  case 4:
  case 0xc:
    plVar2 = *(long **)puVar8;
    *param_2 = (long)(puVar8 + 2);
    break;
  case 1:
    plVar2 = (long *)FUN_00163954(param_2,param_3);
    break;
  case 2:
    plVar2 = (long *)(ulong)(ushort)*puVar8;
    *param_2 = (long)puVar8 + 2;
    break;
  case 3:
    plVar2 = (long *)(ulong)*puVar8;
    *param_2 = (long)(puVar8 + 1);
    break;
  default:
    goto code_r0x0016391c;
  case 9:
    uVar5 = 0;
    uVar3 = 0;
    puVar4 = puVar8;
    puVar7 = puVar8;
    do {
      if (puVar7 == param_3) {
        fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression")
        ;
        fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar1 = (byte)*puVar7;
      puVar4 = (uint *)((long)puVar4 + 1);
      uVar6 = uVar5 & 0x3f;
      uVar5 = uVar5 + 7;
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar6 | uVar3;
      puVar7 = (uint *)((long)puVar7 + 1);
    } while ((char)bVar1 < '\0');
    uVar6 = -1L << (uVar5 & 0x3f);
    if (((int)uVar5 - 7U < 0x39 & bVar1 >> 6) == 0) {
      uVar6 = 0;
    }
    plVar2 = (long *)(uVar3 | uVar6);
    *param_2 = (long)puVar4;
    break;
  case 10:
    plVar2 = (long *)(long)(short)*puVar8;
    *param_2 = (long)puVar8 + 2;
    break;
  case 0xb:
    plVar2 = (long *)(long)(int)*puVar8;
    *param_2 = (long)(puVar8 + 1);
  }
  param_4 = param_4 & 0xff;
  switch(param_4 >> 4 & 7) {
  case 0:
    goto code_r0x0016378c;
  case 1:
    plVar2 = (long *)((long)plVar2 + (long)puVar8);
code_r0x0016378c:
    if (param_4 >> 7 != 0) {
LAB_00163790:
      plVar2 = (long *)*plVar2;
    }
    return plVar2;
  case 2:
    fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getEncodedP",
            "DW_EH_PE_textrel pointer encoding not supported");
    fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
    abort();
  case 3:
    if (param_5 == 0) {
      fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_datarel is invalid with a datarelBase of 0");
      fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar2 = (long *)((long)plVar2 + param_5);
    if (param_4 >> 7 == 0) {
      return plVar2;
    }
    goto LAB_00163790;
  case 4:
    fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getEncodedP",
            "DW_EH_PE_funcrel pointer encoding not supported");
    fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
    abort();
  case 5:
    fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getEncodedP",
            "DW_EH_PE_aligned pointer encoding not supported");
    fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
    abort();
  default:
    fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
    fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
    abort();
  }
}

