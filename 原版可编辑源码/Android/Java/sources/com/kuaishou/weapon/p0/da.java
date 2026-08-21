package com.kuaishou.weapon.p0;

import android.content.Context;
import java.util.Date;
import java.util.List;
import java.util.Random;

public class da {
    private static volatile da b;
    private Context a;

    private da(Context context) {
        this.a = context;
    }

    public static da a(Context context) {
        if (b == null) {
            synchronized (da.class) {
                if (b == null) {
                    b = new da(context);
                }
            }
        }
        return b;
    }

    public void a(final int i, final int i2) {
        n.a().a(new Runnable() {
            @Override
            public void run() {
                try {
                    h hVarA = h.a(da.this.a, "re_po_rt");
                    if (hVarA.b(df.P, 1) == 1) {
                        long jA = df.a(da.this.a).a(df.bd);
                        long jCurrentTimeMillis = System.currentTimeMillis();
                        long jB = ((long) hVarA.b(df.R, 1)) * 3600000;
                        long jB2 = ((long) hVarA.b(df.S, 5)) * 60000;
                        int iB = hVarA.b(df.T, 0);
                        if (jA > 0 && jCurrentTimeMillis - jA < ((long) WeaponHI.ii) * 3600000 && WeaponHI.isList != null) {
                            int hours = new Date(jCurrentTimeMillis).getHours();
                            List<Integer> list = WeaponHI.isList;
                            StringBuilder sb = new StringBuilder();
                            sb.append(hours);
                            if (list.contains(sb.toString())) {
                                de.a(da.this.a, bp.f, Integer.valueOf(cj.c).intValue(), (((long) (new Random().nextInt(60) + 1)) * 60000) + 3600000, "env://");
                                return;
                            }
                        }
                        long j = jCurrentTimeMillis - jA;
                        if (j < jB && ((i != 100 || iB != 1) && i != 106 && (i == 100 || i <= 0 || j < jB2))) {
                            de.a(da.this.a, bp.f, Integer.valueOf(cj.c).intValue(), jB - j, "env://");
                            return;
                        }
                        co.a(da.this.a, new ck(da.this.a, i, i2).a(cj.c), cj.c, true, true);
                        df.a(da.this.a).a(df.bd, jCurrentTimeMillis);
                        de.a(da.this.a, bp.f, Integer.valueOf(cj.c).intValue(), jB, "env://");
                    }
                } catch (Throwable unused) {
                }
            }
        });
    }
}
