package com.tkay.expressad.foundation.g.f.g;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Proxy;
import com.bianfeng.libuniverse.Device;
import java.util.Locale;

public class b {
    private static final String a = b.class.getSimpleName();
    private static volatile b b;
    private static ConnectivityManager c;
    private static com.tkay.expressad.foundation.g.f.c.a d;

    private b() {
    }

    private static b a(Context context) {
        NetworkInfo activeNetworkInfo;
        String lowerCase;
        if (b == null) {
            synchronized (b.class) {
                if (b == null) {
                    b = new b();
                    if (context != null) {
                        c = (ConnectivityManager) context.getSystemService("connectivity");
                    }
                    d = new com.tkay.expressad.foundation.g.f.c.a();
                    try {
                        if (c != null && (activeNetworkInfo = c.getActiveNetworkInfo()) != null) {
                            if (Device.NETWORN_WIFI.equals(activeNetworkInfo.getTypeName().toLowerCase(Locale.US))) {
                                d.e = Device.NETWORN_WIFI;
                                d.d = false;
                            } else {
                                if (activeNetworkInfo.getExtraInfo() != null && (lowerCase = activeNetworkInfo.getExtraInfo().toLowerCase(Locale.US)) != null) {
                                    if (lowerCase.startsWith("cmwap") || lowerCase.startsWith("uniwap") || lowerCase.startsWith("3gwap")) {
                                        d.d = true;
                                        d.a = lowerCase;
                                        d.b = "10.0.0.172";
                                        d.c = "80";
                                    } else if (lowerCase.startsWith("ctwap")) {
                                        d.d = true;
                                        d.a = lowerCase;
                                        d.b = "10.0.0.200";
                                        d.c = "80";
                                    } else if (lowerCase.startsWith("cmnet") || lowerCase.startsWith("uninet") || lowerCase.startsWith("ctnet") || lowerCase.startsWith("3gnet")) {
                                        d.d = false;
                                        d.a = lowerCase;
                                    }
                                    com.tkay.expressad.foundation.g.f.c.a aVar = d;
                                    aVar.e = aVar.a;
                                }
                                String defaultHost = Proxy.getDefaultHost();
                                int defaultPort = Proxy.getDefaultPort();
                                if (defaultHost != null && defaultHost.length() > 0) {
                                    d.b = defaultHost;
                                    if ("10.0.0.172".equals(d.b.trim()) || "10.0.0.200".equals(d.b.trim())) {
                                        d.d = true;
                                        d.c = "80";
                                    } else {
                                        d.d = false;
                                        d.c = Integer.toString(defaultPort);
                                    }
                                } else {
                                    d.d = false;
                                }
                                com.tkay.expressad.foundation.g.f.c.a aVar2 = d;
                                aVar2.e = aVar2.a;
                            }
                        }
                    } catch (Exception e) {
                        e.getMessage();
                    }
                }
            }
        }
        return b;
    }

    /* JADX WARN: Removed duplicated region for block: B:37:0x00af A[Catch: Exception -> 0x0109, TryCatch #0 {Exception -> 0x0109, blocks: (B:3:0x0002, B:6:0x0007, B:8:0x000f, B:10:0x0020, B:12:0x0029, B:15:0x0036, B:17:0x0042, B:19:0x004a, B:21:0x0052, B:24:0x005b, B:26:0x0063, B:49:0x0102, B:27:0x0075, B:29:0x007d, B:31:0x0085, B:33:0x008d, B:35:0x0095, B:36:0x009e, B:37:0x00af, B:39:0x00b9, B:41:0x00bf, B:43:0x00d1, B:44:0x00da, B:46:0x00e8, B:47:0x00f1, B:48:0x00fe), top: B:54:0x0002 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void a() {
        NetworkInfo activeNetworkInfo;
        String lowerCase;
        try {
            if (c == null || (activeNetworkInfo = c.getActiveNetworkInfo()) == null) {
                return;
            }
            if (Device.NETWORN_WIFI.equals(activeNetworkInfo.getTypeName().toLowerCase(Locale.US))) {
                d.e = Device.NETWORN_WIFI;
                d.d = false;
                return;
            }
            if (activeNetworkInfo.getExtraInfo() != null && (lowerCase = activeNetworkInfo.getExtraInfo().toLowerCase(Locale.US)) != null) {
                if (lowerCase.startsWith("cmwap") || lowerCase.startsWith("uniwap") || lowerCase.startsWith("3gwap")) {
                    d.d = true;
                    d.a = lowerCase;
                    d.b = "10.0.0.172";
                    d.c = "80";
                } else if (lowerCase.startsWith("ctwap")) {
                    d.d = true;
                    d.a = lowerCase;
                    d.b = "10.0.0.200";
                    d.c = "80";
                } else if (lowerCase.startsWith("cmnet") || lowerCase.startsWith("uninet") || lowerCase.startsWith("ctnet") || lowerCase.startsWith("3gnet")) {
                    d.d = false;
                    d.a = lowerCase;
                }
            } else {
                String defaultHost = Proxy.getDefaultHost();
                int defaultPort = Proxy.getDefaultPort();
                if (defaultHost != null && defaultHost.length() > 0) {
                    d.b = defaultHost;
                    if ("10.0.0.172".equals(d.b.trim()) || "10.0.0.200".equals(d.b.trim())) {
                        d.d = true;
                        d.c = "80";
                    } else {
                        d.d = false;
                        d.c = Integer.toString(defaultPort);
                    }
                } else {
                    d.d = false;
                }
            }
            com.tkay.expressad.foundation.g.f.c.a aVar = d;
            aVar.e = aVar.a;
        } catch (Exception e) {
            e.getMessage();
        }
    }

    private static void a(NetworkInfo networkInfo) {
        String lowerCase;
        if (networkInfo.getExtraInfo() != null && (lowerCase = networkInfo.getExtraInfo().toLowerCase(Locale.US)) != null) {
            if (lowerCase.startsWith("cmwap") || lowerCase.startsWith("uniwap") || lowerCase.startsWith("3gwap")) {
                d.d = true;
                d.a = lowerCase;
                d.b = "10.0.0.172";
                d.c = "80";
                return;
            }
            if (lowerCase.startsWith("ctwap")) {
                d.d = true;
                d.a = lowerCase;
                d.b = "10.0.0.200";
                d.c = "80";
                return;
            }
            if (lowerCase.startsWith("cmnet") || lowerCase.startsWith("uninet") || lowerCase.startsWith("ctnet") || lowerCase.startsWith("3gnet")) {
                d.d = false;
                d.a = lowerCase;
                return;
            }
        }
        String defaultHost = Proxy.getDefaultHost();
        int defaultPort = Proxy.getDefaultPort();
        if (defaultHost != null && defaultHost.length() > 0) {
            d.b = defaultHost;
            if ("10.0.0.172".equals(d.b.trim())) {
                d.d = true;
                d.c = "80";
                return;
            } else if ("10.0.0.200".equals(d.b.trim())) {
                d.d = true;
                d.c = "80";
                return;
            } else {
                d.d = false;
                d.c = Integer.toString(defaultPort);
                return;
            }
        }
        d.d = false;
    }

    private static com.tkay.expressad.foundation.g.f.c.a b() {
        return d;
    }
}
