
/* fairygui::GObject::handleVisibleChanged() */

void __thiscall fairygui::GObject::handleVisibleChanged(GObject *this)

{
  GObject *pGVar1;
  GObject GVar2;
  undefined8 uVar3;
  
  GVar2 = this[0xf4];
  pGVar1 = this + 0xa8;
  do {
    if (GVar2 == (GObject)0x0) {
      uVar3 = 0;
LAB_00a85830:
                    /* WARNING: Could not recover jumptable at 0x00a85838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)pGVar1 + 0x170))(*(long **)pGVar1,uVar3);
      return;
    }
    this = *(GObject **)(this + 0x128);
    if (this == (GObject *)0x0) {
      uVar3 = 1;
      goto LAB_00a85830;
    }
    GVar2 = this[0xf4];
  } while( true );
}

