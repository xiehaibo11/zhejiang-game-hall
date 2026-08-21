
void FUN_01257fe0(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,long param_2,char *param_3,undefined8 *param_4)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  uint uVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  sVar3 = strlen(param_3);
  uVar4 = sVar3 + param_2;
  uVar6 = (ulong)(byte)*param_1;
  if (((byte)*param_1 & 1) != 0) goto LAB_01258044;
LAB_01258020:
  uVar5 = uVar4 - (uVar6 >> 1);
  if (uVar6 >> 1 <= uVar4 && uVar5 != 0) goto LAB_01258050;
LAB_0125802c:
  if ((uVar6 & 1) == 0) {
    param_1[uVar4 + 1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    *param_1 = SUB41((int)uVar4 << 1,0);
  }
  else {
    *(undefined1 *)(*(long *)(param_1 + 0x10) + uVar4) = 0;
    *(ulong *)(param_1 + 8) = uVar4;
  }
  do {
    uStack_78 = param_4[1];
    local_80 = *param_4;
    uStack_68 = param_4[3];
    uStack_70 = param_4[2];
    pbVar7 = param_1 + 1;
    if (((byte)*param_1 & 1) != 0) {
      pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (param_1 + 0x10);
    }
    local_60 = local_80;
    uStack_58 = uStack_78;
    uStack_50 = uStack_70;
    uStack_48 = uStack_68;
    uVar2 = v8::internal::VSNPrintF
                      (pbVar7 + param_2,(long)((int)uVar4 - (int)param_2),param_3,&local_80);
    if (-1 < (int)uVar2) {
      bVar1 = *param_1;
      uVar4 = param_2 + (ulong)uVar2;
      if (((byte)bVar1 & 1) == 0) {
        uVar6 = uVar4 - ((byte)bVar1 >> 1);
        if ((byte)bVar1 >> 1 <= uVar4 && uVar6 != 0) {
LAB_012580fc:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (param_1,uVar6,'\0');
          return;
        }
      }
      else {
        uVar6 = uVar4 - *(ulong *)(param_1 + 8);
        if (*(ulong *)(param_1 + 8) <= uVar4 && uVar6 != 0) goto LAB_012580fc;
      }
      if (((byte)bVar1 & 1) == 0) {
        param_1[uVar4 + 1] =
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
        *param_1 = SUB41((int)uVar4 << 1,0);
      }
      else {
        *(undefined1 *)(*(long *)(param_1 + 0x10) + uVar4) = 0;
        *(ulong *)(param_1 + 8) = uVar4;
      }
      return;
    }
    uVar4 = v8::base::bits::RoundUpToPowerOfTwo64(uVar4 + 1);
    uVar6 = (ulong)(byte)*param_1;
    if (((byte)*param_1 & 1) == 0) goto LAB_01258020;
LAB_01258044:
    uVar5 = uVar4 - *(ulong *)(param_1 + 8);
    if (uVar4 < *(ulong *)(param_1 + 8) || uVar5 == 0) goto LAB_0125802c;
LAB_01258050:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(param_1,uVar5,'\0');
  } while( true );
}

