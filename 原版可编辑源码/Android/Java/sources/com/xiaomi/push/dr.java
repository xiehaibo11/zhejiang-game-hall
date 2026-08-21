package com.xiaomi.push;

import android.app.Application;
import android.content.Context;
import android.content.SharedPreferences;
import com.xiaomi.push.al;

public class dr {
    private static volatile dr a;
    private Context a;
    private a a;

    public interface a {
        void a();
    }

    private dr(Context context) {
        this.a = context;
    }

    public static int a(int i) {
        return Math.max(60, i);
    }

    public static dr a(Context context) {
        if (a == null) {
            synchronized (dr.class) {
                if (a == null) {
                    a = new dr(context);
                }
            }
        }
        return a;
    }

    private void a(com.xiaomi.push.service.ba baVar, al alVar, boolean z) {
        if (baVar.a(ho.a.a(), true)) {
            dv dvVar = new dv(this.a);
            if (z) {
                alVar.a((al.a) dvVar, a(baVar.a(ho.b.a(), 86400)));
            } else {
                alVar.a((al.a) dvVar);
            }
        }
    }

    private boolean a() {
        try {
            ((Application) (this.a instanceof Application ? this.a : this.a.getApplicationContext())).registerActivityLifecycleCallbacks(new dl(this.a, String.valueOf(System.currentTimeMillis() / 1000)));
            return true;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            return false;
        }
    }

    private void b() {
        a aVar;
        al alVarA = al.a(this.a);
        com.xiaomi.push.service.ba baVarA = com.xiaomi.push.service.ba.a(this.a);
        SharedPreferences sharedPreferences = this.a.getSharedPreferences("mipush_extra", 0);
        long jCurrentTimeMillis = System.currentTimeMillis();
        long j = sharedPreferences.getLong("first_try_ts", jCurrentTimeMillis);
        if (j == jCurrentTimeMillis) {
            sharedPreferences.edit().putLong("first_try_ts", jCurrentTimeMillis).commit();
        }
        if (Math.abs(jCurrentTimeMillis - j) < 172800000) {
            return;
        }
        a(baVarA, alVarA, false);
        if (baVarA.a(ho.aI.a(), true)) {
            int iA = a(baVarA.a(ho.aJ.a(), 86400));
            alVarA.a(new du(this.a, iA), iA, 0);
        }
        if (m.a(this.a) && (aVar = this.a) != null) {
            aVar.a();
        }
        if (baVarA.a(ho.ap.a(), false)) {
            a();
        }
        a(baVarA, alVarA, true);
    }

    public void a() {
        al.a(this.a).a(new ds(this));
    }
}
