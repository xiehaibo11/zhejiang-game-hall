package com.kuaishou.weapon.p0;

import android.content.Context;

/* JADX INFO: loaded from: classes2.dex */
public class db {
    private static volatile db b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2762a;

    private db(Context context) {
        this.f2762a = context;
    }

    public static db a(Context context) {
        if (b == null) {
            synchronized (db.class) {
                if (b == null) {
                    b = new db(context);
                }
            }
        }
        return b;
    }

    public void a(final int i) {
        n.a().a(new Runnable() { // from class: com.kuaishou.weapon.p0.db.1
            @Override // java.lang.Runnable
            public void run() {
                try {
                    h hVarA = h.a(db.this.f2762a, "re_po_rt");
                    if (hVarA.b(df.aj, 1) == 1) {
                        long jA = df.a(db.this.f2762a).a(df.bf);
                        long jCurrentTimeMillis = System.currentTimeMillis();
                        int iB = hVarA.b(df.am, 0);
                        long j = jCurrentTimeMillis - jA;
                        if (j >= ((long) hVarA.b(df.al, 6)) * 3600000 || (i == 100 && iB == 1 && j >= 14400000)) {
                            cf.a(db.this.f2762a, new bv(db.this.f2762a, i, false).a(cj.e), cj.e, true);
                            df.a(db.this.f2762a).a(df.bf, jCurrentTimeMillis);
                        }
                    }
                } catch (Throwable unused) {
                }
            }
        });
    }
}
