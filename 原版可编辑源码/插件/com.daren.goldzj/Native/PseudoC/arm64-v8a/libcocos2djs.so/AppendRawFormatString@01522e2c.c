
/* v8::internal::Log::MessageBuilder::AppendRawFormatString(char const*, ...) */

void v8::internal::Log::MessageBuilder::AppendRawFormatString(char *param_1,...)

{
  uint uVar1;
  uint uVar2;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puStack_80 = &local_c0;
  ppuStack_88 = &local_90;
  uStack_78 = 0xffffff80ffffffd0;
  uStack_38 = 0xffffff80ffffffd0;
  local_c0 = in_x2;
  uStack_b8 = in_x3;
  local_b0 = in_x4;
  uStack_a8 = in_x5;
  local_a0 = in_x6;
  uStack_98 = in_x7;
  local_90 = (undefined1 *)register0x00000008;
  local_50 = (undefined1 *)register0x00000008;
  ppuStack_48 = ppuStack_88;
  puStack_40 = puStack_80;
  uVar2 = VSNPrintF(*(undefined8 *)(*(long *)param_1 + 0x120),0x800,in_x1,&local_50);
  uVar1 = 0x800;
  if (uVar2 != 0xffffffff) {
    uVar1 = uVar2;
  }
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      local_50 = (undefined1 *)
                 CONCAT71(local_50._1_7_,
                          *(undefined1 *)(*(long *)(*(long *)param_1 + 0x120) + uVar3));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)(*(long *)param_1 + 0x10),(char *)&local_50,1);
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}

