package com.igexin.push.f.a;

import android.os.Process;
import com.igexin.b.a.b.f;
import com.igexin.push.config.j;
import com.igexin.push.util.EncryptUtils;
import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.ProtocolException;
import java.net.URL;

public class c extends com.igexin.b.a.d.e {
    public b a;
    private HttpURLConnection b;

    public c(b bVar) {
        super(0);
        this.a = bVar;
    }

    private d a(String str) {
        try {
            HttpURLConnection httpURLConnectionB = b(str);
            this.b = httpURLConnectionB;
            byte[] bArrA = a(httpURLConnectionB);
            if (bArrA != null) {
                d dVarB = b(this.b, bArrA);
                i();
                return dVarB;
            }
        } catch (Throwable unused) {
        }
        i();
        return new d(this, false, null);
    }

    private d a(String str, byte[] bArr) {
        DataOutputStream dataOutputStream;
        byte[] bArrA;
        try {
            HttpURLConnection httpURLConnectionB = b(str, bArr);
            this.b = httpURLConnectionB;
            bArrA = a(bArr, httpURLConnectionB);
        } catch (Throwable unused) {
            dataOutputStream = null;
        }
        if (bArrA == null) {
            d dVar = new d(this, true, null);
            i();
            return dVar;
        }
        this.b.connect();
        dataOutputStream = new DataOutputStream(this.b.getOutputStream());
        try {
            dataOutputStream.write(bArrA, 0, bArrA.length);
            dataOutputStream.flush();
            byte[] bArrA2 = a(this.b);
            if (bArrA2 != null) {
                d dVarB = b(this.b, bArrA2);
                try {
                    dataOutputStream.close();
                } catch (Exception unused2) {
                }
                i();
                return dVarB;
            }
        } catch (Throwable unused3) {
            if (dataOutputStream != null) {
            }
            i();
            return new d(this, false, null);
        }
        try {
            dataOutputStream.close();
        } catch (Exception unused4) {
        }
        i();
        return new d(this, false, null);
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
        httpURLConnection.addRequestProperty("GT_C_K", new String(EncryptUtils.getRSAKeyId()));
        httpURLConnection.addRequestProperty("GT_C_V", EncryptUtils.getHttpGTCV());
        String strValueOf = String.valueOf(System.currentTimeMillis());
        String httpSignature = EncryptUtils.getHttpSignature(strValueOf, bArr);
        httpURLConnection.addRequestProperty("GT_T", strValueOf);
        httpURLConnection.addRequestProperty("GT_C_S", httpSignature);
    }

    private void a(byte[] bArr) {
        this.a.a(bArr);
        com.igexin.b.a.b.c.b().a(this.a);
        com.igexin.b.a.b.c.b().c();
    }

    private byte[] a(HttpURLConnection httpURLConnection) throws Exception {
        InputStream inputStream;
        InputStream inputStream2 = null;
        try {
            try {
                inputStream = httpURLConnection.getInputStream();
            } catch (Exception e) {
                throw e;
            }
        } catch (Throwable th) {
            th = th;
        }
        try {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            if (httpURLConnection.getResponseCode() != 200) {
                if (inputStream != null) {
                    try {
                        inputStream.close();
                    } catch (Exception unused) {
                    }
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
                } catch (Exception unused2) {
                }
            }
            return byteArray;
        } catch (Exception e2) {
            throw e2;
        } catch (Throwable th2) {
            th = th2;
            inputStream2 = inputStream;
            if (inputStream2 != null) {
                try {
                    inputStream2.close();
                } catch (Exception unused3) {
                }
            }
            throw th;
        }
    }

    private byte[] a(byte[] bArr, HttpURLConnection httpURLConnection) {
        String requestProperty;
        try {
            if (!httpURLConnection.getRequestProperties().containsKey("GT_C_S") || (requestProperty = httpURLConnection.getRequestProperty("GT_C_S")) == null) {
                return null;
            }
            return EncryptUtils.aesEncHttp(bArr, EncryptUtils.md5(requestProperty.getBytes()));
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("_HttpTask|" + th.toString(), new Object[0]);
            return null;
        }
    }

    private d b(HttpURLConnection httpURLConnection, byte[] bArr) {
        try {
            String headerField = httpURLConnection.getHeaderField("GT_ERR");
            com.igexin.b.a.c.b.a("_HttpTask|GT_ERR = " + headerField, new Object[0]);
            if (headerField != null && headerField.equals("0")) {
                String headerField2 = httpURLConnection.getHeaderField("GT_T");
                if (headerField2 == null) {
                    com.igexin.b.a.c.b.a("_HttpTask|GT_T = null", new Object[0]);
                    return new d(this, true, null);
                }
                String headerField3 = httpURLConnection.getHeaderField("GT_C_S");
                if (headerField3 == null) {
                    com.igexin.b.a.c.b.a("_HttpTask|GT_C_S = null", new Object[0]);
                    return new d(this, true, null);
                }
                byte[] bArrAesDecHttp = EncryptUtils.aesDecHttp(bArr, EncryptUtils.md5(headerField2.getBytes()));
                String httpSignature = EncryptUtils.getHttpSignature(headerField2, bArrAesDecHttp);
                if (httpSignature != null && httpSignature.equals(headerField3)) {
                    return new d(this, false, bArrAesDecHttp);
                }
                com.igexin.b.a.c.b.a("_HttpTask|signature = null or error", new Object[0]);
                return new d(this, true, null);
            }
            return new d(this, true, null);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("_HttpTask|" + th.toString(), new Object[0]);
            return new d(this, true, null);
        }
    }

    private HttpURLConnection b(String str) throws ProtocolException {
        HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
        this.b = httpURLConnection;
        httpURLConnection.setConnectTimeout(20000);
        this.b.setReadTimeout(20000);
        this.b.setRequestMethod("GET");
        this.b.setDoInput(true);
        a(this.b, (byte[]) null);
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
        a(this.b, bArr);
        return this.b;
    }

    private void i() {
        HttpURLConnection httpURLConnection = this.b;
        if (httpURLConnection != null) {
            try {
                httpURLConnection.disconnect();
                this.b = null;
            } catch (Exception unused) {
            }
        }
    }

    @Override
    public final void b() throws Exception {
        super.b();
        Process.setThreadPriority(10);
        b bVar = this.a;
        if (bVar == null || bVar.b == null || (this.a.c != null && this.a.c.length > j.o * 1024)) {
            p();
            com.igexin.b.a.c.b.a("_HttpTask|run return ###", new Object[0]);
            return;
        }
        if (this.a.c != null && this.a.c.length > 0) {
            b bVar2 = this.a;
            bVar2.c = f.c(bVar2.c);
        }
        for (int i = 0; i < 3; i++) {
            d dVarA = this.a.c == null ? a(this.a.b) : a(this.a.b, this.a.c);
            if (dVarA.a) {
                throw new Exception("http server resp decode header error");
            }
            if (dVarA.b != null) {
                a(dVarA.b);
                return;
            } else {
                if (i == 2) {
                    this.a.a(new Exception("try up to limit"));
                    throw new Exception("http request exception, try times = " + (i + 1));
                }
            }
        }
    }

    @Override
    public final int b_() {
        return -2147483638;
    }

    @Override
    public void d() {
        this.n = true;
    }

    @Override
    protected void e() {
    }

    @Override
    public void f() {
        super.f();
        i();
    }
}
