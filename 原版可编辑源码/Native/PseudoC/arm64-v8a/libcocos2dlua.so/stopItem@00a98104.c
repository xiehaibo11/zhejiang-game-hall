
/* fairygui::Transition::stopItem(fairygui::TransitionItem*, bool) */

void __thiscall
fairygui::Transition::stopItem(Transition *this,TransitionItem *param_1,bool param_2)

{
  GObject *this_00;
  
  if (*(uint *)(param_1 + 0x90) != 0) {
    GObject::releaseDisplayLock(*(GObject **)(param_1 + 0x88),*(uint *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*(GTweener **)(param_1 + 0x80) != (GTweener *)0x0) {
    GTweener::kill(*(GTweener **)(param_1 + 0x80),param_2);
    *(undefined8 *)(param_1 + 0x80) = 0;
    if ((*(int *)(param_1 + 0x20) == 0xb) && (!param_2)) {
      this_00 = *(GObject **)(param_1 + 0x88);
      this_00[0x99] = (GObject)0x1;
      GObject::setPosition
                (this_00,*(float *)(this_00 + 0xc0) - *(float *)(*(long *)(param_1 + 0x48) + 8),
                 *(float *)(this_00 + 0xc4) - *(float *)(*(long *)(param_1 + 0x48) + 0xc));
      *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x99) = 0;
    }
  }
  return;
}

