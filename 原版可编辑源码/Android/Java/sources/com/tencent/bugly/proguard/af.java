package com.tencent.bugly.proguard;

import android.content.Context;
import android.os.Process;
import android.os.SystemClock;
import java.io.BufferedInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.URL;
import java.net.URLEncoder;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Random;

public final class af {
    static af a;
    protected Context b;
    public Map<String, String> c = null;

    af(Context context) {
        this.b = context;
    }

    /* JADX WARN: Removed duplicated region for block: B:89:0x0164 A[PHI: r4 r6 r10 r13 r14
      0x0164: PHI (r4v4 java.lang.Throwable) = (r4v3 java.lang.Throwable), (r4v14 java.lang.Throwable) binds: [B:104:0x0184, B:88:0x0162] A[DONT_GENERATE, DONT_INLINE]
      0x0164: PHI (r6v7 int) = (r6v6 int), (r6v12 int) binds: [B:104:0x0184, B:88:0x0162] A[DONT_GENERATE, DONT_INLINE]
      0x0164: PHI (r10v8 int) = (r10v7 int), (r10v11 int) binds: [B:104:0x0184, B:88:0x0162] A[DONT_GENERATE, DONT_INLINE]
      0x0164: PHI (r13v7 boolean) = (r13v6 boolean), (r13v12 boolean) binds: [B:104:0x0184, B:88:0x0162] A[DONT_GENERATE, DONT_INLINE]
      0x0164: PHI (r14v3 java.lang.String) = (r14v2 java.lang.String), (r14v7 java.lang.String) binds: [B:104:0x0184, B:88:0x0162] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:99:0x0177 A[Catch: all -> 0x016a, TRY_LEAVE, TryCatch #10 {all -> 0x016a, blocks: (B:23:0x009c, B:25:0x00b3, B:29:0x00c4, B:28:0x00c2, B:49:0x00ed, B:51:0x00f5, B:64:0x0120, B:66:0x012b, B:80:0x0148, B:83:0x0155, B:97:0x0171, B:99:0x0177), top: B:137:0x009c }] */
    /* JADX WARN: Unreachable blocks removed: 2, instructions: 2 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final byte[] a(String str, byte[] bArr, aj ajVar, Map<String, String> map) {
        int i;
        Throwable th;
        Object[] objArr;
        byte[] bArr2 = null;
        int i2 = 0;
        if (str == null) {
            al.e("Failed for no URL.", new Object[0]);
            return null;
        }
        long length = bArr == null ? 0L : bArr.length;
        int i3 = 1;
        al.c("request: %s, send: %d (pid=%d | tid=%d)", str, Long.valueOf(length), Integer.valueOf(Process.myPid()), Integer.valueOf(Process.myTid()));
        String str2 = str;
        int i4 = 0;
        int i5 = 0;
        boolean z = false;
        while (i4 <= 0 && i5 <= 0) {
            if (z) {
                i = i4;
                z = false;
            } else {
                int i6 = i4 + 1;
                if (i6 > i3) {
                    al.c("try time: ".concat(String.valueOf(i6)), new Object[i2]);
                    SystemClock.sleep(((long) new Random(System.currentTimeMillis()).nextInt(10000)) + com.heytap.mcssdk.constant.a.q);
                }
                i = i6;
            }
            String strC = ab.c(this.b);
            if (strC == null) {
                al.d("Failed to request for network not avail", new Object[i2]);
            } else {
                ajVar.a(length);
                HttpURLConnection httpURLConnectionA = a(str2, bArr, strC, map);
                if (httpURLConnectionA != null) {
                    try {
                        try {
                            int responseCode = httpURLConnectionA.getResponseCode();
                            al.c("response code ".concat(String.valueOf(responseCode)), new Object[i2]);
                            if (responseCode == 200) {
                                this.c = a(httpURLConnectionA);
                                byte[] bArrB = b(httpURLConnectionA);
                                ajVar.b(bArrB == null ? 0L : bArrB.length);
                                try {
                                    httpURLConnectionA.disconnect();
                                } catch (Throwable th2) {
                                    if (!al.a(th2)) {
                                        th2.printStackTrace();
                                    }
                                }
                                return bArrB;
                            }
                            if (responseCode == 301 || responseCode == 302 || responseCode == 303 || responseCode == 307) {
                                try {
                                    String headerField = httpURLConnectionA.getHeaderField("Location");
                                    if (headerField == null) {
                                        try {
                                            al.e("Failed to redirect: %d".concat(String.valueOf(responseCode)), new Object[0]);
                                            try {
                                                httpURLConnectionA.disconnect();
                                                return null;
                                            } catch (Throwable th3) {
                                                if (al.a(th3)) {
                                                    return null;
                                                }
                                                th3.printStackTrace();
                                                return null;
                                            }
                                        } catch (IOException e) {
                                            e = e;
                                            z = true;
                                            if (!al.a(e)) {
                                                e.printStackTrace();
                                            }
                                            try {
                                                httpURLConnectionA.disconnect();
                                            } catch (Throwable th4) {
                                                th = th4;
                                                if (!al.a(th)) {
                                                }
                                            }
                                            i4 = i;
                                            bArr2 = null;
                                            i2 = 0;
                                            i3 = 1;
                                        }
                                    } else {
                                        i5++;
                                        try {
                                            objArr = new Object[2];
                                            objArr[0] = Integer.valueOf(responseCode);
                                        } catch (IOException e2) {
                                            e = e2;
                                        }
                                        try {
                                            objArr[1] = headerField;
                                            al.c("redirect code: %d ,to:%s", objArr);
                                            str2 = headerField;
                                            i = 0;
                                            z = true;
                                        } catch (IOException e3) {
                                            e = e3;
                                            str2 = headerField;
                                            i = 0;
                                            z = true;
                                            if (!al.a(e)) {
                                            }
                                            httpURLConnectionA.disconnect();
                                            i4 = i;
                                            bArr2 = null;
                                            i2 = 0;
                                            i3 = 1;
                                        }
                                    }
                                } catch (IOException e4) {
                                    e = e4;
                                }
                            }
                            try {
                                long contentLength = httpURLConnectionA.getContentLength();
                                if (contentLength < 0) {
                                    contentLength = 0;
                                }
                                ajVar.b(contentLength);
                                try {
                                    httpURLConnectionA.disconnect();
                                } catch (Throwable th5) {
                                    th = th5;
                                    if (!al.a(th)) {
                                        th.printStackTrace();
                                    }
                                }
                            } catch (IOException e5) {
                                e = e5;
                                if (!al.a(e)) {
                                }
                                httpURLConnectionA.disconnect();
                            }
                        } finally {
                        }
                    } catch (IOException e6) {
                        e = e6;
                    }
                } else {
                    al.c("Failed to execute post.", new Object[0]);
                    ajVar.b(0L);
                }
            }
            i4 = i;
            bArr2 = null;
            i2 = 0;
            i3 = 1;
        }
        return bArr2;
    }

    private static Map<String, String> a(HttpURLConnection httpURLConnection) {
        HashMap map = new HashMap();
        Map<String, List<String>> headerFields = httpURLConnection.getHeaderFields();
        if (headerFields == null || headerFields.size() == 0) {
            return null;
        }
        for (String str : headerFields.keySet()) {
            List<String> list = headerFields.get(str);
            if (list.size() > 0) {
                map.put(str, list.get(0));
            }
        }
        return map;
    }

    private static byte[] b(HttpURLConnection httpURLConnection) throws Throwable {
        BufferedInputStream bufferedInputStream;
        ByteArrayOutputStream byteArrayOutputStream;
        byte[] bArr;
        if (httpURLConnection == null) {
            return null;
        }
        try {
            bufferedInputStream = new BufferedInputStream(httpURLConnection.getInputStream());
            try {
                try {
                    byteArrayOutputStream = new ByteArrayOutputStream();
                    bArr = new byte[1024];
                } catch (Throwable th) {
                    th = th;
                    if (!al.a(th)) {
                        th.printStackTrace();
                    }
                    if (bufferedInputStream != null) {
                        try {
                            bufferedInputStream.close();
                        } catch (Throwable th2) {
                            th2.printStackTrace();
                        }
                    }
                    return null;
                }
            } catch (Throwable th3) {
                th = th3;
            }
        } catch (Throwable th4) {
            th = th4;
            bufferedInputStream = null;
        }
        while (true) {
            int i = bufferedInputStream.read(bArr);
            if (i <= 0) {
                break;
            }
            byteArrayOutputStream.write(bArr, 0, i);
            th = th3;
            if (bufferedInputStream != null) {
                try {
                    bufferedInputStream.close();
                } catch (Throwable th5) {
                    th5.printStackTrace();
                }
            }
            throw th;
        }
        byteArrayOutputStream.flush();
        byte[] byteArray = byteArrayOutputStream.toByteArray();
        try {
            bufferedInputStream.close();
        } catch (Throwable th6) {
            th6.printStackTrace();
        }
        return byteArray;
    }

    private static HttpURLConnection a(String str, byte[] bArr, String str2, Map<String, String> map) {
        if (str == null) {
            al.e("destUrl is null.", new Object[0]);
            return null;
        }
        HttpURLConnection httpURLConnectionA = a(str2, str);
        if (httpURLConnectionA == null) {
            al.e("Failed to get HttpURLConnection object.", new Object[0]);
            return null;
        }
        try {
            httpURLConnectionA.setRequestProperty("wup_version", "3.0");
            if (map != null && map.size() > 0) {
                for (Map.Entry<String, String> entry : map.entrySet()) {
                    httpURLConnectionA.setRequestProperty(entry.getKey(), URLEncoder.encode(entry.getValue(), "utf-8"));
                }
            }
            httpURLConnectionA.setRequestProperty("A37", URLEncoder.encode(str2, "utf-8"));
            httpURLConnectionA.setRequestProperty("A38", URLEncoder.encode(str2, "utf-8"));
            OutputStream outputStream = httpURLConnectionA.getOutputStream();
            if (bArr == null) {
                outputStream.write(0);
            } else {
                outputStream.write(bArr);
            }
            return httpURLConnectionA;
        } catch (Throwable th) {
            if (!al.a(th)) {
                th.printStackTrace();
            }
            al.e("Failed to upload, please check your network.", new Object[0]);
            return null;
        }
    }

    private static HttpURLConnection a(String str, String str2) {
        HttpURLConnection httpURLConnection;
        try {
            URL url = new URL(str2);
            if (an.a != null) {
                httpURLConnection = (HttpURLConnection) url.openConnection(an.a);
            } else if (str != null && str.toLowerCase(Locale.US).contains("wap")) {
                httpURLConnection = (HttpURLConnection) url.openConnection(new Proxy(Proxy.Type.HTTP, new InetSocketAddress(System.getProperty("http.proxyHost"), Integer.parseInt(System.getProperty("http.proxyPort")))));
            } else {
                httpURLConnection = (HttpURLConnection) url.openConnection();
            }
            httpURLConnection.setConnectTimeout(30000);
            httpURLConnection.setReadTimeout(10000);
            httpURLConnection.setDoOutput(true);
            httpURLConnection.setDoInput(true);
            httpURLConnection.setRequestMethod("POST");
            httpURLConnection.setUseCaches(false);
            httpURLConnection.setInstanceFollowRedirects(false);
            return httpURLConnection;
        } catch (Throwable th) {
            if (al.a(th)) {
                return null;
            }
            th.printStackTrace();
            return null;
        }
    }
}
