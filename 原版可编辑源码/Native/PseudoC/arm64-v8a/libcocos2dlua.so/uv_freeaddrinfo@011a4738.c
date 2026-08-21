
void uv_freeaddrinfo(addrinfo *param_1)

{
  if (param_1 != (addrinfo *)0x0) {
    freeaddrinfo(param_1);
    return;
  }
  return;
}

