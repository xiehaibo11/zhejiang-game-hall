
/* dragonBones::EventObject::actionDataToInstance(dragonBones::ActionData const*,
   dragonBones::EventObject*, dragonBones::Armature*) */

void dragonBones::EventObject::actionDataToInstance
               (ActionData *param_1,EventObject *param_2,Armature *param_3)

{
  ulong uVar1;
  ActionData *pAVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  char *__s;
  
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* try { // try from 00d82620 to 00e8262b has its CatchHandler @ 00d828fc */
    ppuVar5 = &FRAME_EVENT;
  }
  else {
    ppuVar5 = &FRAME_EVENT;
    if (*(int *)(param_1 + 0x10) != 10) {
      ppuVar5 = &SOUND_EVENT;
    }
  }
  __s = *ppuVar5;
  sVar3 = strlen(__s);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (param_2 + 0x18),__s,sVar3);
                    /* try { // try from 00d82654 to 00e82657 has its CatchHandler @ 00d82858 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (param_2 + 0x30) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (param_1 + 0x18)) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    pAVar2 = *(ActionData **)(param_1 + 0x28);
    if (((byte)param_1[0x18] & 1) == 0) {
      pAVar2 = param_1 + 0x19;
      uVar1 = (ulong)((byte)param_1[0x18] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_2 + 0x30),(char *)pAVar2,uVar1);
  }
                    /* try { // try from 00d82674 to 00e826ab has its CatchHandler @ 00d8285c */
  *(Armature **)(param_2 + 0x48) = param_3;
  *(ActionData **)(param_2 + 0x68) = param_1;
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar4 = Armature::getBone(param_3,(basic_string *)(*(long *)(param_1 + 0x30) + 0x18));
    *(undefined8 *)(param_2 + 0x50) = uVar4;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar4 = Armature::getSlot(param_3,(basic_string *)(*(long *)(param_1 + 0x38) + 0x20));
    *(undefined8 *)(param_2 + 0x58) = uVar4;
  }
  return;
}

