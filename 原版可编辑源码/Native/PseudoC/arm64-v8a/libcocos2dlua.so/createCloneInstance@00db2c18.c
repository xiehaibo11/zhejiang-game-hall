
/* cocos2d::ui::RelativeLayoutParameter::createCloneInstance() */

RelativeLayoutParameter * cocos2d::ui::RelativeLayoutParameter::createCloneInstance(void)

{
  RelativeLayoutParameter *this;
  
                    /* try { // try from 00db2c28 to 00eb2c43 has its CatchHandler @ 00db2fe4 */
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (RelativeLayoutParameter *)0x0) {
    RelativeLayoutParameter(this);
    Ref::autorelease((Ref *)this);
  }
                    /* try { // try from 00db2c54 to 00eb2d03 has its CatchHandler @ 00db3028 */
  return this;
}

