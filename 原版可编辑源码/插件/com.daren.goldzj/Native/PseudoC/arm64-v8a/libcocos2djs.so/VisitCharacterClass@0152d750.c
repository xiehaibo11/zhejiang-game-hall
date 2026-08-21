
/* v8::internal::RegExpUnparser::VisitCharacterClass(v8::internal::RegExpCharacterClass*, void*) */

undefined8
v8::internal::RegExpUnparser::VisitCharacterClass(RegExpCharacterClass *param_1,void *param_2)

{
  CharacterSet *this;
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  basic_ostream *pbVar6;
  long lVar7;
  long *plVar8;
  int local_58 [2];
  int local_38 [2];
  
  if ((*(byte *)((long)param_2 + 0x1c) & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (*(basic_ostream **)(param_1 + 8),"^",1);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (*(basic_ostream **)(param_1 + 8),"[",1);
  this = (CharacterSet *)((long)param_2 + 8);
  lVar4 = CharacterSet::ranges(this,*(Zone **)(param_1 + 0x10));
  if (0 < *(int *)(lVar4 + 0xc)) {
    puVar5 = (undefined8 *)CharacterSet::ranges(this,*(Zone **)(param_1 + 0x10));
    iVar2 = *(int *)*puVar5;
    iVar3 = ((int *)*puVar5)[1];
    local_38[0] = iVar2;
    internal::operator<<(*(basic_ostream **)(param_1 + 8),(AsUC32 *)local_38);
    if (iVar2 != iVar3) {
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (*(basic_ostream **)(param_1 + 8),"-",1);
      local_58[0] = iVar3;
      internal::operator<<(pbVar6,(AsUC32 *)local_58);
    }
    lVar4 = CharacterSet::ranges(this,*(Zone **)(param_1 + 0x10));
    if (1 < *(int *)(lVar4 + 0xc)) {
      lVar4 = 1;
      do {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (*(basic_ostream **)(param_1 + 8)," ",1);
        plVar8 = (long *)CharacterSet::ranges(this,*(Zone **)(param_1 + 0x10));
        piVar1 = (int *)(*plVar8 + lVar4 * 8);
        iVar2 = *piVar1;
        iVar3 = piVar1[1];
        local_38[0] = iVar2;
        internal::operator<<(*(basic_ostream **)(param_1 + 8),(AsUC32 *)local_38);
        if (iVar2 != iVar3) {
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (*(basic_ostream **)(param_1 + 8),"-",1);
          local_58[0] = iVar3;
          internal::operator<<(pbVar6,(AsUC32 *)local_58);
        }
        lVar4 = lVar4 + 1;
        lVar7 = CharacterSet::ranges(this,*(Zone **)(param_1 + 0x10));
      } while (lVar4 < *(int *)(lVar7 + 0xc));
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (*(basic_ostream **)(param_1 + 8),"]",1);
  return 0;
}

