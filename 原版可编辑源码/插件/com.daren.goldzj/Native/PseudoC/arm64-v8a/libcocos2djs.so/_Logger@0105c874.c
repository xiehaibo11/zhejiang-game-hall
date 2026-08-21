
/* v8::internal::Logger::~Logger() */

void __thiscall v8::internal::Logger::~Logger(Logger *this)

{
  ~Logger(this);
  operator_delete(this);
  return;
}

