
/* v8::internal::SerializedCodeData::SanityCheck(v8::internal::Isolate*, unsigned int) const */

undefined4 __thiscall
v8::internal::SerializedCodeData::SanityCheck
          (SerializedCodeData *this,Isolate *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  int *piVar10;
  
  if (*(uint *)(this + 0x10) < 0x20) {
    uVar9 = 7;
  }
  else {
    piVar10 = *(int **)(this + 8);
    if (*piVar10 == -0x3f21fc8c) {
      iVar6 = piVar10[1];
      uVar2 = piVar10[2];
      iVar4 = piVar10[3];
      uVar1 = piVar10[5];
      iVar3 = piVar10[6];
      uVar7 = base::hash_value(Version::patch_);
      uVar7 = base::hash_combine(0,uVar7);
      uVar8 = base::hash_value(Version::build_);
      uVar7 = base::hash_combine(uVar7,uVar8);
      uVar8 = base::hash_value(Version::minor_);
      uVar7 = base::hash_combine(uVar7,uVar8);
      uVar8 = base::hash_value(Version::major_);
      iVar5 = base::hash_combine(uVar7,uVar8);
      if (iVar6 == iVar5) {
        if (uVar2 == param_2) {
          iVar6 = FlagList::Hash();
          if (iVar4 == iVar6) {
            if (*(int *)(this + 0x10) -
                (*(int *)(*(long *)(this + 8) + 0x10) * 4 + 0x27U & 0xfffffff8) < uVar1) {
              uVar9 = 8;
            }
            else {
              iVar6 = Checksum((internal *)(*(long *)(this + 8) + 0x20),
                               *(int *)(this + 0x10) + -0x20);
              uVar9 = 0;
              if (iVar6 != iVar3) {
                uVar9 = 6;
              }
            }
          }
          else {
            uVar9 = 5;
          }
        }
        else {
          uVar9 = 3;
        }
      }
      else {
        uVar9 = 2;
      }
    }
    else {
      uVar9 = 1;
    }
  }
  return uVar9;
}

