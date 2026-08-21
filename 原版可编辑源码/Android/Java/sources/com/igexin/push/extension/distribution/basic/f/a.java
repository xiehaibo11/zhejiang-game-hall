package com.igexin.push.extension.distribution.basic.f;

import android.os.Process;
import android.util.Base64;
import com.igexin.b.a.b.f;
import com.igexin.push.extension.distribution.basic.g.h;
import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.io.InputStream;
import java.lang.reflect.Method;
import java.net.HttpURLConnection;
import java.net.ProtocolException;
import java.net.URL;

public class a extends com.igexin.b.a.d.e {
    public d a;
    public HttpURLConnection b;
    public boolean c;
    private boolean d;

    public a(d dVar) {
        super(0);
        this.a = dVar;
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
    */
    private b a(String str, byte[] bArr) throws Throwable {
        DataOutputStream dataOutputStream;
        byte[] bArrA;
        com.igexin.b.a.c.b.a("AsyncHttpTask|call httpPost start ###", new Object[0]);
        DataOutputStream dataOutputStream2 = 0;
        try {
            try {
            } catch (Throwable th) {
                th = th;
                dataOutputStream2 = bArr;
                if (dataOutputStream2 != 0) {
                    try {
                        dataOutputStream2.close();
                    } catch (Exception unused) {
                    }
                }
                i();
                throw th;
            }
        } catch (Exception e) {
            e = e;
            dataOutputStream = null;
        } catch (Throwable th2) {
            th = th2;
            if (dataOutputStream2 != 0) {
            }
            i();
            throw th;
        }
        if (b(bArr)) {
            b bVar = new b(this, false, null);
            i();
            return bVar;
        }
        this.b = b(str, bArr);
        com.igexin.b.a.c.b.a("AsyncHttpTask|httpPost() src body len = " + bArr.length, new Object[0]);
        byte[] bArrA2 = a(bArr, this.b);
        if (bArrA2 == null) {
            com.igexin.b.a.c.b.a("AsyncHttpTask|httpPost() getEncHttpData body = null", new Object[0]);
            b bVar2 = new b(this, true, null);
            i();
            return bVar2;
        }
        com.igexin.b.a.c.b.a("AsyncHttpTask|httpPost() getEncHttpData len = " + bArrA2.length, new Object[0]);
        this.b.connect();
        dataOutputStream = new DataOutputStream(this.b.getOutputStream());
        try {
            dataOutputStream.write(bArrA2, 0, bArrA2.length);
            dataOutputStream.flush();
            com.igexin.b.a.c.b.a("AsyncHttpTask|httpPost() write and flush", new Object[0]);
            bArrA = a(this.b);
        } catch (Exception e2) {
            e = e2;
            com.igexin.b.a.c.b.a("AsyncHttpTask httpPost|error|" + e.getMessage(), new Object[0]);
            if (dataOutputStream != null) {
            }
            i();
            return new b(this, false, null);
        }
        if (bArrA == null) {
            com.igexin.b.a.c.b.a("AsyncHttpTask|httpPost() server resp is null", new Object[0]);
            try {
                dataOutputStream.close();
            } catch (Exception unused2) {
            }
            i();
            return new b(this, false, null);
        }
        com.igexin.b.a.c.b.a("AsyncHttpTask|httpPost() server resp len =" + bArrA.length, new Object[0]);
        b bVarB = b(this.b, bArrA);
        try {
            dataOutputStream.close();
        } catch (Exception unused3) {
        }
        i();
        return bVarB;
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
        this.a.a(bArr);
        com.igexin.b.a.b.c.b().a(this.a);
        com.igexin.b.a.b.c.b().c();
    }

    /* JADX WARN: Removed duplicated region for block: B:47:0x004d A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:57:0x0052 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:68:? A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private byte[] a(HttpURLConnection httpURLConnection) throws Throwable {
        ByteArrayOutputStream byteArrayOutputStream;
        InputStream inputStream;
        InputStream inputStream2 = null;
        try {
            inputStream = httpURLConnection.getInputStream();
            try {
                byteArrayOutputStream = new ByteArrayOutputStream();
            } catch (Exception e) {
                e = e;
                byteArrayOutputStream = null;
            } catch (Throwable th) {
                th = th;
                byteArrayOutputStream = null;
            }
        } catch (Exception e2) {
            e = e2;
            byteArrayOutputStream = null;
        } catch (Throwable th2) {
            th = th2;
            byteArrayOutputStream = null;
        }
        try {
            if (httpURLConnection.getResponseCode() != 200) {
                if (inputStream != null) {
                    try {
                        inputStream.close();
                    } catch (Exception unused) {
                    }
                }
                try {
                    byteArrayOutputStream.close();
                } catch (Exception unused2) {
                }
                return null;
            }
            byte[] bArr = new byte[1024];
            while (true) {
                int i = inputStream.read(bArr);
                if (i == -1) {
                    break;
                }
                byteArrayOutputStream.write(bArr, 0, i);
            }
            byte[] byteArray = byteArrayOutputStream.toByteArray();
            if (inputStream != null) {
                try {
                    inputStream.close();
                } catch (Exception unused3) {
                }
            }
            try {
                byteArrayOutputStream.close();
            } catch (Exception unused4) {
            }
            return byteArray;
        } catch (Exception e3) {
            e = e3;
            inputStream2 = inputStream;
            try {
                throw e;
            } catch (Throwable th3) {
                th = th3;
                if (inputStream2 != null) {
                    try {
                        inputStream2.close();
                    } catch (Exception unused5) {
                    }
                }
                if (byteArrayOutputStream != null) {
                    throw th;
                }
                try {
                    byteArrayOutputStream.close();
                    throw th;
                } catch (Exception unused6) {
                    throw th;
                }
            }
        } catch (Throwable th4) {
            th = th4;
            inputStream2 = inputStream;
            if (inputStream2 != null) {
            }
            if (byteArrayOutputStream != null) {
            }
        }
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
                if (this.a.e()) {
                    bArr = Base64.decode(bArr, 0);
                }
                if (this.a.d()) {
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
        return this.a.e && com.igexin.push.extension.distribution.basic.g.b.a();
    }

    @Override
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
            if (this.a == null || (strB = this.a.b()) == null) {
                return;
            }
            boolean zJ = j();
            this.c = zJ;
            if (zJ && !((Boolean) a("isLoadSuccess", new Class[0]).invoke(null, new Object[0])).booleanValue()) {
                com.igexin.b.a.c.b.a(this.l + "|so load failed! AsyncHttpTask return!", new Object[0]);
                return;
            }
            if (this.c && this.a.c() != null && this.a.c().length > 0) {
                this.a.b(f.a(this.a.c()));
            }
            try {
                b bVarA = this.a.c() == null ? a(strB) : a(strB, this.a.c());
                if (bVarA.a) {
                    Exception exc = new Exception("http server resp decode header error");
                    this.a.a(exc);
                    throw exc;
                }
                if (bVarA.b != null) {
                    a(bVarA.b);
                } else {
                    Exception exc2 = new Exception("Http response exception");
                    this.a.a(exc2);
                    throw exc2;
                }
            } catch (Exception e) {
                com.igexin.b.a.c.b.a("AsyncHttpTask|run() post or get error = " + e.getMessage(), new Object[0]);
                this.a.a(e);
                throw e;
            }
        } catch (Exception e2) {
            com.igexin.b.a.c.b.a("AsyncHttpTask|run() error = " + e2.getMessage(), new Object[0]);
            throw e2;
        }
    }

    @Override
    public final int b_() {
        return -2147483639;
    }

    @Override
    public void d() {
        this.n = true;
        com.igexin.b.a.c.b.a("AsyncHttpTask initTask()|isBloker = " + this.n + "|isCycle = " + this.o, new Object[0]);
    }

    @Override
    protected void e() {
    }

    @Override
    public void f() {
        com.igexin.b.a.c.b.a("AsyncHttpTask|dispose()|closeHttpURLConnection", new Object[0]);
        super.f();
        i();
    }
}
