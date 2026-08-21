package com.xiaomi.mipush.sdk;

import android.app.Application;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import android.text.TextUtils;
import com.xiaomi.push.bj;
import com.xiaomi.push.bo;
import com.xiaomi.push.db;
import com.xiaomi.push.eo;
import com.xiaomi.push.hj;
import com.xiaomi.push.hk;
import com.xiaomi.push.hn;
import com.xiaomi.push.ho;
import com.xiaomi.push.ht;
import com.xiaomi.push.hw;
import com.xiaomi.push.if;
import com.xiaomi.push.ii;
import com.xiaomi.push.ij;
import com.xiaomi.push.ip;
import com.xiaomi.push.it;
import com.xiaomi.push.iu;
import com.xiaomi.push.service.ba;
import com.xiaomi.push.service.bd;
import com.xiaomi.push.service.bk;
import com.xiaomi.push.service.bn;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class ao {
    private static ao a;
    private static final ArrayList<a> a = new ArrayList<>();
    private static boolean b;
    private Context a;
    private Handler a;
    private Messenger a;
    private boolean a;
    private List<Message> a = new ArrayList();
    private boolean c = false;
    private Intent a = null;
    private Integer a = null;
    private String a = null;

    class a<T extends iu<T, ?>> {
        hj a;
        T a;
        boolean a;

        a() {
        }
    }

    private ao(Context context) {
        this.a = false;
        this.a = null;
        this.a = context.getApplicationContext();
        this.a = c();
        b = d();
        this.a = new ap(this, Looper.getMainLooper());
        if (com.xiaomi.push.m.a(context)) {
            com.xiaomi.push.service.i.a(new aq(this));
        }
        Intent intentB = b();
        if (intentB != null) {
            b(intentB);
        }
    }

    private synchronized int a() {
        return this.a.getSharedPreferences("mipush_extra", 0).getInt(Constants.EXTRA_KEY_BOOT_SERVICE_MODE, -1);
    }

    private Intent a() {
        return (!a() || "com.xiaomi.xmsf".equals(this.a.getPackageName())) ? e() : d();
    }

    private Message a(Intent intent) {
        Message messageObtain = Message.obtain();
        messageObtain.what = 17;
        messageObtain.obj = intent;
        return messageObtain;
    }

    public static synchronized ao a(Context context) {
        if (a == null) {
            a = new ao(context);
        }
        return a;
    }

    private String a() {
        try {
            return this.a.getPackageManager().getPackageInfo("com.xiaomi.xmsf", 4).versionCode >= 106 ? "com.xiaomi.push.service.XMPushService" : "com.xiaomi.xmsf.push.service.XMPushService";
        } catch (Exception unused) {
            return "com.xiaomi.xmsf.push.service.XMPushService";
        }
    }

    private void a(String str, au auVar, boolean z, HashMap<String, String> map) {
        ii iiVar;
        String str2;
        if (b.a(this.a).b() && bj.b(this.a)) {
            ii iiVar2 = new ii();
            iiVar2.a(true);
            Intent intentA = a();
            if (TextUtils.isEmpty(str)) {
                str = bd.a();
                iiVar2.a(str);
                iiVar = z ? new ii(str, true) : null;
                synchronized (af.class) {
                    af.a(this.a).a(str);
                }
            } else {
                iiVar2.a(str);
                iiVar = z ? new ii(str, true) : null;
            }
            switch (at.a[auVar.ordinal()]) {
                case 1:
                    iiVar2.c(ht.E.a);
                    iiVar.c(ht.E.a);
                    if (map != null) {
                        iiVar2.a(map);
                        iiVar.a(map);
                    }
                    str2 = "com.xiaomi.mipush.DISABLE_PUSH_MESSAGE";
                    intentA.setAction(str2);
                    break;
                case 2:
                    iiVar2.c(ht.F.a);
                    iiVar.c(ht.F.a);
                    if (map != null) {
                        iiVar2.a(map);
                        iiVar.a(map);
                    }
                    str2 = "com.xiaomi.mipush.ENABLE_PUSH_MESSAGE";
                    intentA.setAction(str2);
                    break;
                case 3:
                case 4:
                case 5:
                case 6:
                    iiVar2.c(ht.N.a);
                    if (map != null) {
                        iiVar2.a(map);
                    }
                    break;
            }
            com.xiaomi.channel.commonutils.logger.b.e("type:" + auVar + ", " + str);
            iiVar2.b(b.a(this.a).a());
            iiVar2.d(this.a.getPackageName());
            a(iiVar2, hj.i, false, (hw) null);
            if (z) {
                iiVar.b(b.a(this.a).a());
                iiVar.d(this.a.getPackageName());
                byte[] bArrA = it.a(ai.a(this.a, iiVar, hj.i, false, this.a.getPackageName(), b.a(this.a).a()));
                if (bArrA != null) {
                    db.a(this.a.getPackageName(), this.a, iiVar, hj.i, bArrA.length);
                    intentA.putExtra("mipush_payload", bArrA);
                    intentA.putExtra("com.xiaomi.mipush.MESSAGE_CACHE", true);
                    intentA.putExtra("mipush_app_id", b.a(this.a).a());
                    intentA.putExtra("mipush_app_token", b.a(this.a).b());
                    c(intentA);
                }
            }
            Message messageObtain = Message.obtain();
            messageObtain.what = 19;
            int iOrdinal = auVar.ordinal();
            messageObtain.obj = str;
            messageObtain.arg1 = iOrdinal;
            this.a.sendMessageDelayed(messageObtain, 5000L);
        }
    }

    private Intent b() {
        if (!"com.xiaomi.xmsf".equals(this.a.getPackageName())) {
            return c();
        }
        com.xiaomi.channel.commonutils.logger.b.c("pushChannel xmsf create own channel");
        return e();
    }

    private void b(Intent intent) {
        try {
            if (com.xiaomi.push.m.a() || Build.VERSION.SDK_INT < 26) {
                this.a.startService(intent);
            } else {
                d(intent);
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
        }
    }

    private Intent c() {
        if (a()) {
            com.xiaomi.channel.commonutils.logger.b.c("pushChannel app start miui china channel");
            return d();
        }
        com.xiaomi.channel.commonutils.logger.b.c("pushChannel app start  own channel");
        return e();
    }

    private synchronized void c(int i) {
        this.a.getSharedPreferences("mipush_extra", 0).edit().putInt(Constants.EXTRA_KEY_BOOT_SERVICE_MODE, i).commit();
    }

    private void c(Intent intent) {
        int iA = ba.a(this.a).a(ho.T.a(), hk.a.a());
        int iA2 = a();
        boolean z = iA == hk.b.a() && b;
        int iA3 = (z ? hk.b : hk.a).a();
        if (iA3 != iA2) {
            a(iA3);
        }
        if (z) {
            d(intent);
        } else {
            b(intent);
        }
    }

    private boolean c() {
        try {
            PackageInfo packageInfo = this.a.getPackageManager().getPackageInfo("com.xiaomi.xmsf", 4);
            if (packageInfo == null) {
                return false;
            }
            return packageInfo.versionCode >= 105;
        } catch (Throwable unused) {
            return false;
        }
    }

    private Intent d() {
        Intent intent = new Intent();
        String packageName = this.a.getPackageName();
        intent.setPackage("com.xiaomi.xmsf");
        intent.setClassName("com.xiaomi.xmsf", a());
        intent.putExtra("mipush_app_package", packageName);
        g();
        return intent;
    }

    private synchronized void d(Intent intent) {
        if (this.c) {
            Message messageA = a(intent);
            if (this.a.size() >= 50) {
                this.a.remove(0);
            }
            this.a.add(messageA);
            return;
        }
        if (this.a == null) {
            this.a.bindService(intent, new as(this), 1);
            this.c = true;
            this.a.clear();
            this.a.add(a(intent));
        } else {
            try {
                this.a.send(a(intent));
            } catch (RemoteException unused) {
                this.a = null;
                this.c = false;
            }
        }
    }

    private boolean d() {
        if (a()) {
            try {
                return this.a.getPackageManager().getPackageInfo("com.xiaomi.xmsf", 4).versionCode >= 108;
            } catch (Exception unused) {
            }
        }
        return true;
    }

    private Intent e() {
        Intent intent = new Intent();
        String packageName = this.a.getPackageName();
        h();
        intent.setComponent(new ComponentName(this.a, "com.xiaomi.push.service.XMPushService"));
        intent.putExtra("mipush_app_package", packageName);
        return intent;
    }

    private boolean e() {
        String packageName = this.a.getPackageName();
        return packageName.contains("miui") || packageName.contains("xiaomi") || (this.a.getApplicationInfo().flags & 1) != 0;
    }

    private void g() {
        try {
            PackageManager packageManager = this.a.getPackageManager();
            ComponentName componentName = new ComponentName(this.a, "com.xiaomi.push.service.XMPushService");
            if (packageManager.getComponentEnabledSetting(componentName) == 2) {
                return;
            }
            packageManager.setComponentEnabledSetting(componentName, 2, 1);
        } catch (Throwable unused) {
        }
    }

    private void h() {
        try {
            PackageManager packageManager = this.a.getPackageManager();
            ComponentName componentName = new ComponentName(this.a, "com.xiaomi.push.service.XMPushService");
            if (packageManager.getComponentEnabledSetting(componentName) == 1) {
                return;
            }
            packageManager.setComponentEnabledSetting(componentName, 1, 1);
        } catch (Throwable unused) {
        }
    }

    public void a() {
        b(a());
    }

    public void a(int i) {
        a(i, 0);
    }

    void a(int i, int i2) {
        Intent intentA = a();
        intentA.setAction("com.xiaomi.mipush.CLEAR_NOTIFICATION");
        intentA.putExtra(bk.B, this.a.getPackageName());
        intentA.putExtra(bk.C, i);
        intentA.putExtra(bk.D, i2);
        c(intentA);
    }

    void a(int i, String str) {
        Intent intentA = a();
        intentA.setAction("com.xiaomi.mipush.thirdparty");
        intentA.putExtra("com.xiaomi.mipush.thirdparty_LEVEL", i);
        intentA.putExtra("com.xiaomi.mipush.thirdparty_DESC", str);
        b(intentA);
    }

    void a(Intent intent) {
        intent.fillIn(a(), 24);
        c(intent);
    }

    public final void a(hn hnVar) {
        Intent intentA = a();
        byte[] bArrA = it.a(hnVar);
        if (bArrA == null) {
            com.xiaomi.channel.commonutils.logger.b.a("send TinyData failed, because tinyDataBytes is null.");
            return;
        }
        intentA.setAction("com.xiaomi.mipush.SEND_TINYDATA");
        intentA.putExtra("mipush_payload", bArrA);
        b(intentA);
    }

    public final void a(ij ijVar, boolean z) {
        eo.a(this.a.getApplicationContext()).a(this.a.getPackageName(), "E100003", ijVar.a(), 6001, null);
        this.a = null;
        b.a(this.a).a = ijVar.a();
        Intent intentA = a();
        byte[] bArrA = it.a(ai.a(this.a, ijVar, hj.a));
        if (bArrA == null) {
            com.xiaomi.channel.commonutils.logger.b.a("register fail, because msgBytes is null.");
            return;
        }
        intentA.setAction("com.xiaomi.mipush.REGISTER_APP");
        intentA.putExtra("mipush_app_id", b.a(this.a).a());
        intentA.putExtra("mipush_payload", bArrA);
        intentA.putExtra("mipush_session", this.a);
        intentA.putExtra("mipush_env_chanage", z);
        intentA.putExtra("mipush_env_type", b.a(this.a).a());
        if (bj.b(this.a) && b()) {
            c(intentA);
        } else {
            this.a = intentA;
        }
    }

    public final void a(ip ipVar) {
        byte[] bArrA = it.a(ai.a(this.a, ipVar, hj.b));
        if (bArrA == null) {
            com.xiaomi.channel.commonutils.logger.b.a("unregister fail, because msgBytes is null.");
            return;
        }
        Intent intentA = a();
        intentA.setAction("com.xiaomi.mipush.UNREGISTER_APP");
        intentA.putExtra("mipush_app_id", b.a(this.a).a());
        intentA.putExtra("mipush_payload", bArrA);
        c(intentA);
    }

    public final <T extends iu<T, ?>> void a(T t, hj hjVar, hw hwVar) {
        a(t, hjVar, !hjVar.equals(hj.a), hwVar);
    }

    public <T extends iu<T, ?>> void a(T t, hj hjVar, boolean z) {
        a aVar = new a();
        aVar.a = t;
        aVar.a = hjVar;
        aVar.a = z;
        synchronized (a) {
            a.add(aVar);
            if (a.size() > 10) {
                a.remove(0);
            }
        }
    }

    public final <T extends iu<T, ?>> void a(T t, hj hjVar, boolean z, hw hwVar) {
        a(t, hjVar, z, true, hwVar, true);
    }

    public final <T extends iu<T, ?>> void a(T t, hj hjVar, boolean z, hw hwVar, boolean z2) {
        a(t, hjVar, z, true, hwVar, z2);
    }

    public final <T extends iu<T, ?>> void a(T t, hj hjVar, boolean z, boolean z2, hw hwVar, boolean z3) {
        a(t, hjVar, z, z2, hwVar, z3, this.a.getPackageName(), b.a(this.a).a());
    }

    public final <T extends iu<T, ?>> void a(T t, hj hjVar, boolean z, boolean z2, hw hwVar, boolean z3, String str, String str2) {
        a(t, hjVar, z, z2, hwVar, z3, str, str2, true);
    }

    public final <T extends iu<T, ?>> void a(T t, hj hjVar, boolean z, boolean z2, hw hwVar, boolean z3, String str, String str2, boolean z4) {
        a(t, hjVar, z, z2, hwVar, z3, str, str2, z4, true);
    }

    public final <T extends iu<T, ?>> void a(T t, hj hjVar, boolean z, boolean z2, hw hwVar, boolean z3, String str, String str2, boolean z4, boolean z5) {
        if (z5 && !b.a(this.a).c()) {
            if (z2) {
                a(t, hjVar, z);
                return;
            } else {
                com.xiaomi.channel.commonutils.logger.b.a("drop the message before initialization.");
                return;
            }
        }
        if ifVarA = z4 ? ai.a(this.a, t, hjVar, z, str, str2) : ai.b(this.a, t, hjVar, z, str, str2);
        if (hwVar != null) {
            ifVarA.a(hwVar);
        }
        byte[] bArrA = it.a(ifVarA);
        if (bArrA == null) {
            com.xiaomi.channel.commonutils.logger.b.a("send message fail, because msgBytes is null.");
            return;
        }
        db.a(this.a.getPackageName(), this.a, t, hjVar, bArrA.length);
        Intent intentA = a();
        intentA.setAction("com.xiaomi.mipush.SEND_MESSAGE");
        intentA.putExtra("mipush_payload", bArrA);
        intentA.putExtra("com.xiaomi.mipush.MESSAGE_CACHE", z3);
        c(intentA);
    }

    public final void a(String str, au auVar, e eVar) {
        af.a(this.a).a(auVar, "syncing");
        a(str, auVar, false, i.a(this.a, eVar));
    }

    public void a(String str, String str2) {
        Intent intentA = a();
        intentA.setAction("com.xiaomi.mipush.CLEAR_NOTIFICATION");
        intentA.putExtra(bk.B, this.a.getPackageName());
        intentA.putExtra(bk.H, str);
        intentA.putExtra(bk.I, str2);
        c(intentA);
    }

    public final void a(boolean z) {
        a(z, (String) null);
    }

    public final void a(boolean z, String str) {
        au auVar;
        if (z) {
            af.a(this.a).a(au.a, "syncing");
            af.a(this.a).a(au.b, "");
            auVar = au.a;
        } else {
            af.a(this.a).a(au.b, "syncing");
            af.a(this.a).a(au.a, "");
            auVar = au.b;
        }
        a(str, auVar, true, (HashMap<String, String>) null);
    }

    public boolean a() {
        return this.a && 1 == b.a(this.a).a();
    }

    public boolean a(int i) {
        if (!b.a(this.a).b()) {
            return false;
        }
        c(i);
        ii iiVar = new ii();
        iiVar.a(bd.a());
        iiVar.b(b.a(this.a).a());
        iiVar.d(this.a.getPackageName());
        iiVar.c(ht.G.a);
        iiVar.a = new HashMap();
        iiVar.a.put("boot_mode", i + "");
        a(this.a).a(iiVar, hj.i, false, (hw) null);
        return true;
    }

    public final void b() {
        Intent intentA = a();
        intentA.setAction("com.xiaomi.mipush.DISABLE_PUSH");
        c(intentA);
    }

    public void b(int i) {
        Intent intentA = a();
        intentA.setAction("com.xiaomi.mipush.SET_NOTIFICATION_TYPE");
        intentA.putExtra(bk.B, this.a.getPackageName());
        intentA.putExtra(bk.E, i);
        intentA.putExtra(bk.G, bo.b(this.a.getPackageName() + i));
        c(intentA);
    }

    public boolean b() {
        if (!a() || !e()) {
            return true;
        }
        if (this.a == null) {
            Integer numValueOf = Integer.valueOf(bn.a(this.a).a());
            this.a = numValueOf;
            if (numValueOf.intValue() == 0) {
                this.a.getContentResolver().registerContentObserver(bn.a(this.a).a(), false, new ar(this, new Handler(Looper.getMainLooper())));
            }
        }
        return this.a.intValue() != 0;
    }

    public void c() {
        Intent intent = this.a;
        if (intent != null) {
            c(intent);
            this.a = null;
        }
    }

    public void d() {
        synchronized (a) {
            boolean z = Thread.currentThread() == Looper.getMainLooper().getThread();
            for (a aVar : a) {
                a(aVar.a, aVar.a, aVar.a, false, null, true);
                if (!z) {
                    try {
                        Thread.sleep(100L);
                    } catch (InterruptedException unused) {
                    }
                }
            }
            a.clear();
        }
    }

    public void e() {
        Intent intentA = a();
        intentA.setAction("com.xiaomi.mipush.CLEAR_HEADSUPNOTIFICATION");
        Application application = (Application) com.xiaomi.push.bk.a("android.app.ActivityThread", "currentApplication", new Object[0]);
        String packageName = (application == null || application.getApplicationContext() == null) ? null : application.getApplicationContext().getPackageName();
        String packageName2 = this.a.getPackageName();
        if (TextUtils.isEmpty(packageName) || packageName.equals(packageName2)) {
            packageName = packageName2;
        } else {
            com.xiaomi.channel.commonutils.logger.b.a("application package name: " + packageName + ", not equals context package name: " + packageName2);
        }
        intentA.putExtra(bk.B, packageName);
        c(intentA);
    }

    public void f() {
        Intent intentA = a();
        intentA.setAction("com.xiaomi.mipush.SET_NOTIFICATION_TYPE");
        intentA.putExtra(bk.B, this.a.getPackageName());
        intentA.putExtra(bk.G, bo.b(this.a.getPackageName()));
        c(intentA);
    }
}
