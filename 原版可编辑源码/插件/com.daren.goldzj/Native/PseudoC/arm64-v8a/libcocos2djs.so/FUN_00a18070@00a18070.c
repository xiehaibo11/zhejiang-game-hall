
void FUN_00a18070(long *param_1,SSL_SESSION *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(ulong *)(*param_1 + 0x5b8);
  if (uVar1 != 0) {
    uVar2 = 0;
    puVar3 = (undefined8 *)(*(long *)(*param_1 + 0x8b30) + 0x70);
    do {
      if ((SSL_SESSION *)puVar3[-0xb] == param_2) {
        if (param_2 == (SSL_SESSION *)0x0) {
          return;
        }
        SSL_SESSION_free(param_2);
        puVar3[-0xb] = 0;
        puVar3[-9] = 0;
        (*(code *)PTR_free_01d1b748)(puVar3[-4]);
        puVar3[-4] = 0;
        (*(code *)PTR_free_01d1b748)(puVar3[-5]);
        puVar3[-5] = 0;
        (*(code *)PTR_free_01d1b748)(*puVar3);
        *puVar3 = 0;
        (*(code *)PTR_free_01d1b748)(puVar3[-1]);
        puVar3[-1] = 0;
        (*(code *)PTR_free_01d1b748)(puVar3[-2]);
        puVar3[-2] = 0;
        (*(code *)PTR_free_01d1b748)(puVar3[-3]);
        puVar3[-3] = 0;
        (*(code *)PTR_free_01d1b748)(puVar3[-0xe]);
        puVar3[-0xe] = 0;
        (*(code *)PTR_free_01d1b748)(puVar3[-0xd]);
        puVar3[-0xd] = 0;
        return;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 0xf;
    } while (uVar2 < uVar1);
  }
  return;
}

