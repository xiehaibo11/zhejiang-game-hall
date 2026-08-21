
/* ResKey::load(unsigned char*, unsigned long) */

void __thiscall ResKey::load(ResKey *this,uchar *param_1,ulong param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_2 % 0x18 == 0) {
    *(int *)(this + 8) = (int)(param_2 / 0x18);
    uStack_68 = 0x63cf05a6d6add6e9;
    local_70 = 0xed008c5c747b4cf8;
    btea(param_1,-(int)(param_2 >> 2),&local_70);
    if (*(void **)this != (void *)0x0) {
      operator_delete__(*(void **)this);
    }
    iVar1 = *(int *)(this + 8);
    uVar6 = (long)iVar1 * 0x1048;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (long)iVar1;
    if (SUB168(auVar2 * ZEXT816(0x1048),8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new__(uVar6);
    *(void **)this = pvVar5;
    if ((0 < iVar1) && (blowfish_key_setup(param_1,pvVar5,0x18), 1 < *(int *)(this + 8))) {
      lVar7 = 1;
      uVar6 = 0x18;
      lVar8 = 0x1048;
      do {
        blowfish_key_setup(param_1 + (uVar6 & 0xfffffff8),*(long *)this + lVar8,0x18);
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 0x1048;
        uVar6 = uVar6 + 0x18;
      } while (lVar7 < *(int *)(this + 8));
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

