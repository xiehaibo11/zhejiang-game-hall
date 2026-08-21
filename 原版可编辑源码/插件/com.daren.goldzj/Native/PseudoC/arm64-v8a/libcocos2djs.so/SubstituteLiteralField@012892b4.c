
/* v8::internal::DisassemblingDecoder::SubstituteLiteralField(v8::internal::Instruction*, char
   const*) */

undefined8
v8::internal::DisassemblingDecoder::SubstituteLiteralField(Instruction *param_1,char *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_2 & 0xff000000;
  if ((int)uVar1 < 0x58000000) {
    if ((uVar1 == 0x18000000) || (uVar1 == 0x1c000000)) {
LAB_01289304:
      AppendToOutput((char *)param_1,"(addr 0x%016lx)",
                     param_2 + (((int)(*(uint *)param_2 << 8) >> 0xd) << 2));
      return 6;
    }
  }
  else if ((uVar1 == 0x5c000000) || (uVar1 == 0x58000000)) goto LAB_01289304;
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

