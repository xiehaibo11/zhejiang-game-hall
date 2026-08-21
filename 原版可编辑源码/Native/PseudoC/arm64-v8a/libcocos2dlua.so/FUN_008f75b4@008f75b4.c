
undefined8 FUN_008f75b4(lua_State *param_1)

{
  long lVar1;
  Color4F local_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  cocos2d::Color4F::Color4F(local_38);
  luaval_to_color4f(param_1,2,local_38,"");
  fairygui::UIConfig::modalLayerColor[8] = local_38[8];
  fairygui::UIConfig::modalLayerColor[9] = local_38[9];
  fairygui::UIConfig::modalLayerColor[10] = local_38[10];
  fairygui::UIConfig::modalLayerColor[0xb] = local_38[0xb];
  fairygui::UIConfig::modalLayerColor[0xc] = local_38[0xc];
  fairygui::UIConfig::modalLayerColor[0xd] = local_38[0xd];
  fairygui::UIConfig::modalLayerColor[0xe] = local_38[0xe];
  fairygui::UIConfig::modalLayerColor[0xf] = local_38[0xf];
  fairygui::UIConfig::modalLayerColor[0] = local_38[0];
  fairygui::UIConfig::modalLayerColor[1] = local_38[1];
  fairygui::UIConfig::modalLayerColor[2] = local_38[2];
  fairygui::UIConfig::modalLayerColor[3] = local_38[3];
  fairygui::UIConfig::modalLayerColor[4] = local_38[4];
  fairygui::UIConfig::modalLayerColor[5] = local_38[5];
  fairygui::UIConfig::modalLayerColor[6] = local_38[6];
  fairygui::UIConfig::modalLayerColor[7] = local_38[7];
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

