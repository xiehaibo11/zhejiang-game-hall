package com.tkay.core.b;

public class f {
    public static java.lang.String a;
    com.tkay.core.common.f.ag b;
    java.util.Map<java.lang.String, java.lang.Object> c;
    com.tkay.core.b.f.a d;

    final class 1 implements java.lang.Runnable {
        final com.tkay.core.api.TYBaseAdAdapter a;
        final com.tkay.core.common.f.aj b;
        final com.tkay.core.b.f c;

        1(com.tkay.core.b.f r1, com.tkay.core.api.TYBaseAdAdapter r2, com.tkay.core.common.f.aj r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r3 = this;
                com.tkay.core.b.f r0 = r3.c
                com.tkay.core.api.TYBaseAdAdapter r1 = r3.a
                com.tkay.core.common.f.aj r2 = r3.b
                com.tkay.core.b.f.a(r0, r1, r2)
                return
        }
    }

    final class 2 implements com.tkay.core.api.TYBidRequestInfoListener {
        final com.tkay.core.common.f.aj a;
        final com.tkay.core.b.f b;

        2(com.tkay.core.b.f r1, com.tkay.core.common.f.aj r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onFailed(java.lang.String r3) {
                r2 = this;
                com.tkay.core.b.f r0 = r2.b
                com.tkay.core.b.f$a r0 = r0.d
                if (r0 == 0) goto Lf
                com.tkay.core.b.f r0 = r2.b
                com.tkay.core.b.f$a r0 = r0.d
                com.tkay.core.common.f.aj r1 = r2.a
                r0.a(r3, r1)
            Lf:
                return
        }

        @Override
        public final void onSuccess(com.tkay.core.api.TYBidRequestInfo r3) {
                r2 = this;
                com.tkay.core.b.f r0 = r2.b
                com.tkay.core.common.f.aj r1 = r2.a
                com.tkay.core.b.f.a(r0, r1, r3)
                return
        }
    }

    final class 3 implements java.lang.Runnable {
        final com.tkay.core.api.TYBidRequestInfo a;
        final com.tkay.core.common.f.aj b;
        final com.tkay.core.b.f c;

