
/* v8::internal::Literal::Match(void*, void*) */

bool v8::internal::Literal::Match(void *param_1,void *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = *(uint *)((long)param_1 + 4);
  if ((((uVar1 & 0x780) == 0x180) && ((*(uint *)((long)param_2 + 4) & 0x780) == 0x180)) &&
     (*(long *)((long)param_1 + 8) == *(long *)((long)param_2 + 8))) {
    return true;
  }
  if (((uVar1 & 0x700) != 0) || ((*(uint *)((long)param_2 + 4) & 0x700) != 0)) {
    return false;
  }
  uVar1 = uVar1 >> 7 & 0xf;
  if (uVar1 == 1) {
    dVar2 = *(double *)((long)param_1 + 8);
  }
  else {
    if (uVar1 != 0) goto LAB_01496ee4;
    dVar2 = (double)(long)*(int *)((long)param_1 + 8);
  }
  uVar1 = *(uint *)((long)param_2 + 4) >> 7 & 0xf;
  if (uVar1 == 1) {
    dVar3 = *(double *)((long)param_2 + 8);
  }
  else {
    if (uVar1 != 0) {
LAB_01496ee4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    dVar3 = (double)(long)*(int *)((long)param_2 + 8);
  }
  return dVar2 == dVar3;
}

