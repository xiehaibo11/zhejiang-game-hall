
/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<unsigned short, unsigned
   short>&, unsigned short*>(unsigned short*, unsigned short*, std::__ndk1::__less<unsigned short,
   unsigned short>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<unsigned_short,unsigned_short>&,unsigned_short*>
               (ushort *param_1,ushort *param_2,__less *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  long lVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 1) {
  case 0:
  case 1:
    break;
  case 2:
    uVar1 = *param_1;
    if (param_2[-1] < uVar1) {
      *param_1 = param_2[-1];
      param_2[-1] = uVar1;
    }
    break;
  case 3:
    uVar1 = param_1[1];
    uVar2 = *param_1;
    uVar3 = param_2[-1];
    if (uVar1 < uVar2) {
      if (uVar3 < uVar1) {
        *param_1 = uVar3;
      }
      else {
        *param_1 = uVar1;
        param_1[1] = uVar2;
        if (uVar2 <= param_2[-1]) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = uVar2;
    }
    else if (uVar3 < uVar1) {
      param_1[1] = uVar3;
      param_2[-1] = uVar1;
      uVar1 = *param_1;
      if (param_1[1] < uVar1) {
        *param_1 = param_1[1];
        param_1[1] = uVar1;
      }
    }
    break;
  case 4:
    uVar1 = param_1[1];
    uVar2 = *param_1;
    uVar3 = param_1[2];
    uVar5 = uVar3;
    if (uVar1 < uVar2) {
      if (uVar3 < uVar1) {
        *param_1 = uVar3;
      }
      else {
        *param_1 = uVar1;
        param_1[1] = uVar2;
        if (uVar2 <= uVar3) goto LAB_015b3558;
        param_1[1] = uVar3;
      }
      param_1[2] = uVar2;
      uVar5 = uVar2;
    }
    else if (uVar3 < uVar1) {
      param_1[1] = uVar3;
      param_1[2] = uVar1;
      uVar5 = uVar1;
      if (uVar3 < uVar2) {
        *param_1 = uVar3;
        param_1[1] = uVar2;
      }
    }
LAB_015b3558:
    if (param_2[-1] < uVar5) {
      param_1[2] = param_2[-1];
      param_2[-1] = uVar5;
      uVar1 = param_1[2];
      uVar2 = param_1[1];
      if (uVar1 < uVar2) {
        uVar3 = *param_1;
        param_1[1] = uVar1;
        param_1[2] = uVar2;
        if (uVar1 < uVar3) {
          *param_1 = uVar1;
          param_1[1] = uVar3;
        }
      }
    }
    break;
  case 5:
    FUN_015b319c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    uVar1 = param_1[1];
    uVar2 = *param_1;
    uVar3 = param_1[2];
    uVar5 = uVar3;
    if (uVar1 < uVar2) {
      if (uVar3 < uVar1) {
        *param_1 = uVar3;
      }
      else {
        *param_1 = uVar1;
        param_1[1] = uVar2;
        if (uVar2 <= uVar3) goto LAB_015b3498;
        param_1[1] = uVar3;
      }
      param_1[2] = uVar2;
      uVar5 = uVar2;
    }
    else if (uVar3 < uVar1) {
      param_1[1] = uVar3;
      param_1[2] = uVar1;
      uVar5 = uVar1;
      if (uVar3 < uVar2) {
        *param_1 = uVar3;
        param_1[1] = uVar2;
      }
    }
LAB_015b3498:
    if (param_1 + 3 != param_2) {
      iVar7 = 0;
      lVar9 = 6;
      puVar8 = param_1 + 3;
      do {
        uVar1 = *puVar8;
        lVar10 = lVar9;
        if (uVar1 < uVar5) {
          do {
            lVar4 = lVar10 + -2;
            *(ushort *)((long)param_1 + lVar10) = uVar5;
            puVar6 = param_1;
            if (lVar4 == 0) goto LAB_015b34e8;
            uVar5 = *(ushort *)((long)param_1 + lVar10 + -4);
            lVar10 = lVar4;
          } while (uVar1 < uVar5);
          puVar6 = (ushort *)((long)param_1 + lVar4);
LAB_015b34e8:
          iVar7 = iVar7 + 1;
          *puVar6 = uVar1;
          if (iVar7 == 8) {
            return puVar8 + 1 == param_2;
          }
        }
        if (puVar8 + 1 == param_2) {
          return true;
        }
        uVar5 = *puVar8;
        lVar9 = lVar9 + 2;
        puVar8 = puVar8 + 1;
      } while( true );
    }
  }
  return true;
}

