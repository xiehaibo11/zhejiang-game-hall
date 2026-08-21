package com.kuaishou.weapon.p0;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import cz.msebera.android.httpclient.cookie.SM;
import java.io.BufferedOutputStream;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
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

public class l {
    static TrustManager[] a = {new X509TrustManager() {
        @Override
        public final void checkClientTrusted(X509Certificate[] x509CertificateArr, String str) {
        }

        @Override
        public final void checkServerTrusted(X509Certificate[] x509CertificateArr, String str) {
            try {
                l.b(x509CertificateArr);
            } catch (Throwable unused) {
            }
        }

        @Override
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
                    sSLContext.init(null, a, new SecureRandom());
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

    private static void b(X509Certificate[] x509CertificateArr) {
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
    */
    public String a(m mVar) throws Throwable {
        InputStream inputStream;
        InputStream inputStream2;
        ByteArrayOutputStream byteArrayOutputStream;
        String string;
        HttpURLConnection httpURLConnectionA;
        ByteArrayOutputStream byteArrayOutputStream2;
        byte[] bArr;
        boolean z = false;
        ByteArrayOutputStream byteArrayOutputStream3 = null;
        try {
            httpURLConnectionA = a(mVar.a, "POST");
            String strB = mVar.b();
            if (!TextUtils.isEmpty(strB) && httpURLConnectionA != null) {
                httpURLConnectionA.setRequestProperty(SM.COOKIE, strB);
            }
            String strC = mVar.c();
            if (!TextUtils.isEmpty(strC) && httpURLConnectionA != null) {
                httpURLConnectionA.setRequestProperty("env", strC);
            }
            byte[] bytes = mVar.a() != null ? mVar.a().toString().getBytes() : null;
            if (bytes != null && bytes.length > 0) {
                httpURLConnectionA.setRequestProperty("Content-Length", String.valueOf(bytes.length));
                OutputStream outputStream = httpURLConnectionA.getOutputStream();
                outputStream.write(bytes);
                outputStream.flush();
                outputStream.close();
            }
        } catch (Exception unused) {
            inputStream2 = null;
            byteArrayOutputStream = null;
        } catch (Throwable th) {
            th = th;
            inputStream = null;
        }
        if (httpURLConnectionA.getResponseCode() == 200) {
            inputStream2 = httpURLConnectionA.getInputStream();
            try {
                try {
                    new h(g).b(df.d, httpURLConnectionA.getDate() - System.currentTimeMillis());
                    e.c("WeaponHttpTask --   date " + httpURLConnectionA.getDate() + " " + System.currentTimeMillis());
                } catch (Exception unused2) {
                }
                try {
                    byteArrayOutputStream = new ByteArrayOutputStream();
                } catch (Exception unused3) {
                    byteArrayOutputStream = null;
                }
            } catch (Throwable th2) {
                th = th2;
                Throwable th3 = th;
                inputStream = inputStream2;
                th = th3;
                if (byteArrayOutputStream3 != null) {
                    try {
                        byteArrayOutputStream3.close();
                    } catch (Exception unused4) {
                        throw th;
                    }
                }
                if (inputStream != null) {
                    inputStream.close();
                }
                throw th;
            }
            try {
                bArr = new byte[1024];
            } catch (Exception unused5) {
                if (byteArrayOutputStream != null) {
                    try {
                        byteArrayOutputStream.close();
                    } catch (Exception unused6) {
                        string = null;
                        if (z) {
                        }
                    }
                }
                if (inputStream2 != null) {
                    inputStream2.close();
                }
                string = null;
            } catch (Throwable th4) {
                th = th4;
                byteArrayOutputStream3 = byteArrayOutputStream;
                Throwable th32 = th;
                inputStream = inputStream2;
                th = th32;
                if (byteArrayOutputStream3 != null) {
                }
                if (inputStream != null) {
                }
                throw th;
            }
            while (true) {
                int i = inputStream2.read(bArr);
                if (i == -1) {
                    break;
                }
                byteArrayOutputStream.write(bArr, 0, i);
                if (z) {
                    return string;
                }
                return null;
            }
            string = byteArrayOutputStream.toString();
            z = true;
            byteArrayOutputStream2 = byteArrayOutputStream;
        } else {
            inputStream2 = null;
            string = null;
            byteArrayOutputStream2 = null;
        }
        if (byteArrayOutputStream2 != null) {
            try {
                byteArrayOutputStream2.close();
            } catch (Exception unused7) {
            }
        }
        if (inputStream2 != null) {
            inputStream2.close();
        }
        if (z) {
        }
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
    */
    public void a(m mVar, j jVar, String str) throws Throwable {
        InputStream inputStream;
        ByteArrayOutputStream byteArrayOutputStream;
        InputStream inputStream2;
        ByteArrayOutputStream byteArrayOutputStream2;
        String string;
        ByteArrayOutputStream byteArrayOutputStream3 = null;
        try {
            HttpURLConnection httpURLConnectionA = a(mVar.a, str);
            String strB = mVar.b();
            if (!TextUtils.isEmpty(strB) && httpURLConnectionA != null) {
                httpURLConnectionA.setRequestProperty(SM.COOKIE, strB);
            }
            String strC = mVar.c();
            if (!TextUtils.isEmpty(strC) && httpURLConnectionA != null) {
                httpURLConnectionA.setRequestProperty("env", strC);
            }
            if (str.equalsIgnoreCase("post")) {
                byte[] bytes = mVar.a() != null ? mVar.a().toString().getBytes() : null;
                if (bytes != null && bytes.length > 0) {
                    httpURLConnectionA.setRequestProperty("Content-Length", String.valueOf(bytes.length));
                    OutputStream outputStream = httpURLConnectionA.getOutputStream();
                    outputStream.write(bytes);
                    outputStream.flush();
                    outputStream.close();
                }
            }
            boolean z = false;
            if (httpURLConnectionA.getResponseCode() == 200) {
                inputStream2 = httpURLConnectionA.getInputStream();
                try {
                    try {
                        new h(g).b(df.d, httpURLConnectionA.getDate() - System.currentTimeMillis());
                        e.c("WeaponHttpTask --   date " + httpURLConnectionA.getDate() + " " + System.currentTimeMillis());
                    } catch (Exception unused) {
                    }
                    try {
                        byteArrayOutputStream2 = new ByteArrayOutputStream();
                    } catch (Exception unused2) {
                        byteArrayOutputStream2 = null;
                    }
                } catch (Throwable th) {
                    byteArrayOutputStream = null;
                    inputStream = inputStream2;
                    th = th;
                    if (byteArrayOutputStream != null) {
                        try {
                            byteArrayOutputStream.close();
                        } catch (Exception unused3) {
                            throw th;
                        }
                    }
                    if (inputStream != null) {
                        inputStream.close();
                    }
                    if (jVar != null) {
                        jVar.b(null);
                    }
                    throw th;
                }
                try {
                    byte[] bArr = new byte[1024];
                    while (true) {
                        int i = inputStream2.read(bArr);
                        if (i == -1) {
                            break;
                        } else {
                            byteArrayOutputStream2.write(bArr, 0, i);
                        }
                    }
                    z = true;
                    byteArrayOutputStream3 = byteArrayOutputStream2;
                    string = byteArrayOutputStream2.toString();
                } catch (Exception unused4) {
                    if (byteArrayOutputStream2 != null) {
                        try {
                            byteArrayOutputStream2.close();
                        } catch (Exception unused5) {
                            return;
                        }
                    }
                    if (inputStream2 != null) {
                        inputStream2.close();
                    }
                    if (jVar != null) {
                        jVar.b(null);
                        return;
                    }
                    return;
                } catch (Throwable th2) {
                    inputStream = inputStream2;
                    th = th2;
                    byteArrayOutputStream = byteArrayOutputStream2;
                    if (byteArrayOutputStream != null) {
                    }
                    if (inputStream != null) {
                    }
                    if (jVar != null) {
                    }
                    throw th;
                }
            } else {
                inputStream2 = null;
                string = null;
            }
            if (byteArrayOutputStream3 != null) {
                try {
                    byteArrayOutputStream3.close();
                } catch (Exception unused6) {
                    return;
                }
            }
            if (inputStream2 != null) {
                inputStream2.close();
            }
            if (z) {
                if (jVar != null) {
                    jVar.a(string);
                }
            } else if (jVar != null) {
                jVar.b(string);
            }
        } catch (Exception unused7) {
            inputStream2 = null;
            byteArrayOutputStream2 = null;
        } catch (Throwable th3) {
            th = th3;
            inputStream = null;
            byteArrayOutputStream = null;
        }
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
