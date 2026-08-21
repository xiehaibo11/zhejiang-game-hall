package com.kwad.sdk.f;

public class b implements com.kwad.sdk.f.a {
    private static volatile com.kwad.sdk.f.b aBX;
    private static com.kwad.sdk.f.c aBY;

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized com.kwad.sdk.f.b FA() {
            java.lang.Class<com.kwad.sdk.f.b> r0 = com.kwad.sdk.f.b.class
            monitor-enter(r0)
            com.kwad.sdk.f.b r1 = com.kwad.sdk.f.b.aBX     // Catch: java.lang.Throwable -> L1c
            if (r1 != 0) goto L18
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L1c
            com.kwad.sdk.f.b r1 = com.kwad.sdk.f.b.aBX     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L13
            com.kwad.sdk.f.b r1 = new com.kwad.sdk.f.b     // Catch: java.lang.Throwable -> L15
            r1.<init>()     // Catch: java.lang.Throwable -> L15
            com.kwad.sdk.f.b.aBX = r1     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            goto L18
        L15:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r1     // Catch: java.lang.Throwable -> L1c
        L18:
            com.kwad.sdk.f.b r1 = com.kwad.sdk.f.b.aBX     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r0)
            return r1
        L1c:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static java.lang.String FB() {
            r0 = 0
            java.lang.String r1 = ""
            r2 = 2
            java.lang.String r0 = a(r0, r1, r2)
            return r0
    }

    public static java.lang.String a(boolean r2, java.lang.Object r3, int r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r1 = "userSet"
            r0.put(r1, r2)
            java.lang.String r2 = "value"
            r0.put(r2, r3)
            java.lang.String r2 = java.lang.String.valueOf(r4)
            java.lang.String r3 = "errorCode"
            r0.put(r3, r2)
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>(r0)
            java.lang.String r2 = r2.toString()
            return r2
    }

    public static void a(com.kwad.sdk.f.c r0) {
            com.kwad.sdk.f.b.aBY = r0
            return
    }

    @Override
    public final java.lang.String Fo() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.Fo()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String Fp() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.Fp()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String Fq() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.Fq()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String Fr() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.Fr()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String Fs() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.Fs()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String Ft() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.Ft()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String Fu() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.Fu()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String Fv() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.Fv()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String Fw() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.Fw()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String Fx() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.Fx()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String Fy() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.Fy()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String Fz() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.Fz()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String getAppId() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getAppId()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String getDeviceId() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getDeviceId()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String getIccId() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getIccId()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String getIp() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getIp()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String getLocation() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getLocation()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String getOaid() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getOaid()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }

    @Override
    public final java.lang.String getSdkVersion() {
            r1 = this;
            com.kwad.sdk.f.c r0 = com.kwad.sdk.f.b.aBY
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getSdkVersion()
            return r0
        L9:
            java.lang.String r0 = FB()
            return r0
    }
}
