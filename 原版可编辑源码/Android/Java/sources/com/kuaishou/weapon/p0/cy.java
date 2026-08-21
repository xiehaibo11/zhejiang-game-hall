package com.kuaishou.weapon.p0;

import android.content.Context;
import java.util.Date;
import java.util.List;

public class cy {
    private static volatile cy b;
    private Context a;

    private cy(Context context) {
        this.a = context;
    }

    public static cy a(Context context) {
        if (b == null) {
            synchronized (cy.class) {
                if (b == null) {
                    b = new cy(context);
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
                    h hVarA = h.a(cy.this.a, "re_po_rt");
                    if (hVarA.b(df.G, 1) == 1) {
                        long jA = df.a(cy.this.a).a(df.bg);
                        long jCurrentTimeMillis = System.currentTimeMillis();
                        long jB = ((long) hVarA.b(df.I, 12)) * 3600000;
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
                            co.a(cy.this.a, new ci(cy.this.a).a(cj.g), cj.g, true, true);
                            df.a(cy.this.a).a(df.bg, jCurrentTimeMillis);
                        }
                    }
                } catch (Throwable unused) {
                }
            }
        });
    }
}
