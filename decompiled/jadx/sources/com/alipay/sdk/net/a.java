package com.alipay.sdk.net;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.CookieManager;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f1300a = "msp";
    private static final String b = "application/octet-stream;binary/octet-stream";
    private static final CookieManager c = new CookieManager();

    /* JADX INFO: renamed from: com.alipay.sdk.net.a$a, reason: collision with other inner class name */
    public static final class C0030a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final String f1301a;
        public final byte[] b;
        public final Map<String, String> c;

        public C0030a(String str, Map<String, String> map, byte[] bArr) {
            this.f1301a = str;
            this.b = bArr;
            this.c = map;
        }

        public String toString() {
            return String.format("<UrlConnectionConfigure url=%s requestBody=%s headers=%s>", this.f1301a, this.b, this.c);
        }
    }

    public static final class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final Map<String, List<String>> f1302a;
        public final String b;
        public final byte[] c;

        public b(Map<String, List<String>> map, String str, byte[] bArr) {
            this.f1302a = map;
            this.b = str;
            this.c = bArr;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:113:0x01a9 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:121:0x01b0 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:125:0x01b7 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r1v1 */
    /* JADX WARN: Type inference failed for: r1v2, types: [java.io.OutputStream] */
    /* JADX WARN: Type inference failed for: r1v4 */
    /* JADX WARN: Type inference failed for: r1v7 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static com.alipay.sdk.net.a.b a(android.content.Context r12, com.alipay.sdk.net.a.C0030a r13) {
        /*
            Method dump skipped, instruction units count: 466
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.alipay.sdk.net.a.a(android.content.Context, com.alipay.sdk.net.a$a):com.alipay.sdk.net.a$b");
    }

    private static Proxy a(Context context) {
        String strC = c(context);
        if (strC != null && !strC.contains("wap")) {
            return null;
        }
        try {
            String property = System.getProperty("https.proxyHost");
            String property2 = System.getProperty("https.proxyPort");
            if (TextUtils.isEmpty(property)) {
                return null;
            }
            return new Proxy(Proxy.Type.HTTP, new InetSocketAddress(property, Integer.parseInt(property2)));
        } catch (Throwable unused) {
            return null;
        }
    }

    private static NetworkInfo b(Context context) {
        if (context == null) {
            return null;
        }
        try {
            return ((ConnectivityManager) context.getSystemService("connectivity")).getActiveNetworkInfo();
        } catch (Exception unused) {
            return null;
        }
    }

    private static String c(Context context) {
        try {
            NetworkInfo networkInfoB = b(context);
            if (networkInfoB != null && networkInfoB.isAvailable()) {
                return networkInfoB.getType() == 1 ? Device.NETWORN_WIFI : networkInfoB.getExtraInfo().toLowerCase();
            }
        } catch (Exception unused) {
        }
        return Device.NETWORN_NONE;
    }

    private static byte[] a(InputStream inputStream) throws IOException {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        byte[] bArr = new byte[1024];
        while (true) {
            int i = inputStream.read(bArr, 0, bArr.length);
            if (i != -1) {
                byteArrayOutputStream.write(bArr, 0, i);
            } else {
                byteArrayOutputStream.flush();
                return byteArrayOutputStream.toByteArray();
            }
        }
    }
}
