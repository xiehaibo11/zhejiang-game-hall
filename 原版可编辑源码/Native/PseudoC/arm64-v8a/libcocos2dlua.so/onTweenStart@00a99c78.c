
/* fairygui::Transition::onTweenStart(fairygui::GTweener*) */

void __thiscall fairygui::Transition::onTweenStart(Transition *this,GTweener *param_1)

{
  char cVar1;
  long lVar2;
  GPath *pGVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  
  pfVar8 = *(float **)(param_1 + 0x88);
                    /* try { // try from 00a99c88 to 00b99c9f has its CatchHandler @ 00a99fec */
  if (1 < (uint)pfVar8[8]) goto LAB_00a99df8;
  lVar2 = *(long *)(pfVar8 + 10);
                    /* try { // try from 00a99ca8 to 00b99ce3 has its CatchHandler @ 00a99fe8 */
  lVar5 = 0x10;
  if (this[0xb4] != (Transition)0x0) {
    lVar5 = 0x18;
  }
  lVar7 = 0x18;
  if (this[0xb4] != (Transition)0x0) {
    lVar7 = 0x10;
  }
  pfVar4 = *(float **)(lVar2 + lVar7);
  pfVar6 = *(float **)(lVar2 + lVar5);
  if (pfVar8[8] == 0.0) {
    lVar7 = *(long *)(pfVar8 + 0x22);
    lVar5 = *(long *)(this + 0x40);
                    /* try { // try from 00a99ce4 to 00b99e83 has its CatchHandler @ 00a998b0 */
    if (lVar7 == lVar5) {
      if (*(char *)(pfVar6 + 4) == '\0') {
        *(float *)(param_1 + 0x28) = *(float *)(lVar7 + 0xc0) - *(float *)(this + 0x6c);
      }
      if (*(char *)((long)pfVar6 + 0x11) == '\0') {
        *(float *)(param_1 + 0x2c) = *(float *)(lVar7 + 0xc4) - *(float *)(this + 0x70);
      }
      goto LAB_00a99dc8;
    }
    if (*(char *)(pfVar6 + 4) == '\0') {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar7 + 0xc0);
      if (*(char *)((long)pfVar6 + 0x11) == '\0') goto LAB_00a99e54;
LAB_00a99d0c:
      if (*(char *)((long)pfVar6 + 0x12) != '\0') {
        *(float *)(param_1 + 0x2c) = pfVar6[1] * *(float *)(lVar5 + 0xcc);
      }
      if (*(char *)(pfVar4 + 4) != '\0') goto LAB_00a99d2c;
LAB_00a99e64:
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x28);
      if (*(char *)((long)pfVar4 + 0x11) != '\0') goto LAB_00a99d4c;
      goto LAB_00a99e74;
    }
    if (*(char *)((long)pfVar6 + 0x12) != '\0') {
      *(float *)(param_1 + 0x28) = *pfVar6 * *(float *)(lVar5 + 200);
    }
    if (*(char *)((long)pfVar6 + 0x11) != '\0') goto LAB_00a99d0c;
LAB_00a99e54:
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar7 + 0xc4);
    if (*(char *)(pfVar4 + 4) == '\0') goto LAB_00a99e64;
LAB_00a99d2c:
    if (*(char *)((long)pfVar4 + 0x12) != '\0') {
      *(float *)(param_1 + 0x40) = *pfVar4 * *(float *)(lVar5 + 200);
    }
    if (*(char *)((long)pfVar4 + 0x11) == '\0') goto LAB_00a99e74;
LAB_00a99d4c:
    if (*(char *)((long)pfVar4 + 0x12) == '\0') goto LAB_00a99dd8;
    *(float *)(param_1 + 0x44) = pfVar4[1] * *(float *)(lVar5 + 0xcc);
    pGVar3 = *(GPath **)(lVar2 + 0x20);
  }
  else {
    if (*(char *)(pfVar6 + 4) == '\0') {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(long *)(pfVar8 + 0x22) + 200);
      if (*(char *)((long)pfVar6 + 0x11) != '\0') goto LAB_00a99dc8;
LAB_00a99d84:
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(long *)(pfVar8 + 0x22) + 0xcc);
      if (*(char *)(pfVar4 + 4) == '\0') goto LAB_00a99e30;
LAB_00a99dd0:
      cVar1 = *(char *)((long)pfVar4 + 0x11);
    }
    else {
      if (*(char *)((long)pfVar6 + 0x11) == '\0') goto LAB_00a99d84;
LAB_00a99dc8:
      if (*(char *)(pfVar4 + 4) != '\0') goto LAB_00a99dd0;
LAB_00a99e30:
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x28);
      cVar1 = *(char *)((long)pfVar4 + 0x11);
    }
    if (cVar1 == '\0') {
LAB_00a99e74:
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x2c);
      pGVar3 = *(GPath **)(lVar2 + 0x20);
    }
    else {
LAB_00a99dd8:
      pGVar3 = *(GPath **)(lVar2 + 0x20);
    }
  }
  if (pGVar3 != (GPath *)0x0) {
    *(undefined2 *)(*(long *)(pfVar8 + 0x12) + 0x10) = 0x101;
    GTweener::setPath(param_1,pGVar3);
  }
LAB_00a99df8:
  if ((*(float *)(this + 0xcc) <= *pfVar8) && (*(long **)(pfVar8 + 0x1c) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00a99e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(pfVar8 + 0x1c) + 0x30))();
    return;
  }
  return;
}

