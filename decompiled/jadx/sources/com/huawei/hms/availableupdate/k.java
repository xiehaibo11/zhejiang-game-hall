package com.huawei.hms.availableupdate;

import android.content.Context;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.utils.IOUtils;
import com.huawei.secure.android.common.ssl.SecureSSLSocketFactory;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.URL;
import java.net.URLConnection;
import java.security.KeyManagementException;
import java.security.KeyStoreException;
import java.security.NoSuchAlgorithmException;
import java.security.cert.CertificateException;
import javax.net.ssl.HttpsURLConnection;

/* JADX INFO: compiled from: HttpRequestHelper.java */
/* JADX INFO: loaded from: classes.dex */
public class k implements l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public HttpsURLConnection f2032a;
    public volatile int b = -1;

    @Override // com.huawei.hms.availableupdate.l
    public void a() {
        this.b = 1;
    }

    @Override // com.huawei.hms.availableupdate.l
    public void close() {
        this.b = -1;
        HttpsURLConnection httpsURLConnection = this.f2032a;
        if (httpsURLConnection != null) {
            httpsURLConnection.disconnect();
        }
    }

    @Override // com.huawei.hms.availableupdate.l
    public int a(String str, OutputStream outputStream, int i, int i2, Context context) throws j, IOException {
        InputStream inputStream = null;
        try {
            a(str, context);
            if (this.f2032a == null) {
                HMSLog.i("HttpRequestHelper", "mConnection is null");
                IOUtils.closeQuietly((InputStream) null);
                return -1;
            }
            this.f2032a.setRequestMethod("GET");
            if (i > 0) {
                this.f2032a.addRequestProperty("Range", "bytes=" + i + Constants.ACCEPT_TIME_SEPARATOR_SERVER + i2);
            }
            int responseCode = this.f2032a.getResponseCode();
            if ((i > 0 && responseCode == 206) || (i <= 0 && responseCode == 200)) {
                inputStream = this.f2032a.getInputStream();
                a(new BufferedInputStream(inputStream, 4096), outputStream);
                outputStream.flush();
            }
            return responseCode;
        } finally {
            IOUtils.closeQuietly((InputStream) null);
        }
    }

    public final void a(String str, Context context) throws IOException {
        if (this.b == 0) {
            HMSLog.e("HttpRequestHelper", "Not allowed to repeat open http(s) connection.");
        }
        URLConnection uRLConnectionOpenConnection = new URL(str).openConnection();
        if (uRLConnectionOpenConnection == null) {
            HMSLog.i("HttpRequestHelper", "urlConnection is null");
            return;
        }
        if (uRLConnectionOpenConnection instanceof HttpsURLConnection) {
            this.f2032a = (HttpsURLConnection) uRLConnectionOpenConnection;
            try {
                SecureSSLSocketFactory secureSSLSocketFactory = SecureSSLSocketFactory.getInstance(context);
                if (secureSSLSocketFactory != null) {
                    this.f2032a.setSSLSocketFactory(secureSSLSocketFactory);
                }
                this.f2032a.setSSLSocketFactory(secureSSLSocketFactory);
                this.f2032a.setConnectTimeout(30000);
                this.f2032a.setReadTimeout(30000);
                this.f2032a.setDoInput(true);
                this.f2032a.setDoOutput(true);
                this.f2032a.setUseCaches(false);
                this.f2032a.setInstanceFollowRedirects(true);
                this.b = 0;
                return;
            } catch (IOException | IllegalAccessException | IllegalArgumentException | KeyManagementException | KeyStoreException | NoSuchAlgorithmException | CertificateException e) {
                HMSLog.e("HttpRequestHelper", "Failed to new TLSSocketFactory instance." + e.getMessage());
                throw new IOException("Failed to create SSLSocketFactory.");
            }
        }
        HMSLog.i("HttpRequestHelper", "current request is http not allow connection");
        this.f2032a = null;
    }

    public final void a(InputStream inputStream, OutputStream outputStream) throws j, IOException {
        byte[] bArr = new byte[4096];
        do {
            int i = inputStream.read(bArr);
            if (-1 == i) {
                return;
            } else {
                outputStream.write(bArr, 0, i);
            }
        } while (this.b != 1);
        throw new j("HTTP(s) request was canceled.");
    }
}
