
void FUN_00c258bc(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  if (param_2 < 0x100) {
    if (((&DAT_01410f61)[param_2] & 1) == 0) {
      puVar2 = (undefined *)FUN_00c00c18(*(undefined8 *)(param_1 + 0x48),&DAT_01410560,param_2);
    }
    else {
      puVar2 = (undefined *)FUN_00c00c18(*(undefined8 *)(param_1 + 0x48),"char(%d)",param_2);
    }
  }
  else {
    puVar2 = (&PTR_s_<identifier>_01697490)[param_2 + -0x100];
  }
                    /* WARNING: Subroutine does not return */
  FUN_00c24fe0(param_1,uVar1,0x90c,puVar2);
}

