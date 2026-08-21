package com.kwad.library.solder.lib;

public class j implements com.kwad.library.solder.lib.a.e {
    private final com.kwad.library.solder.lib.a.d afJ;
    private final com.kwad.library.solder.lib.a.g afK;
    private final com.kwad.library.solder.lib.a.c afL;
    private final com.kwad.library.solder.lib.a.b afM;
    private final com.kwad.library.solder.lib.ext.a afN;
    private final com.kwad.library.solder.lib.ext.c afy;

    public static abstract class a {
        final com.kwad.library.solder.lib.a.e afO;

        static class a extends com.kwad.library.solder.lib.j.a {
            public a(com.kwad.library.solder.lib.a.e r1) {
                    r0 = this;
                    r0.<init>(r1)
                    return
            }

            @Override
            public final void m(com.kwad.library.solder.lib.a.f r2) {
                    r1 = this;
                    com.kwad.library.solder.lib.a.e r0 = r1.afO
                    com.kwad.library.solder.lib.a.b r0 = r0.wh()
                    r0.e(r2)
                    return
            }
        }

        static class b extends com.kwad.library.solder.lib.j.a {
            b(com.kwad.library.solder.lib.a.e r1) {
                    r0 = this;
                    r0.<init>(r1)
                    return
            }

            @Override
            public final void m(com.kwad.library.solder.lib.a.f r2) {
                    r1 = this;
                    com.kwad.library.solder.lib.a.e r0 = r1.afO
                    com.kwad.library.solder.lib.a.d r0 = r0.we()
                    r0.f(r2)
                    return
            }
        }

        static class c extends com.kwad.library.solder.lib.j.a {
            c(com.kwad.library.solder.lib.a.e r1) {
                    r0 = this;
                    r0.<init>(r1)
                    return
            }

            @Override
            public final void m(com.kwad.library.solder.lib.a.f r2) {
                    r1 = this;
                    com.kwad.library.solder.lib.a.e r0 = r1.afO
                    com.kwad.library.solder.lib.a.g r0 = r0.wf()
                    r0.i(r2)
                    return
            }
        }

        public a(com.kwad.library.solder.lib.a.e r1) {
                r0 = this;
                r0.<init>()
                r0.afO = r1
                return
        }

        public static com.kwad.library.solder.lib.j.a a(com.kwad.library.solder.lib.a.e r1, int r2) {
                r0 = 1
                if (r2 == r0) goto L13
                r0 = 256(0x100, float:3.59E-43)
                if (r2 == r0) goto Ld
                com.kwad.library.solder.lib.j$a$b r2 = new com.kwad.library.solder.lib.j$a$b
                r2.<init>(r1)
                goto L18
            Ld:
                com.kwad.library.solder.lib.j$a$a r2 = new com.kwad.library.solder.lib.j$a$a
                r2.<init>(r1)
                goto L18
            L13:
                com.kwad.library.solder.lib.j$a$c r2 = new com.kwad.library.solder.lib.j$a$c
                r2.<init>(r1)
            L18:
                return r2
        }

        public abstract void m(com.kwad.library.solder.lib.a.f r1);
    }

    public j(com.kwad.library.solder.lib.a.d r1, com.kwad.library.solder.lib.a.g r2, com.kwad.library.solder.lib.a.c r3, com.kwad.library.solder.lib.a.b r4, com.kwad.library.solder.lib.ext.c r5, com.kwad.library.solder.lib.ext.a r6) {
            r0 = this;
            r0.<init>()
            r0.afJ = r1
            r0.afK = r2
            r0.afL = r3
            r0.afy = r5
            r0.afN = r6
            r0.afM = r4
            return
    }

    protected static java.util.Map c(java.util.Map r1) {
            if (r1 == 0) goto L6
            java.util.Map r0 = java.util.Collections.EMPTY_MAP
            if (r1 != r0) goto Lb
        L6:
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
        Lb:
            return r1
    }

    public com.kwad.library.solder.lib.a.f a(com.kwad.library.solder.lib.a.f r3, com.kwad.library.solder.lib.j.a r4) {
            r2 = this;
            com.kwad.library.solder.lib.a.e r0 = r3.wp()
            if (r0 != 0) goto L9
            r3.a(r2)
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "request id = "
            r0.<init>(r1)
            java.lang.String r1 = r3.getId()
            r0.append(r1)
            java.lang.String r1 = ", state log = "
            r0.append(r1)
            java.lang.String r1 = r3.wq()
            r0.append(r1)
            r4.m(r3)
            return r3
    }

    @Override
    public com.kwad.library.solder.lib.ext.c wd() {
            r1 = this;
            com.kwad.library.solder.lib.ext.c r0 = r1.afy
            return r0
    }

    @Override
    public com.kwad.library.solder.lib.a.d we() {
            r1 = this;
            com.kwad.library.solder.lib.a.d r0 = r1.afJ
            return r0
    }

    @Override
    public com.kwad.library.solder.lib.a.g wf() {
            r1 = this;
            com.kwad.library.solder.lib.a.g r0 = r1.afK
            return r0
    }

    @Override
    public com.kwad.library.solder.lib.a.c wg() {
            r1 = this;
            com.kwad.library.solder.lib.a.c r0 = r1.afL
            return r0
    }

    @Override
    public com.kwad.library.solder.lib.a.b wh() {
            r1 = this;
            com.kwad.library.solder.lib.a.b r0 = r1.afM
            return r0
    }

    @Override
    public com.kwad.library.solder.lib.ext.a wi() {
            r1 = this;
            com.kwad.library.solder.lib.ext.a r0 = r1.afN
            return r0
    }
}
