package com.xiaomi.push;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.ServiceInfo;
import android.os.Build;
import com.xiaomi.push.service.XMJobService;

public final class eu {
    private static a a;
    private static final String a = XMJobService.class.getCanonicalName();
    private static int a = 0;

    interface a {
        void a();

        void a(boolean z);

        boolean a();
    }

    public static synchronized void a() {
        if (a == null) {
            return;
        }
        com.xiaomi.channel.commonutils.logger.b.a("[Alarm] stop alarm.");
        a.a();
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0048  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x007e A[EDGE_INSN: B:49:0x007e->B:30:0x007e BREAK  A[LOOP:0: B:11:0x0032->B:27:0x0078], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void a(Context context) {
        ev evVar;
        Context applicationContext = context.getApplicationContext();
        if ("com.xiaomi.xmsf".equals(applicationContext.getPackageName())) {
            evVar = new ev(applicationContext);
        } else {
            int i = 0;
            try {
                PackageInfo packageInfo = applicationContext.getPackageManager().getPackageInfo(applicationContext.getPackageName(), 4);
                if (packageInfo.services != null) {
                    ServiceInfo[] serviceInfoArr = packageInfo.services;
                    int length = serviceInfoArr.length;
                    int i2 = 0;
                    while (i < length) {
                        try {
                            ServiceInfo serviceInfo = serviceInfoArr[i];
                            if ("android.permission.BIND_JOB_SERVICE".equals(serviceInfo.permission)) {
                                if (a.equals(serviceInfo.name)) {
                                    i2 = 1;
                                    if (i2 == 1) {
                                        break;
                                    }
                                } else {
                                    try {
                                        if (a.equals(v.a(applicationContext, serviceInfo.name).getSuperclass().getCanonicalName())) {
                                        }
                                    } catch (Exception unused) {
                                    }
                                    if (i2 == 1) {
                                    }
                                }
                            }
                            if (a.equals(serviceInfo.name) && "android.permission.BIND_JOB_SERVICE".equals(serviceInfo.permission)) {
                                i = 1;
                                break;
                            }
                            i++;
                        } catch (Exception e) {
                            e = e;
                            i = i2;
                            com.xiaomi.channel.commonutils.logger.b.a("check service err : " + e.getMessage());
                        }
                    }
                    i = i2;
                }
            } catch (Exception e2) {
                e = e2;
            }
            if (i == 0 && v.a(applicationContext)) {
                throw new RuntimeException("Should export service: " + a + " with permission android.permission.BIND_JOB_SERVICE in AndroidManifest.xml file");
            }
            int i3 = Build.VERSION.SDK_INT;
            evVar = new ev(applicationContext);
        }
        a = evVar;
    }

    public static synchronized void a(Context context, int i) {
        int i2 = a;
        if (!"com.xiaomi.xmsf".equals(context.getPackageName())) {
            if (i == 2) {
                a = 2;
            } else {
                a = 0;
            }
        }
        if (i2 != a && a == 2) {
            a();
            a = new ex(context);
        }
    }

    public static synchronized void a(boolean z) {
        if (a == null) {
            com.xiaomi.channel.commonutils.logger.b.a("timer is not initialized");
            return;
        }
        com.xiaomi.channel.commonutils.logger.b.a("[Alarm] register alarm. (" + z + ")");
        a.a(z);
    }

    public static synchronized boolean a() {
        if (a == null) {
            return false;
        }
        return a.a();
    }
}
