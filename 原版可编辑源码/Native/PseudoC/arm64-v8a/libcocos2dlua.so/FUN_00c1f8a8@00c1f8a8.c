
void FUN_00c1f8a8(undefined8 param_1,char *param_2,int param_3)

{
  char cVar1;
  
  cVar1 = *param_2;
  if (cVar1 == '\x1b') {
    param_2 = "(binary)";
  }
  else if ((cVar1 == '=') || (cVar1 == '@')) {
    param_2 = param_2 + 1;
  }
  FUN_00c00c18(param_1,"%s: %s",param_2,PTR_s_not_enough_memory_01776bf0 + param_3);
                    /* WARNING: Subroutine does not return */
  FUN_00bfa980(param_1,3);
}

