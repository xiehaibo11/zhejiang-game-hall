
/* cocostudio::WidgetPropertiesReader::getWidgetReaderClassName(cocos2d::ui::Widget*) */

Widget * cocostudio::WidgetPropertiesReader::getWidgetReaderClassName(Widget *param_1)

{
  long lVar1;
  long in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  if (in_x1 != 0) {
    lVar1 = __dynamic_cast();
    if (lVar1 == 0) {
      lVar1 = __dynamic_cast();
      if (lVar1 == 0) {
        lVar1 = __dynamic_cast();
        if (lVar1 == 0) {
          lVar1 = __dynamic_cast();
          if (lVar1 == 0) {
            lVar1 = __dynamic_cast();
            if (lVar1 == 0) {
              lVar1 = __dynamic_cast();
              if (lVar1 == 0) {
                lVar1 = __dynamic_cast();
                if (lVar1 == 0) {
                  lVar1 = __dynamic_cast();
                  if (lVar1 == 0) {
                    lVar1 = __dynamic_cast();
                    if (lVar1 == 0) {
                      lVar1 = __dynamic_cast();
                      if (lVar1 == 0) {
                        lVar1 = __dynamic_cast();
                        if (lVar1 == 0) {
                          lVar1 = __dynamic_cast();
                          if (lVar1 == 0) {
                            lVar1 = __dynamic_cast();
                            if (lVar1 == 0) {
                              param_1 = (Widget *)
                                        std::__ndk1::
                                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                        ::assign(in_x8,"WidgetReader",0xc);
                            }
                            else {
                              param_1 = (Widget *)
                                        std::__ndk1::
                                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                        ::assign(in_x8,"LayoutReader",0xc);
                            }
                          }
                          else {
                            param_1 = (Widget *)
                                      std::__ndk1::
                                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      ::assign(in_x8,"ScrollViewReader",0x10);
                          }
                        }
                        else {
                          param_1 = (Widget *)
                                    std::__ndk1::
                                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    ::assign(in_x8,"PageViewReader",0xe);
                        }
                      }
                      else {
                        param_1 = (Widget *)
                                  std::__ndk1::
                                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  ::assign(in_x8,"ListViewReader",0xe);
                      }
                    }
                    else {
                      param_1 = (Widget *)
                                std::__ndk1::
                                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                ::assign(in_x8,"TextFieldReader",0xf);
                    }
                  }
                  else {
                    param_1 = (Widget *)
                              std::__ndk1::
                              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              ::assign(in_x8,"SliderReader",0xc);
                  }
                }
                else {
                  param_1 = (Widget *)
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::assign(in_x8,"LoadingBarReader",0x10);
                }
              }
              else {
                param_1 = (Widget *)
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::assign(in_x8,"TextReader",10);
              }
            }
            else {
              param_1 = (Widget *)
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::assign(in_x8,"TextBMFontReader",0x10);
            }
          }
          else {
            param_1 = (Widget *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::assign(in_x8,"TextAtlasReader",0xf);
          }
        }
        else {
          param_1 = (Widget *)
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign(in_x8,"ImageViewReader",0xf);
        }
      }
      else {
        param_1 = (Widget *)
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(in_x8,"CheckBoxReader",0xe);
      }
    }
    else {
      param_1 = (Widget *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(in_x8,"ButtonReader",0xc);
    }
  }
  return param_1;
}

