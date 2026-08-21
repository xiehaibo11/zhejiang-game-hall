package com.kuaishou.weapon.p0;

import android.content.Context;

public class db {
    private static volatile db b;
    private Context a;

    private db(Context context) {
        this.a = context;
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
        n.a().a(new Runnable() {
            @Override
            public void run() {
                try {
                    h hVarA = h.a(db.this.a, "re_po_rt");
                    if (hVarA.b(df.aj, 1) == 1) {
                        long jA = df.a(db.this.a).a(df.bf);
                        long jCurrentTimeMillis = System.currentTimeMillis();
                        int iB = hVarA.b(df.am, 0);
                        long j = jCurrentTimeMillis - jA;
                        if (j >= ((long) hVarA.b(df.al, 6)) * 3600000 || (i == 100 && iB == 1 && j >= 14400000)) {
                            cf.a(db.this.a, new bv(db.this.a, i, false).a(cj.e), cj.e, true);
                            df.a(db.this.a).a(df.bf, jCurrentTimeMillis);
                        }
                    }
                } catch (Throwable unused) {
                }
            }
        });
    }
}
