
/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<short, short>&, short*>(short*,
   short*, std::__ndk1::__less<short, short>&) */

bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<short,short>&,short*>
               (short *param_1,short *param_2,__less *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  long lVar5;
  short sVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  long lVar11;
  long lVar12;
  
  switch((long)param_2 - (long)param_1 >> 1) {
  case 0:
  case 1:
    break;
  case 2:
    sVar1 = *param_1;
    if (param_2[-1] < sVar1) {
      *param_1 = param_2[-1];
      param_2[-1] = sVar1;
    }
    break;
  case 3:
    sVar1 = param_1[1];
    sVar2 = *param_1;
    sVar3 = param_2[-1];
    if (sVar1 < sVar2) {
      if (sVar3 < sVar1) {
        *param_1 = sVar3;
      }
      else {
        *param_1 = sVar1;
        param_1[1] = sVar2;
        if (sVar2 <= param_2[-1]) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = sVar2;
    }
    else if (sVar3 < sVar1) {
      param_1[1] = sVar3;
      param_2[-1] = sVar1;
      sVar1 = *param_1;
      if (param_1[1] < sVar1) {
        *param_1 = param_1[1];
        param_1[1] = sVar1;
      }
    }
    break;
  case 4:
    sVar1 = param_1[1];
    sVar2 = *param_1;
    sVar3 = param_1[2];
    sVar6 = sVar3;
    if (sVar1 < sVar2) {
      if (sVar3 < sVar1) {
        *param_1 = sVar3;
      }
      else {
        *param_1 = sVar1;
        param_1[1] = sVar2;
        if (sVar2 <= sVar3) goto LAB_015b3ebc;
        param_1[1] = sVar3;
      }
      param_1[2] = sVar2;
      sVar6 = sVar2;
    }
    else if (sVar3 < sVar1) {
      param_1[1] = sVar3;
      param_1[2] = sVar1;
      sVar6 = sVar1;
      if (sVar3 < sVar2) {
        *param_1 = sVar3;
        param_1[1] = sVar2;
      }
    }
LAB_015b3ebc:
    if (param_2[-1] < sVar6) {
      param_1[2] = param_2[-1];
      param_2[-1] = sVar6;
      sVar1 = param_1[2];
      sVar2 = param_1[1];
      if (sVar1 < sVar2) {
        sVar3 = *param_1;
        param_1[1] = sVar1;
        param_1[2] = sVar2;
        if (sVar1 < sVar3) {
          *param_1 = sVar1;
          param_1[1] = sVar3;
        }
      }
    }
    break;
  case 5:
    FUN_015b3b00(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    sVar1 = param_1[1];
    sVar2 = *param_1;
    sVar3 = param_1[2];
    uVar8 = (uint)sVar3;
    iVar9 = (int)sVar3;
    if (sVar1 < sVar2) {
      if (sVar3 < sVar1) {
        *param_1 = sVar3;
      }
      else {
        *param_1 = sVar1;
        param_1[1] = sVar2;
        if (sVar2 <= iVar9) goto LAB_015b3dfc;
        param_1[1] = sVar3;
      }
      param_1[2] = sVar2;
      uVar8 = (int)sVar2;
    }
    else if (iVar9 < sVar1) {
      param_1[1] = sVar3;
      param_1[2] = sVar1;
      uVar8 = (int)sVar1;
      if (iVar9 < sVar2) {
        *param_1 = sVar3;
        param_1[1] = sVar2;
      }
    }
LAB_015b3dfc:
    if (param_1 + 3 != param_2) {
      iVar9 = 0;
      lVar11 = 6;
      puVar10 = (ushort *)(param_1 + 3);
      do {
        uVar4 = *puVar10;
        lVar12 = lVar11;
        if ((short)uVar4 < (short)uVar8) {
          do {
            lVar5 = lVar12 + -2;
            *(short *)((long)param_1 + lVar12) = (short)uVar8;
            puVar7 = (ushort *)param_1;
            if (lVar5 == 0) goto LAB_015b3e4c;
            sVar1 = *(short *)((long)param_1 + lVar12 + -4);
            uVar8 = (uint)sVar1;
            lVar12 = lVar5;
          } while ((short)uVar4 < sVar1);
          puVar7 = (ushort *)((long)param_1 + lVar5);
LAB_015b3e4c:
          iVar9 = iVar9 + 1;
          *puVar7 = uVar4;
          if (iVar9 == 8) {
            return puVar10 + 1 == (ushort *)param_2;
          }
        }
        if (puVar10 + 1 == (ushort *)param_2) {
          return true;
        }
        uVar8 = (uint)*puVar10;
        lVar11 = lVar11 + 2;
        puVar10 = puVar10 + 1;
      } while( true );
    }
  }
  return true;
}

