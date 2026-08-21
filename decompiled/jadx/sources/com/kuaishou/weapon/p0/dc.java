package com.kuaishou.weapon.p0;

import android.content.Context;
import java.util.Date;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class dc {
    private static volatile dc b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2764a;

    private dc(Context context) {
        this.f2764a = context;
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
        n.a().a(new Runnable() { // from class: com.kuaishou.weapon.p0.dc.1
            @Override // java.lang.Runnable
            public void run() {
                try {
                    h hVarA = h.a(dc.this.f2764a, "re_po_rt");
                    if (hVarA.b(df.aw, 1) == 1) {
                        long jA = df.a(dc.this.f2764a).a();
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
                            co.a(dc.this.f2764a, new cm(dc.this.f2764a, i).a(cj.b), cj.b, true, true);
                            df.a(dc.this.f2764a).a(jCurrentTimeMillis);
                        }
                    }
                } catch (Throwable unused) {
                }
            }
        });
    }
}
