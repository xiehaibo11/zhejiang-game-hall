
/* cocos2d::__Dictionary::createWithContentsOfFile(char const*) */

Ref * cocos2d::__Dictionary::createWithContentsOfFile(char *param_1)

{
  Ref *this;
  
  this = (Ref *)createWithContentsOfFileThreadSafe(param_1);
  if (this != (Ref *)0x0) {
    Ref::autorelease(this);
  }
  return this;
}

