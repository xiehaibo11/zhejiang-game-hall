
/* v8::internal::Trace::mentions_reg(int) */

undefined8 __thiscall v8::internal::Trace::mentions_reg(Trace *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 8);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == 6) {
      if (((int)*(undefined8 *)(piVar1 + 4) <= param_1) &&
         (param_1 <= (int)((ulong)*(undefined8 *)(piVar1 + 4) >> 0x20))) {
        return 1;
      }
    }
    else if (piVar1[1] == param_1) {
      return 1;
    }
    piVar1 = *(int **)(piVar1 + 2);
  } while( true );
}

