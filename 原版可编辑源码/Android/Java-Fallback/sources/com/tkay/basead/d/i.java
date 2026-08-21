package com.tkay.basead.d;

public class i {
    public static final java.lang.String a = null;
    private java.util.Map<java.lang.String, com.tkay.core.api.BaseAd> b;

    static class 1 {
    }

    private static class a {
        private static final com.tkay.basead.d.i a = null;

        static {
                com.tkay.basead.d.i r0 = new com.tkay.basead.d.i
                r1 = 0
                r0.<init>(r1)
                com.tkay.basead.d.i.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.tkay.basead.d.i a() {
                com.tkay.basead.d.i r0 = com.tkay.basead.d.i.a.a
                return r0
        }
    }

    static {
            java.lang.Class<com.tkay.basead.d.i> r0 = com.tkay.basead.d.i.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.d.i.a = r0
            return
    }

    private i() {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 2
            r0.<init>(r1)
            r2.b = r0
            return
    }

    i(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.basead.d.i a() {
            com.tkay.basead.d.i r0 = com.tkay.basead.d.i.a.a()
            return r0
    }

    public final com.tkay.core.api.BaseAd a(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.tkay.core.api.BaseAd> r0 = r1.b
            java.lang.Object r2 = r0.remove(r2)
            com.tkay.core.api.BaseAd r2 = (com.tkay.core.api.BaseAd) r2
            return r2
    }

    public final void a(java.lang.String r2, com.tkay.core.api.BaseAd r3) {
            r1 = this;
            java.util.Map<java.lang.String, com.tkay.core.api.BaseAd> r0 = r1.b
            r0.put(r2, r3)
            return
    }
}
