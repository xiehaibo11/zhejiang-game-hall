
undefined8 FUN_00e18cc4(long param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 local_54;
  
  iVar3 = *(int *)(param_2 + 0x90);
  if (iVar3 == 0x62697473) {
    return 0;
  }
  if ((*(byte *)(*(long *)(param_2 + 0x128) + 0x4a) >> 4 & 1) != 0) {
    lVar8 = *(long *)(param_2 + 8);
    uVar1 = *(uint *)(param_2 + 0x18);
    local_68 = 0;
    if ((((lVar8 != 0) && (uVar1 < *(uint *)(lVar8 + 0x20))) &&
        ((*(byte *)(lVar8 + 0x10) >> 3 & 1) != 0)) &&
       (pcVar5 = *(code **)(*(long *)(lVar8 + 0x370) + 0x108), pcVar5 != (code *)0x0)) {
      cVar2 = (*pcVar5)(lVar8,uVar1,&local_54,&local_58,auStack_70);
      if (cVar2 == '\0') {
        iVar3 = *(int *)(param_2 + 0x90);
      }
      else {
        iVar3 = FUN_00e153f4(lVar8,0);
        if (iVar3 == 0) {
          lVar10 = *(long *)(lVar8 + 0x370);
          do {
            iVar3 = FT_Load_Glyph(lVar8,local_54,
                                  *(uint *)(*(long *)(param_2 + 0x128) + 0x48) & 0xffefffff | 4);
            if ((iVar3 != 0) ||
               (iVar3 = (**(code **)(lVar10 + 0x110))
                                  (lVar8,local_58,param_2,*(undefined8 *)(lVar8 + 0x98)), iVar3 != 0
               )) {
              lVar8 = *(long *)(lVar8 + 0x98);
              goto joined_r0x00e18e50;
            }
          } while (((uVar1 < *(uint *)(lVar8 + 0x20)) && ((*(byte *)(lVar8 + 0x10) >> 3 & 1) != 0))
                  && ((pcVar5 = *(code **)(*(long *)(lVar8 + 0x370) + 0x108), pcVar5 != (code *)0x0
                      && (cVar2 = (*pcVar5)(lVar8,uVar1,&local_54,&local_58,auStack_70),
                         cVar2 != '\0'))));
          iVar3 = 0;
          *(undefined4 *)(param_2 + 0x90) = 0x62697473;
          lVar8 = *(long *)(lVar8 + 0x98);
joined_r0x00e18e50:
          if (lVar8 != 0) {
            plVar7 = (long *)(*(long *)(lVar8 + 8) + 0x98);
            lVar10 = *plVar7;
            if (lVar10 != 0) {
              lVar9 = *(long *)(*(long *)(*(long *)(lVar8 + 8) + 0xb0) + 0x10);
              if (lVar10 != lVar8) {
                do {
                  lVar6 = lVar10;
                  lVar10 = *(long *)(lVar6 + 0x10);
                  if (lVar10 == 0) goto LAB_00e18eb8;
                } while (lVar10 != lVar8);
                plVar7 = (long *)(lVar6 + 0x10);
              }
              *plVar7 = *(long *)(lVar8 + 0x10);
              if (*(code **)(lVar8 + 0x28) != (code *)0x0) {
                (**(code **)(lVar8 + 0x28))(lVar8);
              }
              FUN_00e155a8(lVar8);
              (**(code **)(lVar9 + 0x10))(lVar9,lVar8);
            }
          }
LAB_00e18eb8:
          if (iVar3 == 0) {
            return 0;
          }
        }
        iVar3 = 0x6f75746c;
        *(undefined4 *)(param_2 + 0x90) = 0x6f75746c;
      }
    }
  }
  if (iVar3 == 0x6f75746c) {
    lVar10 = *(long *)(param_1 + 0x128);
    lVar8 = *(long *)(param_1 + 0x118);
LAB_00e18ed8:
    if (lVar10 != 0) {
      if (param_1 == 0) {
        uVar4 = (**(code **)(lVar10 + 0x78))(lVar10,param_2,param_3,0);
        return uVar4;
      }
      do {
        uVar4 = (**(code **)(lVar10 + 0x78))(lVar10,param_2,param_3,0);
        if ((uint)uVar4 == 0) {
          return uVar4;
        }
        if (((uint)uVar4 & 0xff) != 0x13) {
          return uVar4;
        }
        plVar7 = (long *)(param_1 + 0x118);
        if (lVar8 != 0) {
          plVar7 = (long *)(lVar8 + 8);
        }
        lVar8 = *plVar7;
        if (lVar8 == 0) {
          return uVar4;
        }
        while (lVar10 = *(long *)(lVar8 + 0x10), *(int *)(lVar10 + 0x20) != *(int *)(param_2 + 0x90)
              ) {
          lVar8 = *(long *)(lVar8 + 8);
          if (lVar8 == 0) {
            return uVar4;
          }
        }
      } while (lVar10 != 0);
      return uVar4;
    }
  }
  else if (param_1 != 0) {
    for (lVar8 = *(long *)(param_1 + 0x118); lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
      lVar10 = *(long *)(lVar8 + 0x10);
      if (*(int *)(lVar10 + 0x20) == iVar3) goto LAB_00e18ed8;
    }
  }
  return 7;
}

