package com.kuaishou.weapon.p0;

import android.content.Context;
import java.util.Date;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class cy {
    private static volatile cy b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2753a;

    private cy(Context context) {
        this.f2753a = context;
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
        n.a().a(new Runnable() { // from class: com.kuaishou.weapon.p0.cy.1
            @Override // java.lang.Runnable
            public void run() {
                try {
                    h hVarA = h.a(cy.this.f2753a, "re_po_rt");
                    if (hVarA.b(df.G, 1) == 1) {
                        long jA = df.a(cy.this.f2753a).a(df.bg);
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
                            co.a(cy.this.f2753a, new ci(cy.this.f2753a).a(cj.g), cj.g, true, true);
                            df.a(cy.this.f2753a).a(df.bg, jCurrentTimeMillis);
                        }
                    }
                } catch (Throwable unused) {
                }
            }
        });
    }
}
