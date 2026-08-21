package com.kuaishou.weapon.p0;

import android.content.Context;
import java.util.Date;
import java.util.List;

public class dc {
    private static volatile dc b;
    private Context a;

    private dc(Context context) {
        this.a = context;
    }

    public static dc a(Context context) {
        if (b == null) {
            synchronized (dc.class) {
                if (b == null) {
                    b = new dc(context);
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
                    h hVarA = h.a(dc.this.a, "re_po_rt");
                    if (hVarA.b(df.aw, 1) == 1) {
                        long jA = df.a(dc.this.a).a();
                        long jCurrentTimeMillis = System.currentTimeMillis();
                        long jB = ((long) hVarA.b(df.ay, 8)) * 3600000;
                        if (jA > 0 && jCurrentTimeMillis - jA < ((long) WeaponHI.ii) * 3600000 && WeaponHI.isList != null) {
                            int hours = new Date(jCurrentTimeMillis).getHours();
                            List<Integer> list = WeaponHI.isList;
                            StringBuilder sb = new StringBuilder();
                            sb.append(hours);
                            if (list.contains(sb.toString())) {
                                return;
                            }
                        }
                        if (jCurrentTimeMillis - jA >= jB || i == 106) {
                            co.a(dc.this.a, new cm(dc.this.a, i).a(cj.b), cj.b, true, true);
                            df.a(dc.this.a).a(jCurrentTimeMillis);
                        }
                    }
                } catch (Throwable unused) {
                }
            }
        });
    }
}
