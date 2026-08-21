package com.xiaomi.push;

import android.app.Application;
import android.content.Context;
import android.content.SharedPreferences;
import com.xiaomi.push.al;

/* JADX INFO: loaded from: classes4.dex */
public class dr {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile dr f8112a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f244a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private a f245a;

    public interface a {
        void a();
    }

    private dr(Context context) {
        this.f244a = context;
    }

    public static int a(int i) {
        return Math.max(60, i);
    }

    public static dr a(Context context) {
        if (f8112a == null) {
            synchronized (dr.class) {
                if (f8112a == null) {
                    f8112a = new dr(context);
                }
            }
        }
        return f8112a;
    }

    private void a(com.xiaomi.push.service.ba baVar, al alVar, boolean z) {
        if (baVar.a(ho.UploadSwitch.a(), true)) {
            dv dvVar = new dv(this.f244a);
            if (z) {
                alVar.a((al.a) dvVar, a(baVar.a(ho.UploadFrequency.a(), 86400)));
            } else {
                alVar.m120a((al.a) dvVar);
            }
        }
    }

    private boolean a() {
        try {
            ((Application) (this.f244a instanceof Application ? this.f244a : this.f244a.getApplicationContext())).registerActivityLifecycleCallbacks(new dl(this.f244a, String.valueOf(System.currentTimeMillis() / 1000)));
            return true;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            return false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        a aVar;
        al alVarA = al.a(this.f244a);
        com.xiaomi.push.service.ba baVarA = com.xiaomi.push.service.ba.a(this.f244a);
        SharedPreferences sharedPreferences = this.f244a.getSharedPreferences("mipush_extra", 0);
        long jCurrentTimeMillis = System.currentTimeMillis();
        long j = sharedPreferences.getLong("first_try_ts", jCurrentTimeMillis);
        if (j == jCurrentTimeMillis) {
            sharedPreferences.edit().putLong("first_try_ts", jCurrentTimeMillis).commit();
        }
        if (Math.abs(jCurrentTimeMillis - j) < 172800000) {
            return;
        }
        a(baVarA, alVarA, false);
        if (baVarA.a(ho.StorageCollectionSwitch.a(), true)) {
            int iA = a(baVarA.a(ho.StorageCollectionFrequency.a(), 86400));
            alVarA.a(new du(this.f244a, iA), iA, 0);
        }
        if (m.m575a(this.f244a) && (aVar = this.f245a) != null) {
            aVar.a();
        }
        if (baVarA.a(ho.ActivityTSSwitch.a(), false)) {
            a();
        }
        a(baVarA, alVarA, true);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m226a() {
        al.a(this.f244a).a(new ds(this));
    }
}
