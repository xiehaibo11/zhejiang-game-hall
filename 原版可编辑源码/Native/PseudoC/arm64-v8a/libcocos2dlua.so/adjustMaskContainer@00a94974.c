
/* fairygui::ScrollPane::adjustMaskContainer() */

void __thiscall fairygui::ScrollPane::adjustMaskContainer(ScrollPane *this)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float local_30;
  float fStack_2c;
  long local_28;
  
                    /* catch() { ... } // from try @ 00a948b4 with catch @ 00a94984
                       catch() { ... } // from try @ 00a94930 with catch @ 00a94984 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((this[0x4c] == (ScrollPane)0x0) || (*(long *)(this + 0x118) == 0)) ||
     (this[0x59] != (ScrollPane)0x0)) {
    lVar2 = *(long *)(this + 0xf8);
    fVar3 = *(float *)(lVar2 + 0x238);
  }
  else {
    lVar2 = *(long *)(this + 0xf8);
    fVar3 = *(float *)(lVar2 + 0x238) + *(float *)(*(long *)(this + 0x118) + 200);
  }
  local_30 = (float)(int)fVar3 + *(float *)(lVar2 + 0x248);
  fStack_2c = (*(float *)(lVar2 + 0xcc) - *(float *)(this + 0x68)) -
              ((float)(int)*(float *)(lVar2 + 0x23c) + *(float *)(lVar2 + 0x24c));
  (**(code **)(**(long **)(this + 0x100) + 0x98))(*(long **)(this + 0x100),&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

