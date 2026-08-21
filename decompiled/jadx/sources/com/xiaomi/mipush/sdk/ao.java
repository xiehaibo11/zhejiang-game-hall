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
import com.xiaomi.push.Cif;
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

/* JADX INFO: loaded from: classes4.dex */
public class ao {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static ao f7996a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final ArrayList<a> f69a = new ArrayList<>();
    private static boolean b;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f70a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Handler f72a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Messenger f73a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private boolean f77a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private List<Message> f76a = new ArrayList();
    private boolean c = false;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Intent f71a = null;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Integer f74a = null;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f75a = null;

    class a<T extends iu<T, ?>> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        hj f7997a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        T f78a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        boolean f79a;

        a() {
        }
    }

    private ao(Context context) {
        this.f77a = false;
        this.f72a = null;
        this.f70a = context.getApplicationContext();
        this.f77a = m73c();
        b = m74d();
        this.f72a = new ap(this, Looper.getMainLooper());
        if (com.xiaomi.push.m.m575a(context)) {
            com.xiaomi.push.service.i.a(new aq(this));
        }
        Intent intentB = b();
        if (intentB != null) {
            b(intentB);
        }
    }

    private synchronized int a() {
        return this.f70a.getSharedPreferences("mipush_extra", 0).getInt(Constants.EXTRA_KEY_BOOT_SERVICE_MODE, -1);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private Intent m68a() {
        return (!m78a() || "com.xiaomi.xmsf".equals(this.f70a.getPackageName())) ? e() : d();
    }

    private Message a(Intent intent) {
        Message messageObtain = Message.obtain();
        messageObtain.what = 17;
        messageObtain.obj = intent;
        return messageObtain;
    }

    public static synchronized ao a(Context context) {
        if (f7996a == null) {
            f7996a = new ao(context);
        }
        return f7996a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private String m71a() {
        try {
            return this.f70a.getPackageManager().getPackageInfo("com.xiaomi.xmsf", 4).versionCode >= 106 ? "com.xiaomi.push.service.XMPushService" : "com.xiaomi.xmsf.push.service.XMPushService";
        } catch (Exception unused) {
            return "com.xiaomi.xmsf.push.service.XMPushService";
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, au auVar, boolean z, HashMap<String, String> map) {
        ii iiVar;
        String str2;
        if (b.m85a(this.f70a).m92b() && bj.b(this.f70a)) {
            ii iiVar2 = new ii();
            iiVar2.a(true);
            Intent intentM68a = m68a();
            if (TextUtils.isEmpty(str)) {
                str = bd.a();
                iiVar2.a(str);
                iiVar = z ? new ii(str, true) : null;
                synchronized (af.class) {
                    af.a(this.f70a).m64a(str);
                }
            } else {
                iiVar2.a(str);
                iiVar = z ? new ii(str, true) : null;
            }
            switch (at.f8002a[auVar.ordinal()]) {
                case 1:
                    iiVar2.c(ht.DisablePushMessage.f519a);
                    iiVar.c(ht.DisablePushMessage.f519a);
                    if (map != null) {
                        iiVar2.a(map);
                        iiVar.a(map);
                    }
                    str2 = "com.xiaomi.mipush.DISABLE_PUSH_MESSAGE";
                    intentM68a.setAction(str2);
                    break;
                case 2:
                    iiVar2.c(ht.EnablePushMessage.f519a);
                    iiVar.c(ht.EnablePushMessage.f519a);
                    if (map != null) {
                        iiVar2.a(map);
                        iiVar.a(map);
                    }
                    str2 = "com.xiaomi.mipush.ENABLE_PUSH_MESSAGE";
                    intentM68a.setAction(str2);
                    break;
                case 3:
                case 4:
                case 5:
                case 6:
                    iiVar2.c(ht.ThirdPartyRegUpdate.f519a);
                    if (map != null) {
                        iiVar2.a(map);
                    }
                    break;
            }
            com.xiaomi.channel.commonutils.logger.b.e("type:" + auVar + ", " + str);
            iiVar2.b(b.m85a(this.f70a).m86a());
            iiVar2.d(this.f70a.getPackageName());
            a(iiVar2, hj.Notification, false, (hw) null);
            if (z) {
                iiVar.b(b.m85a(this.f70a).m86a());
                iiVar.d(this.f70a.getPackageName());
                byte[] bArrA = it.a(ai.a(this.f70a, iiVar, hj.Notification, false, this.f70a.getPackageName(), b.m85a(this.f70a).m86a()));
                if (bArrA != null) {
                    db.a(this.f70a.getPackageName(), this.f70a, iiVar, hj.Notification, bArrA.length);
                    intentM68a.putExtra("mipush_payload", bArrA);
                    intentM68a.putExtra("com.xiaomi.mipush.MESSAGE_CACHE", true);
                    intentM68a.putExtra("mipush_app_id", b.m85a(this.f70a).m86a());
                    intentM68a.putExtra("mipush_app_token", b.m85a(this.f70a).b());
                    c(intentM68a);
                }
            }
            Message messageObtain = Message.obtain();
            messageObtain.what = 19;
            int iOrdinal = auVar.ordinal();
            messageObtain.obj = str;
            messageObtain.arg1 = iOrdinal;
            this.f72a.sendMessageDelayed(messageObtain, 5000L);
        }
    }

    private Intent b() {
        if (!"com.xiaomi.xmsf".equals(this.f70a.getPackageName())) {
            return c();
        }
        com.xiaomi.channel.commonutils.logger.b.c("pushChannel xmsf create own channel");
        return e();
    }

    private void b(Intent intent) {
        try {
            if (com.xiaomi.push.m.m574a() || Build.VERSION.SDK_INT < 26) {
                this.f70a.startService(intent);
            } else {
                d(intent);
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
        }
    }

    private Intent c() {
        if (m78a()) {
            com.xiaomi.channel.commonutils.logger.b.c("pushChannel app start miui china channel");
            return d();
        }
        com.xiaomi.channel.commonutils.logger.b.c("pushChannel app start  own channel");
        return e();
    }

    private synchronized void c(int i) {
        this.f70a.getSharedPreferences("mipush_extra", 0).edit().putInt(Constants.EXTRA_KEY_BOOT_SERVICE_MODE, i).commit();
    }

    private void c(Intent intent) {
        int iA = ba.a(this.f70a).a(ho.ServiceBootMode.a(), hk.START.a());
        int iA2 = a();
        boolean z = iA == hk.BIND.a() && b;
        int iA3 = (z ? hk.BIND : hk.START).a();
        if (iA3 != iA2) {
            m79a(iA3);
        }
        if (z) {
            d(intent);
        } else {
            b(intent);
        }
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    private boolean m73c() {
        try {
            PackageInfo packageInfo = this.f70a.getPackageManager().getPackageInfo("com.xiaomi.xmsf", 4);
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
        String packageName = this.f70a.getPackageName();
        intent.setPackage("com.xiaomi.xmsf");
        intent.setClassName("com.xiaomi.xmsf", m71a());
        intent.putExtra("mipush_app_package", packageName);
        g();
        return intent;
    }

    private synchronized void d(Intent intent) {
        if (this.c) {
            Message messageA = a(intent);
            if (this.f76a.size() >= 50) {
                this.f76a.remove(0);
            }
            this.f76a.add(messageA);
            return;
        }
        if (this.f73a == null) {
            this.f70a.bindService(intent, new as(this), 1);
            this.c = true;
            this.f76a.clear();
            this.f76a.add(a(intent));
        } else {
            try {
                this.f73a.send(a(intent));
            } catch (RemoteException unused) {
                this.f73a = null;
                this.c = false;
            }
        }
    }

    /* JADX INFO: renamed from: d, reason: collision with other method in class */
    private boolean m74d() {
        if (m78a()) {
            try {
                return this.f70a.getPackageManager().getPackageInfo("com.xiaomi.xmsf", 4).versionCode >= 108;
            } catch (Exception unused) {
            }
        }
        return true;
    }

    private Intent e() {
        Intent intent = new Intent();
        String packageName = this.f70a.getPackageName();
        h();
        intent.setComponent(new ComponentName(this.f70a, "com.xiaomi.push.service.XMPushService"));
        intent.putExtra("mipush_app_package", packageName);
        return intent;
    }

    /* JADX INFO: renamed from: e, reason: collision with other method in class */
    private boolean m75e() {
        String packageName = this.f70a.getPackageName();
        return packageName.contains("miui") || packageName.contains("xiaomi") || (this.f70a.getApplicationInfo().flags & 1) != 0;
    }

    private void g() {
        try {
            PackageManager packageManager = this.f70a.getPackageManager();
            ComponentName componentName = new ComponentName(this.f70a, "com.xiaomi.push.service.XMPushService");
            if (packageManager.getComponentEnabledSetting(componentName) == 2) {
                return;
            }
            packageManager.setComponentEnabledSetting(componentName, 2, 1);
        } catch (Throwable unused) {
        }
    }

    private void h() {
        try {
            PackageManager packageManager = this.f70a.getPackageManager();
            ComponentName componentName = new ComponentName(this.f70a, "com.xiaomi.push.service.XMPushService");
            if (packageManager.getComponentEnabledSetting(componentName) == 1) {
                return;
            }
            packageManager.setComponentEnabledSetting(componentName, 1, 1);
        } catch (Throwable unused) {
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m76a() {
        b(m68a());
    }

    public void a(int i) {
        a(i, 0);
    }

    void a(int i, int i2) {
        Intent intentM68a = m68a();
        intentM68a.setAction("com.xiaomi.mipush.CLEAR_NOTIFICATION");
        intentM68a.putExtra(bk.B, this.f70a.getPackageName());
        intentM68a.putExtra(bk.C, i);
        intentM68a.putExtra(bk.D, i2);
        c(intentM68a);
    }

    void a(int i, String str) {
        Intent intentM68a = m68a();
        intentM68a.setAction("com.xiaomi.mipush.thirdparty");
        intentM68a.putExtra("com.xiaomi.mipush.thirdparty_LEVEL", i);
        intentM68a.putExtra("com.xiaomi.mipush.thirdparty_DESC", str);
        b(intentM68a);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    void m77a(Intent intent) {
        intent.fillIn(m68a(), 24);
        c(intent);
    }

    public final void a(hn hnVar) {
        Intent intentM68a = m68a();
        byte[] bArrA = it.a(hnVar);
        if (bArrA == null) {
            com.xiaomi.channel.commonutils.logger.b.m43a("send TinyData failed, because tinyDataBytes is null.");
            return;
        }
        intentM68a.setAction("com.xiaomi.mipush.SEND_TINYDATA");
        intentM68a.putExtra("mipush_payload", bArrA);
        b(intentM68a);
    }

    public final void a(ij ijVar, boolean z) {
        eo.a(this.f70a.getApplicationContext()).a(this.f70a.getPackageName(), "E100003", ijVar.a(), 6001, null);
        this.f71a = null;
        b.m85a(this.f70a).f84a = ijVar.a();
        Intent intentM68a = m68a();
        byte[] bArrA = it.a(ai.a(this.f70a, ijVar, hj.Registration));
        if (bArrA == null) {
            com.xiaomi.channel.commonutils.logger.b.m43a("register fail, because msgBytes is null.");
            return;
        }
        intentM68a.setAction("com.xiaomi.mipush.REGISTER_APP");
        intentM68a.putExtra("mipush_app_id", b.m85a(this.f70a).m86a());
        intentM68a.putExtra("mipush_payload", bArrA);
        intentM68a.putExtra("mipush_session", this.f75a);
        intentM68a.putExtra("mipush_env_chanage", z);
        intentM68a.putExtra("mipush_env_type", b.m85a(this.f70a).a());
        if (bj.b(this.f70a) && m81b()) {
            c(intentM68a);
        } else {
            this.f71a = intentM68a;
        }
    }

    public final void a(ip ipVar) {
        byte[] bArrA = it.a(ai.a(this.f70a, ipVar, hj.UnRegistration));
        if (bArrA == null) {
            com.xiaomi.channel.commonutils.logger.b.m43a("unregister fail, because msgBytes is null.");
            return;
        }
        Intent intentM68a = m68a();
        intentM68a.setAction("com.xiaomi.mipush.UNREGISTER_APP");
        intentM68a.putExtra("mipush_app_id", b.m85a(this.f70a).m86a());
        intentM68a.putExtra("mipush_payload", bArrA);
        c(intentM68a);
    }

    public final <T extends iu<T, ?>> void a(T t, hj hjVar, hw hwVar) {
        a(t, hjVar, !hjVar.equals(hj.Registration), hwVar);
    }

    public <T extends iu<T, ?>> void a(T t, hj hjVar, boolean z) {
        a aVar = new a();
        aVar.f78a = t;
        aVar.f7997a = hjVar;
        aVar.f79a = z;
        synchronized (f69a) {
            f69a.add(aVar);
            if (f69a.size() > 10) {
                f69a.remove(0);
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
        a(t, hjVar, z, z2, hwVar, z3, this.f70a.getPackageName(), b.m85a(this.f70a).m86a());
    }

    public final <T extends iu<T, ?>> void a(T t, hj hjVar, boolean z, boolean z2, hw hwVar, boolean z3, String str, String str2) {
        a(t, hjVar, z, z2, hwVar, z3, str, str2, true);
    }

    public final <T extends iu<T, ?>> void a(T t, hj hjVar, boolean z, boolean z2, hw hwVar, boolean z3, String str, String str2, boolean z4) {
        a(t, hjVar, z, z2, hwVar, z3, str, str2, z4, true);
    }

    public final <T extends iu<T, ?>> void a(T t, hj hjVar, boolean z, boolean z2, hw hwVar, boolean z3, String str, String str2, boolean z4, boolean z5) {
        if (z5 && !b.m85a(this.f70a).m94c()) {
            if (z2) {
                a(t, hjVar, z);
                return;
            } else {
                com.xiaomi.channel.commonutils.logger.b.m43a("drop the message before initialization.");
                return;
            }
        }
        Cif cifA = z4 ? ai.a(this.f70a, t, hjVar, z, str, str2) : ai.b(this.f70a, t, hjVar, z, str, str2);
        if (hwVar != null) {
            cifA.a(hwVar);
        }
        byte[] bArrA = it.a(cifA);
        if (bArrA == null) {
            com.xiaomi.channel.commonutils.logger.b.m43a("send message fail, because msgBytes is null.");
            return;
        }
        db.a(this.f70a.getPackageName(), this.f70a, t, hjVar, bArrA.length);
        Intent intentM68a = m68a();
        intentM68a.setAction("com.xiaomi.mipush.SEND_MESSAGE");
        intentM68a.putExtra("mipush_payload", bArrA);
        intentM68a.putExtra("com.xiaomi.mipush.MESSAGE_CACHE", z3);
        c(intentM68a);
    }

    public final void a(String str, au auVar, e eVar) {
        af.a(this.f70a).a(auVar, "syncing");
        a(str, auVar, false, i.m104a(this.f70a, eVar));
    }

    public void a(String str, String str2) {
        Intent intentM68a = m68a();
        intentM68a.setAction("com.xiaomi.mipush.CLEAR_NOTIFICATION");
        intentM68a.putExtra(bk.B, this.f70a.getPackageName());
        intentM68a.putExtra(bk.H, str);
        intentM68a.putExtra(bk.I, str2);
        c(intentM68a);
    }

    public final void a(boolean z) {
        a(z, (String) null);
    }

    public final void a(boolean z, String str) {
        au auVar;
        if (z) {
            af.a(this.f70a).a(au.DISABLE_PUSH, "syncing");
            af.a(this.f70a).a(au.ENABLE_PUSH, "");
            auVar = au.DISABLE_PUSH;
        } else {
            af.a(this.f70a).a(au.ENABLE_PUSH, "syncing");
            af.a(this.f70a).a(au.DISABLE_PUSH, "");
            auVar = au.ENABLE_PUSH;
        }
        a(str, auVar, true, (HashMap<String, String>) null);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m78a() {
        return this.f77a && 1 == b.m85a(this.f70a).a();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m79a(int i) {
        if (!b.m85a(this.f70a).m92b()) {
            return false;
        }
        c(i);
        ii iiVar = new ii();
        iiVar.a(bd.a());
        iiVar.b(b.m85a(this.f70a).m86a());
        iiVar.d(this.f70a.getPackageName());
        iiVar.c(ht.ClientABTest.f519a);
        iiVar.f658a = new HashMap();
        iiVar.f658a.put("boot_mode", i + "");
        a(this.f70a).a(iiVar, hj.Notification, false, (hw) null);
        return true;
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public final void m80b() {
        Intent intentM68a = m68a();
        intentM68a.setAction("com.xiaomi.mipush.DISABLE_PUSH");
        c(intentM68a);
    }

    public void b(int i) {
        Intent intentM68a = m68a();
        intentM68a.setAction("com.xiaomi.mipush.SET_NOTIFICATION_TYPE");
        intentM68a.putExtra(bk.B, this.f70a.getPackageName());
        intentM68a.putExtra(bk.E, i);
        intentM68a.putExtra(bk.G, bo.b(this.f70a.getPackageName() + i));
        c(intentM68a);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m81b() {
        if (!m78a() || !m75e()) {
            return true;
        }
        if (this.f74a == null) {
            Integer numValueOf = Integer.valueOf(bn.a(this.f70a).a());
            this.f74a = numValueOf;
            if (numValueOf.intValue() == 0) {
                this.f70a.getContentResolver().registerContentObserver(bn.a(this.f70a).m658a(), false, new ar(this, new Handler(Looper.getMainLooper())));
            }
        }
        return this.f74a.intValue() != 0;
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public void m82c() {
        Intent intent = this.f71a;
        if (intent != null) {
            c(intent);
            this.f71a = null;
        }
    }

    /* JADX INFO: renamed from: d, reason: collision with other method in class */
    public void m83d() {
        synchronized (f69a) {
            boolean z = Thread.currentThread() == Looper.getMainLooper().getThread();
            for (a aVar : f69a) {
                a(aVar.f78a, aVar.f7997a, aVar.f79a, false, null, true);
                if (!z) {
                    try {
                        Thread.sleep(100L);
                    } catch (InterruptedException unused) {
                    }
                }
            }
            f69a.clear();
        }
    }

    /* JADX INFO: renamed from: e, reason: collision with other method in class */
    public void m84e() {
        Intent intentM68a = m68a();
        intentM68a.setAction("com.xiaomi.mipush.CLEAR_HEADSUPNOTIFICATION");
        Application application = (Application) com.xiaomi.push.bk.a("android.app.ActivityThread", "currentApplication", new Object[0]);
        String packageName = (application == null || application.getApplicationContext() == null) ? null : application.getApplicationContext().getPackageName();
        String packageName2 = this.f70a.getPackageName();
        if (TextUtils.isEmpty(packageName) || packageName.equals(packageName2)) {
            packageName = packageName2;
        } else {
            com.xiaomi.channel.commonutils.logger.b.m43a("application package name: " + packageName + ", not equals context package name: " + packageName2);
        }
        intentM68a.putExtra(bk.B, packageName);
        c(intentM68a);
    }

    public void f() {
        Intent intentM68a = m68a();
        intentM68a.setAction("com.xiaomi.mipush.SET_NOTIFICATION_TYPE");
        intentM68a.putExtra(bk.B, this.f70a.getPackageName());
        intentM68a.putExtra(bk.G, bo.b(this.f70a.getPackageName()));
        c(intentM68a);
    }
}
