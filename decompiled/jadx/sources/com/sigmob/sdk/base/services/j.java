package com.sigmob.sdk.base.services;

/* JADX INFO: loaded from: classes3.dex */
public class j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f4936a = "LocationService";
    public static final String b = "AppInstallService";
    public static final String c = "WifiScanService";
    public static final String d = "DownloadService";
    private static a e;
    private static a f;
    private static a g;
    private static a h;

    public interface a {
        boolean b();

        k c();

        void d();

        Error e();
    }

    public static a a() {
        return f;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public static synchronized a a(String str) {
        byte b2 = -1;
        switch (str.hashCode()) {
            case -967662845:
                if (str.equals(c)) {
                    b2 = 2;
                }
                break;
            case 353926395:
                if (str.equals(b)) {
                    b2 = 1;
                }
                break;
            case 854806816:
                if (str.equals(f4936a)) {
                    b2 = 0;
                }
                break;
            case 1382229229:
                if (str.equals(d)) {
                    b2 = 3;
                }
                break;
        }
        if (b2 == 0) {
            if (e != null) {
                return e;
            }
            e eVar = new e();
            e = eVar;
            return eVar;
        }
        if (b2 == 1) {
            if (f != null) {
                return f;
            }
            b bVar = new b();
            f = bVar;
            return bVar;
        }
        if (b2 == 2) {
            if (g != null) {
                return g;
            }
            l lVar = new l();
            g = lVar;
            return lVar;
        }
        if (b2 != 3) {
            return null;
        }
        if (h != null) {
            return h;
        }
        d dVar = new d();
        h = dVar;
        return dVar;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0033  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void a(java.lang.String r4, boolean r5) {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.base.services.j.a(java.lang.String, boolean):void");
    }

    public static a b() {
        return g;
    }

    public static a c() {
        return h;
    }

    public static a d() {
        return e;
    }
}
