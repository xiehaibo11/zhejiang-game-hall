
void FT_Add_Default_Modules(undefined8 param_1)

{
  FT_Add_Module(param_1,tt_driver_class);
  FT_Add_Module(param_1,t1_driver_class);
  FT_Add_Module(param_1,cff_driver_class);
                    /* catch() { ... } // from try @ 010596fc with catch @ 01059780 */
  FT_Add_Module(param_1,t1cid_driver_class);
  FT_Add_Module(param_1,pfr_driver_class);
  FT_Add_Module(param_1,t42_driver_class);
  FT_Add_Module(param_1,winfnt_driver_class);
  FT_Add_Module(param_1,pcf_driver_class);
  FT_Add_Module(param_1,bdf_driver_class);
  FT_Add_Module(param_1,sfnt_module_class);
  FT_Add_Module(param_1,autofit_module_class);
  FT_Add_Module(param_1,pshinter_module_class);
  FT_Add_Module(param_1,ft_raster1_renderer_class);
  FT_Add_Module(param_1,ft_smooth_renderer_class);
  FT_Add_Module(param_1,ft_smooth_lcd_renderer_class);
  FT_Add_Module(param_1,ft_smooth_lcdv_renderer_class);
  FT_Add_Module(param_1,psaux_module_class);
  FT_Add_Module(param_1,psnames_module_class);
  return;
}

