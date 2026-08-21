package com.tkay.expressad.exoplayer.j;

public final class p implements com.tkay.expressad.exoplayer.j.s {
    public static final int a = 8000;
    public static final int b = 8000;
    private static final java.lang.String d = "DefaultHttpDataSource";
    private static final int e = 20;
    private static final long f = 2048;
    private static final java.util.regex.Pattern g = null;
    private static final java.util.concurrent.atomic.AtomicReference<byte[]> h = null;
    private final boolean i;
    private final int j;
    private final int k;
    private final java.lang.String l;
    private final com.tkay.expressad.exoplayer.k.u<java.lang.String> m;
    private final com.tkay.expressad.exoplayer.j.s.f n;
    private final com.tkay.expressad.exoplayer.j.s.f o;
    private final com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.p> p;
    private com.tkay.expressad.exoplayer.j.k q;
    private java.net.HttpURLConnection r;
    private java.io.InputStream s;
    private boolean t;
    private long u;
    private long v;
    private long w;
    private long x;

    static {
            java.lang.String r0 = "^bytes (\\d+)-(\\d+)/(\\d+)$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.tkay.expressad.exoplayer.j.p.g = r0
            java.util.concurrent.atomic.AtomicReference r0 = new java.util.concurrent.atomic.AtomicReference
            r0.<init>()
            com.tkay.expressad.exoplayer.j.p.h = r0
            return
    }

