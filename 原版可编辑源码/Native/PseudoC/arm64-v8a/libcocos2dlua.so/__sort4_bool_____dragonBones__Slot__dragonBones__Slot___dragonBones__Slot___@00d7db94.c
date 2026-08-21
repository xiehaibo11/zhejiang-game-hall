
/* unsigned int std::__ndk1::__sort4<bool (*&)(dragonBones::Slot*, dragonBones::Slot*),
   dragonBones::Slot**>(dragonBones::Slot**, dragonBones::Slot**, dragonBones::Slot**,
   dragonBones::Slot**, bool (*&)(dragonBones::Slot*, dragonBones::Slot*)) */

uint std::__ndk1::__sort4<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
               (Slot **param_1,Slot **param_2,Slot **param_3,Slot **param_4,
               _func_bool_Slot_ptr_Slot_ptr *param_5)

{
  ulong uVar1;
  ulong uVar2;
  Slot *pSVar3;
  uint uVar4;
  
                    /* try { // try from 00d7db94 to 00e7dbb3 has its CatchHandler @ 00d7dc44 */
                    /* try { // try from 00d7dbb4 to 00e7dbc3 has its CatchHandler @ 00d7dc68 */
                    /* try { // try from 00d7dbc4 to 00e7dc83 has its CatchHandler @ 00d7d96c */
  uVar1 = (**(code **)param_5)(*param_2,*param_1);
  uVar2 = (**(code **)param_5)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      goto LAB_00d7dc80;
    }
                    /* catch() { ... } // from try @ 00d7da58 with catch @ 00d7dc0c */
    pSVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = pSVar3;
                    /* catch() { ... } // from try @ 00d7da30 with catch @ 00d7dc20 */
    uVar1 = (**(code **)param_5)(*param_2,*param_1);
    if ((uVar1 & 1) == 0) goto LAB_00d7dc74;
    pSVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = pSVar3;
  }
  else {
    pSVar3 = *param_1;
    if ((uVar2 & 1) != 0) {
      uVar4 = 1;
      *param_1 = *param_3;
      *param_3 = pSVar3;
      goto LAB_00d7dc80;
    }
                    /* catch() { ... } // from try @ 00d7da28 with catch @ 00d7dc40 */
                    /* catch() { ... } // from try @ 00d7db94 with catch @ 00d7dc44 */
    *param_1 = *param_2;
                    /* catch() { ... } // from try @ 00d7db78 with catch @ 00d7dc48 */
    *param_2 = pSVar3;
                    /* catch() { ... } // from try @ 00d7db5c with catch @ 00d7dc4c */
                    /* catch() { ... } // from try @ 00d7db40 with catch @ 00d7dc50 */
                    /* catch() { ... } // from try @ 00d7db24 with catch @ 00d7dc54 */
    uVar1 = (**(code **)param_5)(*param_3);
                    /* catch() { ... } // from try @ 00d7db04 with catch @ 00d7dc58 */
    if ((uVar1 & 1) == 0) {
LAB_00d7dc74:
      uVar4 = 1;
      goto LAB_00d7dc80;
    }
                    /* catch() { ... } // from try @ 00d7dae4 with catch @ 00d7dc5c */
                    /* catch() { ... } // from try @ 00d7dac4 with catch @ 00d7dc60 */
    pSVar3 = *param_2;
                    /* catch() { ... } // from try @ 00d7da78 with catch @ 00d7dc64 */
    *param_2 = *param_3;
                    /* catch() { ... } // from try @ 00d7da90 with catch @ 00d7dc68
                       catch() { ... } // from try @ 00d7dbb4 with catch @ 00d7dc68 */
    *param_3 = pSVar3;
  }
  uVar4 = 2;
LAB_00d7dc80:
                    /* try { // try from 00d7dc8c to 00e7dcff has its CatchHandler @ 00d7dc8c
                       catch() { ... } // from try @ 00d7dc8c with catch @ 00d7dc8c
                       catch() { ... } // from try @ 00d7e288 with catch @ 00d7dc8c
                       catch() { ... } // from try @ 00d7e49c with catch @ 00d7dc8c */
  uVar1 = (**(code **)param_5)(*param_4,*param_3);
  if ((uVar1 & 1) != 0) {
    pSVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = pSVar3;
    uVar1 = (**(code **)param_5)(*param_3,*param_2);
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      pSVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = pSVar3;
      uVar1 = (**(code **)param_5)(*param_2,*param_1);
      if ((uVar1 & 1) == 0) {
        uVar4 = uVar4 + 2;
      }
      else {
        pSVar3 = *param_1;
        uVar4 = uVar4 + 3;
        *param_1 = *param_2;
        *param_2 = pSVar3;
      }
    }
  }
                    /* try { // try from 00d7dd00 to 00e7dd0b has its CatchHandler @ 00d7e4a8 */
  return uVar4;
}

