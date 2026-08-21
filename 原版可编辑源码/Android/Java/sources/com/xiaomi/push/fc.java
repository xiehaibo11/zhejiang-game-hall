package com.xiaomi.push;

import com.xiaomi.push.ff;
import com.xiaomi.push.service.XMPushService;
import com.xiaomi.push.service.bg;

class fc implements bg.b.a {
    private int a;
    private fw a;
    private XMPushService a;
    private bg.b a;
    private boolean a = false;
    private bg.c a = bg.c.b;

    fc(XMPushService xMPushService, bg.b bVar) {
        this.a = xMPushService;
        this.a = bVar;
    }

    private void b() {
        this.a.b(this);
    }

    private void c() {
        ez ezVar;
        b();
        if (this.a && this.a != 11) {
            fa faVarA = fh.a().a();
            int i = fe.a[this.a.ordinal()];
            if (i == 1) {
                int i2 = this.a;
                if (i2 == 17) {
                    ezVar = ez.L;
                } else if (i2 == 21) {
                    ezVar = ez.S;
                } else {
                    try {
                        ff.a aVarC = ff.c(fh.a().a());
                        faVarA.a = aVarC.a.a();
                        faVarA.c(aVarC.a);
                    } catch (NullPointerException unused) {
                        faVarA = null;
                    }
                }
                faVarA.a = ezVar.a();
            } else if (i == 3) {
                ezVar = ez.H;
                faVarA.a = ezVar.a();
            }
            if (faVarA != null) {
                faVarA.b(this.a.a());
                faVarA.d(this.a.b);
                faVarA.b = 1;
                try {
                    faVarA.a((byte) Integer.parseInt(this.a.g));
                } catch (NumberFormatException unused2) {
                }
                fh.a().a(faVarA);
            }
        }
    }

    void a() {
        this.a.a(this);
        this.a = this.a.a();
    }

    @Override
    public void a(bg.c cVar, bg.c cVar2, int i) {
        if (!this.a && cVar == bg.c.b) {
            this.a = cVar2;
            this.a = i;
            this.a = true;
        }
        this.a.a(new fd(this, 4));
    }
}
