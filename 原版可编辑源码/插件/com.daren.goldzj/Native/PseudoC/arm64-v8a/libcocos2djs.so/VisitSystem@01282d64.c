
/* v8::internal::DisassemblingDecoder::VisitSystem(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitSystem(DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = *(uint *)param_1;
  if ((uVar1 & 0xfffffd1f) == 0xd503211f) {
    pcVar3 = "(System)";
    pcVar2 = "unimplemented";
    if ((int)uVar1 < -0x2afcdcc1) {
      if (uVar1 == 0xd503211f) {
        Format(this,param_1,"pacia1716",(char *)0x0);
        return;
      }
      if (uVar1 == 0xd503219f) {
        Format(this,param_1,"autia1716",(char *)0x0);
        return;
      }
    }
    else {
      if (uVar1 == 0xd503233f) {
        Format(this,param_1,"paciasp",(char *)0x0);
        return;
      }
      if (uVar1 == 0xd50323bf) {
        Format(this,param_1,"autiasp",(char *)0x0);
        return;
      }
    }
LAB_01282fc8:
    Format(this,param_1,pcVar2,pcVar3);
    return;
  }
  if ((uVar1 & 0xffd00000) == 0xd5100000) {
    if ((uVar1 & 0xfff00000) == 0xd5100000) {
      uVar1 = uVar1 >> 5 & 0x7fff;
      if (uVar1 == 0x5a10) {
        Format(this,param_1,"msr","nzcv, \'Xt");
        return;
      }
      if (uVar1 == 0x5a20) {
        Format(this,param_1,"msr","fpcr, \'Xt");
        return;
      }
      Format(this,param_1,"msr","(unknown), \'Xt");
      return;
    }
    if ((uVar1 & 0xfff00000) == 0xd5300000) {
      uVar1 = uVar1 >> 5 & 0x7fff;
      if (uVar1 == 0x5a10) {
        Format(this,param_1,"mrs","\'Xt, nzcv");
        return;
      }
      if (uVar1 == 0x5a20) {
        Format(this,param_1,"mrs","\'Xt, fpcr");
        return;
      }
      Format(this,param_1,"mrs","\'Xt, (unknown)");
      return;
    }
  }
  else if ((uVar1 & 0xfffff01f) == 0xd503201f) {
    uVar1 = uVar1 >> 5 & 0x7f;
    if (uVar1 == 0x14) {
      Format(this,param_1,"csdb",(char *)0x0);
      return;
    }
    if (uVar1 == 0) {
      Format(this,param_1,"nop",(char *)0x0);
      return;
    }
  }
  else if ((uVar1 & 0xfffff09f) == 0xd503309f) {
    uVar1 = uVar1 & 0xfffff0ff;
    if (uVar1 == 0xd503309f) {
      Format(this,param_1,"dsb","\'M");
      return;
    }
    if (uVar1 == 0xd50330df) {
      pcVar3 = (char *)0x0;
      pcVar2 = "isb";
      goto LAB_01282fc8;
    }
    if (uVar1 == 0xd50330bf) {
      Format(this,param_1,"dmb","\'M");
      return;
    }
  }
  Format(this,param_1,"unimplemented","(System)");
  return;
}

