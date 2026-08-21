
/* v8::internal::LayoutDescriptorHelper::IsTagged(int, int, int*) */

byte __thiscall
v8::internal::LayoutDescriptorHelper::IsTagged
          (LayoutDescriptorHelper *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int local_14;
  
  if (*this == (LayoutDescriptorHelper)0x0) {
    iVar2 = param_2 - param_1;
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    iVar3 = param_1 - *(int *)(this + 4);
    iVar2 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    bVar4 = LayoutDescriptor::IsTagged
                      ((LayoutDescriptor *)(this + 8),iVar2 >> 2 & (iVar2 >> 0x1f ^ 0xffffffffU),
                       iVar1 >> 2,&local_14);
    iVar2 = *(int *)(this + 4);
    iVar1 = local_14 * 4;
    if ((bVar4 & 1) == 0) {
      iVar1 = 0;
    }
    iVar1 = iVar1 + iVar2;
    if (iVar2 <= param_1) {
      iVar1 = local_14 * 4 + param_1;
    }
    bVar4 = bVar4 | param_1 < iVar2;
    *param_3 = iVar1;
  }
  else {
    *param_3 = param_2;
    bVar4 = 1;
  }
  return bVar4 & 1;
}

