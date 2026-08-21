package com.cmic.gen.sdk.c.a;

import com.cmic.gen.sdk.c.b.e;
import com.cmic.gen.sdk.c.b.g;
import java.io.Closeable;
import java.io.IOException;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLSocketFactory;

/* JADX INFO: compiled from: ConnectionInterceptor.java */
/* JADX INFO: loaded from: classes.dex */
public class a implements b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static com.cmic.gen.sdk.c.c f1636a;

    /* JADX WARN: Removed duplicated region for block: B:103:0x026d  */
    /* JADX WARN: Removed duplicated region for block: B:106:0x0290  */
    /* JADX WARN: Removed duplicated region for block: B:107:0x0293  */
    /* JADX WARN: Removed duplicated region for block: B:10:0x005d  */
    /* JADX WARN: Removed duplicated region for block: B:110:0x02a5  */
    /* JADX WARN: Removed duplicated region for block: B:120:0x02c3  */
    /* JADX WARN: Removed duplicated region for block: B:123:0x02e6  */
    /* JADX WARN: Removed duplicated region for block: B:124:0x02e9  */
    /* JADX WARN: Removed duplicated region for block: B:132:0x030b  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x023b  */
    /* JADX WARN: Removed duplicated region for block: B:93:0x0242  */
    /* JADX WARN: Removed duplicated region for block: B:96:0x024c A[Catch: all -> 0x02ba, TryCatch #10 {all -> 0x02ba, blocks: (B:90:0x0213, B:94:0x0248, B:96:0x024c, B:98:0x0254, B:100:0x025c, B:44:0x0176, B:45:0x0178, B:47:0x017e, B:48:0x018c), top: B:136:0x0176 }] */
    @Override // com.cmic.gen.sdk.c.a.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.cmic.gen.sdk.c.c.c r21, com.cmic.gen.sdk.c.d.c r22, com.cmic.gen.sdk.a r23) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 786
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.cmic.gen.sdk.c.a.a.a(com.cmic.gen.sdk.c.c.c, com.cmic.gen.sdk.c.d.c, com.cmic.gen.sdk.a):void");
    }

    private void a(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }

    private String a() {
        return com.cmic.gen.sdk.b.f1631a[0] + "." + com.cmic.gen.sdk.b.f1631a[2] + "." + com.cmic.gen.sdk.b.f1631a[4] + "." + com.cmic.gen.sdk.b.f1631a[6];
    }

    public synchronized SSLSocketFactory a(g gVar, com.cmic.gen.sdk.a aVar) {
        if (gVar instanceof e) {
            com.cmic.gen.sdk.c.c cVar = new com.cmic.gen.sdk.c.c(HttpsURLConnection.getDefaultSSLSocketFactory(), aVar);
            if (f1636a == null) {
                f1636a = cVar;
            }
            return cVar;
        }
        if (f1636a == null) {
            f1636a = new com.cmic.gen.sdk.c.c(HttpsURLConnection.getDefaultSSLSocketFactory(), aVar);
        }
        return f1636a;
    }
}
