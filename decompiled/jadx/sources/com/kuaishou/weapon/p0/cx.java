package com.kuaishou.weapon.p0;

import android.content.Context;
import java.util.Date;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class cx {
    private static volatile cx b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2751a;

    private cx(Context context) {
        this.f2751a = context;
    }

    public static cx a(Context context) {
        if (b == null) {
            synchronized (cx.class) {
                if (b == null) {
                    b = new cx(context);
                }
            }
        }
        return b;
    }

    public void a(final int i) {
        try {
            h hVarA = h.a(this.f2751a, "re_po_rt");
            final boolean zE = hVarA.e("a1_p_s_p_s");
            final boolean zE2 = hVarA.e("a1_p_s_p_s_c_b");
            if ((zE || zE2) && WeaponHI.as) {
                n.a().a(new Runnable() { // from class: com.kuaishou.weapon.p0.cx.1
                    @Override // java.lang.Runnable
                    public void run() {
                        long j;
                        try {
                            h hVarA2 = h.a(cx.this.f2751a, "re_po_rt");
                            if (hVarA2.b(df.o, 1) == 1) {
                                if (zE || zE2) {
                                    long jA = df.a(cx.this.f2751a).a(df.bc);
                                    long jCurrentTimeMillis = System.currentTimeMillis();
                                    long jB = ((long) hVarA2.b(df.p, 8)) * 3600000;
                                    int iB = hVarA2.b(df.q, 0);
                                    hVarA2.b(df.s, 20);
                                    if (jA > 0) {
                                        j = jA;
                                        if (jCurrentTimeMillis - jA < ((long) WeaponHI.ii) * 3600000 && WeaponHI.isList != null) {
                                            int hours = new Date(jCurrentTimeMillis).getHours();
                                            List<Integer> list = WeaponHI.isList;
                                            StringBuilder sb = new StringBuilder();
                                            sb.append(hours);
                                            if (list.contains(sb.toString())) {
                                                return;
                                            }
                                        }
                                    } else {
                                        j = jA;
                                    }
                                    if (jCurrentTimeMillis - j >= jB || ((i == 100 && iB == 1) || i == 106)) {
                                        co.a(cx.this.f2751a, new ch(cx.this.f2751a, i).a(cj.d), cj.d, true, true);
                                        df.a(cx.this.f2751a).a(df.bc, jCurrentTimeMillis);
                                    }
                                }
                            }
                        } catch (Throwable unused) {
                        }
                    }
                });
            }
        } catch (Throwable unused) {
        }
    }
}
