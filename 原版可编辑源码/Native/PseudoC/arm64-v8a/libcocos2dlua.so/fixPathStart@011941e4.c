
/* dtPathCorridor::fixPathStart(unsigned int, float const*) */

undefined8 __thiscall dtPathCorridor::fixPathStart(dtPathCorridor *this,uint param_1,float *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  *(float *)this = *param_2;
  *(float *)(this + 4) = param_2[1];
  puVar2 = *(uint **)(this + 0x18);
  *(float *)(this + 8) = param_2[2];
  if (*(int *)(this + 0x20) - 1U < 2) {
    uVar1 = puVar2[(int)(*(int *)(this + 0x20) - 1U)];
    *puVar2 = param_1;
    puVar2[1] = 0;
    puVar2[2] = uVar1;
    *(undefined4 *)(this + 0x20) = 3;
    return 1;
  }
  *puVar2 = param_1;
  puVar2[1] = 0;
  return 1;
}

