package com.sigmob.sdk.mraid2;

public class k {
    private final java.lang.String a;
    private int b;
    private boolean c;
    private com.sigmob.sdk.mraid2.b d;
    private java.util.Timer e;
    private java.util.TimerTask f;


    public k(com.sigmob.sdk.mraid2.b r2, org.json.JSONObject r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.e = r0
            r1.f = r0
            r1.d = r2
            java.lang.String r2 = "interval"
            int r2 = r3.optInt(r2)
            r1.b = r2
            java.lang.String r2 = "repeats"
            boolean r2 = r3.optBoolean(r2)
            r1.c = r2
            java.lang.String r2 = "uniqueId"
            java.lang.String r2 = r3.optString(r2)
            r1.a = r2
            return
    }

    static com.sigmob.sdk.mraid2.b a(com.sigmob.sdk.mraid2.k r0) {
            com.sigmob.sdk.mraid2.b r0 = r0.d
            return r0
    }

    static java.lang.String b(com.sigmob.sdk.mraid2.k r0) {
            java.lang.String r0 = r0.a
            return r0
    }

    private void d() {
            r1 = this;
            java.util.Timer r0 = new java.util.Timer
            r0.<init>()
            r1.e = r0
            com.sigmob.sdk.mraid2.k$1 r0 = new com.sigmob.sdk.mraid2.k$1
            r0.<init>(r1)
            r1.f = r0
            return
    }

    public void a() {
            r0 = this;
            r0.c()
            return
    }

    public void b() {
            r7 = this;
            r7.c()     // Catch: java.lang.Exception -> L27
            r7.d()     // Catch: java.lang.Exception -> L27
            int r0 = r7.b     // Catch: java.lang.Exception -> L27
            if (r0 <= 0) goto L2b
            boolean r0 = r7.c     // Catch: java.lang.Exception -> L27
            if (r0 == 0) goto L1c
            java.util.Timer r1 = r7.e     // Catch: java.lang.Exception -> L27
            java.util.TimerTask r2 = r7.f     // Catch: java.lang.Exception -> L27
            int r0 = r7.b     // Catch: java.lang.Exception -> L27
            long r3 = (long) r0     // Catch: java.lang.Exception -> L27
            int r0 = r7.b     // Catch: java.lang.Exception -> L27
            long r5 = (long) r0     // Catch: java.lang.Exception -> L27
            r1.schedule(r2, r3, r5)     // Catch: java.lang.Exception -> L27
            goto L2b
        L1c:
            java.util.Timer r0 = r7.e     // Catch: java.lang.Exception -> L27
            java.util.TimerTask r1 = r7.f     // Catch: java.lang.Exception -> L27
            int r2 = r7.b     // Catch: java.lang.Exception -> L27
            long r2 = (long) r2     // Catch: java.lang.Exception -> L27
            r0.schedule(r1, r2)     // Catch: java.lang.Exception -> L27
            goto L2b
        L27:
            r0 = move-exception
            r0.printStackTrace()
        L2b:
            return
    }

    public void c() {
            r2 = this;
            java.util.TimerTask r0 = r2.f
            r1 = 0
            if (r0 == 0) goto La
            r0.cancel()
            r2.f = r1
        La:
            java.util.Timer r0 = r2.e
            if (r0 == 0) goto L18
            r0.cancel()
            java.util.Timer r0 = r2.e
            r0.purge()
            r2.e = r1
        L18:
            return
    }
}
