
/* universe::core::Flags::run() */

void __thiscall universe::core::Flags::run(Flags *this)

{
  mutex *this_00;
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  this_00 = (mutex *)(this + 0x68);
  lVar2 = *(long *)(this + 0x58);
  do {
    if (lVar2 != 0) {
      uVar3 = *(ulong *)(this + 0x50);
      do {
        plVar1 = *(long **)(*(long *)(*(long *)(this + 0x38) + (uVar3 / 0x55) * 8) +
                            (uVar3 % 0x55) * 0x30 + 0x20);
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        (**(code **)(*plVar1 + 0x30))();
        plVar4 = (long *)(*(long *)(*(long *)(this + 0x38) + (*(ulong *)(this + 0x50) / 0x55) * 8) +
                         (*(ulong *)(this + 0x50) % 0x55) * 0x30);
        plVar1 = (long *)plVar4[4];
        if (plVar4 == plVar1) {
          pcVar5 = *(code **)(*plVar1 + 0x20);
LAB_009e246c:
          (*pcVar5)();
        }
        else if (plVar1 != (long *)0x0) {
          pcVar5 = *(code **)(*plVar1 + 0x28);
          goto LAB_009e246c;
        }
        lVar2 = *(long *)(this + 0x58) + -1;
        uVar3 = *(long *)(this + 0x50) + 1;
        *(ulong *)(this + 0x50) = uVar3;
        *(long *)(this + 0x58) = lVar2;
        if (0xa9 < uVar3) {
          operator_delete((void *)**(undefined8 **)(this + 0x38));
          lVar2 = *(long *)(this + 0x58);
          uVar3 = *(long *)(this + 0x50) - 0x55;
          *(long *)(this + 0x38) = *(long *)(this + 0x38) + 8;
          *(ulong *)(this + 0x50) = uVar3;
        }
      } while (lVar2 != 0);
    }
    std::__ndk1::mutex::lock(this_00);
    if (*(long *)(this + 0x28) == 0) {
      this[0x60] = (Flags)0x0;
      std::__ndk1::mutex::unlock(this_00);
      return;
    }
    uVar7 = *(undefined8 *)(this + 0x38);
    uVar6 = *(undefined8 *)(this + 0x30);
    uVar9 = *(undefined8 *)(this + 0x48);
    uVar8 = *(undefined8 *)(this + 0x40);
    uVar11 = *(undefined8 *)(this + 0x58);
    uVar10 = *(undefined8 *)(this + 0x50);
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 8);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)this;
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 8) = uVar7;
    *(undefined8 *)this = uVar6;
    *(undefined8 *)(this + 0x18) = uVar9;
    *(undefined8 *)(this + 0x10) = uVar8;
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x20);
    *(long *)(this + 0x58) = *(long *)(this + 0x28);
    *(undefined8 *)(this + 0x28) = uVar11;
    *(undefined8 *)(this + 0x20) = uVar10;
    std::__ndk1::mutex::unlock(this_00);
    lVar2 = *(long *)(this + 0x58);
  } while( true );
}

