package com.alipay.sdk.net;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.text.TextUtils;
import com.alipay.sdk.util.c;
import com.bianfeng.libuniverse.Device;
import com.xiaomi.mipush.sdk.Constants;
import cz.msebera.android.httpclient.HttpHeaders;
import cz.msebera.android.httpclient.cookie.SM;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.CookieManager;
import java.net.HttpCookie;
import java.net.HttpURLConnection;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.URL;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.net.ssl.HttpsURLConnection;

public final class a {
    private static final String a = "msp";
    private static final String b = "application/octet-stream;binary/octet-stream";
    private static final CookieManager c = new CookieManager();

    public static final class a {
        public final String a;
        public final byte[] b;
        public final Map<String, String> c;

        public a(String str, Map<String, String> map, byte[] bArr) {
            this.a = str;
            this.b = bArr;
            this.c = map;
        }

        public String toString() {
            return String.format("<UrlConnectionConfigure url=%s requestBody=%s headers=%s>", this.a, this.b, this.c);
        }
    }

    public static final class b {
        public final Map<String, List<String>> a;
        public final String b;
        public final byte[] c;

        public b(Map<String, List<String>> map, String str, byte[] bArr) {
            this.a = map;
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
    */
    public static b a(Context context, a aVar) {
        Throwable th;
        HttpURLConnection httpURLConnection;
        BufferedInputStream bufferedInputStream;
        ?? r1;
        BufferedOutputStream bufferedOutputStream;
        if (context == null) {
            return null;
        }
        try {
            c.c("msp", "config : " + aVar);
            URL url = new URL(aVar.a);
            Proxy proxyA = a(context);
            c.c("msp", "proxy: " + proxyA);
            if (proxyA != null) {
                httpURLConnection = (HttpURLConnection) url.openConnection(proxyA);
            } else {
                httpURLConnection = (HttpURLConnection) url.openConnection();
            }
            try {
                System.setProperty("http.keepAlive", "false");
                if (httpURLConnection instanceof HttpsURLConnection) {
                }
                if (c.getCookieStore().getCookies().size() > 0) {
                    httpURLConnection.setRequestProperty(SM.COOKIE, TextUtils.join(";", c.getCookieStore().getCookies()));
                }
                httpURLConnection.setConnectTimeout(20000);
                httpURLConnection.setReadTimeout(30000);
                httpURLConnection.setInstanceFollowRedirects(true);
                httpURLConnection.setRequestProperty("User-Agent", "msp");
                if (aVar.b != null && aVar.b.length > 0) {
                    httpURLConnection.setRequestMethod("POST");
                    httpURLConnection.setRequestProperty("Content-Type", "application/octet-stream;binary/octet-stream");
                    httpURLConnection.setRequestProperty(HttpHeaders.ACCEPT_CHARSET, "UTF-8");
                    httpURLConnection.setRequestProperty("Connection", "Keep-Alive");
                    httpURLConnection.setRequestProperty("Keep-Alive", "timeout=180, max=100");
                } else {
                    httpURLConnection.setRequestMethod("GET");
                }
                if (aVar.c != null) {
                    for (Map.Entry<String, String> entry : aVar.c.entrySet()) {
                        if (entry.getKey() != null) {
                            httpURLConnection.setRequestProperty(entry.getKey(), entry.getValue());
                        }
                    }
                }
                httpURLConnection.setDoInput(true);
                if ("POST".equals(httpURLConnection.getRequestMethod())) {
                    httpURLConnection.setDoOutput(true);
                }
                if ("POST".equals(httpURLConnection.getRequestMethod())) {
                    bufferedOutputStream = new BufferedOutputStream(httpURLConnection.getOutputStream());
                    try {
                        bufferedOutputStream.write(aVar.b);
                        bufferedOutputStream.flush();
                    } catch (Throwable th2) {
                        th = th2;
                        r1 = bufferedOutputStream;
                        bufferedInputStream = null;
                        try {
                            c.a(th);
                            if (httpURLConnection != null) {
                            }
                            if (bufferedInputStream != null) {
                            }
                            if (r1 != 0) {
                            }
                            return null;
                        } catch (Throwable th3) {
                            if (httpURLConnection != null) {
                                try {
                                    httpURLConnection.disconnect();
                                } catch (Throwable unused) {
                                }
                            }
                            if (bufferedInputStream != null) {
                                try {
                                    bufferedInputStream.close();
                                } catch (Throwable unused2) {
                                }
                            }
                            if (r1 != 0) {
                                try {
                                    r1.close();
                                } catch (Throwable unused3) {
                                }
                            }
                            throw th3;
                        }
                    }
                } else {
                    bufferedOutputStream = null;
                }
                BufferedInputStream bufferedInputStream2 = new BufferedInputStream(httpURLConnection.getInputStream());
                try {
                    byte[] bArrA = a(bufferedInputStream2);
                    Map<String, List<String>> headerFields = httpURLConnection.getHeaderFields();
                    String strJoin = (headerFields == null || headerFields.get(null) == null) ? null : TextUtils.join(Constants.ACCEPT_TIME_SEPARATOR_SP, headerFields.get(null));
                    List<String> list = headerFields.get(SM.SET_COOKIE);
                    if (list != null) {
                        Iterator<String> it = list.iterator();
                        while (it.hasNext()) {
                            List<HttpCookie> list2 = HttpCookie.parse(it.next());
                            if (list2 != null && !list2.isEmpty()) {
                                c.getCookieStore().add(url.toURI(), list2.get(0));
                            }
                        }
                    }
                    b bVar = new b(headerFields, strJoin, bArrA);
                    if (httpURLConnection != null) {
                        try {
                            httpURLConnection.disconnect();
                        } catch (Throwable unused4) {
                        }
                    }
                    try {
                        bufferedInputStream2.close();
                    } catch (Throwable unused5) {
                    }
                    if (bufferedOutputStream != null) {
                        try {
                            bufferedOutputStream.close();
                        } catch (Throwable unused6) {
                        }
                    }
                    return bVar;
                } catch (Throwable th4) {
                    BufferedOutputStream bufferedOutputStream2 = bufferedOutputStream;
                    bufferedInputStream = bufferedInputStream2;
                    th = th4;
                    r1 = bufferedOutputStream2;
                    c.a(th);
                    if (httpURLConnection != null) {
                        try {
                            httpURLConnection.disconnect();
                        } catch (Throwable unused7) {
                        }
                    }
                    if (bufferedInputStream != null) {
                        try {
                            bufferedInputStream.close();
                        } catch (Throwable unused8) {
                        }
                    }
                    if (r1 != 0) {
                        try {
                            r1.close();
                        } catch (Throwable unused9) {
                        }
                    }
                    return null;
                }
            } catch (Throwable th5) {
                th = th5;
                bufferedInputStream = null;
                r1 = bufferedInputStream;
                c.a(th);
                if (httpURLConnection != null) {
                }
                if (bufferedInputStream != null) {
                }
                if (r1 != 0) {
                }
                return null;
            }
        } catch (Throwable th6) {
            th = th6;
            httpURLConnection = null;
            bufferedInputStream = null;
        }
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
