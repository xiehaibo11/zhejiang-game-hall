package com.kwad.sdk.ranger;

public class d extends com.kwad.sdk.core.response.a.a {
    public long aGF;
    public java.util.List<java.lang.String> aGG;
    public java.util.List<com.kwad.sdk.ranger.d.a> aGH;
    public long aGI;
    public double aGJ;
    public java.util.List<com.kwad.sdk.ranger.a.a> aGK;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public java.lang.String aGL;
        public java.lang.String aGM;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public d() {
            r2 = this;
            r2.<init>()
            r0 = 1000(0x3e8, double:4.94E-321)
            r2.aGI = r0
            r0 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            r2.aGJ = r0
            return
    }

    private boolean da(int r7) {
            r6 = this;
            boolean r0 = r6.Hp()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            long r2 = r6.aGF
            long r4 = (long) r7
            long r2 = r2 & r4
            r4 = 0
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 == 0) goto L14
            r7 = 1
            return r7
        L14:
            return r1
    }

    public final boolean Hp() {
            r4 = this;
            long r0 = r4.aGF
            r2 = 1
            long r0 = r0 & r2
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Ld
            r0 = 1
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public final boolean Hq() {
            r1 = this;
            r0 = 2
            boolean r0 = r1.da(r0)
            return r0
    }

    public final boolean Hr() {
            r1 = this;
            r0 = 4
            boolean r0 = r1.da(r0)
            return r0
    }

    public final boolean Hs() {
            r1 = this;
            r0 = 16
            boolean r0 = r1.da(r0)
            return r0
    }
}
