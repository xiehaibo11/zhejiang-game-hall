package com.loc;

import android.content.Context;
import android.net.Proxy;
import android.os.Build;
import java.net.Proxy;
import java.net.ProxySelector;
import java.net.URI;
import java.util.List;

/* JADX INFO: compiled from: ProxyUtil.java */
/* JADX INFO: loaded from: classes2.dex */
public final class v {
    private static String a() {
        String defaultHost;
        try {
            defaultHost = Proxy.getDefaultHost();
        } catch (Throwable th) {
            av.b(th, "pu", "gdh");
            defaultHost = null;
        }
        return defaultHost == null ? "null" : defaultHost;
    }

    private static String a(String str) {
        return x.c(str);
    }

    public static java.net.Proxy a(Context context) {
        try {
            return Build.VERSION.SDK_INT >= 11 ? a(context, new URI("http://restsdk.amap.com")) : b(context);
        } catch (Throwable th) {
            av.b(th, "pu", "gp");
            return null;
        }
    }

    private static java.net.Proxy a(Context context, URI uri) {
        java.net.Proxy proxy;
        if (c(context)) {
            try {
                List<java.net.Proxy> listSelect = ProxySelector.getDefault().select(uri);
                if (listSelect == null || listSelect.isEmpty() || (proxy = listSelect.get(0)) == null) {
                    return null;
                }
                if (proxy.type() == Proxy.Type.DIRECT) {
                    return null;
                }
                return proxy;
            } catch (Throwable th) {
                av.b(th, "pu", "gpsc");
            }
        }
        return null;
    }

    private static int b() {
        try {
            return android.net.Proxy.getDefaultPort();
        } catch (Throwable th) {
            av.b(th, "pu", "gdp");
            return -1;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:101:0x013e  */
    /* JADX WARN: Removed duplicated region for block: B:115:0x015c A[Catch: all -> 0x0158, TRY_LEAVE, TryCatch #10 {all -> 0x0158, blocks: (B:108:0x014d, B:115:0x015c), top: B:130:0x014d }] */
    /* JADX WARN: Removed duplicated region for block: B:127:0x0142 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:130:0x014d A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:134:0x00d4 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:136:0x00b9 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:49:0x00a8 A[PHI: r11
      0x00a8: PHI (r11v31 java.lang.String) = (r11v27 java.lang.String), (r11v36 java.lang.String) binds: [B:48:0x00a6, B:29:0x0074] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:50:0x00ab A[PHI: r10 r11
      0x00ab: PHI (r10v11 int) = (r10v10 int), (r10v13 int) binds: [B:48:0x00a6, B:29:0x0074] A[DONT_GENERATE, DONT_INLINE]
      0x00ab: PHI (r11v32 java.lang.String) = (r11v27 java.lang.String), (r11v36 java.lang.String) binds: [B:48:0x00a6, B:29:0x0074] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:55:0x00b4  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x00ef A[Catch: all -> 0x0171, TryCatch #8 {all -> 0x0171, blocks: (B:66:0x00ca, B:75:0x00e4, B:77:0x00ef, B:79:0x0103, B:81:0x0109, B:86:0x0115, B:89:0x011e, B:91:0x0124, B:93:0x012a, B:98:0x0136), top: B:129:0x0028 }] */
    /* JADX WARN: Type inference failed for: r10v1 */
    /* JADX WARN: Type inference failed for: r10v15 */
    /* JADX WARN: Type inference failed for: r10v16 */
    /* JADX WARN: Type inference failed for: r10v17 */
    /* JADX WARN: Type inference failed for: r10v18 */
    /* JADX WARN: Type inference failed for: r10v19 */
    /* JADX WARN: Type inference failed for: r10v2 */
    /* JADX WARN: Type inference failed for: r10v3 */
    /* JADX WARN: Type inference failed for: r10v4 */
    /* JADX WARN: Type inference failed for: r10v7, types: [int] */
    /* JADX WARN: Type inference failed for: r10v8 */
    /* JADX WARN: Type inference failed for: r10v9 */
    /* JADX WARN: Type inference failed for: r18v0 */
    /* JADX WARN: Type inference failed for: r18v1 */
    /* JADX WARN: Type inference failed for: r18v10 */
    /* JADX WARN: Type inference failed for: r18v11 */
    /* JADX WARN: Type inference failed for: r18v2 */
    /* JADX WARN: Type inference failed for: r18v3 */
    /* JADX WARN: Type inference failed for: r18v4 */
    /* JADX WARN: Type inference failed for: r18v5 */
    /* JADX WARN: Type inference failed for: r18v6 */
    /* JADX WARN: Type inference failed for: r18v7 */
    /* JADX WARN: Type inference failed for: r18v8 */
    /* JADX WARN: Type inference failed for: r18v9 */
    /* JADX WARN: Type inference failed for: r9v0, types: [android.content.ContentResolver, android.database.Cursor] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static java.net.Proxy b(android.content.Context r19) {
        /*
            Method dump skipped, instruction units count: 384
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.v.b(android.content.Context):java.net.Proxy");
    }

    private static boolean c(Context context) {
        return o.j(context) == 0;
    }
}
