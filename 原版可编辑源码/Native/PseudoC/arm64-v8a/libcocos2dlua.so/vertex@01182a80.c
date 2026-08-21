
/* duDisplayList::vertex(float, float, float, unsigned int) */

void __thiscall
duDisplayList::vertex(duDisplayList *this,float param_1,float param_2,float param_3,uint param_4)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = *(int *)(this + 0x18);
  if (*(int *)(this + 0x1c) <= iVar1 + 1) {
    resize(this,*(int *)(this + 0x1c) << 1);
    iVar1 = *(int *)(this + 0x18);
  }
  pfVar2 = (float *)(*(long *)(this + 8) + (long)iVar1 * 0xc);
  *pfVar2 = param_1;
  pfVar2[1] = param_2;
  pfVar2[2] = param_3;
  *(uint *)(*(long *)(this + 0x10) + (long)iVar1 * 4) = param_4;
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  return;
}

