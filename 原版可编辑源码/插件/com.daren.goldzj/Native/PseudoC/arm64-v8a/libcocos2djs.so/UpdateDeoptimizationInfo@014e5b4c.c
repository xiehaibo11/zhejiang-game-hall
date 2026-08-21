
/* v8::internal::SafepointTableBuilder::UpdateDeoptimizationInfo(int, int, int, unsigned int) */

int __thiscall
v8::internal::SafepointTableBuilder::UpdateDeoptimizationInfo
          (SafepointTableBuilder *this,int param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  uint *puVar6;
  
  puVar1 = *(uint **)(this + 0x10);
  uVar5 = (ulong)param_3;
  uVar3 = (ulong)*puVar1;
  puVar2 = puVar1;
  if (uVar3 <= uVar5) {
    do {
      puVar2 = *(uint **)(puVar2 + 2);
      uVar5 = uVar5 - uVar3;
      uVar3 = (ulong)*puVar2;
    } while (uVar3 <= uVar5);
  }
  puVar4 = *(uint **)(this + 0x18);
  uVar5 = uVar5 & 0xffffffff;
  if (puVar4 != (uint *)0x0) goto LAB_014e5b9c;
LAB_014e5bbc:
  puVar6 = puVar1;
  if (uVar5 != 0) goto LAB_014e5be4;
LAB_014e5bcc:
  do {
    if (puVar6 == puVar2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
LAB_014e5be4:
    do {
      while( true ) {
        if (puVar2[uVar5 * 6 + 6] == param_1) {
          puVar2[uVar5 * 6 + 7] = param_4;
          puVar2[uVar5 * 6 + 8] = param_2;
          return param_3;
        }
        uVar5 = uVar5 + 1;
        if (*puVar2 <= uVar5) {
          puVar2 = *(uint **)(puVar2 + 2);
          uVar5 = 0;
        }
        param_3 = param_3 + 1;
        if (puVar4 == (uint *)0x0) goto LAB_014e5bbc;
LAB_014e5b9c:
        if (puVar4[1] != *puVar4) break;
        puVar6 = *(uint **)(puVar4 + 2);
        if (uVar5 == 0) goto LAB_014e5bcc;
      }
      puVar6 = puVar4;
    } while (puVar4[1] != uVar5);
  } while( true );
}

