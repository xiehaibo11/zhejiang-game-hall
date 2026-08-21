package com.tkay.expressad.atsignalcommon.communication;

public class a {
    public static final java.lang.String a = null;
    public static int b;
    public static int c;

    final class 1 implements java.lang.Runnable {
        final com.tkay.expressad.foundation.d.c a;

        1(com.tkay.expressad.foundation.d.c r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.expressad.foundation.d.c r0 = r2.a     // Catch: java.lang.Throwable -> Lc
                java.lang.String r0 = r0.K()     // Catch: java.lang.Throwable -> Lc
                com.tkay.expressad.foundation.d.c r1 = r2.a     // Catch: java.lang.Throwable -> Lc
                com.tkay.expressad.atsignalcommon.communication.a.a(r0, r1)     // Catch: java.lang.Throwable -> Lc
                return
            Lc:
                r0 = move-exception
                java.lang.String r1 = com.tkay.expressad.atsignalcommon.communication.a.a
                r0.getMessage()
                return
        }
    }

    static {
            java.lang.Class<com.tkay.expressad.atsignalcommon.communication.a> r0 = com.tkay.expressad.atsignalcommon.communication.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.atsignalcommon.communication.a.a = r0
            r0 = 0
            com.tkay.expressad.atsignalcommon.communication.a.b = r0
            r0 = 1
            com.tkay.expressad.atsignalcommon.communication.a.c = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(float r4, float r5) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L61
            r1.<init>()     // Catch: java.lang.Exception -> L61
            java.lang.String r2 = com.tkay.expressad.foundation.g.a.cc     // Catch: java.lang.Exception -> L61
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L61
            android.content.Context r3 = r3.d()     // Catch: java.lang.Exception -> L61
            int r4 = com.tkay.expressad.foundation.h.t.a(r3, r4)     // Catch: java.lang.Exception -> L61
            r1.put(r2, r4)     // Catch: java.lang.Exception -> L61
            java.lang.String r4 = com.tkay.expressad.foundation.g.a.cd     // Catch: java.lang.Exception -> L61
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L61
            android.content.Context r2 = r2.d()     // Catch: java.lang.Exception -> L61
            int r5 = com.tkay.expressad.foundation.h.t.a(r2, r5)     // Catch: java.lang.Exception -> L61
            r1.put(r4, r5)     // Catch: java.lang.Exception -> L61
            java.lang.String r4 = com.tkay.expressad.foundation.g.a.cf     // Catch: java.lang.Exception -> L61
            r5 = 0
            r1.put(r4, r5)     // Catch: java.lang.Exception -> L61
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L61
            android.content.Context r4 = r4.d()     // Catch: java.lang.Exception -> L61
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Exception -> L61
            android.content.res.Configuration r4 = r4.getConfiguration()     // Catch: java.lang.Exception -> L61
            int r4 = r4.orientation     // Catch: java.lang.Exception -> L61
            java.lang.String r5 = com.tkay.expressad.foundation.g.a.cg     // Catch: java.lang.Exception -> L61
            r1.put(r5, r4)     // Catch: java.lang.Exception -> L61
            java.lang.String r4 = com.tkay.expressad.foundation.g.a.ch     // Catch: java.lang.Exception -> L61
            com.tkay.expressad.foundation.b.b r5 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L61
            android.content.Context r5 = r5.d()     // Catch: java.lang.Exception -> L61
            float r5 = com.tkay.expressad.foundation.h.t.c(r5)     // Catch: java.lang.Exception -> L61
            double r2 = (double) r5     // Catch: java.lang.Exception -> L61
            r1.put(r4, r2)     // Catch: java.lang.Exception -> L61
            java.lang.String r4 = com.tkay.expressad.foundation.g.a.ce     // Catch: java.lang.Exception -> L61
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L61
            goto L65
        L61:
            r4 = move-exception
            r4.printStackTrace()
        L65:
            java.lang.String r4 = r0.toString()
            return r4
    }

