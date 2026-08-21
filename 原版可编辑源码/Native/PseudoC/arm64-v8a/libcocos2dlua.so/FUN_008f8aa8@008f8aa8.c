
undefined8 FUN_008f8aa8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = tolua_toboolean(param_1,2,1);
                    /* try { // try from 008f8ac4 to 009f8ac7 has its CatchHandler @ 008f8afc */
                    /* try { // try from 008f8ac8 to 009f8b0f has its CatchHandler @ 008f8a78 */
  fairygui::HtmlObject::usePool = iVar1 != 0;
  return 0;
}

