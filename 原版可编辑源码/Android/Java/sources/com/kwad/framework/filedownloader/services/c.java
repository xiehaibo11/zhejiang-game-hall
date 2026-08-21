package com.kwad.framework.filedownloader.services;

import com.kwad.framework.filedownloader.a.c;
import com.kwad.framework.filedownloader.e.b;
import com.kwad.framework.filedownloader.f.c;

public final class c {
    private final b ael;

    public interface a {
        c.b uv();
    }

    public static class b {
        c.c aem;
        Integer aen;
        c.e aeo;
        c.b aep;
        a aeq;
        c.a aer;
        c.d aes;

        public final b a(c.b bVar) {
            this.aep = bVar;
            return this;
        }

        public final b a(a aVar) {
            this.aeq = aVar;
            return this;
        }

        public final b bC(int i) {
            this.aen = Integer.MAX_VALUE;
            return this;
        }

        public final String toString() {
            return com.kwad.framework.filedownloader.f.f.b("component: database[%s], maxNetworkCount[%s], outputStream[%s], connection[%s], connectionCountAdapter[%s]", this.aem, this.aen, this.aeo, this.aep, this.aer);
        }
    }

    public c() {
        this.ael = null;
    }

    public c(b bVar) {
        this.ael = bVar;
    }

    private static c.e vA() {
        return new b.a();
    }

    private static c.b vB() {
        return new c.b();
    }

    private static c.a vC() {
        return new com.kwad.framework.filedownloader.a.a();
    }

    private static c.d vx() {
        return new com.kwad.framework.filedownloader.services.b();
    }

    private static int vy() {
        return com.kwad.framework.filedownloader.f.e.vO().aeN;
    }

    private static com.kwad.framework.filedownloader.b.a vz() {
        return new com.kwad.framework.filedownloader.b.c();
    }

    public final int us() {
        Integer num;
        b bVar = this.ael;
        if (bVar != null && (num = bVar.aen) != null) {
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "initial FileDownloader manager with the customize maxNetworkThreadCount: %d", num);
            }
            return com.kwad.framework.filedownloader.f.e.bG(num.intValue());
        }
        return vy();
    }

    public final com.kwad.framework.filedownloader.b.a vs() {
        b bVar = this.ael;
        if (bVar == null || bVar.aem == null) {
            return vz();
        }
        com.kwad.framework.filedownloader.b.a aVarVN = this.ael.aem.vN();
        if (aVarVN == null) {
            return vz();
        }
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "initial FileDownloader manager with the customize database: %s", aVarVN);
        }
        return aVarVN;
    }

    public final c.e vt() {
        c.e eVar;
        b bVar = this.ael;
        if (bVar != null && (eVar = bVar.aeo) != null) {
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "initial FileDownloader manager with the customize output stream: %s", eVar);
            }
            return eVar;
        }
        return vA();
    }

    public final c.b vu() {
        c.b bVarUv;
        b bVar = this.ael;
        if (bVar == null) {
            return vB();
        }
        a aVar = bVar.aeq;
        return (aVar == null || (bVarUv = aVar.uv()) == null) ? vB() : bVarUv;
    }

    public final c.a vv() {
        c.a aVar;
        b bVar = this.ael;
        if (bVar != null && (aVar = bVar.aer) != null) {
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "initial FileDownloader manager with the customize connection count adapter: %s", aVar);
            }
            return aVar;
        }
        return vC();
    }

    public final c.d vw() {
        c.d dVar;
        b bVar = this.ael;
        if (bVar != null && (dVar = bVar.aes) != null) {
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "initial FileDownloader manager with the customize id generator: %s", dVar);
            }
            return dVar;
        }
        return vx();
    }
}
