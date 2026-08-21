package com.tkay.expressad.exoplayer.j;

import android.net.Uri;
import android.text.TextUtils;
import android.util.Log;
import com.tkay.expressad.exoplayer.j.s;
import com.tkay.expressad.exoplayer.k.af;
import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import java.io.InterruptedIOException;
import java.lang.reflect.Method;
import java.net.HttpURLConnection;
import java.net.NoRouteToHostException;
import java.net.ProtocolException;
import java.net.URL;
import java.util.List;
import java.util.Map;
import java.util.concurrent.atomic.AtomicReference;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes3.dex */
public final class p implements s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6731a = 8000;
    public static final int b = 8000;
    private static final String d = "DefaultHttpDataSource";
    private static final int e = 20;
    private static final long f = 2048;
    private static final Pattern g = Pattern.compile("^bytes (\\d+)-(\\d+)/(\\d+)$");
    private static final AtomicReference<byte[]> h = new AtomicReference<>();
    private final boolean i;
    private final int j;
    private final int k;
    private final String l;
    private final com.tkay.expressad.exoplayer.k.u<String> m;
    private final s.f n;
    private final s.f o;
    private final aa<? super p> p;
    private k q;
    private HttpURLConnection r;
    private InputStream s;
    private boolean t;
    private long u;
    private long v;
    private long w;
    private long x;

    private p(String str, com.tkay.expressad.exoplayer.k.u<String> uVar) {
        this(str, uVar, null);
    }

    private p(String str, com.tkay.expressad.exoplayer.k.u<String> uVar, aa<? super p> aaVar) {
        this(str, uVar, aaVar, (byte) 0);
    }

    private p(String str, com.tkay.expressad.exoplayer.k.u<String> uVar, aa<? super p> aaVar, byte b2) {
        this(str, uVar, aaVar, 8000, 8000, false, null);
    }

    public p(String str, com.tkay.expressad.exoplayer.k.u<String> uVar, aa<? super p> aaVar, int i, int i2, boolean z, s.f fVar) {
        if (!TextUtils.isEmpty(str)) {
            this.l = str;
            this.m = uVar;
            this.p = aaVar;
            this.o = new s.f();
            this.j = i;
            this.k = i2;
            this.i = z;
            this.n = fVar;
            return;
        }
        throw new IllegalArgumentException();
    }

    @Override // com.tkay.expressad.exoplayer.j.h
    public final Uri a() {
        HttpURLConnection httpURLConnection = this.r;
        if (httpURLConnection == null) {
            return null;
        }
        return Uri.parse(httpURLConnection.getURL().toString());
    }

    @Override // com.tkay.expressad.exoplayer.j.s
    public final Map<String, List<String>> c() {
        HttpURLConnection httpURLConnection = this.r;
        if (httpURLConnection == null) {
            return null;
        }
        return httpURLConnection.getHeaderFields();
    }

    @Override // com.tkay.expressad.exoplayer.j.s
    public final void a(String str, String str2) {
        com.tkay.expressad.exoplayer.k.a.a(str);
        com.tkay.expressad.exoplayer.k.a.a(str2);
        this.o.a(str, str2);
    }

    @Override // com.tkay.expressad.exoplayer.j.s
    public final void a(String str) {
        com.tkay.expressad.exoplayer.k.a.a(str);
        this.o.a(str);
    }

    @Override // com.tkay.expressad.exoplayer.j.s
    public final void d() {
        this.o.a();
    }

    @Override // com.tkay.expressad.exoplayer.j.s, com.tkay.expressad.exoplayer.j.h
    public final long a(k kVar) throws s.c {
        HttpURLConnection httpURLConnectionA;
        HttpURLConnection httpURLConnectionA2;
        this.q = kVar;
        long j = 0;
        this.x = 0L;
        this.w = 0L;
        try {
            URL url = new URL(kVar.c.toString());
            byte[] bArr = kVar.d;
            long j2 = kVar.f;
            long j3 = kVar.g;
            boolean zA = kVar.a(1);
            if (this.i) {
                int i = 0;
                URL url2 = url;
                byte[] bArr2 = bArr;
                while (true) {
                    int i2 = i + 1;
                    if (i <= 20) {
                        URL url3 = url2;
                        long j4 = j3;
                        long j5 = j2;
                        httpURLConnectionA = a(url2, bArr2, j2, j3, zA, false);
                        int responseCode = httpURLConnectionA.getResponseCode();
                        if (responseCode != 300 && responseCode != 301 && responseCode != 302 && responseCode != 303 && (bArr2 != null || (responseCode != 307 && responseCode != 308))) {
                            break;
                        }
                        bArr2 = null;
                        String headerField = httpURLConnectionA.getHeaderField("Location");
                        httpURLConnectionA.disconnect();
                        if (headerField == null) {
                            throw new ProtocolException("Null location redirect");
                        }
                        url2 = new URL(url3, headerField);
                        String protocol = url2.getProtocol();
                        if (!"https".equals(protocol) && !"http".equals(protocol)) {
                            throw new ProtocolException("Unsupported protocol redirect: ".concat(String.valueOf(protocol)));
                        }
                        i = i2;
                        j3 = j4;
                        j2 = j5;
                    } else {
                        throw new NoRouteToHostException("Too many redirects: ".concat(String.valueOf(i2)));
                    }
                }
                httpURLConnectionA2 = httpURLConnectionA;
            } else {
                httpURLConnectionA2 = a(url, bArr, j2, j3, zA, true);
            }
            this.r = httpURLConnectionA2;
            try {
                int responseCode2 = httpURLConnectionA2.getResponseCode();
                if (responseCode2 < 200 || responseCode2 > 299) {
                    Map<String, List<String>> headerFields = this.r.getHeaderFields();
                    j();
                    s.e eVar = new s.e(responseCode2, headerFields, kVar);
                    if (responseCode2 == 416) {
                        eVar.initCause(new i());
                        throw eVar;
                    }
                    throw eVar;
                }
                String contentType = this.r.getContentType();
                com.tkay.expressad.exoplayer.k.u<String> uVar = this.m;
                if (uVar != null && !uVar.a(contentType)) {
                    j();
                    throw new s.d(contentType, kVar);
                }
                if (responseCode2 == 200 && kVar.f != 0) {
                    j = kVar.f;
                }
                this.u = j;
                if (kVar.a(1)) {
                    this.v = kVar.g;
                } else {
                    if (kVar.g != -1) {
                        this.v = kVar.g;
                    } else {
                        long jA = a(this.r);
                        this.v = jA != -1 ? jA - this.u : -1L;
                    }
                }
                try {
                    this.s = this.r.getInputStream();
                    this.t = true;
                    aa<? super p> aaVar = this.p;
                    if (aaVar != null) {
                        aaVar.b();
                    }
                    return this.v;
                } catch (IOException e2) {
                    j();
                    throw new s.c(e2, kVar, 1);
                }
            } catch (IOException e3) {
                j();
                throw new s.c("Unable to connect to " + kVar.c.toString(), e3, kVar);
            }
        } catch (IOException e4) {
            throw new s.c("Unable to connect to " + kVar.c.toString(), e4, kVar);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x003a A[Catch: Exception -> 0x006b, all -> 0x008e, TryCatch #0 {Exception -> 0x006b, blocks: (B:14:0x0024, B:16:0x002c, B:21:0x003a, B:23:0x004a, B:25:0x0052), top: B:45:0x0024 }] */
    @Override // com.tkay.expressad.exoplayer.j.s, com.tkay.expressad.exoplayer.j.h
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void b() {
        /*
            r9 = this;
            r0 = 0
            r1 = 0
            java.io.InputStream r2 = r9.s     // Catch: java.lang.Throwable -> L8e
            if (r2 == 0) goto L7b
            java.net.HttpURLConnection r2 = r9.r     // Catch: java.lang.Throwable -> L8e
            long r3 = r9.v     // Catch: java.lang.Throwable -> L8e
            r5 = -1
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 != 0) goto L13
            long r3 = r9.v     // Catch: java.lang.Throwable -> L8e
            goto L18
        L13:
            long r3 = r9.v     // Catch: java.lang.Throwable -> L8e
            long r7 = r9.x     // Catch: java.lang.Throwable -> L8e
            long r3 = r3 - r7
        L18:
            int r7 = com.tkay.expressad.exoplayer.k.af.f6754a     // Catch: java.lang.Throwable -> L8e
            r8 = 19
            if (r7 == r8) goto L24
            int r7 = com.tkay.expressad.exoplayer.k.af.f6754a     // Catch: java.lang.Throwable -> L8e
            r8 = 20
            if (r7 != r8) goto L6b
        L24:
            java.io.InputStream r2 = r2.getInputStream()     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L8e
            int r5 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r5 != 0) goto L34
            int r3 = r2.read()     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L8e
            r4 = -1
            if (r3 != r4) goto L3a
            goto L6b
        L34:
            r5 = 2048(0x800, double:1.012E-320)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 <= 0) goto L6b
        L3a:
            java.lang.Class r3 = r2.getClass()     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L8e
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L8e
            java.lang.String r4 = "com.android.okhttp.internal.http.HttpTransport$ChunkedInputStream"
            boolean r4 = r4.equals(r3)     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L8e
            if (r4 != 0) goto L52
            java.lang.String r4 = "com.android.okhttp.internal.http.HttpTransport$FixedLengthInputStream"
            boolean r3 = r4.equals(r3)     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L8e
            if (r3 == 0) goto L6b
        L52:
            java.lang.Class r3 = r2.getClass()     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L8e
            java.lang.Class r3 = r3.getSuperclass()     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L8e
            java.lang.String r4 = "unexpectedEndOfInput"
            java.lang.Class[] r5 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L8e
            java.lang.reflect.Method r3 = r3.getDeclaredMethod(r4, r5)     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L8e
            r4 = 1
            r3.setAccessible(r4)     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L8e
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L8e
            r3.invoke(r2, r4)     // Catch: java.lang.Exception -> L6b java.lang.Throwable -> L8e
        L6b:
            java.io.InputStream r2 = r9.s     // Catch: java.io.IOException -> L71 java.lang.Throwable -> L8e
            r2.close()     // Catch: java.io.IOException -> L71 java.lang.Throwable -> L8e
            goto L7b
        L71:
            r2 = move-exception
            com.tkay.expressad.exoplayer.j.s$c r3 = new com.tkay.expressad.exoplayer.j.s$c     // Catch: java.lang.Throwable -> L8e
            com.tkay.expressad.exoplayer.j.k r4 = r9.q     // Catch: java.lang.Throwable -> L8e
            r5 = 3
            r3.<init>(r2, r4, r5)     // Catch: java.lang.Throwable -> L8e
            throw r3     // Catch: java.lang.Throwable -> L8e
        L7b:
            r9.s = r0
            r9.j()
            boolean r0 = r9.t
            if (r0 == 0) goto L8d
            r9.t = r1
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.p> r0 = r9.p
            if (r0 == 0) goto L8d
            r0.c()
        L8d:
            return
        L8e:
            r2 = move-exception
            r9.s = r0
            r9.j()
            boolean r0 = r9.t
            if (r0 == 0) goto La1
            r9.t = r1
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.p> r0 = r9.p
            if (r0 == 0) goto La1
            r0.c()
        La1:
            throw r2
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.j.p.b():void");
    }

    private HttpURLConnection e() {
        return this.r;
    }

    private long f() {
        return this.w;
    }

    private long g() {
        return this.x;
    }

    private long h() {
        long j = this.v;
        return j == -1 ? j : j - this.x;
    }

    /* JADX WARN: Code restructure failed: missing block: B:23:0x005e, code lost:
    
        return r0;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.net.HttpURLConnection b(com.tkay.expressad.exoplayer.j.k r19) throws java.io.IOException {
        /*
            r18 = this;
            r0 = r19
            java.net.URL r1 = new java.net.URL
            android.net.Uri r2 = r0.c
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            byte[] r2 = r0.d
            long r12 = r0.f
            long r14 = r0.g
            r3 = 1
            boolean r16 = r0.a(r3)
            r11 = r18
            boolean r0 = r11.i
            if (r0 != 0) goto L2a
            r8 = 1
            r0 = r18
            r3 = r12
            r5 = r14
            r7 = r16
            java.net.HttpURLConnection r0 = r0.a(r1, r2, r3, r5, r7, r8)
            return r0
        L2a:
            r0 = 0
        L2b:
            int r17 = r0 + 1
            r3 = 20
            if (r0 > r3) goto La3
            r0 = 0
            r3 = r18
            r4 = r1
            r5 = r2
            r6 = r12
            r8 = r14
            r10 = r16
            r11 = r0
            java.net.HttpURLConnection r0 = r3.a(r4, r5, r6, r8, r10, r11)
            int r3 = r0.getResponseCode()
            r4 = 300(0x12c, float:4.2E-43)
            if (r3 == r4) goto L5f
            r4 = 301(0x12d, float:4.22E-43)
            if (r3 == r4) goto L5f
            r4 = 302(0x12e, float:4.23E-43)
            if (r3 == r4) goto L5f
            r4 = 303(0x12f, float:4.25E-43)
            if (r3 == r4) goto L5f
            if (r2 != 0) goto L5e
            r2 = 307(0x133, float:4.3E-43)
            if (r3 == r2) goto L5f
            r2 = 308(0x134, float:4.32E-43)
            if (r3 != r2) goto L5e
            goto L5f
        L5e:
            return r0
        L5f:
            r2 = 0
            java.lang.String r3 = "Location"
            java.lang.String r3 = r0.getHeaderField(r3)
            r0.disconnect()
            if (r3 == 0) goto L9b
            java.net.URL r0 = new java.net.URL
            r0.<init>(r1, r3)
            java.lang.String r1 = r0.getProtocol()
            java.lang.String r3 = "https"
            boolean r3 = r3.equals(r1)
            if (r3 != 0) goto L95
            java.lang.String r3 = "http"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L85
            goto L95
        L85:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "Unsupported protocol redirect: "
            java.lang.String r1 = r2.concat(r1)
            r0.<init>(r1)
            throw r0
        L95:
            r11 = r18
            r1 = r0
            r0 = r17
            goto L2b
        L9b:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "Null location redirect"
            r0.<init>(r1)
            throw r0
        La3:
            java.net.NoRouteToHostException r0 = new java.net.NoRouteToHostException
            java.lang.String r1 = java.lang.String.valueOf(r17)
            java.lang.String r2 = "Too many redirects: "
            java.lang.String r1 = r2.concat(r1)
            r0.<init>(r1)
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.j.p.b(com.tkay.expressad.exoplayer.j.k):java.net.HttpURLConnection");
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x00d8  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.net.HttpURLConnection a(java.net.URL r5, byte[] r6, long r7, long r9, boolean r11, boolean r12) throws java.io.IOException {
        /*
            Method dump skipped, instruction units count: 220
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.j.p.a(java.net.URL, byte[], long, long, boolean, boolean):java.net.HttpURLConnection");
    }

    private static URL a(URL url, String str) throws ProtocolException {
        if (str == null) {
            throw new ProtocolException("Null location redirect");
        }
        URL url2 = new URL(url, str);
        String protocol = url2.getProtocol();
        if ("https".equals(protocol) || "http".equals(protocol)) {
            return url2;
        }
        throw new ProtocolException("Unsupported protocol redirect: ".concat(String.valueOf(protocol)));
    }

    private static long a(HttpURLConnection httpURLConnection) {
        long j;
        String headerField = httpURLConnection.getHeaderField("Content-Length");
        if (TextUtils.isEmpty(headerField)) {
            j = -1;
        } else {
            try {
                j = Long.parseLong(headerField);
            } catch (NumberFormatException unused) {
                Log.e(d, "Unexpected Content-Length [" + headerField + "]");
                j = -1;
            }
        }
        String headerField2 = httpURLConnection.getHeaderField("Content-Range");
        if (TextUtils.isEmpty(headerField2)) {
            return j;
        }
        Matcher matcher = g.matcher(headerField2);
        if (!matcher.find()) {
            return j;
        }
        try {
            long j2 = (Long.parseLong(matcher.group(2)) - Long.parseLong(matcher.group(1))) + 1;
            if (j < 0) {
                return j2;
            }
            if (j == j2) {
                return j;
            }
            Log.w(d, "Inconsistent headers [" + headerField + "] [" + headerField2 + "]");
            return Math.max(j, j2);
        } catch (NumberFormatException unused2) {
            Log.e(d, "Unexpected Content-Range [" + headerField2 + "]");
            return j;
        }
    }

    private void i() throws IOException {
        if (this.w == this.u) {
            return;
        }
        byte[] andSet = h.getAndSet(null);
        if (andSet == null) {
            andSet = new byte[4096];
        }
        while (true) {
            long j = this.w;
            long j2 = this.u;
            if (j != j2) {
                int i = this.s.read(andSet, 0, (int) Math.min(j2 - j, andSet.length));
                if (Thread.currentThread().isInterrupted()) {
                    throw new InterruptedIOException();
                }
                if (i == -1) {
                    throw new EOFException();
                }
                this.w += (long) i;
                aa<? super p> aaVar = this.p;
                if (aaVar != null) {
                    aaVar.a(i);
                }
            } else {
                h.set(andSet);
                return;
            }
        }
    }

    private int b(byte[] bArr, int i, int i2) throws IOException {
        if (i2 == 0) {
            return 0;
        }
        long j = this.v;
        if (j != -1) {
            long j2 = j - this.x;
            if (j2 == 0) {
                return -1;
            }
            i2 = (int) Math.min(i2, j2);
        }
        int i3 = this.s.read(bArr, i, i2);
        if (i3 == -1) {
            if (this.v == -1) {
                return -1;
            }
            throw new EOFException();
        }
        this.x += (long) i3;
        aa<? super p> aaVar = this.p;
        if (aaVar != null) {
            aaVar.a(i3);
        }
        return i3;
    }

    private static void a(HttpURLConnection httpURLConnection, long j) {
        if (af.f6754a == 19 || af.f6754a == 20) {
            try {
                InputStream inputStream = httpURLConnection.getInputStream();
                if (j == -1) {
                    if (inputStream.read() == -1) {
                        return;
                    }
                } else if (j <= 2048) {
                    return;
                }
                String name = inputStream.getClass().getName();
                if ("com.android.okhttp.internal.http.HttpTransport$ChunkedInputStream".equals(name) || "com.android.okhttp.internal.http.HttpTransport$FixedLengthInputStream".equals(name)) {
                    Method declaredMethod = inputStream.getClass().getSuperclass().getDeclaredMethod("unexpectedEndOfInput", new Class[0]);
                    declaredMethod.setAccessible(true);
                    declaredMethod.invoke(inputStream, new Object[0]);
                }
            } catch (Exception unused) {
            }
        }
    }

    private void j() {
        HttpURLConnection httpURLConnection = this.r;
        if (httpURLConnection != null) {
            try {
                httpURLConnection.disconnect();
            } catch (Exception e2) {
                Log.e(d, "Unexpected error while disconnecting", e2);
            }
            this.r = null;
        }
    }

    @Override // com.tkay.expressad.exoplayer.j.s, com.tkay.expressad.exoplayer.j.h
    public final int a(byte[] bArr, int i, int i2) throws s.c {
        try {
            if (this.w != this.u) {
                byte[] andSet = h.getAndSet(null);
                if (andSet == null) {
                    andSet = new byte[4096];
                }
                while (this.w != this.u) {
                    int i3 = this.s.read(andSet, 0, (int) Math.min(this.u - this.w, andSet.length));
                    if (Thread.currentThread().isInterrupted()) {
                        throw new InterruptedIOException();
                    }
                    if (i3 == -1) {
                        throw new EOFException();
                    }
                    this.w += (long) i3;
                    if (this.p != null) {
                        this.p.a(i3);
                    }
                }
                h.set(andSet);
            }
            if (i2 == 0) {
                return 0;
            }
            if (this.v != -1) {
                long j = this.v - this.x;
                if (j == 0) {
                    return -1;
                }
                i2 = (int) Math.min(i2, j);
            }
            int i4 = this.s.read(bArr, i, i2);
            if (i4 == -1) {
                if (this.v == -1) {
                    return -1;
                }
                throw new EOFException();
            }
            this.x += (long) i4;
            if (this.p != null) {
                this.p.a(i4);
            }
            return i4;
        } catch (IOException e2) {
            throw new s.c(e2, this.q, 2);
        }
    }
}
