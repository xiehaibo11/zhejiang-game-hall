
/* dragonBones::ArmatureData::setCacheFrame(dragonBones::Matrix const&, dragonBones::Transform
   const&) */

ulong __thiscall
dragonBones::ArmatureData::setCacheFrame(ArmatureData *this,Matrix *param_1,Transform *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  vector<float,std::__ndk1::allocator<float>> *this_00;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(this + 0x158);
  this_00 = (vector<float,std::__ndk1::allocator<float>> *)(lVar3 + 0x60);
  lVar2 = *(long *)this_00;
  uVar4 = *(long *)(lVar3 + 0x68) - lVar2;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 < 0xfffffffffffffff6) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this_00,10);
    lVar2 = *(long *)this_00;
  }
  else {
    *(ulong *)(lVar3 + 0x68) = lVar2 + uVar5 * 4 + 0x28;
  }
  puVar1 = (undefined4 *)(lVar2 + uVar5 * 4);
  *puVar1 = *(undefined4 *)param_1;
  puVar1[1] = *(undefined4 *)(param_1 + 4);
  puVar1[2] = *(undefined4 *)(param_1 + 8);
  puVar1[3] = *(undefined4 *)(param_1 + 0xc);
  puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  puVar1[5] = *(undefined4 *)(param_1 + 0x14);
  puVar1[6] = *(undefined4 *)(param_2 + 0xc);
  puVar1[7] = *(undefined4 *)(param_2 + 8);
  puVar1[8] = *(undefined4 *)(param_2 + 0x10);
  puVar1[9] = *(undefined4 *)(param_2 + 0x14);
  return uVar4 >> 2;
}

