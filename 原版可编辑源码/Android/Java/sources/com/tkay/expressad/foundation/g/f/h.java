package com.tkay.expressad.foundation.g.f;

import android.os.Process;
import javax.net.ssl.SSLSocketFactory;

public class h {
    private static final String a = h.class.getSimpleName();
    private com.tkay.expressad.foundation.g.f.e.a b;
    private g c;
    private c d;

    public h(SSLSocketFactory sSLSocketFactory, c cVar) {
        this.b = new com.tkay.expressad.foundation.g.f.e.b(sSLSocketFactory, null);
        this.c = new com.tkay.expressad.foundation.g.f.f.a(this.b, cVar);
        this.d = cVar;
    }

    public final void a(i iVar) {
        Process.setThreadPriority(10);
        try {
            this.d.c(iVar);
            if (iVar.f()) {
                iVar.c();
                this.d.b(iVar);
                this.d.a(iVar);
            } else {
                this.d.d(iVar);
                this.d.a((i<?>) iVar, iVar.a(this.c.a(iVar)));
            }
        } catch (com.tkay.expressad.foundation.g.f.a.a e) {
            this.d.a((i<?>) iVar, i.a(e));
        } catch (Exception e2) {
            new StringBuilder("Unhandled exception ").append(e2.getMessage());
            this.d.a((i<?>) iVar, new com.tkay.expressad.foundation.g.f.a.a(4, null));
        }
    }

    private void b(i iVar) {
        try {
            this.d.c(iVar);
            if (iVar.f()) {
                iVar.c();
                this.d.b(iVar);
                this.d.a(iVar);
            } else {
                this.d.d(iVar);
                this.d.a((i<?>) iVar, iVar.a(this.c.a(iVar)));
            }
        } catch (com.tkay.expressad.foundation.g.f.a.a e) {
            this.d.a((i<?>) iVar, i.a(e));
        } catch (Exception e2) {
            new StringBuilder("Unhandled exception ").append(e2.getMessage());
            this.d.a((i<?>) iVar, new com.tkay.expressad.foundation.g.f.a.a(4, null));
        }
    }
}
