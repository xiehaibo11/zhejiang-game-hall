package com.xiaomi.push;

import com.xiaomi.push.ff;
import com.xiaomi.push.service.XMPushService;
import com.xiaomi.push.service.bg;

/* JADX INFO: loaded from: classes4.dex */
class fc implements bg.b.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f8149a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private fw f366a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private XMPushService f367a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private bg.b f368a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private boolean f370a = false;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private bg.c f369a = bg.c.binding;

    fc(XMPushService xMPushService, bg.b bVar) {
        this.f367a = xMPushService;
        this.f368a = bVar;
    }

    private void b() {
        this.f368a.b(this);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c() {
        ez ezVar;
        b();
        if (this.f370a && this.f8149a != 11) {
            fa faVarM339a = fh.m337a().m339a();
            int i = fe.f8151a[this.f369a.ordinal()];
            if (i == 1) {
                int i2 = this.f8149a;
                if (i2 == 17) {
                    ezVar = ez.BIND_TCP_READ_TIMEOUT;
                } else if (i2 == 21) {
                    ezVar = ez.BIND_TIMEOUT;
                } else {
                    try {
                        ff.a aVarC = ff.c(fh.a().a());
                        faVarM339a.f352a = aVarC.f8152a.a();
                        faVarM339a.c(aVarC.f371a);
                    } catch (NullPointerException unused) {
                        faVarM339a = null;
                    }
                }
                faVarM339a.f352a = ezVar.a();
            } else if (i == 3) {
                ezVar = ez.BIND_SUCCESS;
                faVarM339a.f352a = ezVar.a();
            }
            if (faVarM339a != null) {
                faVarM339a.b(this.f366a.mo366a());
                faVarM339a.d(this.f368a.f950b);
                faVarM339a.f355b = 1;
                try {
                    faVarM339a.a((byte) Integer.parseInt(this.f368a.g));
                } catch (NumberFormatException unused2) {
                }
                fh.m337a().a(faVarM339a);
            }
        }
    }

    void a() {
        this.f368a.a(this);
        this.f366a = this.f367a.m603a();
    }

    @Override // com.xiaomi.push.service.bg.b.a
    public void a(bg.c cVar, bg.c cVar2, int i) {
        if (!this.f370a && cVar == bg.c.binding) {
            this.f369a = cVar2;
            this.f8149a = i;
            this.f370a = true;
        }
        this.f367a.a(new fd(this, 4));
    }
}
