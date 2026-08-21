
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(v8::internal::StringCons const&, v8::internal::StringCons
   const&) */

byte v8::internal::operator!=(StringCons *param_1,StringCons *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = **(int **)(param_1 + 0x10);
  if (iVar1 == **(int **)(param_2 + 0x10)) {
    if (((iVar1 != 0) && (iVar1 != 2)) && (iVar1 != 1)) {
LAB_014e75d8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (*(int **)(param_1 + 0x10) == *(int **)(param_2 + 0x10)) {
      iVar1 = **(int **)(param_1 + 0x18);
      if (iVar1 == **(int **)(param_2 + 0x18)) {
        if (((iVar1 != 2) && (iVar1 != 1)) && (iVar1 != 0)) goto LAB_014e75d8;
        bVar2 = *(int **)(param_1 + 0x18) == *(int **)(param_2 + 0x18);
        goto LAB_014e75cc;
      }
    }
  }
  bVar2 = false;
LAB_014e75cc:
  return bVar2 ^ 1;
}

