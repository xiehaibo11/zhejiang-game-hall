
void FUN_00c0dcfc(undefined8 *param_1,ulong *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[1];
  *param_2 = param_3 | 0xfffa800000000000;
  puVar2 = (undefined8 *)FUN_00c1bdd4(uVar1,*(undefined8 *)*param_1,param_2);
  *puVar2 = 0xfffeffffffffffff;
  return;
}

