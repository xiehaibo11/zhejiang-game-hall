
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_12(void)

{
  se::EmptyValueArray = 0;
  DAT_01d37150 = 0;
  DAT_01d37158 = 0;
  __cxa_atexit(FUN_009042a4,&se::EmptyValueArray,&PTR_LOOP_01d1b000);
  _DAT_01d37168 = 0;
  se::Value::Null = 0;
  se::Value::reset((Value *)&se::Value::Null,1);
  __cxa_atexit(se::Value::~Value,&se::Value::Null,&PTR_LOOP_01d1b000);
  _DAT_01d37178 = 0;
  se::Value::Undefined = 0;
  se::Value::reset((Value *)&se::Value::Undefined,0);
  __cxa_atexit(se::Value::~Value,&se::Value::Undefined,&PTR_LOOP_01d1b000);
  return;
}

