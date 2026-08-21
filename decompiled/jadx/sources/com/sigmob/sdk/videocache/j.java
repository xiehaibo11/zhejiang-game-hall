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

/* JADX INFO: loaded from: classes3.dex */
public class j implements s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int f5229a = 5;
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
        String headerField = this.d.f5239a;
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
        To view partially-correct add '--show-bad-code' argument
    */
    private void e() throws java.lang.Throwable {
        /*
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Read content info from "
            r0.append(r1)
            com.sigmob.sdk.videocache.t r1 = r7.d
            java.lang.String r1 = r1.f5239a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r0 = 0
            r2 = 10000(0x2710, float:1.4013E-41)
            r3 = 0
            java.net.HttpURLConnection r0 = r7.a(r0, r2)     // Catch: java.lang.Throwable -> L61 java.io.IOException -> L64
            long r1 = r7.a(r0)     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            java.lang.String r4 = r0.getContentType()     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            java.io.InputStream r3 = r0.getInputStream()     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            com.sigmob.sdk.videocache.t r5 = new com.sigmob.sdk.videocache.t     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            com.sigmob.sdk.videocache.t r6 = r7.d     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            java.lang.String r6 = r6.f5239a     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            r5.<init>(r6, r1, r4)     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            r7.d = r5     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            com.sigmob.sdk.videocache.sourcestorage.c r1 = r7.b     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            java.lang.String r2 = r5.f5239a     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            com.sigmob.sdk.videocache.t r4 = r7.d     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            r1.a(r2, r4)     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            r1.<init>()     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            java.lang.String r2 = "Source info fetched: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            com.sigmob.sdk.videocache.t r2 = r7.d     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            r1.append(r2)     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            com.sigmob.sdk.videocache.q.a(r3)
            if (r0 == 0) goto L86
            goto L83
        L5d:
            r1 = move-exception
            goto L87
        L5f:
            r1 = move-exception
            goto L66
        L61:
            r1 = move-exception
            r0 = r3
            goto L87
        L64:
            r1 = move-exception
            r0 = r3
        L66:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5d
            r2.<init>()     // Catch: java.lang.Throwable -> L5d
            java.lang.String r4 = "Error fetching info from "
            r2.append(r4)     // Catch: java.lang.Throwable -> L5d
            com.sigmob.sdk.videocache.t r4 = r7.d     // Catch: java.lang.Throwable -> L5d
            java.lang.String r4 = r4.f5239a     // Catch: java.lang.Throwable -> L5d
            r2.append(r4)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L5d
            com.czhj.sdk.logger.SigmobLog.e(r2, r1)     // Catch: java.lang.Throwable -> L5d
            com.sigmob.sdk.videocache.q.a(r3)
            if (r0 == 0) goto L86
        L83:
            r0.disconnect()
        L86:
            return
        L87:
            com.sigmob.sdk.videocache.q.a(r3)
            if (r0 == 0) goto L8f
            r0.disconnect()
        L8f:
            throw r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.videocache.j.e():void");
    }

    @Override // com.sigmob.sdk.videocache.s
    public int a(byte[] bArr) throws p {
        InputStream inputStream = this.f;
        if (inputStream == null) {
            throw new p("Error reading data from " + this.d.f5239a + ": connection is absent!");
        }
        try {
            return inputStream.read(bArr, 0, bArr.length);
        } catch (InterruptedIOException e) {
            throw new l("Reading source " + this.d.f5239a + " is interrupted", e);
        } catch (IOException e2) {
            throw new p("Error reading data from " + this.d.f5239a, e2);
        }
    }

    @Override // com.sigmob.sdk.videocache.s
    public synchronized long a() throws p {
        if (this.d.b == -2147483648L) {
            e();
        }
        return this.d.b;
    }

    @Override // com.sigmob.sdk.videocache.s
    public void a(long j) throws p {
        try {
            HttpURLConnection httpURLConnectionA = a(j, -1);
            this.e = httpURLConnectionA;
            String contentType = httpURLConnectionA.getContentType();
            this.f = new BufferedInputStream(this.e.getInputStream(), 8192);
            t tVar = new t(this.d.f5239a, a(this.e, j, this.e.getResponseCode()), contentType);
            this.d = tVar;
            this.b.a(tVar.f5239a, this.d);
        } catch (IOException e) {
            throw new p("Error opening connection for " + this.d.f5239a + " with offset " + j, e);
        }
    }

    @Override // com.sigmob.sdk.videocache.s
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
        return this.d.f5239a;
    }

    public String toString() {
        return "HttpUrlSource{sourceInfo='" + this.d + "}";
    }
}
