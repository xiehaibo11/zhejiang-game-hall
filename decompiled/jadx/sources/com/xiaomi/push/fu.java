package com.xiaomi.push;

import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.push.dx;
import com.xiaomi.push.fw;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class fu implements gi {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static boolean f8168a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private fw f411a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private SimpleDateFormat f414a = new SimpleDateFormat("hh:mm:ss aaa");

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private a f410a = null;
    private a b = null;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private fz f412a = null;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final String f413a = "[Slim] ";

    class a implements gb, gj {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        String f415a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private boolean f416a;

        a(boolean z) {
            this.f416a = true;
            this.f416a = z;
            this.f415a = z ? " RCV " : " Sent ";
        }

        @Override // com.xiaomi.push.gb
        public void a(fl flVar) {
            StringBuilder sb;
            String string;
            if (fu.f8168a) {
                sb = new StringBuilder();
                sb.append("[Slim] ");
                sb.append(fu.this.f414a.format(new Date()));
                sb.append(this.f415a);
                string = flVar.toString();
            } else {
                sb = new StringBuilder();
                sb.append("[Slim] ");
                sb.append(fu.this.f414a.format(new Date()));
                sb.append(this.f415a);
                sb.append(" Blob [");
                sb.append(flVar.m344a());
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
            String strM344a = flVar.m344a();
            fl flVar2 = null;
            if (!this.f416a) {
                if ("BIND".equals(strM344a)) {
                    com.xiaomi.channel.commonutils.logger.b.m43a("build binded result for loopback.");
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
                } else if (!"UBND".equals(strM344a) && "SECMSG".equals(strM344a)) {
                    fl flVar4 = new fl();
                    flVar4.a(99999);
                    flVar4.a("SECMSG", (String) null);
                    flVar4.c(flVar.g());
                    flVar4.a(flVar.e());
                    flVar4.a(flVar.m346a());
                    flVar4.b(flVar.f());
                    flVar4.a(flVar.m349a(com.xiaomi.push.service.bg.a().a(String.valueOf(99999), flVar.g()).h), (String) null);
                    flVar2 = flVar4;
                }
            }
            if (flVar2 != null) {
                for (Map.Entry<gb, fw.a> entry : fu.this.f411a.m367a().entrySet()) {
                    if (fu.this.f410a != entry.getKey()) {
                        entry.getValue().a(flVar2);
                    }
                }
            }
        }

        @Override // com.xiaomi.push.gb
        public void a(gn gnVar) {
            StringBuilder sb;
            String strMo382a;
            if (fu.f8168a) {
                sb = new StringBuilder();
                sb.append("[Slim] ");
                sb.append(fu.this.f414a.format(new Date()));
                sb.append(this.f415a);
                sb.append(" PKT ");
                strMo382a = gnVar.mo382a();
            } else {
                sb = new StringBuilder();
                sb.append("[Slim] ");
                sb.append(fu.this.f414a.format(new Date()));
                sb.append(this.f415a);
                sb.append(" PKT [");
                sb.append(gnVar.k());
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                sb.append(gnVar.j());
                strMo382a = "]";
            }
            sb.append(strMo382a);
            com.xiaomi.channel.commonutils.logger.b.c(sb.toString());
        }

        @Override // com.xiaomi.push.gj
        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean mo362a(gn gnVar) {
            return true;
        }
    }

    public fu(fw fwVar) {
        this.f411a = null;
        this.f411a = fwVar;
        a();
    }

    private void a() {
        this.f410a = new a(true);
        this.b = new a(false);
        fw fwVar = this.f411a;
        a aVar = this.f410a;
        fwVar.a(aVar, aVar);
        fw fwVar2 = this.f411a;
        a aVar2 = this.b;
        fwVar2.b(aVar2, aVar2);
        this.f412a = new fv(this);
    }
}
