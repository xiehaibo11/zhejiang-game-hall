
/* v8::internal::PropertyCell::PropertyCellPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::PropertyCell::PropertyCellPrint(PropertyCell *this,basic_ostream *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  basic_ostream *pbVar4;
  char *pcVar5;
  ulong uVar6;
  ulong local_18;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"PropertyCell");
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - name: ",10);
  uVar6 = *(ulong *)this & 0xffffffff00000000;
  local_18 = uVar6 | *(uint *)(*(ulong *)this + 3);
  if (*(ushort *)((uVar6 | 7) + (ulong)*(uint *)(local_18 - 1)) < 0x40) {
    String::StringPrint((String *)&local_18,param_1);
  }
  else {
    internal::operator<<(param_1,(Brief *)&local_18);
  }
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - value: ",0xb);
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar4,(Brief *)&local_18);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - details: ",0xd);
  local_18 = CONCAT44(local_18._4_4_,*(int *)(*(long *)this + 7) >> 1);
  PropertyDetails::PrintAsSlowTo((PropertyDetails *)&local_18,param_1);
  uVar2 = *(uint *)(*(long *)this + 7) >> 7 & 3;
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - cell_type: ",0xf);
  uVar1 = *(uint *)(*(ulong *)this + 0xb);
  if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)((*(ulong *)this & 0xffffffff00000000) + 0xa8))) {
    switch(uVar2) {
    case 0:
      pcVar5 = "Undefined";
      uVar6 = 9;
      break;
    case 1:
      pcVar5 = "Constant";
      uVar6 = 8;
      break;
    case 2:
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"ConstantType",0xc);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4," (",2);
      iVar3 = GetConstantType(this);
      if (iVar3 == 1) {
        pcVar5 = "StableMap";
        uVar6 = 9;
LAB_00f36c1c:
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,pcVar5,uVar6);
      }
      else if (iVar3 == 0) {
        pcVar5 = "Smi";
        uVar6 = 3;
        goto LAB_00f36c1c;
      }
      pcVar5 = ")";
      uVar6 = 1;
      break;
    case 3:
      pcVar5 = "Mutable";
      uVar6 = 7;
    }
  }
  else if (uVar2 == 1) {
    pcVar5 = "Invalidated";
    uVar6 = 0xb;
  }
  else {
    if (uVar2 != 0) {
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"??? ",4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar2);
      goto LAB_00f36c38;
    }
    pcVar5 = "Uninitialized";
    uVar6 = 0xd;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar5,uVar6);
LAB_00f36c38:
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

