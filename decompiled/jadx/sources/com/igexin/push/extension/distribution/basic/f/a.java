package com.igexin.push.extension.distribution.basic.f;

import android.os.Process;
import android.util.Base64;
import com.igexin.b.a.b.f;
import com.igexin.push.extension.distribution.basic.g.h;
import java.lang.reflect.Method;
import java.net.HttpURLConnection;
import java.net.ProtocolException;
import java.net.URL;

/* JADX INFO: loaded from: classes2.dex */
public class a extends com.igexin.b.a.d.e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public d f2634a;
    public HttpURLConnection b;
    public boolean c;
    private boolean d;

    public a(d dVar) {
        super(0);
        this.f2634a = dVar;
        com.igexin.b.a.c.b.a("AsyncHttpTask|httpPlugin = " + dVar, new Object[0]);
    }

    private b a(String str) {
        try {
            HttpURLConnection httpURLConnectionB = b(str);
            this.b = httpURLConnectionB;
            byte[] bArrA = a(httpURLConnectionB);
            if (bArrA != null) {
                b bVarB = b(this.b, bArrA);
                i();
                return bVarB;
            }
        } catch (Exception unused) {
        } catch (Throwable th) {
            i();
            throw th;
        }
        i();
        return new b(this, false, null);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00e9 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private com.igexin.push.extension.distribution.basic.f.b a(java.lang.String r5, byte[] r6) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 240
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.extension.distribution.basic.f.a.a(java.lang.String, byte[]):com.igexin.push.extension.distribution.basic.f.b");
    }

    private Method a(String str, Class<?>... clsArr) {
        try {
            return Class.forName("com.igexin.push.util.EncryptUtils").getMethod(str, clsArr);
        } catch (Exception unused) {
            com.igexin.b.a.c.b.a(this.l + "invokeMethod error", new Object[0]);
            return null;
        }
    }

    private void a(HttpURLConnection httpURLConnection, byte[] bArr) {
        if (httpURLConnection == null) {
            return;
        }
        byte[] bArr2 = new byte[0];
        if (bArr == null) {
            bArr = bArr2;
        }
        httpURLConnection.addRequestProperty("GT_C_T", String.valueOf(1));
        httpURLConnection.addRequestProperty("GT_C_K", new String((byte[]) a("getRSAKeyId", new Class[0]).invoke(null, new Object[0])));
        httpURLConnection.addRequestProperty("GT_C_V", (String) a("getHttpGTCV", new Class[0]).invoke(null, new Object[0]));
        String strValueOf = String.valueOf(System.currentTimeMillis());
        String str = (String) a("getHttpSignature", String.class, byte[].class).invoke(null, strValueOf, bArr);
        httpURLConnection.addRequestProperty("GT_T", strValueOf);
        httpURLConnection.addRequestProperty("GT_C_S", str);
    }

    private void a(byte[] bArr) {
        this.f2634a.a(bArr);
        com.igexin.b.a.b.c.b().a(this.f2634a);
        com.igexin.b.a.b.c.b().c();
    }

    /* JADX WARN: Removed duplicated region for block: B:47:0x004d A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:57:0x0052 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:68:? A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private byte[] a(java.net.HttpURLConnection r5) throws java.lang.Throwable {
        /*
            r4 = this;
            r0 = 0
            java.io.InputStream r1 = r5.getInputStream()     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L47
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L40
            r2.<init>()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L40
            int r5 = r5.getResponseCode()     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3a
            r3 = 200(0xc8, float:2.8E-43)
            if (r5 != r3) goto L2f
            r5 = 1024(0x400, float:1.435E-42)
            byte[] r5 = new byte[r5]     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3a
        L16:
            int r0 = r1.read(r5)     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3a
            r3 = -1
            if (r0 == r3) goto L22
            r3 = 0
            r2.write(r5, r3, r0)     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3a
            goto L16
        L22:
            byte[] r5 = r2.toByteArray()     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3a
            if (r1 == 0) goto L2b
            r1.close()     // Catch: java.lang.Exception -> L2b
        L2b:
            r2.close()     // Catch: java.lang.Exception -> L2e
        L2e:
            return r5
        L2f:
            if (r1 == 0) goto L34
            r1.close()     // Catch: java.lang.Exception -> L34
        L34:
            r2.close()     // Catch: java.lang.Exception -> L37
        L37:
            return r0
        L38:
            r5 = move-exception
            goto L3e
        L3a:
            r5 = move-exception
            goto L42
        L3c:
            r5 = move-exception
            r2 = r0
        L3e:
            r0 = r1
            goto L4b
        L40:
            r5 = move-exception
            r2 = r0
        L42:
            r0 = r1
            goto L49
        L44:
            r5 = move-exception
            r2 = r0
            goto L4b
        L47:
            r5 = move-exception
            r2 = r0
        L49:
            throw r5     // Catch: java.lang.Throwable -> L4a
        L4a:
            r5 = move-exception
        L4b:
            if (r0 == 0) goto L50
            r0.close()     // Catch: java.lang.Exception -> L50
        L50:
            if (r2 == 0) goto L55
            r2.close()     // Catch: java.lang.Exception -> L55
        L55:
            throw r5
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.extension.distribution.basic.f.a.a(java.net.HttpURLConnection):byte[]");
    }

    private byte[] a(byte[] bArr, HttpURLConnection httpURLConnection) {
        try {
            com.igexin.b.a.c.b.a("AsyncHttpTask|getEncHttpData|isUseAES = |" + this.c, new Object[0]);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("AsyncHttpTask|getEncHttpData|error|" + th.getMessage(), new Object[0]);
        }
        if (!this.c) {
            return h.a(bArr);
        }
        String requestProperty = httpURLConnection.getRequestProperty("GT_C_S");
        if (requestProperty != null) {
            return (byte[]) a("aesEncHttp", byte[].class, byte[].class).invoke(null, bArr, a("md5", byte[].class).invoke(null, requestProperty.getBytes()));
        }
        return null;
    }

    private b b(HttpURLConnection httpURLConnection, byte[] bArr) {
        com.igexin.b.a.c.b.a("AsyncHttpTask|authAndDecResp start ~~~", new Object[0]);
        try {
            if (!this.c) {
                if (this.f2634a.e()) {
                    bArr = Base64.decode(bArr, 0);
                }
                if (this.f2634a.d()) {
                    bArr = h.b(bArr);
                }
                return new b(this, false, bArr);
            }
            String headerField = httpURLConnection.getHeaderField("GT_ERR");
            com.igexin.b.a.c.b.a(this.l + "|GT_ERR = " + headerField, new Object[0]);
            if (headerField != null && headerField.equals("0")) {
                String headerField2 = httpURLConnection.getHeaderField("GT_T");
                if (headerField2 == null) {
                    com.igexin.b.a.c.b.a(this.l + "|GT_T = null", new Object[0]);
                    return new b(this, true, null);
                }
                String headerField3 = httpURLConnection.getHeaderField("GT_C_S");
                if (headerField3 == null) {
                    com.igexin.b.a.c.b.a(this.l + "|GT_C_S = null", new Object[0]);
                    return new b(this, true, null);
                }
                byte[] bArr2 = (byte[]) a("aesDecHttp", byte[].class, byte[].class).invoke(null, bArr, a("md5", byte[].class).invoke(null, headerField2.getBytes()));
                String str = (String) a("getHttpSignature", String.class, byte[].class).invoke(null, headerField2, bArr2);
                if (str != null && str.equals(headerField3)) {
                    return new b(this, false, bArr2);
                }
                com.igexin.b.a.c.b.a(this.l + "|signature = null or error", new Object[0]);
                return new b(this, true, null);
            }
            return new b(this, true, null);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("AsyncHttpTask|authAndDecResp|error|" + th.getMessage(), new Object[0]);
            return new b(this, true, null);
        }
    }

    private HttpURLConnection b(String str) throws ProtocolException {
        HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
        this.b = httpURLConnection;
        httpURLConnection.setConnectTimeout(20000);
        this.b.setReadTimeout(20000);
        this.b.setRequestMethod("GET");
        this.b.setDoInput(true);
        if (this.c) {
            a(this.b, (byte[]) null);
        }
        return this.b;
    }

    private HttpURLConnection b(String str, byte[] bArr) throws ProtocolException {
        HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
        this.b = httpURLConnection;
        httpURLConnection.setDoInput(true);
        this.b.setDoOutput(true);
        this.b.setRequestMethod("POST");
        this.b.setUseCaches(false);
        this.b.setInstanceFollowRedirects(true);
        this.b.setRequestProperty("Content-Type", "application/octet-stream");
        this.b.setConnectTimeout(20000);
        this.b.setReadTimeout(20000);
        if (this.c) {
            a(this.b, bArr);
        }
        return this.b;
    }

    private boolean b(byte[] bArr) {
        if (bArr == null || bArr.length / 1024 <= com.igexin.push.extension.distribution.basic.c.e.j) {
            return false;
        }
        com.igexin.b.a.c.b.a(this.l + "|http body size exceed " + com.igexin.push.extension.distribution.basic.c.e.j, new Object[0]);
        return true;
    }

    private void i() {
        com.igexin.b.a.c.b.a("AsyncHttpTask call closeHttpURLConnection", new Object[0]);
        HttpURLConnection httpURLConnection = this.b;
        if (httpURLConnection != null) {
            try {
                httpURLConnection.disconnect();
                this.b = null;
            } catch (Exception unused) {
            }
        }
    }

    private boolean j() {
        return this.f2634a.e && com.igexin.push.extension.distribution.basic.g.b.a();
    }

    @Override // com.igexin.b.a.d.e
    public final void b() throws Exception {
        String strB;
        super.b();
        try {
            if (this.d) {
                p();
                return;
            }
            this.d = true;
            Process.setThreadPriority(10);
            if (this.f2634a == null || (strB = this.f2634a.b()) == null) {
                return;
            }
            boolean zJ = j();
            this.c = zJ;
            if (zJ && !((Boolean) a("isLoadSuccess", new Class[0]).invoke(null, new Object[0])).booleanValue()) {
                com.igexin.b.a.c.b.a(this.l + "|so load failed! AsyncHttpTask return!", new Object[0]);
                return;
            }
            if (this.c && this.f2634a.c() != null && this.f2634a.c().length > 0) {
                this.f2634a.b(f.a(this.f2634a.c()));
            }
            try {
                b bVarA = this.f2634a.c() == null ? a(strB) : a(strB, this.f2634a.c());
                if (bVarA.f2635a) {
                    Exception exc = new Exception("http server resp decode header error");
                    this.f2634a.a(exc);
                    throw exc;
                }
                if (bVarA.b != null) {
                    a(bVarA.b);
                } else {
                    Exception exc2 = new Exception("Http response exception");
                    this.f2634a.a(exc2);
                    throw exc2;
                }
            } catch (Exception e) {
                com.igexin.b.a.c.b.a("AsyncHttpTask|run() post or get error = " + e.getMessage(), new Object[0]);
                this.f2634a.a(e);
                throw e;
            }
        } catch (Exception e2) {
            com.igexin.b.a.c.b.a("AsyncHttpTask|run() error = " + e2.getMessage(), new Object[0]);
            throw e2;
        }
    }

    @Override // com.igexin.b.a.d.a.e
    public final int b_() {
        return -2147483639;
    }

    @Override // com.igexin.b.a.d.e
    public void d() {
        this.n = true;
        com.igexin.b.a.c.b.a("AsyncHttpTask initTask()|isBloker = " + this.n + "|isCycle = " + this.o, new Object[0]);
    }

    @Override // com.igexin.b.a.d.e
    protected void e() {
    }

    @Override // com.igexin.b.a.d.e
    public void f() {
        com.igexin.b.a.c.b.a("AsyncHttpTask|dispose()|closeHttpURLConnection", new Object[0]);
        super.f();
        i();
    }
}
