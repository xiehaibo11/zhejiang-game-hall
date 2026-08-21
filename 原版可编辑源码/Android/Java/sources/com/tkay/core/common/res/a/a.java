package com.tkay.core.common.res.a;

import android.text.TextUtils;
import com.tkay.core.common.a.j;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.f;
import com.tkay.core.common.res.d;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public class a extends com.tkay.core.common.res.image.b {
    final String a;
    public com.tkay.core.common.res.a.b b;
    public List<a> j;
    public b k;
    int l;
    private final int m;
    private final int n;
    private int o;
    private int p;
    private long q;
    private String r;
    private boolean s;

    public static abstract class a {
        public abstract void a(String str, String str2);

        public abstract boolean a(int i, long j, long j2);
    }

    public static abstract class b {
        public abstract void a(long j, long j2, long j3, long j4, long j5);

        public abstract void a(String str, String str2, long j, long j2, long j3, long j4);
    }

    @Override
    protected final Map<String, String> a() {
        return null;
    }

    @Override
    protected final void b() {
    }

    public a(String str) {
        super(str);
        this.a = a.class.getSimpleName();
        this.m = 0;
        this.n = 1;
        this.l = -1;
        this.j = new ArrayList();
        this.b = new com.tkay.core.common.res.a.b();
        this.p = 0;
        this.q = 0L;
        this.s = false;
        this.o = 0;
    }

    public final synchronized void a(com.tkay.core.common.res.a.b bVar) {
        StringBuilder sb = new StringBuilder();
        sb.append(this.c);
        sb.append(" setVideoUrlLoaderConfig: mReadyRate:");
        sb.append(bVar.a);
        sb.append(",mVideoCtnType:");
        sb.append(bVar.c);
        if (this.b.a < bVar.a) {
            this.b.a = bVar.a;
        }
        if (this.b.c != 1) {
            this.b.c = bVar.c;
        }
    }

    public final synchronized void a(a aVar) {
        if (!this.j.contains(aVar)) {
            this.j.add(aVar);
        }
    }

    private void a(b bVar) {
        this.k = bVar;
    }

    private void a(int i) {
        this.o = i;
    }

    private int g() {
        return this.o;
    }

    public final void e() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.c);
        sb.append(" startRequest: canStartLoader():");
        sb.append(i());
        if (i()) {
            h();
            this.o = 1;
            d();
        }
    }

    public final void f() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.c);
        sb.append(" startRequest: resumeRequest():");
        sb.append(i());
        this.s = true;
        if (i()) {
            h();
            this.o = 1;
            d();
        }
    }

    private void h() {
        String strA = d.a(m.a().f()).a(4);
        if (TextUtils.isEmpty(strA)) {
            b("", "without saveDirectory");
            return;
        }
        File file = new File(strA);
        if (!file.exists()) {
            file.mkdirs();
        }
        this.r = d.a(m.a().f()).b(4, f.a(this.c));
        File file2 = new File(this.r);
        if (file2.exists()) {
            this.q = file2.length();
        }
    }

    private boolean i() {
        int i = this.p;
        if (i != 100) {
            return this.o == 0 && i < 100;
        }
        a(i, this.q);
        b(this.p, this.q);
        return false;
    }

    private synchronized boolean b(int i) {
        if (this.s) {
            return true;
        }
        if (this.b.c == 2) {
            if (i >= this.b.a) {
                return false;
            }
        }
        return true;
    }

    private synchronized void a(int i, long j) {
        if (this.l != i) {
            StringBuilder sb = new StringBuilder();
            sb.append(this.c);
            sb.append(" notifyDownloadProcess:");
            sb.append(i);
            this.l = i;
        }
        Iterator<a> it = this.j.iterator();
        boolean z = false;
        while (it.hasNext()) {
            if (it.next().a(i, j, this.i)) {
                z = i != 100;
                it.remove();
            }
        }
        j.a().a(this.c, this.r, this.i, j, i, z);
    }

    private void b(int i, long j) {
        StringBuilder sb = new StringBuilder();
        sb.append(this.c);
        sb.append(" notifyDownloadFinish: downloadRate:");
        sb.append(i);
        if (i == 100) {
            j.a().a(this.c, this.r, this.i, j, i, true);
            b bVar = this.k;
            if (bVar != null) {
                bVar.a(this.i, this.e, this.g, this.f, this.h);
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v2 */
    /* JADX WARN: Type inference failed for: r0v3 */
    /* JADX WARN: Type inference failed for: r0v4, types: [java.io.FileOutputStream] */
    /* JADX WARN: Type inference failed for: r0v5 */
    /* JADX WARN: Type inference failed for: r0v6, types: [java.io.FileOutputStream] */
    /* JADX WARN: Type inference failed for: r3v1, types: [int] */
    /* JADX WARN: Type inference failed for: r3v2 */
    /* JADX WARN: Type inference failed for: r3v5 */
    @Override
    protected final boolean a(InputStream inputStream) {
        FileOutputStream fileOutputStream;
        boolean z = true;
        if (TextUtils.isEmpty(this.r)) {
            z = false;
        } else {
            ?? r0 = 0;
            try {
                ?? r3 = (this.q > 0L ? 1 : (this.q == 0L ? 0 : -1));
                try {
                    if (r3 > 0) {
                        inputStream.skip(this.q);
                        fileOutputStream = new FileOutputStream(this.r, true);
                        int i = (int) (((this.q * 1.0d) / this.i) * 100.0d);
                        this.p = i;
                        a(i, this.q);
                    } else {
                        fileOutputStream = new FileOutputStream(this.r);
                        this.p = 0;
                    }
                    r0 = fileOutputStream;
                    r3 = 2048;
                    byte[] bArr = new byte[2048];
                    while (true) {
                        int i2 = inputStream.read(bArr);
                        if (i2 == -1 || !b(this.p)) {
                            break;
                        }
                        r0.write(bArr, 0, i2);
                        long j = this.q + ((long) i2);
                        this.q = j;
                        int i3 = (int) (((j * 1.0d) / this.i) * 100.0d);
                        this.p = i3;
                        a(i3, this.q);
                    }
                    r0.close();
                    try {
                        r0.close();
                    } catch (Throwable unused) {
                    }
                } catch (Throwable th) {
                    th = th;
                    r0 = r3;
                    try {
                        th.printStackTrace();
                        if (r0 != 0) {
                            try {
                                r0.close();
                            } catch (Throwable unused2) {
                            }
                        }
                        z = false;
                    } catch (Throwable th2) {
                        if (r0 != 0) {
                            try {
                                r0.close();
                            } catch (Throwable unused3) {
                            }
                        }
                        throw th2;
                    }
                }
            } catch (Throwable th3) {
                th = th3;
            }
        }
        b(this.p, this.q);
        return z;
    }

    @Override
    protected final void a(com.tkay.core.common.l.b.b bVar) {
        com.tkay.core.common.l.b.a.a().a(bVar, 5);
    }

    @Override
    protected final void a(String str, String str2) {
        b(str, str2);
    }

    private synchronized void b(String str, String str2) {
        StringBuilder sb = new StringBuilder();
        sb.append(this.c);
        sb.append(" notifyLoadFailed: errorCode:");
        sb.append(str);
        sb.append(",errorMsg:");
        sb.append(str2);
        this.o = 0;
        Iterator<a> it = this.j.iterator();
        while (it.hasNext()) {
            it.next().a(str, str2);
        }
        j();
        if (this.k != null) {
            this.k.a(str, str2, this.i, this.e, this.f, this.h);
        }
    }

    private synchronized void j() {
        this.j.clear();
    }

    @Override
    protected final void c() {
        this.o = 0;
    }
}
