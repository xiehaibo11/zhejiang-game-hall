
/* v8::internal::Parser::NextInternalNamespaceExportName() */

undefined8 v8::internal::Parser::NextInternalNamespaceExportName(void)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  ulong uVar4;
  long in_x0;
  size_t sVar5;
  int in_w1;
  undefined8 uVar6;
  byte local_60 [8];
  ulong local_58;
  char *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_48;
  undefined7 uStack_47;
  undefined1 local_40;
  undefined2 uStack_3f;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  char *local_38;
  
  uStack_3c = 0;
  local_38 = (char *)0x0;
  local_48 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x14;
  uStack_3f = 0x7472;
  uStack_47 = 0x7078652d736e2e;
  local_40 = 0x6f;
  uStack_3d = 0;
  uVar3 = *(uint *)(in_x0 + 0x30c);
  *(uint *)(in_x0 + 0x30c) = uVar3 + 1;
  std::__ndk1::to_string((__ndk1 *)(ulong)uVar3,in_w1);
  pcVar2 = (char *)((ulong)local_60 | 1);
  uVar4 = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    pcVar2 = local_50;
    uVar4 = local_58;
  }
  if (uVar4 < 0xc || uVar4 - 0xc == 0) {
    if (uVar4 != 0) {
      __memcpy_chk(&uStack_3d,pcVar2,uVar4,0xd);
      lVar1 = uVar4 + 10;
      if (((byte)local_48 & 1) == 0) {
        local_48 = SUB41((int)lVar1 << 1,0);
      }
      else {
        local_40 = (undefined1)lVar1;
        uStack_3f = (undefined2)((ulong)lVar1 >> 8);
        uStack_3d = (undefined1)((ulong)lVar1 >> 0x18);
        uStack_3c = (undefined4)((ulong)lVar1 >> 0x20);
      }
      (&uStack_3d)[uVar4] = 0;
    }
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(&local_48,0x16,uVar4 - 0xc,10,10,0,uVar4,pcVar2);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  uVar6 = *(undefined8 *)(in_x0 + 0x60);
  pcVar2 = (char *)((ulong)&local_48 | 1);
  if (((byte)local_48 & 1) != 0) {
    pcVar2 = local_38;
  }
  sVar5 = strlen(pcVar2);
  uVar6 = AstValueFactory::GetOneByteStringInternal(uVar6,pcVar2,sVar5);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  return uVar6;
}

