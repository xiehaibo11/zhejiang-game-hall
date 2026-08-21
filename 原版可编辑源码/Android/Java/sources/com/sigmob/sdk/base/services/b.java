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

public class b implements j.a {
    a a;
    k b = k.b;

    public b() {
        if (this.a == null) {
            this.a = new a();
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

    private static List<PackageInfo> e(Context context) {
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
        ThreadPoolFactory.BackgroundThreadPool.getInstance().submit(new Runnable() {
            @Override
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
        context.registerReceiver(this.a, intentFilter);
    }

    public void b(Context context) {
        context.unregisterReceiver(this.a);
    }

    @Override
    public boolean b() {
        if (this.b == k.a) {
            return false;
        }
        a(com.sigmob.sdk.b.b());
        this.b = k.a;
        return true;
    }

    @Override
    public k c() {
        return this.b;
    }

    @Override
    public void d() {
        if (this.b == k.a) {
            b(com.sigmob.sdk.b.b());
            this.b = k.b;
        }
    }

    @Override
    public Error e() {
        return null;
    }
}
