
/* v8::internal::StringComparator::Equals(v8::internal::String, v8::internal::String) */

undefined8 __thiscall
v8::internal::StringComparator::Equals(StringComparator *this,long param_2,undefined8 param_3)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  ulong uVar6;
  ushort *puVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_2 + 7);
  State::Init();
  State::Init((State *)(this + 0x128),param_3);
  while( true ) {
    uVar2 = *(uint *)(this + 0x11c);
    if ((int)*(uint *)(this + 0x244) <= (int)*(uint *)(this + 0x11c)) {
      uVar2 = *(uint *)(this + 0x244);
    }
    if (this[0x118] == (StringComparator)0x0) {
      puVar5 = *(ushort **)(this + 0x120);
      if (this[0x240] == (StringComparator)0x0) {
        if (0 < (int)uVar2) {
          puVar7 = *(ushort **)(this + 0x248);
          puVar1 = puVar5 + (int)uVar2;
          do {
            if (*puVar5 != *puVar7) {
              return 0;
            }
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          } while (puVar5 < puVar1);
        }
      }
      else if (0 < (int)uVar2) {
        pbVar4 = *(byte **)(this + 0x248);
        uVar6 = (ulong)uVar2;
        do {
          if (*puVar5 != (ushort)*pbVar4) {
            return 0;
          }
          uVar6 = uVar6 - 1;
          pbVar4 = pbVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
      }
    }
    else {
      pbVar4 = *(byte **)(this + 0x120);
      if (this[0x240] == (StringComparator)0x0) {
        if (0 < (int)uVar2) {
          puVar5 = *(ushort **)(this + 0x248);
          uVar6 = (ulong)uVar2;
          do {
            if (*puVar5 != (ushort)*pbVar4) {
              return 0;
            }
            uVar6 = uVar6 - 1;
            puVar5 = puVar5 + 1;
            pbVar4 = pbVar4 + 1;
          } while (uVar6 != 0);
        }
      }
      else {
        iVar3 = memcmp(pbVar4,*(void **)(this + 0x248),(long)(int)uVar2);
        if (iVar3 != 0) {
          return 0;
        }
      }
    }
    iVar8 = iVar8 - uVar2;
    if (iVar8 == 0) break;
    State::Advance((State *)this,uVar2);
    State::Advance((State *)(this + 0x128),uVar2);
  }
  return 1;
}

