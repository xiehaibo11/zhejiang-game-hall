
/* v8::internal::SafepointTable::FindEntry(unsigned long) const */

void v8::internal::SafepointTable::FindEntry(ulong param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int in_w1;
  int *in_x8;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 == 1) {
    piVar7 = *(int **)(param_1 + 0x18);
    if (*piVar7 == -1) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      if (*(char *)(param_1 + 0x28) == '\0') {
        iVar4 = -1;
      }
      else {
        iVar4 = piVar7[2];
      }
      *in_x8 = piVar7[1];
      *(undefined8 *)(in_x8 + 2) = uVar6;
      goto LAB_014e56cc;
    }
  }
  else if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","len > 0");
  }
  uVar8 = 0;
  uVar5 = 0;
  bVar3 = *(char *)(param_1 + 0x28) == '\0';
  while (piVar7 = (int *)(*(long *)(param_1 + 0x18) + (uVar8 & 0xfffffffc)),
        *piVar7 != in_w1 - *(int *)param_1) {
    if ((*(char *)(param_1 + 0x28) != '\0') && (piVar7[2] == in_w1 - *(int *)param_1)) {
      bVar3 = false;
      break;
    }
    uVar5 = uVar5 + 1;
    uVar8 = uVar8 + 0xc;
    if (uVar1 == uVar5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  iVar2 = *(int *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x20);
  if (bVar3) {
    iVar4 = -1;
  }
  else {
    iVar4 = piVar7[2];
  }
  *in_x8 = piVar7[1];
  *(ulong *)(in_x8 + 2) = lVar9 + (ulong)(uint)(iVar2 * (int)uVar5);
LAB_014e56cc:
  in_x8[4] = iVar4;
  return;
}

