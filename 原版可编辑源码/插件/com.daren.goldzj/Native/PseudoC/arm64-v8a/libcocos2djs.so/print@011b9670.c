
/* v8::internal::TickSample::print() const */

void __thiscall v8::internal::TickSample::print(TickSample *this)

{
  char *pcVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  PrintF("TickSample: at %p\n",this);
  PrintF(" - state: %s\n",*(undefined8 *)(&DAT_01cb7888 + (long)*(int *)this * 8));
  PrintF(" - pc: %p\n",*(undefined8 *)(this + 8));
  PrintF(" - stack: (%u frames)\n",(ulong)(byte)this[0x1010]);
  uVar2 = *(ushort *)(this + 0x1010);
  if ((uVar2 & 0xff) != 0) {
    uVar4 = 0;
    do {
      PrintF("    %p\n",*(undefined8 *)(this + uVar4 * 8 + 0x18));
      uVar2 = *(ushort *)(this + 0x1010);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (byte)uVar2);
  }
  PrintF(" - has_external_callback: %d\n",(ulong)(uVar2 >> 8 & 1));
  pcVar1 = "tos";
  if ((*(ushort *)(this + 0x1010) & 0x100) != 0) {
    pcVar1 = "external_callback_entry";
  }
  PrintF(" - %s: %p\n",pcVar1,*(undefined8 *)(this + 0x10));
  PrintF(" - update_stats: %d\n",(ulong)(*(ushort *)(this + 0x1010) >> 9 & 1));
  uVar3 = base::TimeDelta::InMicroseconds((TimeDelta *)(this + 0x1020));
  PrintF(" - sampling_interval: %ld\n",uVar3);
  PrintF("\n");
  return;
}

