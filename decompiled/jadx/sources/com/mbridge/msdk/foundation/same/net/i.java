package com.mbridge.msdk.foundation.same.net;

import com.mbridge.msdk.foundation.tools.z;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.zip.GZIPInputStream;

/* JADX INFO: compiled from: Request.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class i<T> implements Comparable<i<T>> {
    private static final String c = i.class.getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected ConcurrentHashMap<String, String> f3459a;
    protected e<T> b;
    private final int d;
    private final String e;
    private Integer f;
    private j g;
    private boolean h;
    private l i;
    private int j;

    protected abstract k<T> a(com.mbridge.msdk.foundation.same.net.e.c cVar);

    public byte[] e() {
        return null;
    }

    @Override // java.lang.Comparable
    public /* synthetic */ int compareTo(Object obj) {
        i iVar = (i) obj;
        int iG = g();
        int iG2 = iVar.g();
        return iG == iG2 ? this.f.intValue() - iVar.f.intValue() : iG2 - iG;
    }

    public i(int i, String str, e<T> eVar) {
        this.f3459a = new ConcurrentHashMap<>();
        this.b = null;
        this.h = false;
        this.j = 2;
        this.e = str;
        this.d = i;
        this.b = eVar;
        this.i = new b();
    }

    public i(int i, String str) {
        this.f3459a = new ConcurrentHashMap<>();
        this.b = null;
        this.h = false;
        this.j = 2;
        this.e = str;
        this.d = i;
        this.i = new b();
    }

    public final int a() {
        return this.d;
    }

    public final void a(e<T> eVar) {
        this.b = eVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final i<?> a(l lVar) {
        this.i = lVar;
        return this;
    }

    public final void a(String str) {
        j jVar = this.g;
        if (jVar != null) {
            jVar.b(this);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final i<?> a(j jVar) {
        this.g = jVar;
        return this;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final i<?> a(int i) {
        this.f = Integer.valueOf(i);
        return this;
    }

    public final String b() {
        return this.e;
    }

    public final boolean c() {
        return this.h;
    }

    public final Map<String, String> d() {
        return this.f3459a;
    }

    public final void f() {
        a("Charset", "UTF-8");
        a("Connection", "close");
    }

    public byte[] a(com.mbridge.msdk.foundation.same.net.e.b bVar, c cVar) throws com.mbridge.msdk.foundation.same.net.a.a, IOException {
        return bVar.c() != null ? a(bVar) : new byte[0];
    }

    private byte[] a(com.mbridge.msdk.foundation.same.net.e.b bVar) throws Throwable {
        ByteArrayOutputStream byteArrayOutputStream;
        InputStream inputStream;
        InputStream inputStream2 = null;
        try {
            InputStream inputStreamC = bVar.c();
            try {
                if (com.mbridge.msdk.foundation.same.net.f.b.b(bVar.b()) && !(inputStreamC instanceof GZIPInputStream)) {
                    inputStreamC = new GZIPInputStream(inputStreamC);
                }
                if (inputStreamC == null) {
                    throw new com.mbridge.msdk.foundation.same.net.a.a(7, null);
                }
                ByteArrayOutputStream byteArrayOutputStream2 = new ByteArrayOutputStream();
                try {
                    byte[] bArr = new byte[1024];
                    while (true) {
                        int i = inputStreamC.read(bArr);
                        if (i == -1) {
                            break;
                        }
                        byteArrayOutputStream2.write(bArr, 0, i);
                    }
                    byte[] byteArray = byteArrayOutputStream2.toByteArray();
                    if (inputStreamC != null) {
                        try {
                            inputStreamC.close();
                        } catch (IOException e) {
                            z.d(c, e.getMessage());
                        }
                    }
                    byteArrayOutputStream2.close();
                    return byteArray;
                } catch (Throwable th) {
                    inputStream = inputStreamC;
                    byteArrayOutputStream = byteArrayOutputStream2;
                    th = th;
                    inputStream2 = inputStream;
                    if (inputStream2 != null) {
                        try {
                            inputStream2.close();
                        } catch (IOException e2) {
                            z.d(c, e2.getMessage());
                            throw th;
                        }
                    }
                    if (byteArrayOutputStream != null) {
                        byteArrayOutputStream.close();
                    }
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                inputStream = inputStreamC;
                byteArrayOutputStream = null;
            }
        } catch (Throwable th3) {
            th = th3;
            byteArrayOutputStream = null;
        }
    }

    public int g() {
        return this.j;
    }

    public final void b(int i) {
        if (i < 1 || i > 4) {
            return;
        }
        this.j = i;
    }

    public final int h() {
        try {
            return this.i.b();
        } catch (Exception unused) {
            return 10;
        }
    }

    public final int i() {
        try {
            return this.i.d();
        } catch (Exception unused) {
            return 10;
        }
    }

    public final int j() {
        try {
            return this.i.e();
        } catch (Exception unused) {
            return 10;
        }
    }

    public final int k() {
        try {
            return this.i.f();
        } catch (Exception unused) {
            return 10;
        }
    }

    public final int l() {
        try {
            return this.i.g();
        } catch (Exception unused) {
            return 0;
        }
    }

    public final l m() {
        return this.i;
    }

    public final void a(k<T> kVar) {
        e<T> eVar = this.b;
        if (eVar != null) {
            eVar.onSuccess(kVar);
        }
    }

    public final void a(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        e<T> eVar = this.b;
        if (eVar != null) {
            eVar.onError(aVar);
        }
    }

    public final void n() {
        e<T> eVar = this.b;
        if (eVar != null) {
            eVar.onCancel();
        }
    }

    public final void o() {
        e<T> eVar = this.b;
        if (eVar != null) {
            eVar.onPreExecute();
        }
    }

    public final void p() {
        e<T> eVar = this.b;
        if (eVar != null) {
            eVar.onFinish();
        }
    }

    public final void q() {
        e<T> eVar = this.b;
        if (eVar != null) {
            eVar.onRetry();
        }
    }

    public final void r() {
        e<T> eVar = this.b;
        if (eVar != null) {
            eVar.onNetworking();
        }
    }

    public final void a(long j, long j2) {
        e<T> eVar = this.b;
        if (eVar != null) {
            eVar.onProgressChange(j, j2);
        }
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.h ? "[X] " : "[ ] ");
        sb.append(this.e);
        sb.append(" ");
        sb.append(g());
        sb.append(" ");
        sb.append(this.f);
        return sb.toString();
    }

    public final void a(String str, String str2) {
        this.f3459a.remove(str);
        this.f3459a.put(str, str2);
    }
}
