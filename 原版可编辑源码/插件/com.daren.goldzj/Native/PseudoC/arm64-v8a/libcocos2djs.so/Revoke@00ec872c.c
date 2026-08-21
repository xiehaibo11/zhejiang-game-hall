
/* v8::Proxy::Revoke() */

void v8::Proxy::Revoke(void)

{
  internal::JSProxy::Revoke();
  return;
}

