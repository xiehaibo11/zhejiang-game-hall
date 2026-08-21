
bool SSL_SESSION_has_ticket(long param_1)

{
  return *(long *)(param_1 + 0x138) != 0;
}

