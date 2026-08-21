package com.kwad.framework.filedownloader.download;

import com.kwad.framework.filedownloader.a.c;
import com.kwad.framework.filedownloader.b.a;
import com.kwad.framework.filedownloader.f.c;
import com.kwad.framework.filedownloader.services.c;
import java.io.File;
import java.util.Iterator;

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
    */
    private static void a(a.a aVar) throws Throwable {
        long j;
        long j2;
        com.kwad.framework.filedownloader.d.c next;
        String targetFilePath;
        String str;
        boolean z;
        String str2 = "refreshed data count: %d , delete data count: %d, reset id count: %d. consume %d";
        Iterator<com.kwad.framework.filedownloader.d.c> it = aVar.iterator();
        c.d dVarUq = up().uq();
        long jCurrentTimeMillis = System.currentTimeMillis();
        long j3 = 0;
        long j4 = 0;
        long j5 = 0;
        while (it.hasNext()) {
            try {
                next = it.next();
                if (next.sX() == 3 || next.sX() == 2 || next.sX() == -1 || (next.sX() == 1 && next.vm() > 0)) {
                    next.d((byte) -2);
                }
                targetFilePath = next.getTargetFilePath();
            } catch (Throwable th) {
                th = th;
                j = jCurrentTimeMillis;
                j2 = j3;
            }
            if (targetFilePath == null) {
                str = str2;
                j = jCurrentTimeMillis;
                j2 = j3;
                z = true;
            } else {
                File file = new File(targetFilePath);
                if (next.sX() == -2) {
                    str = str2;
                    try {
                        if (com.kwad.framework.filedownloader.f.f.a(next.getId(), next, next.getPath(), null)) {
                            File file2 = new File(next.uE());
                            if (!file2.exists() && file.exists()) {
                                boolean zRenameTo = file.renameTo(file2);
                                if (com.kwad.framework.filedownloader.f.d.aeI) {
                                    j = jCurrentTimeMillis;
                                    j2 = j3;
                                    com.kwad.framework.filedownloader.f.d.c(com.kwad.framework.filedownloader.b.a.class, "resume from the old no-temp-file architecture [%B], [%s]->[%s]", Boolean.valueOf(zRenameTo), file.getPath(), file2.getPath());
                                }
                                if (next.sX() == 1 || next.vm() > 0) {
                                    z = com.kwad.framework.filedownloader.f.f.b(next.getId(), next) || file.exists();
                                }
                            }
                        }
                    } catch (Throwable th2) {
                        th = th2;
                        j = jCurrentTimeMillis;
                        j2 = j3;
                        str2 = str;
                        com.kwad.framework.filedownloader.f.f.ar(com.kwad.framework.filedownloader.f.c.vM());
                        aVar.ui();
                        if (com.kwad.framework.filedownloader.f.d.aeI) {
                        }
                        throw th;
                    }
                    com.kwad.framework.filedownloader.f.f.ar(com.kwad.framework.filedownloader.f.c.vM());
                    aVar.ui();
                    if (com.kwad.framework.filedownloader.f.d.aeI) {
                        com.kwad.framework.filedownloader.f.d.c(com.kwad.framework.filedownloader.b.a.class, str2, Long.valueOf(j2), Long.valueOf(j4), Long.valueOf(j5), Long.valueOf(System.currentTimeMillis() - j));
                    }
                    throw th;
                }
                str = str2;
                j = jCurrentTimeMillis;
                j2 = j3;
                if (next.sX() == 1) {
                }
                if (com.kwad.framework.filedownloader.f.f.b(next.getId(), next)) {
                }
            }
            if (z) {
                try {
                    it.remove();
                    j4++;
                    str2 = str;
                    jCurrentTimeMillis = j;
                    j3 = j2;
                } catch (Throwable th3) {
                    th = th3;
                    str2 = str;
                    com.kwad.framework.filedownloader.f.f.ar(com.kwad.framework.filedownloader.f.c.vM());
                    aVar.ui();
                    if (com.kwad.framework.filedownloader.f.d.aeI) {
                    }
                    throw th;
                }
            } else {
                int id = next.getId();
                int iF = dVarUq.f(next.getUrl(), next.getPath(), next.sT());
                if (iF != id) {
                    if (com.kwad.framework.filedownloader.f.d.aeI) {
                        com.kwad.framework.filedownloader.f.d.c(com.kwad.framework.filedownloader.b.a.class, "the id is changed on restoring from db: old[%d] -> new[%d]", Integer.valueOf(id), Integer.valueOf(iF));
                    }
                    next.setId(iF);
                    aVar.a(id, next);
                    j5++;
                }
                aVar.c(next);
                j3 = j2 + 1;
                str2 = str;
                jCurrentTimeMillis = j;
            }
        }
        String str3 = str2;
        long j6 = jCurrentTimeMillis;
        long j7 = j3;
        com.kwad.framework.filedownloader.f.f.ar(com.kwad.framework.filedownloader.f.c.vM());
        aVar.ui();
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(com.kwad.framework.filedownloader.b.a.class, str3, Long.valueOf(j7), Long.valueOf(j4), Long.valueOf(j5), Long.valueOf(System.currentTimeMillis() - j6));
        }
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
