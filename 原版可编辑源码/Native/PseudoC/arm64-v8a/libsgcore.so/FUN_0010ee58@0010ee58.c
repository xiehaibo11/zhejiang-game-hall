
void FUN_0010ee58(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar2 = param_1;
LAB_0010eeb8:
  do {
    bVar3 = *param_1;
    if (0xc < bVar3) {
      if (bVar3 != 0xd) {
        if (bVar3 == 0x2f) {
          bVar3 = param_1[1];
          if (bVar3 == 0x2f) {
            while ((bVar3 != 0 && (bVar3 != 10))) {
              param_1 = param_1 + 1;
              bVar3 = *param_1;
            }
          }
          else {
            if (bVar3 == 0x2a) {
              param_1 = param_1 + 2;
              bVar3 = 0x2f;
              do {
                if (bVar3 == 0x2a) {
                  bVar3 = param_1[-1];
                  if (bVar3 == 0x2f) goto LAB_0010eeb8;
                }
                else {
                  if (bVar3 == 0) goto LAB_0010eeb8;
                  bVar3 = param_1[-1];
                }
                param_1 = param_1 + 1;
              } while( true );
            }
            *pbVar2 = 0x2f;
            param_1 = param_1 + 1;
            pbVar2 = pbVar2 + 1;
          }
          goto LAB_0010eeb8;
        }
        if (bVar3 != 0x20) goto LAB_0010ee68;
      }
LAB_0010eef0:
      param_1 = param_1 + 1;
      goto LAB_0010eeb8;
    }
    if ((bVar3 == 9) || (bVar3 == 10)) goto LAB_0010eef0;
    if (bVar3 == 0) {
      *pbVar2 = 0;
      return;
    }
LAB_0010ee68:
    param_1 = param_1 + 1;
    pbVar1 = pbVar2 + 1;
    *pbVar2 = bVar3;
    pbVar2 = pbVar1;
    if (bVar3 == 0x22) {
      do {
        bVar3 = *param_1;
        if (bVar3 == 0x5c) {
          pbVar2 = pbVar1 + 1;
          *pbVar1 = 0x5c;
          param_1 = param_1 + 1;
          bVar3 = *param_1;
        }
        else if ((bVar3 == 0) || (pbVar2 = pbVar1, bVar3 == 0x22)) goto LAB_0010eea4;
        param_1 = param_1 + 1;
        pbVar1 = pbVar2 + 1;
        *pbVar2 = bVar3;
      } while( true );
    }
  } while( true );
LAB_0010eea4:
  *pbVar1 = bVar3;
  param_1 = param_1 + 1;
  pbVar2 = pbVar1 + 1;
  goto LAB_0010eeb8;
}

