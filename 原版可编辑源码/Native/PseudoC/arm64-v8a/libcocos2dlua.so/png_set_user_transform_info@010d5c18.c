
void png_set_user_transform_info
               (long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  if (param_1 != 0) {
    if ((*(char *)(param_1 + 0x165) < '\0') && ((*(byte *)(param_1 + 0x168) >> 6 & 1) != 0)) {
      png_app_error(param_1,"info change after png_start_read_image or png_read_update_info");
      return;
    }
    *(undefined8 *)(param_1 + 0x158) = param_2;
    *(undefined1 *)(param_1 + 0x160) = param_3;
    *(undefined1 *)(param_1 + 0x161) = param_4;
  }
  return;
}

