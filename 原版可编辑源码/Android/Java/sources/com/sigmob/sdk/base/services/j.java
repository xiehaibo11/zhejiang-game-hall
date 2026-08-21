package com.sigmob.sdk.base.services;

import com.czhj.sdk.common.ClientMetadata;

public class j {
    public static final String a = "LocationService";
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
                if (str.equals(a)) {
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
    */
    public static void a(String str, boolean z) {
        byte b2;
        a aVar;
        switch (str.hashCode()) {
            case -967662845:
                b2 = !str.equals(c) ? (byte) -1 : (byte) 2;
                break;
            case 353926395:
                if (str.equals(b)) {
                    b2 = 1;
                    break;
                }
                break;
            case 854806816:
                if (str.equals(a)) {
                    b2 = 0;
                    break;
                }
                break;
            case 1382229229:
                if (str.equals(d)) {
                    b2 = 3;
                    break;
                }
                break;
        }
        if (b2 == 0) {
            if (z) {
                a(str).b();
            } else {
                a aVar2 = e;
                if (aVar2 != null) {
                    aVar2.d();
                }
            }
            ClientMetadata.getInstance().setEnableLocation(z);
            return;
        }
        if (b2 == 1) {
            if (!z) {
                aVar = f;
                if (aVar == null) {
                    return;
                }
                aVar.d();
                return;
            }
            a(str).b();
        }
        if (b2 == 2) {
            if (!z) {
                aVar = g;
                if (aVar == null) {
                    return;
                }
                aVar.d();
                return;
            }
            a(str).b();
        }
        if (b2 != 3) {
            return;
        }
        if (!z) {
            aVar = h;
            if (aVar == null) {
                return;
            }
            aVar.d();
            return;
        }
        a(str).b();
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
