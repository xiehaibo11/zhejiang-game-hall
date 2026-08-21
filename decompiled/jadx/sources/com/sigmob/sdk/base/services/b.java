package com.sigmob.sdk.base.services;

import android.content.Context;
import android.content.IntentFilter;
import android.content.pm.PackageInfo;
import android.os.Build;
import com.czhj.sdk.common.Constants;
import com.czhj.sdk.common.ThreadPool.ThreadPoolFactory;
import com.czhj.sdk.common.utils.AppPackageUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.services.j;
import java.util.Date;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class b implements j.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    a f4926a;
    k b = k.STOP;

    public b() {
        if (this.f4926a == null) {
            this.f4926a = new a();
        }
    }

    public static void a() {
        try {
            g();
        } catch (Throwable unused) {
        }
    }

    private static boolean d(Context context) {
        if (context == null) {
            return true;
        }
        return com.sigmob.sdk.base.utils.c.a("BuriedPointConfig").getString(com.sigmob.sdk.base.h.c, "").equals(Constants.sdf.format(new Date()));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static List<PackageInfo> e(Context context) {
        try {
            return AppPackageUtil.getPackageManager(context).getInstalledPackages(0);
        } catch (Throwable unused) {
            return null;
        }
    }

    private static void f() {
        final Context contextB = com.sigmob.sdk.b.b();
        if (d(contextB)) {
            return;
        }
        ThreadPoolFactory.BackgroundThreadPool.getInstance().submit(new Runnable() { // from class: com.sigmob.sdk.base.services.b.1
            @Override // java.lang.Runnable
            public void run() {
                try {
                    List listE = b.e(contextB);
                    if (listE == null) {
                        return;
                    }
                    for (int i = 0; i < listE.size(); i++) {
                        PackageInfo packageInfo = (PackageInfo) listE.get(i);
                        if ((packageInfo.applicationInfo.flags & 1) == 0) {
                            z.a(packageInfo);
                        }
                    }
                    com.sigmob.sdk.base.utils.c.a("BuriedPointConfig").edit().putString(com.sigmob.sdk.base.h.c, Constants.sdf.format(new Date())).apply();
                } catch (Throwable th) {
                    SigmobLog.e("update app info", th);
                }
            }
        });
    }

    private static void g() {
        try {
            if (!com.sigmob.sdk.base.c.a().i() || com.sigmob.sdk.base.i.a().H()) {
                return;
            }
            f();
        } catch (Throwable th) {
            SigmobLog.e("BuriedPointManager getInstance", th);
        }
    }

    public void a(Context context) {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.INSTALL_PACKAGE");
        if (Build.VERSION.SDK_INT >= 27) {
            intentFilter.addAction("android.intent.action.INSTALL_FAILURE");
        }
        intentFilter.addAction("android.intent.action.PACKAGE_ADDED");
        intentFilter.addAction("android.intent.action.PACKAGE_REMOVED");
        intentFilter.addAction("android.intent.action.PACKAGE_REPLACED");
        intentFilter.addDataScheme("package");
        new IntentFilter("android.intent.action.DOWNLOAD_COMPLETE");
        context.registerReceiver(this.f4926a, intentFilter);
    }

    public void b(Context context) {
        context.unregisterReceiver(this.f4926a);
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public boolean b() {
        if (this.b == k.RUNNING) {
            return false;
        }
        a(com.sigmob.sdk.b.b());
        this.b = k.RUNNING;
        return true;
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public k c() {
        return this.b;
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public void d() {
        if (this.b == k.RUNNING) {
            b(com.sigmob.sdk.b.b());
            this.b = k.STOP;
        }
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public Error e() {
        return null;
    }
}
