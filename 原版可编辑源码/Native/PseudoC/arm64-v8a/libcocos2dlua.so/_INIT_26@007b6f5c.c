
void _INIT_26(void)

{
  DAT_01782aa8 = 0;
  DAT_01782ab0 = 0;
  DAT_01782ab8 = 0x3f0000003dcccccd;
  DAT_01782ac0 = 0x3f000000;
  cocos2d::Color3B::Color3B((Color3B *)&fairygui::HtmlParseOptions::defaultLinkColor,':','g',0xcc);
  fairygui::HtmlParser::HtmlParser((HtmlParser *)fairygui::HtmlParser::defaultParser);
  __cxa_atexit(fairygui::HtmlParser::~HtmlParser,fairygui::HtmlParser::defaultParser,
               &PTR_LOOP_016979c0);
  return;
}

