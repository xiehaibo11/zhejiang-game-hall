
void FUN_00a17fb8(undefined8 *param_1)

{
  if ((SSL_SESSION *)param_1[3] != (SSL_SESSION *)0x0) {
    SSL_SESSION_free((SSL_SESSION *)param_1[3]);
    param_1[3] = 0;
    param_1[5] = 0;
    (*(code *)PTR_free_01d1b748)(param_1[10]);
    param_1[10] = 0;
    (*(code *)PTR_free_01d1b748)(param_1[9]);
    param_1[9] = 0;
    (*(code *)PTR_free_01d1b748)(param_1[0xe]);
    param_1[0xe] = 0;
    (*(code *)PTR_free_01d1b748)(param_1[0xd]);
    param_1[0xd] = 0;
    (*(code *)PTR_free_01d1b748)(param_1[0xc]);
    param_1[0xc] = 0;
    (*(code *)PTR_free_01d1b748)(param_1[0xb]);
    param_1[0xb] = 0;
    (*(code *)PTR_free_01d1b748)(*param_1);
    *param_1 = 0;
    (*(code *)PTR_free_01d1b748)(param_1[1]);
    param_1[1] = 0;
  }
  return;
}

