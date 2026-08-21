
void FUN_01230360(long param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = param_2[4];
  fVar4 = *param_2;
  fVar3 = param_2[8];
  fVar5 = fVar4;
  if (fVar2 <= fVar4) {
    fVar5 = fVar2;
  }
  if (fVar3 <= fVar5) {
    fVar5 = fVar3;
  }
  if (fVar5 <= *(float *)(param_1 + 0x20)) {
    pfVar1 = param_2;
    if (fVar4 <= fVar2) {
      pfVar1 = param_2 + 4;
    }
    if (*pfVar1 <= fVar3) {
      pfVar1 = param_2 + 8;
    }
    if (*(float *)(param_1 + 0x10) <= *pfVar1) {
      fVar2 = param_2[2];
      fVar4 = param_2[6];
      fVar3 = param_2[10];
      fVar5 = fVar2;
      if (fVar4 <= fVar2) {
        fVar5 = fVar4;
      }
      if (fVar3 <= fVar5) {
        fVar5 = fVar3;
      }
      if (fVar5 <= *(float *)(param_1 + 0x28)) {
        pfVar1 = param_2 + 2;
        if (fVar2 <= fVar4) {
          pfVar1 = param_2 + 6;
        }
        if (*pfVar1 <= fVar3) {
          pfVar1 = param_2 + 10;
        }
        if (*(float *)(param_1 + 0x18) <= *pfVar1) {
          fVar2 = param_2[1];
          fVar4 = param_2[5];
          fVar3 = param_2[9];
          fVar5 = fVar2;
          if (fVar4 <= fVar2) {
            fVar5 = fVar4;
          }
          if (fVar3 <= fVar5) {
            fVar5 = fVar3;
          }
          if (fVar5 <= *(float *)(param_1 + 0x24)) {
            pfVar1 = param_2 + 1;
            if (fVar2 <= fVar4) {
              pfVar1 = param_2 + 5;
            }
            if (*pfVar1 <= fVar3) {
              pfVar1 = param_2 + 9;
            }
            if (*(float *)(param_1 + 0x14) <= *pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x01230470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(**(long **)(param_1 + 8) + 0x10))();
              return;
            }
          }
        }
      }
    }
  }
  return;
}

