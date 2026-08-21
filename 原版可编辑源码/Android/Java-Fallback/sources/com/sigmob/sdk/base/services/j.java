package com.sigmob.sdk.base.services;

public class j {
    public static final java.lang.String a = "LocationService";
    public static final java.lang.String b = "AppInstallService";
    public static final java.lang.String c = "WifiScanService";
    public static final java.lang.String d = "DownloadService";
    private static com.sigmob.sdk.base.services.j.a e;
    private static com.sigmob.sdk.base.services.j.a f;
    private static com.sigmob.sdk.base.services.j.a g;
    private static com.sigmob.sdk.base.services.j.a h;

    public interface a {
        boolean b();

        com.sigmob.sdk.base.services.k c();

        void d();

        java.lang.Error e();
    }

    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.sigmob.sdk.base.services.j.a a() {
            com.sigmob.sdk.base.services.j$a r0 = com.sigmob.sdk.base.services.j.f
            return r0
    }

    public static synchronized com.sigmob.sdk.base.services.j.a a(java.lang.String r6) {
            java.lang.Class<com.sigmob.sdk.base.services.j> r0 = com.sigmob.sdk.base.services.j.class
            monitor-enter(r0)
            r1 = -1
            int r2 = r6.hashCode()     // Catch: java.lang.Throwable -> L85
            r3 = 3
            r4 = 2
            r5 = 1
            switch(r2) {
                case -967662845: goto L2d;
                case 353926395: goto L23;
                case 854806816: goto L19;
                case 1382229229: goto Lf;
                default: goto Le;
            }     // Catch: java.lang.Throwable -> L85
        Le:
            goto L36
        Lf:
            java.lang.String r2 = "DownloadService"
            boolean r6 = r6.equals(r2)     // Catch: java.lang.Throwable -> L85
            if (r6 == 0) goto L36
            r1 = r3
            goto L36
        L19:
            java.lang.String r2 = "LocationService"
            boolean r6 = r6.equals(r2)     // Catch: java.lang.Throwable -> L85
            if (r6 == 0) goto L36
            r1 = 0
            goto L36
        L23:
            java.lang.String r2 = "AppInstallService"
            boolean r6 = r6.equals(r2)     // Catch: java.lang.Throwable -> L85
            if (r6 == 0) goto L36
            r1 = r5
            goto L36
        L2d:
            java.lang.String r2 = "WifiScanService"
            boolean r6 = r6.equals(r2)     // Catch: java.lang.Throwable -> L85
            if (r6 == 0) goto L36
            r1 = r4
        L36:
            if (r1 == 0) goto L74
            if (r1 == r5) goto L63
            if (r1 == r4) goto L52
            if (r1 == r3) goto L41
            r6 = 0
            monitor-exit(r0)
            return r6
        L41:
            com.sigmob.sdk.base.services.j$a r6 = com.sigmob.sdk.base.services.j.h     // Catch: java.lang.Throwable -> L85
            if (r6 != 0) goto L4e
            com.sigmob.sdk.base.services.d r6 = new com.sigmob.sdk.base.services.d     // Catch: java.lang.Throwable -> L85
            r6.<init>()     // Catch: java.lang.Throwable -> L85
            com.sigmob.sdk.base.services.j.h = r6     // Catch: java.lang.Throwable -> L85
            monitor-exit(r0)
            return r6
        L4e:
            com.sigmob.sdk.base.services.j$a r6 = com.sigmob.sdk.base.services.j.h     // Catch: java.lang.Throwable -> L85
            monitor-exit(r0)
            return r6
        L52:
            com.sigmob.sdk.base.services.j$a r6 = com.sigmob.sdk.base.services.j.g     // Catch: java.lang.Throwable -> L85
            if (r6 != 0) goto L5f
            com.sigmob.sdk.base.services.l r6 = new com.sigmob.sdk.base.services.l     // Catch: java.lang.Throwable -> L85
            r6.<init>()     // Catch: java.lang.Throwable -> L85
            com.sigmob.sdk.base.services.j.g = r6     // Catch: java.lang.Throwable -> L85
            monitor-exit(r0)
            return r6
        L5f:
            com.sigmob.sdk.base.services.j$a r6 = com.sigmob.sdk.base.services.j.g     // Catch: java.lang.Throwable -> L85
            monitor-exit(r0)
            return r6
        L63:
            com.sigmob.sdk.base.services.j$a r6 = com.sigmob.sdk.base.services.j.f     // Catch: java.lang.Throwable -> L85
            if (r6 != 0) goto L70
            com.sigmob.sdk.base.services.b r6 = new com.sigmob.sdk.base.services.b     // Catch: java.lang.Throwable -> L85
            r6.<init>()     // Catch: java.lang.Throwable -> L85
            com.sigmob.sdk.base.services.j.f = r6     // Catch: java.lang.Throwable -> L85
            monitor-exit(r0)
            return r6
        L70:
            com.sigmob.sdk.base.services.j$a r6 = com.sigmob.sdk.base.services.j.f     // Catch: java.lang.Throwable -> L85
            monitor-exit(r0)
            return r6
        L74:
            com.sigmob.sdk.base.services.j$a r6 = com.sigmob.sdk.base.services.j.e     // Catch: java.lang.Throwable -> L85
            if (r6 != 0) goto L81
            com.sigmob.sdk.base.services.e r6 = new com.sigmob.sdk.base.services.e     // Catch: java.lang.Throwable -> L85
            r6.<init>()     // Catch: java.lang.Throwable -> L85
            com.sigmob.sdk.base.services.j.e = r6     // Catch: java.lang.Throwable -> L85
            monitor-exit(r0)
            return r6
        L81:
            com.sigmob.sdk.base.services.j$a r6 = com.sigmob.sdk.base.services.j.e     // Catch: java.lang.Throwable -> L85
            monitor-exit(r0)
            return r6
        L85:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    public static void a(java.lang.String r4, boolean r5) {
            int r0 = r4.hashCode()
            r1 = 3
            r2 = 2
            r3 = 1
            switch(r0) {
                case -967662845: goto L29;
                case 353926395: goto L1f;
                case 854806816: goto L15;
                case 1382229229: goto Lb;
                default: goto La;
            }
        La:
            goto L33
        Lb:
            java.lang.String r0 = "DownloadService"
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L33
            r0 = r1
            goto L34
        L15:
            java.lang.String r0 = "LocationService"
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L33
            r0 = 0
            goto L34
        L1f:
            java.lang.String r0 = "AppInstallService"
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L33
            r0 = r3
            goto L34
        L29:
            java.lang.String r0 = "WifiScanService"
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L33
            r0 = r2
            goto L34
        L33:
            r0 = -1
        L34:
            if (r0 == 0) goto L5f
            if (r0 == r3) goto L4d
            if (r0 == r2) goto L45
            if (r0 == r1) goto L3d
            return
        L3d:
            if (r5 == 0) goto L40
            goto L4f
        L40:
            com.sigmob.sdk.base.services.j$a r4 = com.sigmob.sdk.base.services.j.h
            if (r4 == 0) goto L77
            goto L5b
        L45:
            if (r5 == 0) goto L48
            goto L4f
        L48:
            com.sigmob.sdk.base.services.j$a r4 = com.sigmob.sdk.base.services.j.g
            if (r4 == 0) goto L77
            goto L5b
        L4d:
            if (r5 == 0) goto L57
        L4f:
            com.sigmob.sdk.base.services.j$a r4 = a(r4)
            r4.b()
            goto L77
        L57:
            com.sigmob.sdk.base.services.j$a r4 = com.sigmob.sdk.base.services.j.f
            if (r4 == 0) goto L77
        L5b:
            r4.d()
            goto L77
        L5f:
            if (r5 == 0) goto L69
            com.sigmob.sdk.base.services.j$a r4 = a(r4)
            r4.b()
            goto L70
        L69:
            com.sigmob.sdk.base.services.j$a r4 = com.sigmob.sdk.base.services.j.e
            if (r4 == 0) goto L70
            r4.d()
        L70:
            com.czhj.sdk.common.ClientMetadata r4 = com.czhj.sdk.common.ClientMetadata.getInstance()
            r4.setEnableLocation(r5)
        L77:
            return
    }

    public static com.sigmob.sdk.base.services.j.a b() {
            com.sigmob.sdk.base.services.j$a r0 = com.sigmob.sdk.base.services.j.g
            return r0
    }

    public static com.sigmob.sdk.base.services.j.a c() {
            com.sigmob.sdk.base.services.j$a r0 = com.sigmob.sdk.base.services.j.h
            return r0
    }

    public static com.sigmob.sdk.base.services.j.a d() {
            com.sigmob.sdk.base.services.j$a r0 = com.sigmob.sdk.base.services.j.e
            return r0
    }
}
