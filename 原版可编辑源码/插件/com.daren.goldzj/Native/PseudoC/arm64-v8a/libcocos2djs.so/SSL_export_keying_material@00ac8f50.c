
int SSL_export_keying_material
              (SSL *s,uchar *out,size_t olen,char *label,size_t llen,uchar *p,size_t plen,
              int use_context)

{
  int iVar1;
  
  if ((s->version < 0x301) && (s->version != 0x100)) {
    return -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00ac8f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(s->method->get_timeout + 0x60))();
  return iVar1;
}

