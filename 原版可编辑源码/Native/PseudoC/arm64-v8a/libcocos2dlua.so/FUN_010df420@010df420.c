
void FUN_010df420(long *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  
  puVar3 = (undefined8 *)param_1[5];
  lVar8 = param_1[0x42];
  puVar5 = (undefined1 *)*puVar3;
  *puVar3 = puVar5 + 1;
  *puVar5 = 0xff;
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
  *puVar3 = puVar5 + 1;
  *puVar5 = 0xd8;
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  *(undefined4 *)(lVar8 + 0x38) = 0;
  if (*(int *)((long)param_1 + 0x144) == 0) {
LAB_010dfa58:
    iVar2 = (int)param_1[0x2a];
                    /* catch() { ... } // from try @ 010df60c with catch @ 010dfa5c */
  }
  else {
    puVar3 = (undefined8 *)param_1[5];
    puVar5 = (undefined1 *)*puVar3;
    *puVar3 = puVar5 + 1;
    *puVar5 = 0xff;
    lVar6 = puVar3[1];
    puVar3[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    puVar3 = (undefined8 *)param_1[5];
    puVar5 = (undefined1 *)*puVar3;
    *puVar3 = puVar5 + 1;
    *puVar5 = 0xe0;
    lVar6 = puVar3[1];
    puVar3[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
                    /* try { // try from 010df578 to 011df58b has its CatchHandler @ 010dfa2c */
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    puVar3 = (undefined8 *)param_1[5];
    puVar5 = (undefined1 *)*puVar3;
    *puVar3 = puVar5 + 1;
    *puVar5 = 0;
    lVar6 = puVar3[1];
    puVar3[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    puVar3 = (undefined8 *)param_1[5];
                    /* try { // try from 010df5d4 to 011df5db has its CatchHandler @ 010dfa1c */
    puVar5 = (undefined1 *)*puVar3;
    *puVar3 = puVar5 + 1;
    *puVar5 = 0x10;
    lVar6 = puVar3[1];
    puVar3[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
                    /* try { // try from 010df60c to 011df61b has its CatchHandler @ 010dfa5c */
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    puVar3 = (undefined8 *)param_1[5];
    puVar5 = (undefined1 *)*puVar3;
    *puVar3 = puVar5 + 1;
    *puVar5 = 0x4a;
    lVar6 = puVar3[1];
    puVar3[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    puVar3 = (undefined8 *)param_1[5];
    puVar5 = (undefined1 *)*puVar3;
    *puVar3 = puVar5 + 1;
    *puVar5 = 0x46;
    lVar6 = puVar3[1];
    puVar3[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    puVar3 = (undefined8 *)param_1[5];
    puVar5 = (undefined1 *)*puVar3;
    *puVar3 = puVar5 + 1;
    *puVar5 = 0x49;
    lVar6 = puVar3[1];
    puVar3[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    puVar3 = (undefined8 *)param_1[5];
    puVar5 = (undefined1 *)*puVar3;
    *puVar3 = puVar5 + 1;
    *puVar5 = 0x46;
    lVar6 = puVar3[1];
    puVar3[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
                    /* try { // try from 010df744 to 011df757 has its CatchHandler @ 010df9e0 */
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    puVar3 = (undefined8 *)param_1[5];
    puVar5 = (undefined1 *)*puVar3;
    *puVar3 = puVar5 + 1;
    *puVar5 = 0;
    lVar6 = puVar3[1];
    puVar3[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
                    /* try { // try from 010df79c to 011df7a3 has its CatchHandler @ 010df9d0 */
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    plVar4 = (long *)param_1[5];
    lVar6 = param_1[0x29];
    puVar5 = (undefined1 *)*plVar4;
                    /* try { // try from 010df7b4 to 011df7c7 has its CatchHandler @ 010dfa3c */
    *plVar4 = (long)(puVar5 + 1);
    *puVar5 = (char)lVar6;
    lVar6 = plVar4[1];
    plVar4[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)plVar4[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    plVar4 = (long *)param_1[5];
    uVar7 = *(undefined1 *)((long)param_1 + 0x149);
    puVar5 = (undefined1 *)*plVar4;
    *plVar4 = (long)(puVar5 + 1);
    *puVar5 = uVar7;
    lVar6 = plVar4[1];
    plVar4[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)plVar4[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    plVar4 = (long *)param_1[5];
    uVar7 = *(undefined1 *)((long)param_1 + 0x14a);
    puVar5 = (undefined1 *)*plVar4;
    *plVar4 = (long)(puVar5 + 1);
    *puVar5 = uVar7;
    lVar6 = plVar4[1];
    plVar4[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)plVar4[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    plVar4 = (long *)param_1[5];
    uVar1 = *(undefined2 *)((long)param_1 + 0x14c);
    puVar5 = (undefined1 *)*plVar4;
    *plVar4 = (long)(puVar5 + 1);
    *puVar5 = (char)((ushort)uVar1 >> 8);
    lVar6 = plVar4[1];
    plVar4[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)plVar4[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
                    /* try { // try from 010df8e4 to 011df8f7 has its CatchHandler @ 010df9fc */
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    plVar4 = (long *)param_1[5];
    puVar5 = (undefined1 *)*plVar4;
    *plVar4 = (long)(puVar5 + 1);
    *puVar5 = (char)uVar1;
    lVar6 = plVar4[1];
    plVar4[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)plVar4[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
                    /* try { // try from 010df92c to 011df937 has its CatchHandler @ 010df9e4 */
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
                    /* try { // try from 010df938 to 011dfa77 has its CatchHandler @ 010df414 */
    plVar4 = (long *)param_1[5];
    uVar1 = *(undefined2 *)((long)param_1 + 0x14e);
    puVar5 = (undefined1 *)*plVar4;
    *plVar4 = (long)(puVar5 + 1);
    *puVar5 = (char)((ushort)uVar1 >> 8);
    lVar6 = plVar4[1];
    plVar4[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)plVar4[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    plVar4 = (long *)param_1[5];
    puVar5 = (undefined1 *)*plVar4;
    *plVar4 = (long)(puVar5 + 1);
    *puVar5 = (char)uVar1;
    lVar6 = plVar4[1];
    plVar4[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)plVar4[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
                    /* catch() { ... } // from try @ 010df79c with catch @ 010df9d0 */
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    puVar3 = (undefined8 *)param_1[5];
    puVar5 = (undefined1 *)*puVar3;
                    /* catch() { ... } // from try @ 010df744 with catch @ 010df9e0 */
                    /* catch() { ... } // from try @ 010df92c with catch @ 010df9e4 */
    *puVar3 = puVar5 + 1;
    *puVar5 = 0;
    lVar6 = puVar3[1];
    puVar3[1] = lVar6 + -1;
                    /* catch() { ... } // from try @ 010df8e4 with catch @ 010df9fc */
    if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
      puVar3 = (undefined8 *)*param_1;
                    /* catch() { ... } // from try @ 010df5d4 with catch @ 010dfa1c */
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    puVar3 = (undefined8 *)param_1[5];
    puVar5 = (undefined1 *)*puVar3;
                    /* catch() { ... } // from try @ 010df578 with catch @ 010dfa2c */
    *puVar3 = puVar5 + 1;
    *puVar5 = 0;
    lVar6 = puVar3[1];
                    /* catch() { ... } // from try @ 010df7b4 with catch @ 010dfa3c */
    puVar3[1] = lVar6 + -1;
    if ((lVar6 + -1 != 0) || (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 != 0)) goto LAB_010dfa58;
    puVar3 = (undefined8 *)*param_1;
                    /* try { // try from 010dff90 to 011dffa7 has its CatchHandler @ 010e0014 */
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
    iVar2 = (int)param_1[0x2a];
  }
  if (iVar2 == 0) {
    return;
  }
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
  *puVar3 = puVar5 + 1;
  *puVar5 = 0xff;
                    /* try { // try from 010dfa78 to 011dfaf3 has its CatchHandler @ 010dfa78
                       catch() { ... } // from try @ 010dfa78 with catch @ 010dfa78
                       catch() { ... } // from try @ 010dfb04 with catch @ 010dfa78
                       catch() { ... } // from try @ 010dfb3c with catch @ 010dfa78
                       catch() { ... } // from try @ 010dfb8c with catch @ 010dfa78
                       catch() { ... } // from try @ 010dfbc4 with catch @ 010dfa78
                       catch() { ... } // from try @ 010dfc10 with catch @ 010dfa78
                       catch() { ... } // from try @ 010dfc4c with catch @ 010dfa78 */
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
  *puVar3 = puVar5 + 1;
  *puVar5 = 0xee;
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
                    /* try { // try from 010dfaf4 to 011dfb03 has its CatchHandler @ 010dfd24 */
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined8 *)param_1[5];
                    /* try { // try from 010dfb04 to 011dfb0f has its CatchHandler @ 010dfa78 */
  puVar5 = (undefined1 *)*puVar3;
  *puVar3 = puVar5 + 1;
                    /* try { // try from 010dfb10 to 011dfb1f has its CatchHandler @ 010dfd10 */
  *puVar5 = 0;
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
                    /* try { // try from 010dfb20 to 011dfb2b has its CatchHandler @ 010dfd0c */
                    /* try { // try from 010dfb2c to 011dfb3b has its CatchHandler @ 010dfcf4 */
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
                    /* try { // try from 010dfb3c to 011dfb7b has its CatchHandler @ 010dfa78 */
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
  *puVar3 = puVar5 + 1;
  *puVar5 = 0xe;
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
                    /* try { // try from 010dfb7c to 011dfb8b has its CatchHandler @ 010dfcf0 */
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
                    /* try { // try from 010dfb8c to 011dfb97 has its CatchHandler @ 010dfa78 */
    *(undefined4 *)(puVar3 + 5) = 0x19;
                    /* try { // try from 010dfb98 to 011dfba7 has its CatchHandler @ 010dfcdc */
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
                    /* try { // try from 010dfba8 to 011dfbb3 has its CatchHandler @ 010dfcd8 */
  *puVar3 = puVar5 + 1;
  *puVar5 = 0x41;
                    /* try { // try from 010dfbb4 to 011dfbc3 has its CatchHandler @ 010dfcc0 */
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
                    /* try { // try from 010dfbc4 to 011dfbff has its CatchHandler @ 010dfa78 */
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
  *puVar3 = puVar5 + 1;
                    /* try { // try from 010dfc00 to 011dfc0f has its CatchHandler @ 010dfcbc */
  *puVar5 = 100;
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
                    /* try { // try from 010dfc10 to 011dfc1f has its CatchHandler @ 010dfa78 */
                    /* try { // try from 010dfc20 to 011dfc3b has its CatchHandler @ 010dfd40 */
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
                    /* try { // try from 010dfc3c to 011dfc4b has its CatchHandler @ 010dfc9c */
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
                    /* try { // try from 010dfc4c to 011dfd53 has its CatchHandler @ 010dfa78 */
  *puVar3 = puVar5 + 1;
  *puVar5 = 0x6f;
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
                    /* catch() { ... } // from try @ 010dfc3c with catch @ 010dfc9c */
  *puVar3 = puVar5 + 1;
  *puVar5 = 0x62;
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
                    /* catch() { ... } // from try @ 010dfc00 with catch @ 010dfcbc */
                    /* catch() { ... } // from try @ 010dfbb4 with catch @ 010dfcc0 */
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
                    /* catch() { ... } // from try @ 010dfba8 with catch @ 010dfcd8 */
    (*(code *)*puVar3)(param_1);
  }
                    /* catch() { ... } // from try @ 010dfb98 with catch @ 010dfcdc */
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
  *puVar3 = puVar5 + 1;
                    /* catch() { ... } // from try @ 010dfb7c with catch @ 010dfcf0 */
  *puVar5 = 0x65;
                    /* catch() { ... } // from try @ 010dfb2c with catch @ 010dfcf4 */
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
                    /* catch() { ... } // from try @ 010dfb20 with catch @ 010dfd0c */
                    /* catch() { ... } // from try @ 010dfb10 with catch @ 010dfd10 */
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
                    /* catch() { ... } // from try @ 010dfaf4 with catch @ 010dfd24 */
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
  *puVar3 = puVar5 + 1;
  *puVar5 = 0;
                    /* catch() { ... } // from try @ 010dfc20 with catch @ 010dfd40 */
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
                    /* try { // try from 010dfd60 to 011dfd87 has its CatchHandler @ 010dfd60
                       catch() { ... } // from try @ 010dfd60 with catch @ 010dfd60
                       catch() { ... } // from try @ 010dfd94 with catch @ 010dfd60 */
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
                    /* try { // try from 010dfd88 to 011dfd93 has its CatchHandler @ 010dfdc0 */
  *puVar3 = puVar5 + 1;
  *puVar5 = 100;
  lVar6 = puVar3[1];
                    /* try { // try from 010dfd94 to 011dfdd3 has its CatchHandler @ 010dfd60 */
  puVar3[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
                    /* catch() { ... } // from try @ 010dfd88 with catch @ 010dfdc0 */
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
  *puVar3 = puVar5 + 1;
  *puVar5 = 0;
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
                    /* try { // try from 010dfe10 to 011dfe13 has its CatchHandler @ 010dfe5c */
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
  *puVar3 = puVar5 + 1;
  *puVar5 = 0;
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010dfe10 with catch @ 010dfe5c
                        */
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
  *puVar3 = puVar5 + 1;
  *puVar5 = 0;
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
                    /* catch() { ... } // from try @ 010dfefc with catch @ 010dfe94
                       catch() { ... } // from try @ 010dffa8 with catch @ 010dfe94 */
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar3;
  *puVar3 = puVar5 + 1;
  *puVar5 = 0;
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
                    /* try { // try from 010dfed4 to 011dfedb has its CatchHandler @ 010dfff8 */
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
                    /* try { // try from 010dfef0 to 011dfefb has its CatchHandler @ 010dffe8 */
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
                    /* try { // try from 010dfefc to 011dff8f has its CatchHandler @ 010dfe94 */
  if ((int)param_1[0xc] == 5) {
    plVar4 = (long *)param_1[5];
    uVar7 = 2;
  }
  else {
    if ((int)param_1[0xc] != 3) {
      plVar4 = (long *)param_1[5];
      puVar5 = (undefined1 *)*plVar4;
      *plVar4 = (long)(puVar5 + 1);
      *puVar5 = 0;
      goto LAB_010dff48;
    }
    plVar4 = (long *)param_1[5];
    uVar7 = 1;
  }
  puVar5 = (undefined1 *)*plVar4;
  *plVar4 = (long)(puVar5 + 1);
  *puVar5 = uVar7;
LAB_010dff48:
  lVar6 = plVar4[1];
  plVar4[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (iVar2 = (*(code *)plVar4[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x010dff84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(param_1);
    return;
  }
                    /* try { // try from 010dffa8 to 011e0037 has its CatchHandler @ 010dfe94 */
  return;
}

