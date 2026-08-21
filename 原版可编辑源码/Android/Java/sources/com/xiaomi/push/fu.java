package com.xiaomi.push;

import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.push.dx;
import com.xiaomi.push.fw;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Map;

public class fu implements gi {
    public static boolean a;
    private fw a;
    private SimpleDateFormat a = new SimpleDateFormat("hh:mm:ss aaa");
    private a a = null;
    private a b = null;
    private fz a = null;
    private final String a = "[Slim] ";

    class a implements gb, gj {
        String a;
        private boolean a;

        a(boolean z) {
            this.a = true;
            this.a = z;
            this.a = z ? " RCV " : " Sent ";
        }

        @Override
        public void a(fl flVar) {
            StringBuilder sb;
            String string;
            if (fu.a) {
                sb = new StringBuilder();
                sb.append("[Slim] ");
                sb.append(fu.this.a.format(new Date()));
                sb.append(this.a);
                string = flVar.toString();
            } else {
                sb = new StringBuilder();
                sb.append("[Slim] ");
                sb.append(fu.this.a.format(new Date()));
                sb.append(this.a);
                sb.append(" Blob [");
                sb.append(flVar.a());
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                sb.append(flVar.a());
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                sb.append(flVar.e());
                string = "]";
            }
            sb.append(string);
            com.xiaomi.channel.commonutils.logger.b.c(sb.toString());
            if (flVar == null || flVar.a() != 99999) {
                return;
            }
            String strA = flVar.a();
            fl flVar2 = null;
            if (!this.a) {
                if ("BIND".equals(strA)) {
                    com.xiaomi.channel.commonutils.logger.b.a("build binded result for loopback.");
                    dx.d dVar = new dx.d();
                    dVar.a(true);
                    dVar.c("login success.");
                    dVar.b("success");
                    dVar.a("success");
                    fl flVar3 = new fl();
                    flVar3.a(dVar.a(), (String) null);
                    flVar3.a((short) 2);
                    flVar3.a(99999);
                    flVar3.a("BIND", (String) null);
                    flVar3.a(flVar.e());
                    flVar3.b((String) null);
                    flVar3.c(flVar.g());
                    flVar2 = flVar3;
                } else if (!"UBND".equals(strA) && "SECMSG".equals(strA)) {
                    fl flVar4 = new fl();
                    flVar4.a(99999);
                    flVar4.a("SECMSG", (String) null);
                    flVar4.c(flVar.g());
                    flVar4.a(flVar.e());
                    flVar4.a(flVar.a());
                    flVar4.b(flVar.f());
                    flVar4.a(flVar.a(com.xiaomi.push.service.bg.a().a(String.valueOf(99999), flVar.g()).h), (String) null);
                    flVar2 = flVar4;
                }
            }
            if (flVar2 != null) {
                for (Map.Entry<gb, fw.a> entry : fu.this.a.a().entrySet()) {
                    if (fu.this.a != entry.getKey()) {
                        entry.getValue().a(flVar2);
                    }
                }
            }
        }

        @Override
        public void a(gn gnVar) {
            StringBuilder sb;
            String strA;
            if (fu.a) {
                sb = new StringBuilder();
                sb.append("[Slim] ");
                sb.append(fu.this.a.format(new Date()));
                sb.append(this.a);
                sb.append(" PKT ");
                strA = gnVar.a();
            } else {
                sb = new StringBuilder();
                sb.append("[Slim] ");
                sb.append(fu.this.a.format(new Date()));
                sb.append(this.a);
                sb.append(" PKT [");
                sb.append(gnVar.k());
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                sb.append(gnVar.j());
                strA = "]";
            }
            sb.append(strA);
            com.xiaomi.channel.commonutils.logger.b.c(sb.toString());
        }

        @Override
        public boolean a(gn gnVar) {
            return true;
        }
    }

    public fu(fw fwVar) {
        this.a = null;
        this.a = fwVar;
        a();
    }

    private void a() {
        this.a = new a(true);
        this.b = new a(false);
        fw fwVar = this.a;
        a aVar = this.a;
        fwVar.a(aVar, aVar);
        fw fwVar2 = this.a;
        a aVar2 = this.b;
        fwVar2.b(aVar2, aVar2);
        this.a = new fv(this);
    }
}
