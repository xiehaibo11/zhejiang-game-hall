
/* fairygui::Window::closeEventHandler(fairygui::EventContext*) */

void fairygui::Window::closeEventHandler(EventContext *param_1)

{
  if (*(long *)(param_1 + 0xa0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aa5544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0xf8))();
    return;
  }
  return;
}

