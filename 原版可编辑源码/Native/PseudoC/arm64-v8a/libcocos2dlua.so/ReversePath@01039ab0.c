
/* ClipperLib::ReversePath(std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >&) */

void ClipperLib::ReversePath(vector *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)param_1;
  puVar3 = *(undefined8 **)(param_1 + 8);
  if ((puVar3 != puVar2) && (puVar2 < puVar3 + -2)) {
    puVar3 = puVar3 + -4;
    do {
      uVar6 = puVar2[1];
      uVar4 = *puVar2;
      uVar5 = puVar3[2];
      puVar2[1] = puVar3[3];
      *puVar2 = uVar5;
      puVar3[3] = uVar6;
      puVar3[2] = uVar4;
      bVar1 = puVar2 + 2 < puVar3;
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + -2;
    } while (bVar1);
  }
  return;
}

