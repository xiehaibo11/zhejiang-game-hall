
void _INIT_25(void)

{
  DAT_01782a00 = 0;
  DAT_01782a08 = 0;
  DAT_01782a18 = 0x3f000000;
  DAT_01782a28 = 0;
  DAT_01782a30 = 0;
  DAT_01782a10 = 0x3f0000003dcccccd;
  fairygui::HtmlObject::buttonResource = 0;
  __cxa_atexit(std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               ~basic_string,&fairygui::HtmlObject::buttonResource,&PTR_LOOP_016979c0);
  DAT_01782a40 = 0;
  DAT_01782a48 = 0;
  fairygui::HtmlObject::inputResource = 0;
  __cxa_atexit(std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               ~basic_string,&fairygui::HtmlObject::inputResource,&PTR_LOOP_016979c0);
  DAT_01782a58 = 0;
  DAT_01782a60 = 0;
  fairygui::HtmlObject::selectResource = 0;
  __cxa_atexit(std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               ~basic_string,&fairygui::HtmlObject::selectResource,&PTR_LOOP_016979c0);
  fairygui::GObjectPool::GObjectPool((GObjectPool *)fairygui::HtmlObject::objectPool);
  __cxa_atexit(fairygui::GObjectPool::~GObjectPool,fairygui::HtmlObject::objectPool,
               &PTR_LOOP_016979c0);
  DAT_01782a98 = 0;
  DAT_01782aa0 = 0;
  fairygui::HtmlObject::loaderPool = 0;
  __cxa_atexit(cocos2d::Vector<fairygui::GObject*>::~Vector,&fairygui::HtmlObject::loaderPool,
               &PTR_LOOP_016979c0);
  return;
}

