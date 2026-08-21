
/* flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::TimeLine> > >
   flatbuffers::FlatBufferBuilder::CreateVector<flatbuffers::Offset<flatbuffers::TimeLine>
   >(flatbuffers::Offset<flatbuffers::TimeLine> const*, unsigned long) */

int __thiscall
flatbuffers::FlatBufferBuilder::CreateVector<flatbuffers::Offset<flatbuffers::TimeLine>>
          (FlatBufferBuilder *this,Offset *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  PreAlign(this,param_2 << 2,4);
  PreAlign(this,param_2 << 2,4);
  for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
    iVar1 = *(int *)(param_1 + uVar3 * 4 + -4);
    Align(this,4);
    local_4c = (((*(int *)(this + 8) - *(int *)(this + 0x18)) + *(int *)(this + 0x10)) - iVar1) + 4;
    Align(this,4);
    PushBytes(this,(uchar *)&local_4c,4);
  }
  local_4c = (int)param_2;
  Align(this,4);
  PushBytes(this,(uchar *)&local_4c,4);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return (*(int *)(this + 8) - *(int *)(this + 0x18)) + *(int *)(this + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

