
void FUN_00a96b94(long param_1)

{
  if (fairygui::ScrollPane::_draggingPane != *(long *)(param_1 + 8)) {
    return;
  }
  fairygui::ScrollPane::_draggingPane = 0;
  return;
}

