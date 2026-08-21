
/* tinyxml2::XMLDocument::SaveFile(__sFILE*, bool) */

undefined4 __thiscall
tinyxml2::XMLDocument::SaveFile(XMLDocument *this,__sFILE *param_1,bool param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **local_178;
  undefined2 local_170;
  __sFILE *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined1 local_157;
  undefined8 local_156;
  undefined8 uStack_14e;
  undefined8 local_146;
  undefined8 uStack_13e;
  undefined8 local_136;
  undefined8 uStack_12e;
  undefined8 local_126;
  undefined8 uStack_11e;
  undefined8 local_116;
  undefined8 uStack_10e;
  undefined8 local_106;
  undefined8 uStack_fe;
  undefined8 local_f6;
  undefined8 uStack_ee;
  undefined8 local_e6;
  undefined8 uStack_de;
  undefined1 *local_d0;
  undefined1 auStack_c8 [80];
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 local_68 [20];
  undefined4 local_54;
  undefined4 local_50;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  local_160 = 0xffffffff00000000;
  local_170 = 0x100;
  local_78 = 10;
  local_158 = 1;
  local_54 = 0x14;
  local_e6 = 0;
  uStack_ee = 0;
  uStack_fe = 0;
  local_106 = 0;
  uStack_10e = 0;
  local_116 = 0;
  local_126 = 0;
  uStack_12e = 0;
  uStack_13e = 0;
  local_146 = 0;
  uStack_14e = 0;
  local_156 = 0;
  local_136 = 0x101000000010000;
  uStack_11e = 0x1000100000000;
  local_f6 = 0x1000000000000;
  uStack_de = 0x1000100000000;
  local_50 = 1;
  local_68[0] = 0;
  local_178 = &PTR__XMLPrinter_01c68fe8;
  local_168 = param_1;
  local_157 = param_2;
  local_d0 = auStack_c8;
  local_70 = local_68;
  Print(this,(XMLPrinter *)&local_178);
  uVar1 = *(undefined4 *)(this + 0x5c);
  local_178 = &PTR__XMLPrinter_01c68fe8;
  ppuVar3 = &PTR__XMLPrinter_01c68fe8;
  if ((local_70 != local_68) && (ppuVar3 = local_178, local_70 != (undefined1 *)0x0)) {
    local_178 = &PTR__XMLPrinter_01c68fe8;
    operator_delete__(local_70);
    ppuVar3 = local_178;
  }
  local_178 = ppuVar3;
  if ((local_d0 != auStack_c8) && (local_d0 != (undefined1 *)0x0)) {
    operator_delete__(local_d0);
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

