package com.kwad.library.solder.lib;

import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class j implements com.kwad.library.solder.lib.a.e {
    private final com.kwad.library.solder.lib.a.d afJ;
    private final com.kwad.library.solder.lib.a.g afK;
    private final com.kwad.library.solder.lib.a.c afL;
    private final com.kwad.library.solder.lib.a.b afM;
    private final com.kwad.library.solder.lib.ext.a afN;
    private final com.kwad.library.solder.lib.ext.c afy;

    public static abstract class a {
        final com.kwad.library.solder.lib.a.e afO;

        /* JADX INFO: renamed from: com.kwad.library.solder.lib.j$a$a, reason: collision with other inner class name */
        static class C0197a extends a {
            public C0197a(com.kwad.library.solder.lib.a.e eVar) {
                super(eVar);
            }

            @Override // com.kwad.library.solder.lib.j.a
            public final void m(com.kwad.library.solder.lib.a.f fVar) {
                this.afO.wh().e(fVar);
            }
        }

        static class b extends a {
            b(com.kwad.library.solder.lib.a.e eVar) {
                super(eVar);
            }

            @Override // com.kwad.library.solder.lib.j.a
            public final void m(com.kwad.library.solder.lib.a.f fVar) {
                this.afO.we().f(fVar);
            }
        }

        static class c extends a {
            c(com.kwad.library.solder.lib.a.e eVar) {
                super(eVar);
            }

            @Override // com.kwad.library.solder.lib.j.a
            public final void m(com.kwad.library.solder.lib.a.f fVar) {
                this.afO.wf().i(fVar);
            }
        }

        public a(com.kwad.library.solder.lib.a.e eVar) {
            this.afO = eVar;
        }

        public static a a(com.kwad.library.solder.lib.a.e eVar, int i) {
            return i != 1 ? i != 256 ? new b(eVar) : new C0197a(eVar) : new c(eVar);
        }

        public abstract void m(com.kwad.library.solder.lib.a.f fVar);
    }

    public j(com.kwad.library.solder.lib.a.d dVar, com.kwad.library.solder.lib.a.g gVar, com.kwad.library.solder.lib.a.c cVar, com.kwad.library.solder.lib.a.b bVar, com.kwad.library.solder.lib.ext.c cVar2, com.kwad.library.solder.lib.ext.a aVar) {
        this.afJ = dVar;
        this.afK = gVar;
        this.afL = cVar;
        this.afy = cVar2;
        this.afN = aVar;
        this.afM = bVar;
    }

    protected static Map c(Map map) {
        return (map == null || map == Collections.EMPTY_MAP) ? new HashMap() : map;
    }

    public com.kwad.library.solder.lib.a.f a(com.kwad.library.solder.lib.a.f fVar, a aVar) {
        if (fVar.wp() == null) {
            fVar.a(this);
        }
        StringBuilder sb = new StringBuilder("request id = ");
        sb.append(fVar.getId());
        sb.append(", state log = ");
        sb.append(fVar.wq());
        aVar.m(fVar);
        return fVar;
    }

    @Override // com.kwad.library.solder.lib.a.e
    public com.kwad.library.solder.lib.ext.c wd() {
        return this.afy;
    }

    @Override // com.kwad.library.solder.lib.a.e
    public com.kwad.library.solder.lib.a.d we() {
        return this.afJ;
    }

    @Override // com.kwad.library.solder.lib.a.e
    public com.kwad.library.solder.lib.a.g wf() {
        return this.afK;
    }

    @Override // com.kwad.library.solder.lib.a.e
    public com.kwad.library.solder.lib.a.c wg() {
        return this.afL;
    }

    @Override // com.kwad.library.solder.lib.a.e
    public com.kwad.library.solder.lib.a.b wh() {
        return this.afM;
    }

    @Override // com.kwad.library.solder.lib.a.e
    public com.kwad.library.solder.lib.ext.a wi() {
        return this.afN;
    }
}
