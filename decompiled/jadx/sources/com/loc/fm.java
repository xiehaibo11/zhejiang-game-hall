package com.loc;

import android.content.Context;
import com.loc.bt;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import net.grandcentrix.tray.provider.TrayDBHelper;

/* JADX INFO: compiled from: LocNetManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class fm {
    private static fm b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    bo f2980a;
    private Context c;
    private int d = fr.i;
    private boolean e = false;
    private int f = 0;

    private fm(Context context) {
        this.f2980a = null;
        this.c = null;
        try {
            q.a().a(context);
        } catch (Throwable unused) {
        }
        this.c = context;
        this.f2980a = bo.a();
    }

    public static fm a(Context context) {
        if (b == null) {
            b = new fm(context);
        }
        return b;
    }

    public final bu a(fn fnVar) throws Throwable {
        if (this.e) {
            fnVar.a(bt.c.HTTPS);
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
                map.put("enginever", fr.f2985a);
                String strA = n.a();
                String strA2 = n.a(context, strA, "key=" + l.f(context));
                map.put("ts", strA);
                map.put("scode", strA2);
                if (Double.valueOf(fr.f2985a).doubleValue() >= 5.3d) {
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
                fnVar.a(bt.c.HTTPS);
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
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.lang.String a(android.content.Context r9, double r10, double r12) {
        /*
            Method dump skipped, instruction units count: 258
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.fm.a(android.content.Context, double, double):java.lang.String");
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
