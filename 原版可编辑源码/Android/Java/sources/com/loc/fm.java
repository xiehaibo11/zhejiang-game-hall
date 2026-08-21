package com.loc;

import android.content.Context;
import com.loc.bt;
import com.xiaomi.mipush.sdk.Constants;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import net.grandcentrix.tray.provider.TrayDBHelper;

public final class fm {
    private static fm b;
    bo a;
    private Context c;
    private int d = fr.i;
    private boolean e = false;
    private int f = 0;

    private fm(Context context) {
        this.a = null;
        this.c = null;
        try {
            q.a().a(context);
        } catch (Throwable unused) {
        }
        this.c = context;
        this.a = bo.a();
    }

    public static fm a(Context context) {
        if (b == null) {
            b = new fm(context);
        }
        return b;
    }

    public final bu a(fn fnVar) throws Throwable {
        if (this.e) {
            fnVar.a(bt.c.b);
        }
        return bo.a(fnVar);
    }

    public final fn a(Context context, byte[] bArr, String str, String str2, boolean z) {
        String str3;
        try {
            HashMap map = new HashMap(16);
            fn fnVar = new fn(context, fr.c());
            try {
                map.put("Content-Type", "application/octet-stream");
                map.put("Accept-Encoding", "gzip");
                map.put("gzipped", "1");
                map.put("Connection", "Keep-Alive");
                map.put("User-Agent", "AMAP_Location_SDK_Android 6.4.0");
                map.put(TrayDBHelper.KEY, l.f(context));
                map.put("enginever", fr.a);
                String strA = n.a();
                String strA2 = n.a(context, strA, "key=" + l.f(context));
                map.put("ts", strA);
                map.put("scode", strA2);
                if (Double.valueOf(fr.a).doubleValue() >= 5.3d) {
                    map.put("aps_s_src", "openapi");
                }
                map.put("encr", "1");
                fnVar.b(map);
                String str4 = z ? "loc" : "locf";
                fnVar.c(true);
                fnVar.b(String.format(Locale.US, "platform=Android&sdkversion=%s&product=%s&loc_channel=%s", "6.4.0", str4, 3));
                fnVar.b(z);
                fnVar.c(str);
                fnVar.d(str2);
                fnVar.c(fz.a(bArr));
                fnVar.a(v.a(context));
                HashMap map2 = new HashMap(16);
                map2.put("output", "bin");
                map2.put("policy", "3103");
                int i = this.f;
                if (i == 0) {
                    map2.remove("custom");
                } else {
                    if (i != 1) {
                        str3 = i == 2 ? "language:en" : "language:cn";
                        map2.remove("custom");
                    }
                    map2.put("custom", str3);
                }
                fnVar.a((Map<String, String>) map2);
                fnVar.a(this.d);
                fnVar.b(this.d);
                if (!this.e) {
                    return fnVar;
                }
                fnVar.a(bt.c.b);
                return fnVar;
            } catch (Throwable unused) {
                return fnVar;
            }
        } catch (Throwable unused2) {
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0060  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x0063  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x00e5 A[Catch: all -> 0x00f8, TryCatch #1 {all -> 0x00f8, blocks: (B:16:0x00d7, B:18:0x00e5, B:19:0x00ea), top: B:27:0x00d7, outer: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final String a(Context context, double d, double d2) {
        String str;
        try {
            HashMap map = new HashMap(16);
            fn fnVar = new fn(context, fr.c());
            map.clear();
            map.put("Content-Type", "application/x-www-form-urlencoded");
            map.put("Connection", "Keep-Alive");
            map.put("User-Agent", "AMAP_Location_SDK_Android 6.4.0");
            HashMap map2 = new HashMap(16);
            map2.put("custom", "26260A1F00020002");
            map2.put("key", l.f(context));
            int i = this.f;
            if (i != 0) {
                if (i != 1) {
                    str = i == 2 ? "en" : "zh-CN";
                    map2.remove("language");
                    map2.put("curLocationType", fz.m(this.c) ? "coarseLoc" : "fineLoc");
                    String strA = n.a();
                    String strA2 = n.a(context, strA, x.b(map2));
                    map2.put("ts", strA);
                    map2.put("scode", strA2);
                    fnVar.b(("output=json&radius=1000&extensions=all&location=" + d2 + Constants.ACCEPT_TIME_SEPARATOR_SP + d).getBytes("UTF-8"));
                    fnVar.c(false);
                    fnVar.b(true);
                    fnVar.b(String.format(Locale.US, "platform=Android&sdkversion=%s&product=%s&loc_channel=%s", "6.4.0", "loc", 3));
                    fnVar.a((Map<String, String>) map2);
                    fnVar.b(map);
                    fnVar.a(v.a(context));
                    fnVar.a(fr.i);
                    fnVar.b(fr.i);
                    fnVar.d("http://dualstack-arestapi.amap.com/v3/geocode/regeo");
                    fnVar.c("http://restsdk.amap.com/v3/geocode/regeo");
                    if (this.e) {
                    }
                    return new String(bo.a(fnVar).a, "utf-8");
                }
                map2.put("language", str);
                map2.put("curLocationType", fz.m(this.c) ? "coarseLoc" : "fineLoc");
                String strA3 = n.a();
                String strA22 = n.a(context, strA3, x.b(map2));
                map2.put("ts", strA3);
                map2.put("scode", strA22);
                fnVar.b(("output=json&radius=1000&extensions=all&location=" + d2 + Constants.ACCEPT_TIME_SEPARATOR_SP + d).getBytes("UTF-8"));
                fnVar.c(false);
                fnVar.b(true);
                fnVar.b(String.format(Locale.US, "platform=Android&sdkversion=%s&product=%s&loc_channel=%s", "6.4.0", "loc", 3));
                fnVar.a((Map<String, String>) map2);
                fnVar.b(map);
                fnVar.a(v.a(context));
                fnVar.a(fr.i);
                fnVar.b(fr.i);
                fnVar.d("http://dualstack-arestapi.amap.com/v3/geocode/regeo");
                fnVar.c("http://restsdk.amap.com/v3/geocode/regeo");
                if (this.e) {
                }
                return new String(bo.a(fnVar).a, "utf-8");
            }
            map2.remove("language");
            map2.put("curLocationType", fz.m(this.c) ? "coarseLoc" : "fineLoc");
            String strA32 = n.a();
            String strA222 = n.a(context, strA32, x.b(map2));
            map2.put("ts", strA32);
            map2.put("scode", strA222);
            fnVar.b(("output=json&radius=1000&extensions=all&location=" + d2 + Constants.ACCEPT_TIME_SEPARATOR_SP + d).getBytes("UTF-8"));
            fnVar.c(false);
            fnVar.b(true);
            fnVar.b(String.format(Locale.US, "platform=Android&sdkversion=%s&product=%s&loc_channel=%s", "6.4.0", "loc", 3));
            fnVar.a((Map<String, String>) map2);
            fnVar.b(map);
            fnVar.a(v.a(context));
            fnVar.a(fr.i);
            fnVar.b(fr.i);
            try {
                fnVar.d("http://dualstack-arestapi.amap.com/v3/geocode/regeo");
                fnVar.c("http://restsdk.amap.com/v3/geocode/regeo");
                if (this.e) {
                    fnVar.a(bt.c.b);
                }
                return new String(bo.a(fnVar).a, "utf-8");
            } catch (Throwable th) {
                fr.a(th, "LocNetManager", "post");
            }
        } catch (Throwable unused) {
        }
        return null;
    }

    public final void a(long j, boolean z, int i) {
        try {
            this.e = z;
            this.d = Long.valueOf(j).intValue();
            this.f = i;
        } catch (Throwable th) {
            fr.a(th, "LocNetManager", "setOption");
        }
    }
}
