package com.kwad.sdk.core.videocache;

import android.text.TextUtils;
import com.kwad.sdk.core.network.q;
import com.kwad.sdk.core.network.s;
import com.kwad.sdk.utils.ao;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InterruptedIOException;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public final class h implements l {
    private m awG;
    private HttpURLConnection awH;
    private InputStream awI;
    private final com.kwad.sdk.core.videocache.d.b awk;
    private final com.kwad.sdk.core.videocache.b.b awl;

    public h(h hVar) {
        this.awG = hVar.awG;
        this.awk = hVar.awk;
        this.awl = hVar.awl;
    }

    public h(String str, com.kwad.sdk.core.videocache.d.b bVar, com.kwad.sdk.core.videocache.b.b bVar2) {
        this.awk = (com.kwad.sdk.core.videocache.d.b) ao.checkNotNull(bVar);
        this.awl = (com.kwad.sdk.core.videocache.b.b) ao.checkNotNull(bVar2);
        m mVarDW = bVar.dW(str);
        this.awG = mVarDW == null ? new m(str, -2147483648L, k.dU(str)) : mVarDW;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v10 */
    /* JADX WARN: Type inference failed for: r0v11 */
    /* JADX WARN: Type inference failed for: r0v2 */
    /* JADX WARN: Type inference failed for: r0v3 */
    /* JADX WARN: Type inference failed for: r0v5, types: [java.net.URLConnection] */
    /* JADX WARN: Type inference failed for: r0v6 */
    /* JADX WARN: Type inference failed for: r0v8, types: [java.net.URLConnection] */
    private void DJ() throws Throwable {
        HttpURLConnection httpURLConnectionC;
        com.kwad.sdk.core.e.c.d("HttpUrlSource", "Read content info from " + this.awG.url);
        ?? r0 = 10000;
        InputStream inputStream = null;
        try {
            try {
                httpURLConnectionC = c(0L, 10000);
                try {
                    long jC = c(httpURLConnectionC);
                    String contentType = httpURLConnectionC.getContentType();
                    inputStream = httpURLConnectionC.getInputStream();
                    m mVar = new m(this.awG.url, jC, contentType);
                    this.awG = mVar;
                    this.awk.a(mVar.url, this.awG);
                    com.kwad.sdk.core.e.c.d("HttpUrlSource", "Source info fetched: " + this.awG);
                    r0 = httpURLConnectionC;
                } catch (IOException unused) {
                    com.kwad.sdk.core.e.c.e("HttpUrlSource", "Error fetching info from " + this.awG.url);
                    r0 = httpURLConnectionC;
                }
            } catch (Throwable th) {
                th = th;
                com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
                com.kwad.sdk.crash.utils.b.a(r0);
                throw th;
            }
        } catch (IOException unused2) {
            httpURLConnectionC = null;
        } catch (Throwable th2) {
            th = th2;
            r0 = 0;
            com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
            com.kwad.sdk.crash.utils.b.a(r0);
            throw th;
        }
        com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
        com.kwad.sdk.crash.utils.b.a(r0);
    }

    private long a(HttpURLConnection httpURLConnection, long j, int i) {
        long jC = c(httpURLConnection);
        return i == 200 ? jC : i == 206 ? jC + j : this.awG.awV;
    }

    private void a(HttpURLConnection httpURLConnection, String str) {
        for (Map.Entry<String, String> entry : this.awl.DR().entrySet()) {
            httpURLConnection.setRequestProperty(entry.getKey(), entry.getValue());
        }
    }

    private static long c(HttpURLConnection httpURLConnection) {
        String headerField = httpURLConnection.getHeaderField("Content-Length");
        if (headerField == null) {
            return -1L;
        }
        return Long.parseLong(headerField);
    }

    private HttpURLConnection c(long j, int i) throws IOException, ProxyCacheException {
        String str;
        HttpURLConnection httpURLConnection;
        boolean z;
        String headerField = this.awG.url;
        int i2 = 0;
        do {
            StringBuilder sb = new StringBuilder("Open connection ");
            if (j > 0) {
                str = " with offset " + j;
            } else {
                str = "";
            }
            sb.append(str);
            sb.append(" to ");
            sb.append(headerField);
            com.kwad.sdk.core.e.c.d("HttpUrlSource", sb.toString());
            httpURLConnection = (HttpURLConnection) new URL(headerField).openConnection();
            s.wrapHttpURLConnection(httpURLConnection);
            a(httpURLConnection, headerField);
            if (j > 0) {
                httpURLConnection.setRequestProperty("Range", "bytes=" + j + Constants.ACCEPT_TIME_SEPARATOR_SERVER);
            }
            if (i > 0) {
                httpURLConnection.setConnectTimeout(i);
                httpURLConnection.setReadTimeout(i);
            }
            q.b(httpURLConnection);
            int responseCode = httpURLConnection.getResponseCode();
            z = responseCode == 301 || responseCode == 302 || responseCode == 303;
            if (z) {
                headerField = httpURLConnection.getHeaderField("Location");
                i2++;
                httpURLConnection.disconnect();
            }
            if (i2 > 5) {
                throw new ProxyCacheException("Too many redirects: " + i2);
            }
        } while (z);
        return httpURLConnection;
    }

    public final synchronized String DK() {
        if (TextUtils.isEmpty(this.awG.awW)) {
            DJ();
        }
        return this.awG.awW;
    }

    @Override // com.kwad.sdk.core.videocache.l
    public final void ai(long j) throws ProxyCacheException {
        try {
            HttpURLConnection httpURLConnectionC = c(j, -1);
            this.awH = httpURLConnectionC;
            String contentType = httpURLConnectionC.getContentType();
            this.awI = new BufferedInputStream(this.awH.getInputStream(), 8192);
            m mVar = new m(this.awG.url, a(this.awH, j, this.awH.getResponseCode()), contentType);
            this.awG = mVar;
            this.awk.a(mVar.url, this.awG);
        } catch (IOException e) {
            throw new ProxyCacheException("Error opening connection for " + this.awG.url + " with offset " + j, e);
        }
    }

    @Override // com.kwad.sdk.core.videocache.l
    public final void close() {
        HttpURLConnection httpURLConnection = this.awH;
        if (httpURLConnection != null) {
            try {
                httpURLConnection.disconnect();
            } catch (ArrayIndexOutOfBoundsException unused) {
                com.kwad.sdk.core.e.c.e("HttpUrlSource", "Error closing connection correctly. Should happen only on Android L. If anybody know how to fix it, please visit https://github.com/danikula/AndroidVideoCache/issues/88. Until good solution is not know, just ignore this issue.");
            } catch (IllegalArgumentException e) {
                e = e;
                throw new RuntimeException("Wait... but why? WTF!? Really shouldn't happen any more after fixing https://github.com/danikula/AndroidVideoCache/issues/43. If you read it on your device log, please, notify me danikula@gmail.com or create issue here https://github.com/danikula/AndroidVideoCache/issues.", e);
            } catch (NullPointerException e2) {
                e = e2;
                throw new RuntimeException("Wait... but why? WTF!? Really shouldn't happen any more after fixing https://github.com/danikula/AndroidVideoCache/issues/43. If you read it on your device log, please, notify me danikula@gmail.com or create issue here https://github.com/danikula/AndroidVideoCache/issues.", e);
            }
        }
    }

    @Override // com.kwad.sdk.core.videocache.l
    public final synchronized long length() {
        if (this.awG.awV == -2147483648L) {
            DJ();
        }
        return this.awG.awV;
    }

    @Override // com.kwad.sdk.core.videocache.l
    public final int read(byte[] bArr) throws ProxyCacheException {
        InputStream inputStream = this.awI;
        if (inputStream == null) {
            throw new ProxyCacheException("Error reading data from " + this.awG.url + ": connection is absent!");
        }
        try {
            return inputStream.read(bArr, 0, 8192);
        } catch (InterruptedIOException e) {
            throw new InterruptedProxyCacheException("Reading source " + this.awG.url + " is interrupted", e);
        } catch (IOException e2) {
            throw new ProxyCacheException("Error reading data from " + this.awG.url, e2);
        }
    }

    public final String toString() {
        return "HttpUrlSource{sourceInfo='" + this.awG + "}";
    }
}
