
/* v8::internal::String::PrintOn(__sFILE*) */

void __thiscall v8::internal::String::PrintOn(String *this,__sFILE *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_48;
  int local_44;
  ulong local_28;
  
  local_28 = *(ulong *)this;
  iVar1 = *(int *)(local_28 + 7);
  if (0 < iVar1) {
    iVar3 = 0;
    while( true ) {
      local_48 = (uint)*(ushort *)
                        ((local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 - 1)) + 7);
      local_44 = iVar3;
      uVar2 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                        (&local_48,&local_28,&local_44);
      PrintF(param_1,"%c",(ulong)(uVar2 & 0xffff));
      if (iVar1 + -1 == iVar3) break;
      local_28 = *(ulong *)this;
      iVar3 = iVar3 + 1;
    }
  }
  return;
}

