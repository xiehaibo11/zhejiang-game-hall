
/* v8::internal::UnicodeRangeSplitter::AddRange(v8::internal::CharacterRange) */

void __thiscall
v8::internal::UnicodeRangeSplitter::AddRange(UnicodeRangeSplitter *this,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)((ulong)param_2 >> 0x20);
  if (-1 < param_2) {
    uVar3 = (uint)param_2;
    uVar2 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    iVar4 = iVar5;
    if (0xd7fe < iVar5) {
      iVar4 = 0xd7ff;
    }
    if ((int)uVar2 <= iVar4) {
      puVar1 = *(undefined8 **)(this + 8);
      if (puVar1 == *(undefined8 **)(this + 0x10)) {
        puVar1 = (undefined8 *)
                 base::SmallVector<v8::internal::CharacterRange,8ul>::Grow
                           ((SmallVector<v8::internal::CharacterRange,8ul> *)this);
      }
      *puVar1 = CONCAT44(iVar4,uVar2);
      *(undefined8 **)(this + 8) = puVar1 + 1;
    }
    if (0xd7ff < iVar5) {
      uVar2 = uVar3;
      if ((int)uVar3 < 0xd801) {
        uVar2 = 0xd800;
      }
      iVar4 = iVar5;
      if (0xdbfe < iVar5) {
        iVar4 = 0xdbff;
      }
      if ((int)uVar2 <= iVar4) {
        puVar1 = *(undefined8 **)(this + 0x60);
        if (puVar1 == *(undefined8 **)(this + 0x68)) {
          puVar1 = (undefined8 *)
                   base::SmallVector<v8::internal::CharacterRange,8ul>::Grow
                             ((SmallVector<v8::internal::CharacterRange,8ul> *)(this + 0x58));
        }
        *puVar1 = CONCAT44(iVar4,uVar2);
        *(undefined8 **)(this + 0x60) = puVar1 + 1;
      }
      if (0xdbff < iVar5) {
        uVar2 = uVar3;
        if ((int)uVar3 < 0xdc01) {
          uVar2 = 0xdc00;
        }
        iVar4 = iVar5;
        if (0xdffe < iVar5) {
          iVar4 = 0xdfff;
        }
        if ((int)uVar2 <= iVar4) {
          puVar1 = *(undefined8 **)(this + 0xb8);
          if (puVar1 == *(undefined8 **)(this + 0xc0)) {
            puVar1 = (undefined8 *)
                     base::SmallVector<v8::internal::CharacterRange,8ul>::Grow
                               ((SmallVector<v8::internal::CharacterRange,8ul> *)(this + 0xb0));
          }
          *puVar1 = CONCAT44(iVar4,uVar2);
          *(undefined8 **)(this + 0xb8) = puVar1 + 1;
        }
        if (0xdfff < iVar5) {
          uVar2 = uVar3;
          if ((int)uVar3 < 0xe001) {
            uVar2 = 0xe000;
          }
          iVar4 = iVar5;
          if (0xfffe < iVar5) {
            iVar4 = 0xffff;
          }
          if ((int)uVar2 <= iVar4) {
            puVar1 = *(undefined8 **)(this + 8);
            if (puVar1 == *(undefined8 **)(this + 0x10)) {
              puVar1 = (undefined8 *)
                       base::SmallVector<v8::internal::CharacterRange,8ul>::Grow
                                 ((SmallVector<v8::internal::CharacterRange,8ul> *)this);
            }
            *puVar1 = CONCAT44(iVar4,uVar2);
            *(undefined8 **)(this + 8) = puVar1 + 1;
          }
          if (0xffff < iVar5) {
            if ((int)uVar3 < 0x10001) {
              uVar3 = 0x10000;
            }
            if (0x10fffe < iVar5) {
              iVar5 = 0x10ffff;
            }
            if ((int)uVar3 <= iVar5) {
              puVar1 = *(undefined8 **)(this + 0x110);
              if (puVar1 == *(undefined8 **)(this + 0x118)) {
                puVar1 = (undefined8 *)
                         base::SmallVector<v8::internal::CharacterRange,8ul>::Grow
                                   ((SmallVector<v8::internal::CharacterRange,8ul> *)(this + 0x108))
                ;
              }
              *puVar1 = CONCAT44(iVar5,uVar3);
              *(undefined8 **)(this + 0x110) = puVar1 + 1;
            }
          }
        }
      }
    }
  }
  return;
}

