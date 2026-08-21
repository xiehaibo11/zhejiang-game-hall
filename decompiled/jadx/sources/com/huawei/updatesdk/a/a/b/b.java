package com.huawei.updatesdk.a.a.b;

import android.content.Context;
import com.huawei.secure.android.common.ssl.SecureSSLSocketFactory;
import com.huawei.updatesdk.a.a.d.d;
import java.io.BufferedInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.zip.GZIPOutputStream;
import javax.net.ssl.HttpsURLConnection;
import org.apache.http.conn.ssl.SSLSocketFactory;

/* JADX INFO: loaded from: classes2.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private HttpURLConnection f2293a = null;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f2294a;
        private int b;

        public int a() {
            return this.b;
        }

        public String b() {
            return this.f2294a;
        }
    }

    public static HttpsURLConnection a(String str, Context context) {
        HttpsURLConnection httpsURLConnection = (HttpsURLConnection) new URL(str).openConnection();
        httpsURLConnection.setSSLSocketFactory(SecureSSLSocketFactory.getInstance(context));
        httpsURLConnection.setHostnameVerifier(SSLSocketFactory.STRICT_HOSTNAME_VERIFIER);
        return httpsURLConnection;
    }

    private byte[] a(byte[] bArr) throws Throwable {
        ByteArrayOutputStream byteArrayOutputStream;
        DataOutputStream dataOutputStream;
        DataOutputStream dataOutputStream2 = null;
        try {
            try {
                try {
                    byteArrayOutputStream = new ByteArrayOutputStream();
                    try {
                        dataOutputStream = new DataOutputStream(new GZIPOutputStream(byteArrayOutputStream, bArr.length));
                    } catch (IOException e) {
                        e = e;
                    }
                } catch (IOException e2) {
                    com.huawei.updatesdk.a.a.c.a.a.a.a("HttpsUtil", "gzip error!", e2);
                }
            } catch (Throwable th) {
                th = th;
            }
        } catch (IOException e3) {
            e = e3;
            byteArrayOutputStream = null;
        }
        try {
            dataOutputStream.write(bArr, 0, bArr.length);
            dataOutputStream.flush();
            dataOutputStream.close();
        } catch (IOException e4) {
            e = e4;
            dataOutputStream2 = dataOutputStream;
            com.huawei.updatesdk.a.a.c.a.a.a.a("HttpsUtil", "gzip error!", e);
            if (dataOutputStream2 != null) {
                dataOutputStream2.close();
            }
            return byteArrayOutputStream.toByteArray();
        } catch (Throwable th2) {
            th = th2;
            dataOutputStream2 = dataOutputStream;
            if (dataOutputStream2 != null) {
                try {
                    dataOutputStream2.close();
                } catch (IOException e5) {
                    com.huawei.updatesdk.a.a.c.a.a.a.a("HttpsUtil", "gzip error!", e5);
                }
            }
            throw th;
        }
        return byteArrayOutputStream.toByteArray();
    }

    public a a(String str, String str2, String str3, String str4, Context context) throws Throwable {
        Throwable th;
        DataOutputStream dataOutputStream;
        a aVar = new a();
        BufferedInputStream bufferedInputStream = null;
        try {
            HttpsURLConnection httpsURLConnectionA = a(str, context);
            this.f2293a = httpsURLConnectionA;
            httpsURLConnectionA.setDoInput(true);
            this.f2293a.setDoOutput(true);
            this.f2293a.setUseCaches(false);
            this.f2293a.setConnectTimeout(5000);
            this.f2293a.setReadTimeout(10000);
            this.f2293a.setRequestMethod("POST");
            this.f2293a.setRequestProperty("Content-Type", "application/x-gzip");
            this.f2293a.setRequestProperty("Content-Encoding", "gzip");
            this.f2293a.setRequestProperty("Connection", "Keep-Alive");
            this.f2293a.setRequestProperty("User-Agent", str4);
            dataOutputStream = new DataOutputStream(this.f2293a.getOutputStream());
            try {
                dataOutputStream.write(a(str2.getBytes(str3)));
                dataOutputStream.flush();
                int responseCode = this.f2293a.getResponseCode();
                aVar.b = responseCode;
                bufferedInputStream = responseCode == 200 ? new BufferedInputStream(this.f2293a.getInputStream()) : new BufferedInputStream(this.f2293a.getErrorStream());
                com.huawei.updatesdk.a.a.d.b bVar = new com.huawei.updatesdk.a.a.d.b();
                byte[] bArrA = com.huawei.updatesdk.a.a.b.a.b().a();
                while (true) {
                    int i = bufferedInputStream.read(bArrA);
                    if (i == -1) {
                        break;
                    }
                    bVar.a(bArrA, i);
                }
                com.huawei.updatesdk.a.a.b.a.b().a(bArrA);
                aVar.f2294a = bVar.a();
                HttpURLConnection httpURLConnection = this.f2293a;
                if (httpURLConnection != null) {
                    httpURLConnection.disconnect();
                }
                d.a(dataOutputStream);
                d.a(bufferedInputStream);
                return aVar;
            } catch (Throwable th2) {
                th = th2;
                HttpURLConnection httpURLConnection2 = this.f2293a;
                if (httpURLConnection2 != null) {
                    httpURLConnection2.disconnect();
                }
                d.a(dataOutputStream);
                d.a(bufferedInputStream);
                throw th;
            }
        } catch (Throwable th3) {
            th = th3;
            dataOutputStream = null;
        }
    }

    public void a() {
        HttpURLConnection httpURLConnection = this.f2293a;
        if (httpURLConnection != null) {
            httpURLConnection.disconnect();
        }
    }
}
