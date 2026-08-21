
/* v8::internal::Log::MessageBuilder::AppendString(v8::internal::String, v8::base::Optional<int>) */

void __thiscall
v8::internal::Log::MessageBuilder::AppendString(MessageBuilder *this,ulong param_2,ulong param_3)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint local_50;
  int local_4c;
  ulong local_48;
  
  if ((int)param_2 != 0) {
    iVar1 = *(int *)(param_2 + 7);
    iVar3 = (int)(param_3 >> 0x20);
    if (iVar1 <= iVar3) {
      iVar3 = iVar1;
    }
    if ((param_3 & 0xff) != 0) {
      iVar1 = iVar3;
    }
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        local_50 = (uint)*(ushort *)
                          ((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1)) + 7);
        local_4c = iVar3;
        local_48 = param_2;
        uVar2 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                          (&local_50,&local_48,&local_4c);
        if (uVar2 < 0x100) {
          AppendCharacter(this,(char)uVar2);
        }
        else {
          AppendRawFormatString((char *)this,"\\u%04x");
        }
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
  }
  return;
}

