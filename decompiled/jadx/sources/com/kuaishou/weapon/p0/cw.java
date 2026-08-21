package com.kuaishou.weapon.p0;

import android.content.Context;
import java.util.Date;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class cw {
    private static volatile cw b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2749a;

    private cw(Context context) {
        this.f2749a = context;
    }

    public static cw a(Context context) {
        if (b == null) {
            synchronized (cw.class) {
                if (b == null) {
                    b = new cw(context);
                }
            }
        }
        return b;
    }

    public void a(final int i) {
        n.a().a(new Runnable() { // from class: com.kuaishou.weapon.p0.cw.1
            @Override // java.lang.Runnable
            public void run() {
                try {
                    h hVarA = h.a(cw.this.f2749a, "re_po_rt");
                    if (hVarA.b(df.y, 0) == 1) {
                        long jA = df.a(cw.this.f2749a).a(df.bb);
                        long jCurrentTimeMillis = System.currentTimeMillis();
                        long jB = ((long) hVarA.b(df.z, 8)) * 3600000;
                        int iB = hVarA.b(df.q, 0);
                        if (jA > 0 && jCurrentTimeMillis - jA < ((long) WeaponHI.ii) * 3600000 && WeaponHI.isList != null) {
                            int hours = new Date(jCurrentTimeMillis).getHours();
                            List<Integer> list = WeaponHI.isList;
                            StringBuilder sb = new StringBuilder();
                            sb.append(hours);
                            if (list.contains(sb.toString())) {
                                return;
                            }
                        }
                        if (jCurrentTimeMillis - jA >= jB || i == 106 || (i == 100 && iB == 1)) {
                            co.a(cw.this.f2749a, new cg(cw.this.f2749a, i).a(cj.i), cj.i, false, true);
                            df.a(cw.this.f2749a).a(df.bb, jCurrentTimeMillis);
                        }
                    }
                } catch (Throwable unused) {
                }
            }
        });
    }
}