    private static java.lang.String a(int r3) {
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L20
            r1.<init>()     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = "code"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L20
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L20
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L20
            if (r1 != 0) goto L20
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L20
            r1 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r1)     // Catch: java.lang.Throwable -> L20
            r0 = r3
        L20:
            return r0
    }

    private static void a(com.tkay.expressad.foundation.d.c r2) {
            java.lang.Thread r0 = new java.lang.Thread
            com.tkay.expressad.atsignalcommon.communication.a$1 r1 = new com.tkay.expressad.atsignalcommon.communication.a$1
            r1.<init>(r2)
            r0.<init>(r1)
            r0.start()
            return
    }

    private static void a(java.lang.Object r3, java.lang.String r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.atsignalcommon.communication.a.c     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "message"
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = "data"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L30
            com.tkay.expressad.atsignalcommon.windvane.j r4 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r4.a(r3, r0)     // Catch: java.lang.Exception -> L30
            return
        L30:
            r3 = move-exception
            r3.getMessage()
            return
    }

    private static void a(java.lang.Object r4, org.json.JSONObject r5) {
            java.lang.String r0 = "data"
            org.json.JSONObject r5 = r5.optJSONObject(r0)     // Catch: java.lang.Throwable -> L63
            if (r5 != 0) goto Le
            java.lang.String r5 = "data is empty"
            a(r4, r5)     // Catch: java.lang.Throwable -> L63
            return
        Le:
            com.tkay.expressad.foundation.d.c r5 = com.tkay.expressad.foundation.d.c.b(r5)     // Catch: java.lang.Throwable -> L63
            if (r5 != 0) goto L1a
            java.lang.String r5 = "data camapign is empty"
            a(r4, r5)     // Catch: java.lang.Throwable -> L63
            return
        L1a:
            java.lang.Thread r1 = new java.lang.Thread     // Catch: java.lang.Throwable -> L63
            com.tkay.expressad.atsignalcommon.communication.a$1 r2 = new com.tkay.expressad.atsignalcommon.communication.a$1     // Catch: java.lang.Throwable -> L63
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L63
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L63
            r1.start()     // Catch: java.lang.Throwable -> L63
            java.lang.String r5 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L63
            r1.<init>()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L63
            java.lang.String r2 = "code"
            int r3 = com.tkay.expressad.atsignalcommon.communication.a.b     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L63
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L63
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L63
            r2.<init>()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L63
            java.lang.String r3 = "id"
            r2.put(r3, r5)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L63
            r1.put(r0, r2)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L63
            com.tkay.expressad.atsignalcommon.windvane.j r5 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L63
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L63
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L63
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L63
            r5.a(r4, r0)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L63
            return
        L57:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()     // Catch: java.lang.Throwable -> L63
            a(r4, r0)     // Catch: java.lang.Throwable -> L63
            r5.getMessage()     // Catch: java.lang.Throwable -> L63
            return
        L63:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            a(r4, r5)
            return
    }

    static void a(java.lang.String r1, com.tkay.expressad.foundation.d.c r2) {
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r0 = com.tkay.expressad.foundation.g.a.f.n
            if (r0 == 0) goto L13
            java.lang.String r0 = r2.aZ()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "banner"
            com.tkay.expressad.foundation.g.a.f.a(r1, r2, r0)
        L13:
            return
    }

    private static void b(java.lang.Object r3, java.lang.String r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.tkay.expressad.atsignalcommon.communication.a.b     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = "id"
            r1.put(r2, r4)     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = "data"
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L30
            com.tkay.expressad.atsignalcommon.windvane.j r4 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r4.a(r3, r0)     // Catch: java.lang.Exception -> L30
            return
        L30:
            r4 = move-exception
            java.lang.String r0 = r4.getMessage()
            a(r3, r0)
            r4.getMessage()
            return
    }

    private static void b(java.lang.String r1, com.tkay.expressad.foundation.d.c r2) {
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r0 = com.tkay.expressad.foundation.g.a.f.n
            if (r0 == 0) goto L13
            java.lang.String r0 = r2.aZ()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "banner"
            com.tkay.expressad.foundation.g.a.f.a(r1, r2, r0)
        L13:
            return
    }
}