        3(com.tkay.core.b.f r1, com.tkay.core.api.TYBidRequestInfo r2, com.tkay.core.common.f.aj r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r4 = this;
                com.tkay.core.api.TYBidRequestInfo r0 = r4.a     // Catch: java.lang.Throwable -> L79
                if (r0 == 0) goto L67
                com.tkay.core.api.TYBidRequestInfo r0 = r4.a     // Catch: java.lang.Throwable -> L79
                org.json.JSONObject r0 = r0.toRequestJSONObject()     // Catch: java.lang.Throwable -> L79
                if (r0 != 0) goto Ld
                goto L67
            Ld:
                com.tkay.core.b.f r1 = r4.c     // Catch: java.lang.Throwable -> L79
                com.tkay.core.common.f.ag r1 = r1.b     // Catch: java.lang.Throwable -> L79
                int r1 = r1.f     // Catch: java.lang.Throwable -> L79
                java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L79
                com.tkay.core.b.f r2 = r4.c     // Catch: java.lang.Throwable -> L79
                com.tkay.core.common.f.ag r2 = r2.b     // Catch: java.lang.Throwable -> L79
                com.tkay.core.c.d r2 = r2.o     // Catch: java.lang.Throwable -> L79
                com.tkay.core.common.f.aj r3 = r4.b     // Catch: java.lang.Throwable -> L79
                com.tkay.core.api.TYBidRequestInfo.fillBaseCommonParams(r0, r1, r2, r3)     // Catch: java.lang.Throwable -> L79
                com.tkay.core.common.f.aj r1 = r4.b     // Catch: java.lang.Throwable -> L79
                int r1 = r1.l()     // Catch: java.lang.Throwable -> L79
                r2 = 3
                if (r1 != r2) goto L57
                java.lang.String r1 = "unit_id"
                com.tkay.core.common.f.aj r2 = r4.b     // Catch: java.lang.Throwable -> L44
                java.lang.String r2 = r2.t()     // Catch: java.lang.Throwable -> L44
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L44
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L44
                org.json.JSONArray r1 = r1.k()     // Catch: java.lang.Throwable -> L44
                java.lang.String r2 = "ecpoffer"
                r0.put(r2, r1)     // Catch: java.lang.Throwable -> L44
                goto L48
            L44:
                r1 = move-exception
                r1.printStackTrace()     // Catch: java.lang.Throwable -> L79
            L48:
                com.tkay.core.b.f r1 = r4.c     // Catch: java.lang.Throwable -> L79
                com.tkay.core.common.f.ag r1 = r1.b     // Catch: java.lang.Throwable -> L79
                int r1 = r1.z     // Catch: java.lang.Throwable -> L79
                r2 = 1
                if (r1 != r2) goto L57
                java.lang.String r1 = "get_offer"
                r2 = 2
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L79
            L57:
                com.tkay.core.b.f r1 = r4.c     // Catch: java.lang.Throwable -> L79
                com.tkay.core.b.f$a r1 = r1.d     // Catch: java.lang.Throwable -> L79
                if (r1 == 0) goto L66
                com.tkay.core.b.f r1 = r4.c     // Catch: java.lang.Throwable -> L79
                com.tkay.core.b.f$a r1 = r1.d     // Catch: java.lang.Throwable -> L79
                com.tkay.core.common.f.aj r2 = r4.b     // Catch: java.lang.Throwable -> L79
                r1.a(r2, r0)     // Catch: java.lang.Throwable -> L79
            L66:
                return
            L67:
                com.tkay.core.b.f r0 = r4.c     // Catch: java.lang.Throwable -> L79
                com.tkay.core.b.f$a r0 = r0.d     // Catch: java.lang.Throwable -> L79
                if (r0 == 0) goto L78
                com.tkay.core.b.f r0 = r4.c     // Catch: java.lang.Throwable -> L79
                com.tkay.core.b.f$a r0 = r0.d     // Catch: java.lang.Throwable -> L79
                java.lang.String r1 = "The parameter is abnormal."
                com.tkay.core.common.f.aj r2 = r4.b     // Catch: java.lang.Throwable -> L79
                r0.a(r1, r2)     // Catch: java.lang.Throwable -> L79
            L78:
                return
            L79:
                r0 = move-exception
                r0.printStackTrace()
                com.tkay.core.b.f r1 = r4.c
                com.tkay.core.b.f$a r1 = r1.d
                if (r1 == 0) goto L90
                com.tkay.core.b.f r1 = r4.c
                com.tkay.core.b.f$a r1 = r1.d
                java.lang.String r0 = r0.getMessage()
                com.tkay.core.common.f.aj r2 = r4.b
                r1.a(r0, r2)
            L90:
                return
        }
    }

    public interface a {
        void a(com.tkay.core.common.f.aj r1, com.tkay.core.api.TYBaseAdAdapter r2);

        void a(com.tkay.core.common.f.aj r1, org.json.JSONObject r2);

        void a(java.lang.String r1, com.tkay.core.common.f.aj r2);
    }

    static {
            java.lang.Class<com.tkay.core.b.f> r0 = com.tkay.core.b.f.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.b.f.a = r0
            return
    }

    public f(com.tkay.core.common.f.ag r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            java.util.Map<java.lang.String, java.lang.Object> r1 = r1.r
            r0.c = r1
            return
    }

