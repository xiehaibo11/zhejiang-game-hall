package com.igexin.push.f;

import android.text.TextUtils;
import com.igexin.b.a.b.c;
import com.igexin.b.a.d.e;
import com.igexin.push.core.d;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class a extends e {
    private static a e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ArrayList<String> f2642a;
    private ArrayList<String> b;
    private long c;
    private String d;

    private a() {
        super(-2147483637);
        this.f2642a = new ArrayList<>();
        this.b = new ArrayList<>();
        this.c = System.currentTimeMillis();
    }

    public static a i() {
        if (e == null) {
            synchronized (a.class) {
                if (e == null) {
                    e = new a();
                    c.b().a(e, true, true);
                }
            }
        }
        return e;
    }

    public static void k() {
        a aVar = e;
        if (aVar != null) {
            aVar.j();
        }
    }

    private long u() {
        long jCurrentTimeMillis = System.currentTimeMillis() - this.c;
        if ((jCurrentTimeMillis >= 60000 && this.f2642a.size() > 0) || this.f2642a.size() >= 10) {
            return 0L;
        }
        if (this.f2642a.size() <= 0) {
            return Long.MAX_VALUE;
        }
        return 60000 - jCurrentTimeMillis;
    }

    /* JADX WARN: Removed duplicated region for block: B:58:0x00e0 A[EXC_TOP_SPLITTER, PHI: r2
      0x00e0: PHI (r2v4 java.io.OutputStream) = (r2v3 java.io.OutputStream), (r2v5 java.io.OutputStream) binds: [B:42:0x00eb, B:35:0x00de] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void v() {
        /*
            Method dump skipped, instruction units count: 254
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.f.a.v():void");
    }

    private void w() {
        if (TextUtils.isEmpty(this.d)) {
            this.d = com.igexin.push.util.c.c(d.g);
        }
    }

    public synchronized void a(String str) {
        this.f2642a.add(str);
        try {
            if (this.f2642a.size() <= 1 || this.f2642a.size() >= 10) {
                notify();
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.igexin.b.a.d.e
    public void b() {
        super.b();
        while (true) {
            try {
                synchronized (this) {
                    while (true) {
                        long jU = u();
                        if (jU == 0) {
                            break;
                        } else {
                            wait(jU);
                        }
                    }
                }
                v();
            } catch (Throwable unused) {
                v();
                return;
            }
        }
    }

    @Override // com.igexin.b.a.d.a.e
    public int b_() {
        return -2147483637;
    }

    @Override // com.igexin.b.a.d.e
    public void d() {
        super.d();
        this.n = true;
    }

    @Override // com.igexin.b.a.d.e
    protected void e() {
    }

    @Override // com.igexin.b.a.d.e
    protected void e_() {
        super.e_();
        e = null;
    }

    public void j() {
        if (s() != null) {
            s().interrupt();
        }
    }
}
