package com.tkay.expressad.foundation.g.f;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.zip.GZIPInputStream;

public abstract class i<T> implements Comparable<i<T>> {
    private static final String c = i.class.getSimpleName();
    protected ConcurrentHashMap<String, String> a;
    protected e<T> b;
    private final int d;
    private final String e;
    private Integer f;
    private j g;
    private boolean h;
    private l i;
    private Object j;

    public interface a {
        public static final int a = 0;
        public static final int b = 1;
        public static final int c = 2;
        public static final int d = 3;
        public static final int e = 4;
        public static final int f = 5;
        public static final int g = 6;
        public static final int h = 7;
    }

    protected static com.tkay.expressad.foundation.g.f.a.a a(com.tkay.expressad.foundation.g.f.a.a aVar) {
        return aVar;
    }

    private static void q() {
    }

    private static void r() {
    }

    protected abstract k<T> a(com.tkay.expressad.foundation.g.f.f.c cVar);

    public void a(OutputStream outputStream) {
    }

    public byte[] h() {
        return null;
    }

    public int j() {
        return 2;
    }

    @Override
    public int compareTo(Object obj) {
        i iVar = (i) obj;
        int iJ = j();
        int iJ2 = iVar.j();
        return iJ == iJ2 ? this.f.intValue() - iVar.f.intValue() : iJ2 - iJ;
    }

    public i(int i, String str, e<T> eVar) {
        this.a = new ConcurrentHashMap<>();
        this.b = null;
        this.h = false;
        this.e = str;
        this.d = i;
        this.b = eVar;
        this.i = new com.tkay.expressad.foundation.g.f.b();
    }

    public i(String str) {
        this.a = new ConcurrentHashMap<>();
        this.b = null;
        this.h = false;
        this.e = str;
        this.d = 0;
        this.i = new com.tkay.expressad.foundation.g.f.b();
    }

    public final int a() {
        return this.d;
    }

    public final void a(e<T> eVar) {
        this.b = eVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    private i<?> a(Object obj) {
        this.j = obj;
        return this;
    }

    public final Object b() {
        return this.j;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final i<?> a(l lVar) {
        this.i = lVar;
        return this;
    }

    public final void c() {
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

    private int p() {
        Integer num = this.f;
        if (num == null) {
            throw new IllegalStateException("getSequence called before setSequence");
        }
        return num.intValue();
    }

    public final String d() {
        return this.e;
    }

    public final void e() {
        this.h = true;
    }

    public final boolean f() {
        return this.h;
    }

    public final Map<String, String> g() {
        return this.a;
    }

    public final void a(Map<String, String> map) {
        for (Map.Entry<String, String> entry : map.entrySet()) {
            a(entry.getKey(), entry.getValue());
        }
    }

    private void a(String str) {
        this.a.remove(str);
    }

    public void i() {
        a("Connection", "close");
        a("Charset", "UTF-8");
    }

    public byte[] a(com.tkay.expressad.foundation.g.f.f.b bVar, c cVar) {
        return bVar.c() != null ? a(bVar) : new byte[0];
    }

    private static byte[] a(com.tkay.expressad.foundation.g.f.f.b bVar) throws Throwable {
        ByteArrayOutputStream byteArrayOutputStream;
        InputStream inputStream;
        InputStream inputStream2 = null;
        try {
            InputStream inputStreamC = bVar.c();
            try {
                if (com.tkay.expressad.foundation.g.f.g.e.b(bVar.b()) && !(inputStreamC instanceof GZIPInputStream)) {
                    inputStreamC = new GZIPInputStream(inputStreamC);
                }
                if (inputStreamC == null) {
                    throw new com.tkay.expressad.foundation.g.f.a.a(7, null);
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
                            e.getMessage();
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
                            e2.getMessage();
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

    public class b {
        public static final int a = 1;
        public static final int b = 2;
        public static final int c = 3;
        public static final int d = 4;

        private b() {
        }
    }

    public final int k() {
        return this.i.b();
    }

    public final l l() {
        return this.i;
    }

    public final void a(k<T> kVar) {
        e<T> eVar = this.b;
        if (eVar != null) {
            eVar.a(kVar);
        }
    }

    public final void b(com.tkay.expressad.foundation.g.f.a.a aVar) {
        e<T> eVar = this.b;
        if (eVar != null) {
            eVar.a(aVar);
        }
    }

    public final void m() {
        e<T> eVar = this.b;
        if (eVar != null) {
            eVar.c();
        }
    }

    public final void n() {
        e<T> eVar = this.b;
        if (eVar != null) {
            eVar.b();
        }
    }

    public final void o() {
        e<T> eVar = this.b;
        if (eVar != null) {
            eVar.a();
        }
    }

    public final void a(long j, long j2) {
        e<T> eVar = this.b;
        if (eVar != null) {
            eVar.a(j, j2);
        }
    }

    private int a(i<T> iVar) {
        int iJ = j();
        int iJ2 = iVar.j();
        return iJ == iJ2 ? this.f.intValue() - iVar.f.intValue() : iJ2 - iJ;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.h ? "[X] " : "[ ] ");
        sb.append(this.e);
        sb.append(" ");
        sb.append(j());
        sb.append(" ");
        sb.append(this.f);
        return sb.toString();
    }

    public final void a(String str, String str2) {
        this.a.remove(str);
        this.a.put(str, str2);
    }
}
