package com.kuaishou.weapon.p0;

import android.content.Context;

/* JADX INFO: loaded from: classes2.dex */
public class dd {
    private static volatile dd b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2766a;

    private dd(Context context) {
        this.f2766a = context;
    }

    public static dd a(Context context) {
        if (b == null) {
            synchronized (dd.class) {
                if (b == null) {
                    b = new dd(context);
                }
            }
        }
        return b;
    }

    public void a(final int i) {
        n.a().a(new Runnable() { // from class: com.kuaishou.weapon.p0.dd.1
            @Override // java.lang.Runnable
            public void run() {
                try {
                    h hVarA = h.a(dd.this.f2766a, "re_po_rt");
                    if (hVarA.b(df.B, 0) == 1) {
                        long jA = df.a(dd.this.f2766a).a(df.bh);
                        long jCurrentTimeMillis = System.currentTimeMillis();
                        if (jCurrentTimeMillis - jA >= ((long) hVarA.b(df.E, 2)) * 3600000 || i == 106) {
                            try {
                                String strA = new cn(dd.this.f2766a).a(cj.h);
                                int iIntValue = Integer.valueOf(cj.h).intValue();
                                if (strA != null && strA.length() > 10) {
                                    new bb(dd.this.f2766a, strA, iIntValue).a("1000");
                                }
                            } catch (Throwable unused) {
                            }
                            df.a(dd.this.f2766a).a(df.bh, jCurrentTimeMillis);
                        }
                    }
                } catch (Throwable unused2) {
                }
            }
        });
    }
}
