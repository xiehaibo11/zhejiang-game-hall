
/* v8::internal::BoyerMooreLookahead::EmitSkipInstructions(v8::internal::RegExpMacroAssembler*) */

void __thiscall
v8::internal::BoyerMooreLookahead::EmitSkipInstructions
          (BoyerMooreLookahead *this,RegExpMacroAssembler *param_1)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  ulong local_48;
  
  local_58 = 0;
  iVar6 = FindBestInterval(this,4,0,(int *)((long)&local_58 + 4),(int *)&local_58);
  iVar6 = FindBestInterval(this,8,iVar6,(int *)((long)&local_58 + 4),(int *)&local_58);
  iVar6 = FindBestInterval(this,0x10,iVar6,(int *)((long)&local_58 + 4),(int *)&local_58);
  uVar4 = local_58;
  if (iVar6 == 0) {
    return;
  }
  iVar6 = (int)local_58;
  iVar5 = local_58._4_4_;
  lVar9 = (long)local_58._4_4_;
  if (local_58._4_4_ <= (int)local_58) {
    bVar3 = false;
    uVar11 = 0;
    lVar12 = (long)(int)local_58;
    do {
      puVar10 = *(ulong **)(**(long **)(this + 0x18) + lVar12 * 8);
      iVar7 = (int)puVar10[2];
      if ((bVar3) || (iVar7 == 0)) {
        if (iVar7 != 0) goto LAB_01541994;
      }
      else {
        if (1 < iVar7) goto LAB_01541994;
        uVar11 = *puVar10;
        if (uVar11 == 0) {
          local_48 = puVar10[1];
          local_50 = 0;
          std::__ndk1::bitset<128ul>::operator>>=((bitset<128ul> *)&local_50,0x40);
          if (local_48 != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar11 = (local_50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_50 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar2 = (int)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + 0x40;
          if (local_50 == 0) {
            uVar2 = 0xffffffff;
          }
          uVar11 = (ulong)uVar2;
        }
        else {
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
        }
        bVar3 = true;
      }
      bVar1 = lVar9 < lVar12;
      lVar12 = lVar12 + -1;
    } while (bVar1);
    iVar7 = (iVar6 - iVar5) + 1;
    if ((iVar6 < 3) && ((bool)(iVar7 == 1 & bVar3))) {
      return;
    }
    if (bVar3) {
      local_50 = 0;
      local_60 = 0;
      (**(code **)(*(long *)param_1 + 0x40))(param_1,&local_60);
      RegExpMacroAssembler::LoadCurrentCharacter
                ((int)param_1,(Label *)(uVar4 & 0xffffffff),SUB81(&local_50,0),1,1);
      if (*(int *)(this + 0x10) < 0x81) {
        (**(code **)(*(long *)param_1 + 0x48))(param_1,uVar11,&local_50);
      }
      else {
        (**(code **)(*(long *)param_1 + 0x50))(param_1,uVar11,0x7f,&local_50);
      }
      lVar9 = *(long *)param_1;
      goto LAB_01541a20;
    }
  }
LAB_01541994:
  uVar8 = Factory::NewByteArray(*(Factory **)(param_1 + 0x18),0x80,1);
  iVar7 = GetSkipTable(this,iVar5,uVar4 & 0xffffffff,uVar8);
  local_50 = 0;
  local_60 = 0;
  (**(code **)(*(long *)param_1 + 0x40))(param_1,&local_60);
  RegExpMacroAssembler::LoadCurrentCharacter
            ((int)param_1,(Label *)(uVar4 & 0xffffffff),SUB81(&local_50,0),1,1);
  (**(code **)(*(long *)param_1 + 0xb8))(param_1,uVar8,&local_50);
  lVar9 = *(long *)param_1;
LAB_01541a20:
  (**(code **)(lVar9 + 0x28))(param_1,iVar7);
  (**(code **)(*(long *)param_1 + 0xe0))(param_1,&local_60);
  (**(code **)(*(long *)param_1 + 0x40))(param_1,&local_50);
  return;
}

