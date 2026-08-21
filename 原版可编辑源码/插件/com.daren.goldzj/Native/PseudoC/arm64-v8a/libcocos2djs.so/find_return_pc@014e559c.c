
/* v8::internal::SafepointTable::find_return_pc(unsigned int) */

uint __thiscall v8::internal::SafepointTable::find_return_pc(SafepointTable *this,uint param_1)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(uint *)(this + 0xc) != 0) {
    uVar4 = 0;
    uVar5 = 0;
    do {
      puVar1 = (uint *)(*(long *)(this + 0x18) + (uVar4 & 0xfffffffc));
      uVar3 = *puVar1;
      if ((puVar1[2] == param_1) || (bVar2 = uVar3 == param_1, uVar3 = param_1, bVar2)) {
        return uVar3;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 + 0xc;
    } while (uVar5 < *(uint *)(this + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