    private p(java.lang.String r2, com.tkay.expressad.exoplayer.k.u<java.lang.String> r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    private p(java.lang.String r2, com.tkay.expressad.exoplayer.k.u<java.lang.String> r3, com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.p> r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    private p(java.lang.String r9, com.tkay.expressad.exoplayer.k.u<java.lang.String> r10, com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.p> r11, byte r12) {
            r8 = this;
            r4 = 8000(0x1f40, float:1.121E-41)
            r5 = 8000(0x1f40, float:1.121E-41)
            r6 = 0
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public p(java.lang.String r2, com.tkay.expressad.exoplayer.k.u<java.lang.String> r3, com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.p> r4, int r5, int r6, boolean r7, com.tkay.expressad.exoplayer.j.s.f r8) {
            r1 = this;
            r1.<init>()
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1f
            r1.l = r2
            r1.m = r3
            r1.p = r4
            com.tkay.expressad.exoplayer.j.s$f r2 = new com.tkay.expressad.exoplayer.j.s$f
            r2.<init>()
            r1.o = r2
            r1.j = r5
            r1.k = r6
            r1.i = r7
            r1.n = r8
            return
        L1f:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>()
            throw r2
    }

    private static long a(java.net.HttpURLConnection r10) {
            java.lang.String r0 = "Content-Length"
            java.lang.String r0 = r10.getHeaderField(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "]"
            java.lang.String r3 = "DefaultHttpDataSource"
            if (r1 != 0) goto L29
            long r4 = java.lang.Long.parseLong(r0)     // Catch: java.lang.NumberFormatException -> L15
            goto L2b
        L15:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r4 = "Unexpected Content-Length ["
            r1.<init>(r4)
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.e(r3, r1)
        L29:
            r4 = -1
        L2b:
            java.lang.String r1 = "Content-Range"
            java.lang.String r10 = r10.getHeaderField(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r10)
            if (r1 != 0) goto L9b
            java.util.regex.Pattern r1 = com.tkay.expressad.exoplayer.j.p.g
            java.util.regex.Matcher r1 = r1.matcher(r10)
            boolean r6 = r1.find()
            if (r6 == 0) goto L9b
            r6 = 2
            java.lang.String r6 = r1.group(r6)     // Catch: java.lang.NumberFormatException -> L87
            long r6 = java.lang.Long.parseLong(r6)     // Catch: java.lang.NumberFormatException -> L87
            r8 = 1
            java.lang.String r1 = r1.group(r8)     // Catch: java.lang.NumberFormatException -> L87
            long r8 = java.lang.Long.parseLong(r1)     // Catch: java.lang.NumberFormatException -> L87
            long r6 = r6 - r8
            r8 = 1
            long r6 = r6 + r8
            r8 = 0
            int r1 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r1 >= 0) goto L61
            r4 = r6
            goto L9b
        L61:
            int r1 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r1 == 0) goto L9b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.NumberFormatException -> L87
            java.lang.String r8 = "Inconsistent headers ["
            r1.<init>(r8)     // Catch: java.lang.NumberFormatException -> L87
            r1.append(r0)     // Catch: java.lang.NumberFormatException -> L87
            java.lang.String r0 = "] ["
            r1.append(r0)     // Catch: java.lang.NumberFormatException -> L87
            r1.append(r10)     // Catch: java.lang.NumberFormatException -> L87
            r1.append(r2)     // Catch: java.lang.NumberFormatException -> L87
            java.lang.String r0 = r1.toString()     // Catch: java.lang.NumberFormatException -> L87
            android.util.Log.w(r3, r0)     // Catch: java.lang.NumberFormatException -> L87
            long r0 = java.lang.Math.max(r4, r6)     // Catch: java.lang.NumberFormatException -> L87
            r4 = r0
            goto L9b
        L87:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Unexpected Content-Range ["
            r0.<init>(r1)
            r0.append(r10)
            r0.append(r2)
            java.lang.String r10 = r0.toString()
            android.util.Log.e(r3, r10)
        L9b:
            return r4
    }

    private java.net.HttpURLConnection a(java.net.URL r5, byte[] r6, long r7, long r9, boolean r11, boolean r12) {
            r4 = this;
            java.net.URLConnection r5 = r5.openConnection()
            java.net.HttpURLConnection r5 = (java.net.HttpURLConnection) r5
            int r0 = r4.j
            r5.setConnectTimeout(r0)
            int r0 = r4.k
            r5.setReadTimeout(r0)
            com.tkay.expressad.exoplayer.j.s$f r0 = r4.n
            if (r0 == 0) goto L3c
            java.util.Map r0 = r0.b()
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L20:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3c
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r5.setRequestProperty(r2, r1)
            goto L20
        L3c:
            com.tkay.expressad.exoplayer.j.s$f r0 = r4.o
            java.util.Map r0 = r0.b()
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L4a:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L66
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r5.setRequestProperty(r2, r1)
            goto L4a
        L66:
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            r1 = -1
            if (r0 != 0) goto L72
            int r0 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
            if (r0 == 0) goto La1
        L72:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = "bytes="
            r0.<init>(r3)
            r0.append(r7)
            java.lang.String r3 = "-"
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            int r1 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
            if (r1 == 0) goto L9c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            long r7 = r7 + r9
            r9 = 1
            long r7 = r7 - r9
            r1.append(r7)
            java.lang.String r0 = r1.toString()
        L9c:
            java.lang.String r7 = "Range"
            r5.setRequestProperty(r7, r0)
        La1:
            java.lang.String r7 = r4.l
            java.lang.String r8 = "User-Agent"
            r5.setRequestProperty(r8, r7)
            if (r11 != 0) goto Lb1
            java.lang.String r7 = "Accept-Encoding"
            java.lang.String r8 = "identity"
            r5.setRequestProperty(r7, r8)
        Lb1:
            r5.setInstanceFollowRedirects(r12)
            if (r6 == 0) goto Lb8
            r7 = 1
            goto Lb9
        Lb8:
            r7 = 0
        Lb9:
            r5.setDoOutput(r7)
            if (r6 == 0) goto Ld8
            java.lang.String r7 = "POST"
            r5.setRequestMethod(r7)
            int r7 = r6.length
            if (r7 == 0) goto Ld8
            int r7 = r6.length
            r5.setFixedLengthStreamingMode(r7)
            r5.connect()
            java.io.OutputStream r7 = r5.getOutputStream()
            r7.write(r6)
            r7.close()
            goto Ldb
        Ld8:
            r5.connect()
        Ldb:
            return r5
    }

    private static java.net.URL a(java.net.URL r1, java.lang.String r2) {
            if (r2 == 0) goto L2d
            java.net.URL r0 = new java.net.URL
            r0.<init>(r1, r2)
            java.lang.String r1 = r0.getProtocol()
            java.lang.String r2 = "https"
            boolean r2 = r2.equals(r1)
            if (r2 != 0) goto L2c
            java.lang.String r2 = "http"
            boolean r2 = r2.equals(r1)
            if (r2 == 0) goto L1c
            goto L2c
        L1c:
            java.net.ProtocolException r2 = new java.net.ProtocolException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r0 = "Unsupported protocol redirect: "
            java.lang.String r1 = r0.concat(r1)
            r2.<init>(r1)
            throw r2
        L2c:
            return r0
        L2d:
            java.net.ProtocolException r1 = new java.net.ProtocolException
            java.lang.String r2 = "Null location redirect"
            r1.<init>(r2)
            throw r1
    }

    private static void a(java.net.HttpURLConnection r2, long r3) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 19
            if (r0 == r1) goto Ld
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 20
            if (r0 == r1) goto Ld
            return
        Ld:
            java.io.InputStream r2 = r2.getInputStream()     // Catch: java.lang.Exception -> L58
            r0 = -1
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 != 0) goto L1f
            int r3 = r2.read()     // Catch: java.lang.Exception -> L58
            r4 = -1
            if (r3 != r4) goto L26
            return
        L1f:
            r0 = 2048(0x800, double:1.012E-320)
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 > 0) goto L26
            return
        L26:
            java.lang.Class r3 = r2.getClass()     // Catch: java.lang.Exception -> L58
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Exception -> L58
            java.lang.String r4 = "com.android.okhttp.internal.http.HttpTransport$ChunkedInputStream"
            boolean r4 = r4.equals(r3)     // Catch: java.lang.Exception -> L58
            if (r4 != 0) goto L3e
            java.lang.String r4 = "com.android.okhttp.internal.http.HttpTransport$FixedLengthInputStream"
            boolean r3 = r4.equals(r3)     // Catch: java.lang.Exception -> L58
            if (r3 == 0) goto L58
        L3e:
            java.lang.Class r3 = r2.getClass()     // Catch: java.lang.Exception -> L58
            java.lang.Class r3 = r3.getSuperclass()     // Catch: java.lang.Exception -> L58
            java.lang.String r4 = "unexpectedEndOfInput"
            r0 = 0
            java.lang.Class[] r1 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L58
            java.lang.reflect.Method r3 = r3.getDeclaredMethod(r4, r1)     // Catch: java.lang.Exception -> L58
            r4 = 1
            r3.setAccessible(r4)     // Catch: java.lang.Exception -> L58
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L58
            r3.invoke(r2, r4)     // Catch: java.lang.Exception -> L58
        L58:
            return
    }

