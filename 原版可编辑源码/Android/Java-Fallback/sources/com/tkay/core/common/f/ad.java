package com.tkay.core.common.f;

public final class ad {
    public int a;
    public java.lang.String b;
    public int c;
    public int d;
    public long e;
    public java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ad.a> f;

    public static class a {
        public java.lang.String a;
        public java.lang.String b;
        public java.lang.String c;
        public int d;
        public int e;
        public long f;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public ad() {
            r0 = this;
            r0.<init>()
            return
    }

    public final com.tkay.core.common.f.ad.a a(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ad$a> r0 = r1.f
            if (r0 == 0) goto Lb
            java.lang.Object r2 = r0.get(r2)
            com.tkay.core.common.f.ad$a r2 = (com.tkay.core.common.f.ad.a) r2
            return r2
        Lb:
            r2 = 0
            return r2
    }
}
