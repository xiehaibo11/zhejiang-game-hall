
/* cocos2d::Material::initWithFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall cocos2d::Material::initWithFile(Material *this,basic_string *param_1)

{
  Properties *this_00;
  char *__s;
  size_t sVar1;
  Properties *pPVar2;
  
  this_00 = (Properties *)Properties::createNonRefCounted(param_1);
  __s = (char *)Properties::getNamespace(this_00);
  sVar1 = strlen(__s);
  pPVar2 = this_00;
  if (sVar1 == 0) {
    pPVar2 = (Properties *)Properties::getNextNamespace(this_00);
  }
  parseProperties(this,pPVar2);
  if (this_00 != (Properties *)0x0) {
    Properties::~Properties(this_00);
    operator_delete(this_00);
  }
  return 1;
}

