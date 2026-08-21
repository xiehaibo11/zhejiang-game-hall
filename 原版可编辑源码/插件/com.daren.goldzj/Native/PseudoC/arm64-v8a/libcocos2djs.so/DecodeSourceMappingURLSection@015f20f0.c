
/* v8::internal::wasm::ModuleDecoderImpl::DecodeSourceMappingURLSection() */

void __thiscall
v8::internal::wasm::ModuleDecoderImpl::DecodeSourceMappingURLSection(ModuleDecoderImpl *this)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  void *__dest;
  long lVar7;
  undefined **local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_68;
  undefined4 local_60;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
  uStack_78 = *(undefined8 *)(this + 0x10);
  local_80 = *(long *)(this + 8);
  local_70 = *(undefined8 *)(this + 0x18);
  local_68 = *(int *)(this + 0x20);
  local_88 = &PTR__Decoder_01cbc3a8;
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  local_48 = (void *)0x0;
  uVar2 = FUN_015ede44(&local_88,1,"module name");
  uVar6 = local_58 >> 1 & 0x7f;
  if ((local_58 & 1) != 0) {
    uVar6 = local_50;
  }
  if ((uVar6 != 0) || ((char)this[0x6d] < '\0')) goto LAB_015f2230;
  lVar7 = *(long *)(this + 0x50);
  uVar6 = uVar2 >> 0x20;
  bVar1 = *(byte *)(lVar7 + 0x188);
  pcVar5 = (char *)(local_80 + (ulong)(uint)((int)uVar2 - local_68));
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (lVar7 + 0x188);
  if ((bVar1 & 1) == 0) {
    uVar3 = 0x16;
    uVar4 = uVar6 - 0x16;
    if (uVar6 < 0x16 || uVar4 == 0) goto LAB_015f21a4;
LAB_015f21c8:
    if ((bVar1 & 1) == 0) {
      uVar2 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar2 = *(ulong *)(lVar7 + 400);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace(this_00,uVar3,uVar4,uVar2,0,uVar2,uVar6,pcVar5);
  }
  else {
    uVar3 = (*(ulong *)this_00 & 0xfffffffffffffffe) - 1;
    uVar4 = uVar6 - uVar3;
    if (uVar3 <= uVar6 && uVar4 != 0) goto LAB_015f21c8;
LAB_015f21a4:
    if ((bVar1 & 1) == 0) {
      __dest = (void *)(lVar7 + 0x189);
    }
    else {
      __dest = *(void **)(lVar7 + 0x198);
    }
    if (uVar6 != 0) {
      memmove(__dest,pcVar5,uVar6);
    }
    *(undefined1 *)((long)__dest + uVar6) = 0;
    if (((byte)*this_00 & 1) == 0) {
      *this_00 = SUB41((int)(uVar2 >> 0x20) << 1,0);
    }
    else {
      *(ulong *)(lVar7 + 400) = uVar6;
    }
  }
  *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x8000;
LAB_015f2230:
  pcVar5 = *(char **)(this + 0x10);
  uVar6 = *(long *)(this + 0x18) - *(long *)(this + 8);
  if ((uint)((int)*(long *)(this + 0x18) - (int)pcVar5) < (uint)uVar6) {
    Decoder::errorf((uchar *)this,pcVar5,"expected %u bytes, fell off end");
    pcVar5 = *(char **)(this + 0x18);
  }
  else {
    pcVar5 = pcVar5 + (uVar6 & 0xffffffff);
  }
  *(char **)(this + 0x10) = pcVar5;
  local_88 = &PTR__Decoder_01cbc3a8;
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  return;
}

