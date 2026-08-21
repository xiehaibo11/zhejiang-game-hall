package com.sigmob.sdk.videocache;

import android.text.TextUtils;
import com.czhj.sdk.logger.SigmobLog;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InterruptedIOException;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Map;

public class j implements s {
    private static final int a = 5;
    private final com.sigmob.sdk.videocache.sourcestorage.c b;
    private final com.sigmob.sdk.videocache.headers.b c;
    private t d;
    private HttpURLConnection e;
    private InputStream f;

    public j(j jVar) {
        this.d = jVar.d;
        this.b = jVar.b;
        this.c = jVar.c;
    }

    public j(String str) {
        this(str, com.sigmob.sdk.videocache.sourcestorage.d.a());
    }

    public j(String str, com.sigmob.sdk.videocache.sourcestorage.c cVar) {
        this(str, cVar, new com.sigmob.sdk.videocache.headers.a());
    }

    public j(String str, com.sigmob.sdk.videocache.sourcestorage.c cVar, com.sigmob.sdk.videocache.headers.b bVar) {
        this.b = (com.sigmob.sdk.videocache.sourcestorage.c) n.a(cVar);
        this.c = (com.sigmob.sdk.videocache.headers.b) n.a(bVar);
        t tVarA = cVar.a(str);
        this.d = tVarA == null ? new t(str, -2147483648L, q.a(str)) : tVarA;
    }

    private long a(HttpURLConnection httpURLConnection) {
        String headerField = httpURLConnection.getHeaderField("Content-Length");
        if (headerField == null) {
            return -1L;
        }
        return Long.parseLong(headerField);
    }

    private long a(HttpURLConnection httpURLConnection, long j, int i) throws IOException {
        long jA = a(httpURLConnection);
        return i == 200 ? jA : i == 206 ? jA + j : this.d.b;
    }

    private HttpURLConnection a(long j, int i) throws p, IOException {
        String str;
        HttpURLConnection httpURLConnection;
        boolean z;
        String headerField = this.d.a;
        int i2 = 0;
        do {
            StringBuilder sb = new StringBuilder();
            sb.append("Open connection ");
            if (j > 0) {
                str = " with offset " + j;
            } else {
                str = "";
            }
            sb.append(str);
            sb.append(" to ");
            sb.append(headerField);
            SigmobLog.d(sb.toString());
            httpURLConnection = (HttpURLConnection) new URL(headerField).openConnection();
            a(httpURLConnection, headerField);
            if (j > 0) {
                httpURLConnection.setRequestProperty("Range", "bytes=" + j + Constants.ACCEPT_TIME_SEPARATOR_SERVER);
            }
            if (i > 0) {
                httpURLConnection.setConnectTimeout(i);
                httpURLConnection.setReadTimeout(i);
            }
            int responseCode = httpURLConnection.getResponseCode();
            z = responseCode == 301 || responseCode == 302 || responseCode == 303;
            if (z) {
                headerField = httpURLConnection.getHeaderField("Location");
                i2++;
                httpURLConnection.disconnect();
            }
            if (i2 > 5) {
                throw new p("Too many redirects: " + i2);
            }
        } while (z);
        return httpURLConnection;
    }

    private void a(HttpURLConnection httpURLConnection, String str) {
        for (Map.Entry<String, String> entry : this.c.a(str).entrySet()) {
            httpURLConnection.setRequestProperty(entry.getKey(), entry.getValue());
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x008c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void e() throws Throwable {
        HttpURLConnection httpURLConnectionA;
        SigmobLog.d("Read content info from " + this.d.a);
        InputStream inputStream = null;
        try {
            httpURLConnectionA = a(0L, 10000);
            try {
                try {
                    long jA = a(httpURLConnectionA);
                    String contentType = httpURLConnectionA.getContentType();
                    inputStream = httpURLConnectionA.getInputStream();
                    t tVar = new t(this.d.a, jA, contentType);
                    this.d = tVar;
                    this.b.a(tVar.a, this.d);
                    SigmobLog.d("Source info fetched: " + this.d);
                    q.a(inputStream);
                    if (httpURLConnectionA == null) {
                        return;
                    }
                } catch (IOException e) {
                    e = e;
                    SigmobLog.e("Error fetching info from " + this.d.a, e);
                    q.a(inputStream);
                    if (httpURLConnectionA == null) {
                        return;
                    }
                }
            } catch (Throwable th) {
                th = th;
                q.a(inputStream);
                if (httpURLConnectionA != null) {
                    httpURLConnectionA.disconnect();
                }
                throw th;
            }
        } catch (IOException e2) {
            e = e2;
            httpURLConnectionA = null;
        } catch (Throwable th2) {
            th = th2;
            httpURLConnectionA = null;
            q.a(inputStream);
            if (httpURLConnectionA != null) {
            }
            throw th;
        }
        httpURLConnectionA.disconnect();
    }

    @Override
    public int a(byte[] bArr) throws p {
        InputStream inputStream = this.f;
        if (inputStream == null) {
            throw new p("Error reading data from " + this.d.a + ": connection is absent!");
        }
        try {
            return inputStream.read(bArr, 0, bArr.length);
        } catch (InterruptedIOException e) {
            throw new l("Reading source " + this.d.a + " is interrupted", e);
        } catch (IOException e2) {
            throw new p("Error reading data from " + this.d.a, e2);
        }
    }

    @Override
    public synchronized long a() throws p {
        if (this.d.b == -2147483648L) {
            e();
        }
        return this.d.b;
    }

    @Override
    public void a(long j) throws p {
        try {
            HttpURLConnection httpURLConnectionA = a(j, -1);
            this.e = httpURLConnectionA;
            String contentType = httpURLConnectionA.getContentType();
            this.f = new BufferedInputStream(this.e.getInputStream(), 8192);
            t tVar = new t(this.d.a, a(this.e, j, this.e.getResponseCode()), contentType);
            this.d = tVar;
            this.b.a(tVar.a, this.d);
        } catch (IOException e) {
            throw new p("Error opening connection for " + this.d.a + " with offset " + j, e);
        }
    }

    @Override
    public void b() throws p {
        HttpURLConnection httpURLConnection = this.e;
        if (httpURLConnection != null) {
            try {
                httpURLConnection.disconnect();
            } catch (ArrayIndexOutOfBoundsException e) {
                SigmobLog.e("Error closing connection correctly. Should happen only on Android L. If anybody know how to fix it, please visit https://github.com/danikula/AndroidVideoCache/issues/88. Until good solution is not know, just ignore this issue :(", e);
            } catch (IllegalArgumentException e2) {
                e = e2;
                throw new RuntimeException("Wait... but why? WTF!? Really shouldn't happen any more after fixing https://github.com/danikula/AndroidVideoCache/issues/43. If you read it on your device log, please, notify me danikula@gmail.com or create issue here https://github.com/danikula/AndroidVideoCache/issues.", e);
            } catch (NullPointerException e3) {
                e = e3;
                throw new RuntimeException("Wait... but why? WTF!? Really shouldn't happen any more after fixing https://github.com/danikula/AndroidVideoCache/issues/43. If you read it on your device log, please, notify me danikula@gmail.com or create issue here https://github.com/danikula/AndroidVideoCache/issues.", e);
            }
        }
    }

    public synchronized String c() throws p {
        if (TextUtils.isEmpty(this.d.c)) {
            e();
        }
        return this.d.c;
    }

    public String d() {
        return this.d.a;
    }

    public String toString() {
        return "HttpUrlSource{sourceInfo='" + this.d + "}";
    }
}
