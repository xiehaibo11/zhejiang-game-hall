
/* rapidxml::parse_error::~parse_error() */

void __thiscall rapidxml::parse_error::~parse_error(parse_error *this)

{
  std::bad_exception::~bad_exception((bad_exception *)this);
  operator_delete(this);
  return;
}

