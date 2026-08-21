
void FUN_00a7fb58(long param_1)

{
  if ((*(GLoader **)(param_1 + 8))[0x201] != (GLoader)0x0) {
    return;
  }
  fairygui::GLoader::updateLayout(*(GLoader **)(param_1 + 8));
  return;
}

