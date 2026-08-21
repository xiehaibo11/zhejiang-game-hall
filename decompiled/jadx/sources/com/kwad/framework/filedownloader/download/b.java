package com.kwad.framework.filedownloader.download;

import com.kwad.framework.filedownloader.a.c;
import com.kwad.framework.filedownloader.f.c;
import com.kwad.framework.filedownloader.services.c;
import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
public final class b {
    private com.kwad.framework.filedownloader.services.c acn;
    private c.a aco;
    private c.b acp;
    private c.e acq;
    private volatile com.kwad.framework.filedownloader.b.a acr;
    private c.d acs;

    static final class a {
        private static final b act = new b();
    }

    /* JADX WARN: Removed duplicated region for block: B:78:0x01a2  */
    /* JADX WARN: Unreachable blocks removed: 2, instructions: 2 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static void a(com.kwad.framework.filedownloader.b.a.InterfaceC0182a r25) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 460
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.framework.filedownloader.download.b.a(com.kwad.framework.filedownloader.b.a$a):void");
    }

    public static b up() {
        return a.act;
    }

    private c.a uu() {
        c.a aVar = this.aco;
        if (aVar != null) {
            return aVar;
        }
        synchronized (this) {
            if (this.aco == null) {
                this.aco = ux().vv();
            }
        }
        return this.aco;
    }

    private c.b uv() {
        c.b bVar = this.acp;
        if (bVar != null) {
            return bVar;
        }
        synchronized (this) {
            if (this.acp == null) {
                this.acp = ux().vu();
            }
        }
        return this.acp;
    }

    private c.e uw() {
        c.e eVar = this.acq;
        if (eVar != null) {
            return eVar;
        }
        synchronized (this) {
            if (this.acq == null) {
                this.acq = ux().vt();
            }
        }
        return this.acq;
    }

    private com.kwad.framework.filedownloader.services.c ux() {
        com.kwad.framework.filedownloader.services.c cVar = this.acn;
        if (cVar != null) {
            return cVar;
        }
        synchronized (this) {
            if (this.acn == null) {
                this.acn = new com.kwad.framework.filedownloader.services.c();
            }
        }
        return this.acn;
    }

    public final int a(int i, String str, String str2, long j) {
        return uu().H(j);
    }

    public final void a(c.b bVar) {
        synchronized (this) {
            this.acn = new com.kwad.framework.filedownloader.services.c(bVar);
            this.acp = null;
            this.acq = null;
            this.acr = null;
            this.acs = null;
        }
    }

    public final com.kwad.framework.filedownloader.e.a b(File file) {
        return uw().c(file);
    }

    public final void b(c.b bVar) {
        synchronized (this) {
            this.acn = new com.kwad.framework.filedownloader.services.c(bVar);
        }
    }

    public final com.kwad.framework.filedownloader.a.b bc(String str) {
        try {
            return uv().aZ(str);
        } catch (Throwable unused) {
            c.b bVar = new c.b();
            this.acp = bVar;
            return bVar.aZ(str);
        }
    }

    public final c.d uq() {
        c.d dVar = this.acs;
        if (dVar != null) {
            return dVar;
        }
        synchronized (this) {
            if (this.acs == null) {
                this.acs = ux().vw();
            }
        }
        return this.acs;
    }

    public final synchronized com.kwad.framework.filedownloader.b.a ur() {
        if (this.acr != null) {
            return this.acr;
        }
        this.acr = ux().vs();
        a(this.acr.uh());
        return this.acr;
    }

    public final int us() {
        return ux().us();
    }

    public final boolean ut() {
        uw();
        return true;
    }
}