    private int b(byte[] r9, int r10, int r11) {
            r8 = this;
            if (r11 != 0) goto L4
            r9 = 0
            return r9
        L4:
            long r0 = r8.v
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r5 = -1
            if (r4 == 0) goto L1d
            long r6 = r8.x
            long r0 = r0 - r6
            r6 = 0
            int r4 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r4 != 0) goto L17
            return r5
        L17:
            long r6 = (long) r11
            long r0 = java.lang.Math.min(r6, r0)
            int r11 = (int) r0
        L1d:
            java.io.InputStream r0 = r8.s
            int r9 = r0.read(r9, r10, r11)
            if (r9 != r5) goto L32
            long r9 = r8.v
            int r9 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r9 != 0) goto L2c
            return r5
        L2c:
            java.io.EOFException r9 = new java.io.EOFException
            r9.<init>()
            throw r9
        L32:
            long r10 = r8.x
            long r0 = (long) r9
            long r10 = r10 + r0
            r8.x = r10
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.p> r10 = r8.p
            if (r10 == 0) goto L3f
            r10.a(r9)
        L3f:
            return r9
    }

    private java.net.HttpURLConnection b(com.tkay.expressad.exoplayer.j.k r19) {
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
    }

    private java.net.HttpURLConnection e() {
            r1 = this;
            java.net.HttpURLConnection r0 = r1.r
            return r0
    }

    private long f() {
            r2 = this;
            long r0 = r2.w
            return r0
    }

    private long g() {
            r2 = this;
            long r0 = r2.x
            return r0
    }

    private long h() {
            r4 = this;
            long r0 = r4.v
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L9
            return r0
        L9:
            long r2 = r4.x
            long r0 = r0 - r2
            return r0
    }

    private void i() {
            r6 = this;
            long r0 = r6.w
            long r2 = r6.u
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L9
            return
        L9:
            java.util.concurrent.atomic.AtomicReference<byte[]> r0 = com.tkay.expressad.exoplayer.j.p.h
            r1 = 0
            java.lang.Object r0 = r0.getAndSet(r1)
            byte[] r0 = (byte[]) r0
            if (r0 != 0) goto L18
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]
        L18:
            long r1 = r6.w
            long r3 = r6.u
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto L56
            long r3 = r3 - r1
            int r1 = r0.length
            long r1 = (long) r1
            long r1 = java.lang.Math.min(r3, r1)
            int r1 = (int) r1
            java.io.InputStream r2 = r6.s
            r3 = 0
            int r1 = r2.read(r0, r3, r1)
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            boolean r2 = r2.isInterrupted()
            if (r2 != 0) goto L50
            r2 = -1
            if (r1 == r2) goto L4a
            long r2 = r6.w
            long r4 = (long) r1
            long r2 = r2 + r4
            r6.w = r2
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.p> r2 = r6.p
            if (r2 == 0) goto L18
            r2.a(r1)
            goto L18
        L4a:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
        L50:
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            r0.<init>()
            throw r0
        L56:
            java.util.concurrent.atomic.AtomicReference<byte[]> r1 = com.tkay.expressad.exoplayer.j.p.h
            r1.set(r0)
            return
    }

    private void j() {
            r3 = this;
            java.net.HttpURLConnection r0 = r3.r
            if (r0 == 0) goto L13
            r0.disconnect()     // Catch: java.lang.Exception -> L8
            goto L10
        L8:
            r0 = move-exception
            java.lang.String r1 = "DefaultHttpDataSource"
            java.lang.String r2 = "Unexpected error while disconnecting"
            android.util.Log.e(r1, r2, r0)
        L10:
            r0 = 0
            r3.r = r0
        L13:
            return
    }

    @Override
    public final int a(byte[] r9, int r10, int r11) {
            r8 = this;
            long r0 = r8.w     // Catch: java.io.IOException -> La2
            long r2 = r8.u     // Catch: java.io.IOException -> La2
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 0
            r2 = -1
            if (r0 == 0) goto L60
            java.util.concurrent.atomic.AtomicReference<byte[]> r0 = com.tkay.expressad.exoplayer.j.p.h     // Catch: java.io.IOException -> La2
            r3 = 0
            java.lang.Object r0 = r0.getAndSet(r3)     // Catch: java.io.IOException -> La2
            byte[] r0 = (byte[]) r0     // Catch: java.io.IOException -> La2
            if (r0 != 0) goto L19
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]     // Catch: java.io.IOException -> La2
        L19:
            long r3 = r8.w     // Catch: java.io.IOException -> La2
            long r5 = r8.u     // Catch: java.io.IOException -> La2
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 == 0) goto L5b
            long r3 = r8.u     // Catch: java.io.IOException -> La2
            long r5 = r8.w     // Catch: java.io.IOException -> La2
            long r3 = r3 - r5
            int r5 = r0.length     // Catch: java.io.IOException -> La2
            long r5 = (long) r5     // Catch: java.io.IOException -> La2
            long r3 = java.lang.Math.min(r3, r5)     // Catch: java.io.IOException -> La2
            int r3 = (int) r3     // Catch: java.io.IOException -> La2
            java.io.InputStream r4 = r8.s     // Catch: java.io.IOException -> La2
            int r3 = r4.read(r0, r1, r3)     // Catch: java.io.IOException -> La2
            java.lang.Thread r4 = java.lang.Thread.currentThread()     // Catch: java.io.IOException -> La2
            boolean r4 = r4.isInterrupted()     // Catch: java.io.IOException -> La2
            if (r4 != 0) goto L55
            if (r3 == r2) goto L4f
            long r4 = r8.w     // Catch: java.io.IOException -> La2
            long r6 = (long) r3     // Catch: java.io.IOException -> La2
            long r4 = r4 + r6
            r8.w = r4     // Catch: java.io.IOException -> La2
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.p> r4 = r8.p     // Catch: java.io.IOException -> La2
            if (r4 == 0) goto L19
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.p> r4 = r8.p     // Catch: java.io.IOException -> La2
            r4.a(r3)     // Catch: java.io.IOException -> La2
            goto L19
        L4f:
            java.io.EOFException r9 = new java.io.EOFException     // Catch: java.io.IOException -> La2
            r9.<init>()     // Catch: java.io.IOException -> La2
            throw r9     // Catch: java.io.IOException -> La2
        L55:
            java.io.InterruptedIOException r9 = new java.io.InterruptedIOException     // Catch: java.io.IOException -> La2
            r9.<init>()     // Catch: java.io.IOException -> La2
            throw r9     // Catch: java.io.IOException -> La2
        L5b:
            java.util.concurrent.atomic.AtomicReference<byte[]> r3 = com.tkay.expressad.exoplayer.j.p.h     // Catch: java.io.IOException -> La2
            r3.set(r0)     // Catch: java.io.IOException -> La2
        L60:
            if (r11 != 0) goto L63
            return r1
        L63:
            long r0 = r8.v     // Catch: java.io.IOException -> La2
            r3 = -1
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 == 0) goto L7d
            long r0 = r8.v     // Catch: java.io.IOException -> La2
            long r5 = r8.x     // Catch: java.io.IOException -> La2
            long r0 = r0 - r5
            r5 = 0
            int r5 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r5 != 0) goto L77
            return r2
        L77:
            long r5 = (long) r11     // Catch: java.io.IOException -> La2
            long r0 = java.lang.Math.min(r5, r0)     // Catch: java.io.IOException -> La2
            int r11 = (int) r0     // Catch: java.io.IOException -> La2
        L7d:
            java.io.InputStream r0 = r8.s     // Catch: java.io.IOException -> La2
            int r9 = r0.read(r9, r10, r11)     // Catch: java.io.IOException -> La2
            if (r9 != r2) goto L92
            long r9 = r8.v     // Catch: java.io.IOException -> La2
            int r9 = (r9 > r3 ? 1 : (r9 == r3 ? 0 : -1))
            if (r9 != 0) goto L8c
            return r2
        L8c:
            java.io.EOFException r9 = new java.io.EOFException     // Catch: java.io.IOException -> La2
            r9.<init>()     // Catch: java.io.IOException -> La2
            throw r9     // Catch: java.io.IOException -> La2
        L92:
            long r10 = r8.x     // Catch: java.io.IOException -> La2
            long r0 = (long) r9     // Catch: java.io.IOException -> La2
            long r10 = r10 + r0
            r8.x = r10     // Catch: java.io.IOException -> La2
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.p> r10 = r8.p     // Catch: java.io.IOException -> La2
            if (r10 == 0) goto La1
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.p> r10 = r8.p     // Catch: java.io.IOException -> La2
            r10.a(r9)     // Catch: java.io.IOException -> La2
        La1:
            return r9
        La2:
            r9 = move-exception
            com.tkay.expressad.exoplayer.j.s$c r10 = new com.tkay.expressad.exoplayer.j.s$c
            com.tkay.expressad.exoplayer.j.k r11 = r8.q
            r0 = 2
            r10.<init>(r9, r11, r0)
            throw r10
    }

    @Override
    public final long a(com.tkay.expressad.exoplayer.j.k r25) {
            r24 = this;
            r10 = r24
            r11 = r25
            java.lang.String r12 = "Unable to connect to "
            r10.q = r11
            r13 = 0
            r10.x = r13
            r10.w = r13
            java.net.URL r2 = new java.net.URL     // Catch: java.io.IOException -> L181
            android.net.Uri r0 = r11.c     // Catch: java.io.IOException -> L181
            java.lang.String r0 = r0.toString()     // Catch: java.io.IOException -> L181
            r2.<init>(r0)     // Catch: java.io.IOException -> L181
            byte[] r3 = r11.d     // Catch: java.io.IOException -> L181
            long r8 = r11.f     // Catch: java.io.IOException -> L181
            long r6 = r11.g     // Catch: java.io.IOException -> L181
            r15 = 1
            boolean r0 = r11.a(r15)     // Catch: java.io.IOException -> L181
            boolean r1 = r10.i     // Catch: java.io.IOException -> L181
            if (r1 != 0) goto L35
            r16 = 1
            r1 = r24
            r4 = r8
            r8 = r0
            r9 = r16
            java.net.HttpURLConnection r0 = r1.a(r2, r3, r4, r6, r8, r9)     // Catch: java.io.IOException -> L181
            goto L75
        L35:
            r1 = 0
            r4 = r2
            r16 = r3
        L39:
            int r17 = r1 + 1
            r2 = 20
            if (r1 > r2) goto L171
            r18 = 0
            r1 = r24
            r2 = r4
            r3 = r16
            r19 = r4
            r4 = r8
            r20 = r6
            r22 = r8
            r8 = r0
            r9 = r18
            java.net.HttpURLConnection r1 = r1.a(r2, r3, r4, r6, r8, r9)     // Catch: java.io.IOException -> L181
            int r2 = r1.getResponseCode()     // Catch: java.io.IOException -> L181
            r3 = 300(0x12c, float:4.2E-43)
            if (r2 == r3) goto L128
            r3 = 301(0x12d, float:4.22E-43)
            if (r2 == r3) goto L128
            r3 = 302(0x12e, float:4.23E-43)
            if (r2 == r3) goto L128
            r3 = 303(0x12f, float:4.25E-43)
            if (r2 == r3) goto L128
            if (r16 != 0) goto L74
            r3 = 307(0x133, float:4.3E-43)
            if (r2 == r3) goto L128
            r3 = 308(0x134, float:4.32E-43)
            if (r2 != r3) goto L74
            goto L128
        L74:
            r0 = r1
        L75:
            r10.r = r0     // Catch: java.io.IOException -> L181
            int r0 = r0.getResponseCode()     // Catch: java.io.IOException -> L10b
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 < r1) goto Lf0
            r2 = 299(0x12b, float:4.19E-43)
            if (r0 <= r2) goto L84
            goto Lf0
        L84:
            java.net.HttpURLConnection r2 = r10.r
            java.lang.String r2 = r2.getContentType()
            com.tkay.expressad.exoplayer.k.u<java.lang.String> r3 = r10.m
            if (r3 == 0) goto L9e
            boolean r3 = r3.a(r2)
            if (r3 == 0) goto L95
            goto L9e
        L95:
            r24.j()
            com.tkay.expressad.exoplayer.j.s$d r0 = new com.tkay.expressad.exoplayer.j.s$d
            r0.<init>(r2, r11)
            throw r0
        L9e:
            if (r0 != r1) goto La8
            long r0 = r11.f
            int r0 = (r0 > r13 ? 1 : (r0 == r13 ? 0 : -1))
            if (r0 == 0) goto La8
            long r13 = r11.f
        La8:
            r10.u = r13
            boolean r0 = r11.a(r15)
            if (r0 != 0) goto Lce
            long r0 = r11.g
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lbd
            long r0 = r11.g
            r10.v = r0
            goto Ld2
        Lbd:
            java.net.HttpURLConnection r0 = r10.r
            long r0 = a(r0)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto Lcb
            long r2 = r10.u
            long r2 = r0 - r2
        Lcb:
            r10.v = r2
            goto Ld2
        Lce:
            long r0 = r11.g
            r10.v = r0
        Ld2:
            java.net.HttpURLConnection r0 = r10.r     // Catch: java.io.IOException -> Le6
            java.io.InputStream r0 = r0.getInputStream()     // Catch: java.io.IOException -> Le6
            r10.s = r0     // Catch: java.io.IOException -> Le6
            r10.t = r15
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.p> r0 = r10.p
            if (r0 == 0) goto Le3
            r0.b()
        Le3:
            long r0 = r10.v
            return r0
        Le6:
            r0 = move-exception
            r24.j()
            com.tkay.expressad.exoplayer.j.s$c r1 = new com.tkay.expressad.exoplayer.j.s$c
            r1.<init>(r0, r11, r15)
            throw r1
        Lf0:
            java.net.HttpURLConnection r1 = r10.r
            java.util.Map r1 = r1.getHeaderFields()
            r24.j()
            com.tkay.expressad.exoplayer.j.s$e r2 = new com.tkay.expressad.exoplayer.j.s$e
            r2.<init>(r0, r1, r11)
            r1 = 416(0x1a0, float:5.83E-43)
            if (r0 != r1) goto L10a
            com.tkay.expressad.exoplayer.j.i r0 = new com.tkay.expressad.exoplayer.j.i
            r0.<init>()
            r2.initCause(r0)
        L10a:
            throw r2
        L10b:
            r0 = move-exception
            r1 = r0
            r24.j()
            com.tkay.expressad.exoplayer.j.s$c r0 = new com.tkay.expressad.exoplayer.j.s$c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r12)
            android.net.Uri r3 = r11.c
            java.lang.String r3 = r3.toString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.<init>(r2, r1, r11)
            throw r0
        L128:
            r16 = 0
            java.lang.String r2 = "Location"
            java.lang.String r2 = r1.getHeaderField(r2)     // Catch: java.io.IOException -> L181
            r1.disconnect()     // Catch: java.io.IOException -> L181
            if (r2 == 0) goto L169
            java.net.URL r4 = new java.net.URL     // Catch: java.io.IOException -> L181
            r1 = r19
            r4.<init>(r1, r2)     // Catch: java.io.IOException -> L181
            java.lang.String r1 = r4.getProtocol()     // Catch: java.io.IOException -> L181
            java.lang.String r2 = "https"
            boolean r2 = r2.equals(r1)     // Catch: java.io.IOException -> L181
            if (r2 != 0) goto L161
            java.lang.String r2 = "http"
            boolean r2 = r2.equals(r1)     // Catch: java.io.IOException -> L181
            if (r2 == 0) goto L151
            goto L161
        L151:
            java.net.ProtocolException r0 = new java.net.ProtocolException     // Catch: java.io.IOException -> L181
            java.lang.String r2 = "Unsupported protocol redirect: "
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.io.IOException -> L181
            java.lang.String r1 = r2.concat(r1)     // Catch: java.io.IOException -> L181
            r0.<init>(r1)     // Catch: java.io.IOException -> L181
            throw r0     // Catch: java.io.IOException -> L181
        L161:
            r1 = r17
            r6 = r20
            r8 = r22
            goto L39
        L169:
            java.net.ProtocolException r0 = new java.net.ProtocolException     // Catch: java.io.IOException -> L181
            java.lang.String r1 = "Null location redirect"
            r0.<init>(r1)     // Catch: java.io.IOException -> L181
            throw r0     // Catch: java.io.IOException -> L181
        L171:
            java.net.NoRouteToHostException r0 = new java.net.NoRouteToHostException     // Catch: java.io.IOException -> L181
            java.lang.String r1 = "Too many redirects: "
            java.lang.String r2 = java.lang.String.valueOf(r17)     // Catch: java.io.IOException -> L181
            java.lang.String r1 = r1.concat(r2)     // Catch: java.io.IOException -> L181
            r0.<init>(r1)     // Catch: java.io.IOException -> L181
            throw r0     // Catch: java.io.IOException -> L181
        L181:
            r0 = move-exception
            com.tkay.expressad.exoplayer.j.s$c r1 = new com.tkay.expressad.exoplayer.j.s$c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r12)
            android.net.Uri r3 = r11.c
            java.lang.String r3 = r3.toString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0, r11)
            throw r1
    }

    @Override
    public final android.net.Uri a() {
            r1 = this;
            java.net.HttpURLConnection r0 = r1.r
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.net.URL r0 = r0.getURL()
            java.lang.String r0 = r0.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            return r0
    }

    @Override
    public final void a(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.k.a.a(r2)
            com.tkay.expressad.exoplayer.j.s$f r0 = r1.o
            r0.a(r2)
            return
    }

    @Override
    public final void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.k.a.a(r2)
            com.tkay.expressad.exoplayer.k.a.a(r3)
            com.tkay.expressad.exoplayer.j.s$f r0 = r1.o
            r0.a(r2, r3)
            return
    }

    @Override
    public final void b() {
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
            int r7 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Throwable -> L8e
            r8 = 19
            if (r7 == r8) goto L24
            int r7 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Throwable -> L8e
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
    }

    @Override
    public final java.util.Map<java.lang.String, java.util.List<java.lang.String>> c() {
            r1 = this;
            java.net.HttpURLConnection r0 = r1.r
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.util.Map r0 = r0.getHeaderFields()
            return r0
    }

    @Override
    public final void d() {
            r1 = this;
            com.tkay.expressad.exoplayer.j.s$f r0 = r1.o
            r0.a()
            return
    }
}
