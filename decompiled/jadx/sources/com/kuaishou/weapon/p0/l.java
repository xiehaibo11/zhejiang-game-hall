package com.kuaishou.weapon.p0;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.security.SecureRandom;
import java.security.cert.X509Certificate;
import java.util.Map;
import java.util.regex.Pattern;
import java.util.zip.GZIPInputStream;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSocketFactory;
import javax.net.ssl.TrustManager;
import javax.net.ssl.X509TrustManager;

/* JADX INFO: loaded from: classes2.dex */
public class l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static TrustManager[] f2779a = {new X509TrustManager() { // from class: com.kuaishou.weapon.p0.l.1
        @Override // javax.net.ssl.X509TrustManager
        public final void checkClientTrusted(X509Certificate[] x509CertificateArr, String str) {
        }

        @Override // javax.net.ssl.X509TrustManager
        public final void checkServerTrusted(X509Certificate[] x509CertificateArr, String str) {
            try {
                l.b(x509CertificateArr);
            } catch (Throwable unused) {
            }
        }

        @Override // javax.net.ssl.X509TrustManager
        public final X509Certificate[] getAcceptedIssuers() {
            return null;
        }
    }};
    static SSLSocketFactory b = null;
    private static final String c = "gzip";
    private static final int d = 1024;
    private static volatile l f;
    private static Context g;
    private boolean e = false;

    private l(Context context) {
        g = context;
    }

    public static l a(Context context) {
        if (f == null) {
            synchronized (l.class) {
                if (f == null) {
                    f = new l(context);
                }
            }
        }
        return f;
    }

    private InputStream a(HttpURLConnection httpURLConnection) {
        if (httpURLConnection != null && httpURLConnection != null) {
            try {
                if ("gzip".equalsIgnoreCase(httpURLConnection.getContentEncoding())) {
                    this.e = true;
                } else {
                    this.e = false;
                }
                return httpURLConnection.getInputStream();
            } catch (IOException unused) {
            }
        }
        return null;
    }

    private static void a(String str) {
        try {
            new h(g).c(df.m, str, true);
        } catch (Exception unused) {
        }
    }

    private synchronized void a(HttpsURLConnection httpsURLConnection) {
        if (httpsURLConnection != null) {
            try {
                if (b == null) {
                    SSLContext sSLContext = SSLContext.getInstance("TLS");
                    sSLContext.init(null, f2779a, new SecureRandom());
                    b = sSLContext.getSocketFactory();
                }
                if (b != null) {
                    httpsURLConnection.setSSLSocketFactory(b);
                }
            } catch (Throwable unused) {
            }
        }
    }

    private boolean a(InputStream inputStream, File file) {
        BufferedOutputStream bufferedOutputStream;
        if (this.e) {
            try {
                inputStream = new GZIPInputStream(inputStream);
            } catch (IOException unused) {
            }
        }
        if (inputStream == null) {
            return false;
        }
        try {
            bufferedOutputStream = new BufferedOutputStream(new FileOutputStream(file));
            try {
                byte[] bArr = new byte[1024];
                while (true) {
                    int i = inputStream.read(bArr);
                    if (i == -1) {
                        try {
                            bufferedOutputStream.close();
                            return true;
                        } catch (IOException unused2) {
                            return true;
                        }
                    }
                    bufferedOutputStream.write(bArr, 0, i);
                    bufferedOutputStream.flush();
                }
            } catch (Throwable unused3) {
                if (bufferedOutputStream != null) {
                    try {
                        bufferedOutputStream.close();
                    } catch (IOException unused4) {
                    }
                }
                return false;
            }
        } catch (Throwable unused5) {
            bufferedOutputStream = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void b(X509Certificate[] x509CertificateArr) {
        if (x509CertificateArr != null) {
            try {
                if (x509CertificateArr.length == 0) {
                    return;
                }
                String name = x509CertificateArr[0].getIssuerX500Principal().getName();
                if (Pattern.compile(".*(GeoTrust|VeriSign|Symantec|GlobalSign|Entrust|Thawte|DigiCert).*", 2).matcher(name).matches()) {
                    return;
                }
                a(name);
            } catch (Throwable unused) {
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:48:0x00de A[Catch: Exception -> 0x00e1, TRY_LEAVE, TryCatch #8 {Exception -> 0x00e1, blocks: (B:46:0x00d9, B:48:0x00de), top: B:72:0x00d9 }] */
    /* JADX WARN: Removed duplicated region for block: B:57:0x00f1 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:58:0x00f2 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:72:0x00d9 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public java.lang.String a(com.kuaishou.weapon.p0.m r11) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 243
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kuaishou.weapon.p0.l.a(com.kuaishou.weapon.p0.m):java.lang.String");
    }

    public String a(Map<String, String> map) {
        String str = "";
        for (Map.Entry<String, String> entry : map.entrySet()) {
            str = str + "&" + entry.getKey() + ContainerUtils.KEY_VALUE_DELIMITER + entry.getValue();
        }
        return str.substring(1);
    }

    public HttpURLConnection a(String str, String str2) {
        HttpURLConnection httpURLConnection;
        try {
            URL url = new URL(str);
            if ("https".equals(url.getProtocol())) {
                HttpsURLConnection httpsURLConnection = (HttpsURLConnection) url.openConnection();
                a(httpsURLConnection);
                httpURLConnection = httpsURLConnection;
            } else {
                httpURLConnection = (HttpURLConnection) url.openConnection();
            }
            try {
                httpURLConnection.setRequestMethod(str2);
                httpURLConnection.setAllowUserInteraction(true);
                httpURLConnection.setInstanceFollowRedirects(true);
                httpURLConnection.setChunkedStreamingMode(0);
                httpURLConnection.setConnectTimeout(10000);
                httpURLConnection.setReadTimeout(5000);
                httpURLConnection.setRequestProperty("Charset", "UTF-8");
                httpURLConnection.setRequestProperty("Content-Type", "application/json; charset=UTF-8");
                if (!str2.equalsIgnoreCase("post")) {
                    return httpURLConnection;
                }
                httpURLConnection.setDoInput(true);
                httpURLConnection.setDoOutput(true);
                httpURLConnection.setUseCaches(false);
                return httpURLConnection;
            } catch (Exception unused) {
                return httpURLConnection;
            }
        } catch (Exception unused2) {
            return null;
        }
    }

    public void a(m mVar, j jVar) throws Throwable {
        a(mVar, jVar, "GET");
    }

    /* JADX WARN: Removed duplicated region for block: B:56:0x00f5 A[Catch: Exception -> 0x00fd, TryCatch #4 {Exception -> 0x00fd, blocks: (B:54:0x00f0, B:56:0x00f5, B:58:0x00fa), top: B:77:0x00f0 }] */
    /* JADX WARN: Removed duplicated region for block: B:58:0x00fa A[Catch: Exception -> 0x00fd, TRY_LEAVE, TryCatch #4 {Exception -> 0x00fd, blocks: (B:54:0x00f0, B:56:0x00f5, B:58:0x00fa), top: B:77:0x00f0 }] */
    /* JADX WARN: Removed duplicated region for block: B:77:0x00f0 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.kuaishou.weapon.p0.m r10, com.kuaishou.weapon.p0.j r11, java.lang.String r12) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 273
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kuaishou.weapon.p0.l.a(com.kuaishou.weapon.p0.m, com.kuaishou.weapon.p0.j, java.lang.String):void");
    }

    public boolean a(String str, File file) {
        HttpURLConnection httpURLConnectionA;
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        InputStream inputStreamA = null;
        try {
            httpURLConnectionA = a(str, "GET");
        } catch (Throwable unused) {
            httpURLConnectionA = null;
        }
        try {
            inputStreamA = a(httpURLConnectionA);
            boolean zA = a(inputStreamA, file);
            if (inputStreamA != null) {
                try {
                    inputStreamA.close();
                } catch (Throwable unused2) {
                    return false;
                }
            }
            if (httpURLConnectionA != null) {
                httpURLConnectionA.disconnect();
            }
            return zA;
        } catch (Throwable unused3) {
            if (inputStreamA != null) {
                try {
                    inputStreamA.close();
                } catch (Throwable unused4) {
                    return false;
                }
            }
            if (httpURLConnectionA != null) {
                httpURLConnectionA.disconnect();
            }
            return false;
        }
    }

    public void b(m mVar, j jVar) throws Throwable {
        a(mVar, jVar, "POST");
    }
}
