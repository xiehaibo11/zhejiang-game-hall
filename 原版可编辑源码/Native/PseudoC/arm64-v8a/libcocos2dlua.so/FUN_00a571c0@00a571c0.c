
void FUN_00a571c0(long param_1)

{
  __pid_t _Var1;
  __pid_t _Var2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x4f0) != -1) {
    close(*(int *)(param_1 + 0x4f0));
    *(undefined4 *)(param_1 + 0x4f0) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x4f4) != 0) {
    _Var1 = waitpid(*(int *)(param_1 + 0x4f4),(int *)0x0,1);
    _Var2 = *(__pid_t *)(param_1 + 0x4f4);
    if ((_Var1 != _Var2) && (piVar3 = (int *)__errno(), *piVar3 != 10)) {
      kill(_Var2,0xf);
      _Var2 = waitpid(*(__pid_t *)(param_1 + 0x4f4),(int *)0x0,1);
      if ((_Var2 != *(int *)(param_1 + 0x4f4)) && (*piVar3 != 10)) {
        FUN_00a2b320(1);
        _Var2 = waitpid(*(__pid_t *)(param_1 + 0x4f4),(int *)0x0,1);
        if ((_Var2 != *(int *)(param_1 + 0x4f4)) && (*piVar3 != 10)) {
          kill(*(int *)(param_1 + 0x4f4),9);
          waitpid(*(__pid_t *)(param_1 + 0x4f4),(int *)0x0,1);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x4f4) = 0;
  }
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x4f8));
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x500));
  *(undefined8 *)(param_1 + 0x500) = 0;
  return;
}