    private void a(com.tkay.core.api.TYBaseAdAdapter r5, com.tkay.core.common.f.aj r6) {
            r4 = this;
            com.tkay.core.common.f.ag r0 = r4.b     // Catch: java.lang.Throwable -> L37
            com.tkay.core.c.d r0 = r0.o     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.f.ag r1 = r4.b     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = r1.e     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.f.ag r2 = r4.b     // Catch: java.lang.Throwable -> L37
            java.lang.String r2 = r2.d     // Catch: java.lang.Throwable -> L37
            java.util.Map r0 = r0.a(r1, r2, r6)     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.f.ag r1 = r4.b     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.f.d r1 = r1.t     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.f.d r1 = r1.N()     // Catch: java.lang.Throwable -> L37
            r2 = 0
            com.tkay.core.common.l.s.a(r1, r6, r2, r2)     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.l.g.a(r0, r1)     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.f.ag r1 = r4.b     // Catch: java.lang.Throwable -> L37
            android.content.Context r1 = r1.b     // Catch: java.lang.Throwable -> L37
            java.util.Map<java.lang.String, java.lang.Object> r2 = r4.c     // Catch: java.lang.Throwable -> L37
            com.tkay.core.b.f$2 r3 = new com.tkay.core.b.f$2     // Catch: java.lang.Throwable -> L37
            r3.<init>(r4, r6)     // Catch: java.lang.Throwable -> L37
            r5.getBidRequestInfo(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L37
            com.tkay.core.b.f$a r0 = r4.d     // Catch: java.lang.Throwable -> L37
            if (r0 == 0) goto L36
            com.tkay.core.b.f$a r0 = r4.d     // Catch: java.lang.Throwable -> L37
            r0.a(r6, r5)     // Catch: java.lang.Throwable -> L37
        L36:
            return
        L37:
            r5 = move-exception
            r5.printStackTrace()
            com.tkay.core.b.f$a r0 = r4.d
            if (r0 == 0) goto L46
            java.lang.String r5 = r5.getMessage()
            r0.a(r5, r6)
        L46:
            return
    }

    static void a(com.tkay.core.b.f r4, com.tkay.core.api.TYBaseAdAdapter r5, com.tkay.core.common.f.aj r6) {
            com.tkay.core.common.f.ag r0 = r4.b     // Catch: java.lang.Throwable -> L37
            com.tkay.core.c.d r0 = r0.o     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.f.ag r1 = r4.b     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = r1.e     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.f.ag r2 = r4.b     // Catch: java.lang.Throwable -> L37
            java.lang.String r2 = r2.d     // Catch: java.lang.Throwable -> L37
            java.util.Map r0 = r0.a(r1, r2, r6)     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.f.ag r1 = r4.b     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.f.d r1 = r1.t     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.f.d r1 = r1.N()     // Catch: java.lang.Throwable -> L37
            r2 = 0
            com.tkay.core.common.l.s.a(r1, r6, r2, r2)     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.l.g.a(r0, r1)     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.f.ag r1 = r4.b     // Catch: java.lang.Throwable -> L37
            android.content.Context r1 = r1.b     // Catch: java.lang.Throwable -> L37
            java.util.Map<java.lang.String, java.lang.Object> r2 = r4.c     // Catch: java.lang.Throwable -> L37
            com.tkay.core.b.f$2 r3 = new com.tkay.core.b.f$2     // Catch: java.lang.Throwable -> L37
            r3.<init>(r4, r6)     // Catch: java.lang.Throwable -> L37
            r5.getBidRequestInfo(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L37
            com.tkay.core.b.f$a r0 = r4.d     // Catch: java.lang.Throwable -> L37
            if (r0 == 0) goto L36
            com.tkay.core.b.f$a r0 = r4.d     // Catch: java.lang.Throwable -> L37
            r0.a(r6, r5)     // Catch: java.lang.Throwable -> L37
        L36:
            return
        L37:
            r5 = move-exception
            r5.printStackTrace()
            com.tkay.core.b.f$a r4 = r4.d
            if (r4 == 0) goto L46
            java.lang.String r5 = r5.getMessage()
            r4.a(r5, r6)
        L46:
            return
    }

    static void a(com.tkay.core.b.f r2, com.tkay.core.common.f.aj r3, com.tkay.core.api.TYBidRequestInfo r4) {
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.b.f$3 r1 = new com.tkay.core.b.f$3
            r1.<init>(r2, r4, r3)
            r0.a(r1)
            return
    }

    private void a(com.tkay.core.common.f.aj r3, com.tkay.core.api.TYBidRequestInfo r4) {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.b.f$3 r1 = new com.tkay.core.b.f$3
            r1.<init>(r2, r4, r3)
            r0.a(r1)
            return
    }

    private void a(com.tkay.core.common.f.aj r3, com.tkay.core.b.f.a r4) {
            r2 = this;
            r2.d = r4
            com.tkay.core.api.TYBaseAdAdapter r0 = com.tkay.core.common.l.i.a(r3)
            if (r0 != 0) goto Le
            java.lang.String r0 = "There is no Network Adapter."
            r4.a(r0, r3)
            return
        Le:
            com.tkay.core.common.l.b.a r4 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.b.f$1 r1 = new com.tkay.core.b.f$1
            r1.<init>(r2, r0, r3)
            r4.a(r1)
            return
    }
}
