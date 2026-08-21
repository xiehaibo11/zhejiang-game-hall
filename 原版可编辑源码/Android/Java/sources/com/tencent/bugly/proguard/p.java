package com.tencent.bugly.proguard;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.tencent.bugly.BuglyStrategy;
import com.tencent.bugly.crashreport.common.strategy.StrategyBean;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

public final class p {
    public static boolean a = true;
    public static List<o> b = new ArrayList();
    public static boolean c;
    private static w d;
    private static boolean e;

    private static boolean a(aa aaVar) {
        List<String> list = aaVar.v;
        aaVar.getClass();
        return list != null && list.contains("bugly");
    }

    public static synchronized void a(Context context) {
        a(context, null);
    }

    public static synchronized void a(Context context, BuglyStrategy buglyStrategy) {
        if (e) {
            al.d("[init] initial Multi-times, ignore this.", new Object[0]);
            return;
        }
        if (context == null) {
            Log.w(al.b, "[init] context of init() is null, check it.");
            return;
        }
        aa aaVarA = aa.a(context);
        if (a(aaVarA)) {
            a = false;
            return;
        }
        String strE = aaVarA.e();
        if (strE == null) {
            Log.e(al.b, "[init] meta data of BUGLY_APPID in AndroidManifest.xml should be set.");
        } else {
            a(context, strE, aaVarA.D, buglyStrategy);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:83:0x021a A[Catch: all -> 0x0238, TryCatch #1 {, blocks: (B:4:0x0003, B:6:0x0008, B:10:0x0013, B:14:0x001e, B:18:0x0028, B:20:0x002c, B:21:0x0068, B:23:0x00a9, B:26:0x00ad, B:28:0x00bf, B:30:0x00cd, B:32:0x00d3, B:33:0x00e9, B:34:0x00f8, B:36:0x0100, B:38:0x010a, B:40:0x0110, B:41:0x0126, B:47:0x014e, B:53:0x0162, B:55:0x016c, B:57:0x0172, B:58:0x0188, B:59:0x0197, B:61:0x019d, B:63:0x01a3, B:64:0x01b9, B:65:0x01c5, B:67:0x01cb, B:68:0x01d7, B:42:0x0134, B:44:0x013d, B:46:0x0147, B:50:0x015b, B:52:0x015f, B:70:0x01e4, B:72:0x01ec, B:74:0x01fc, B:80:0x0212, B:81:0x0215, B:83:0x021a, B:85:0x0221, B:77:0x0209, B:79:0x020f), top: B:93:0x0003, inners: #0, #2 }] */
    /* JADX WARN: Removed duplicated region for block: B:84:0x021f  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x01ec A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static synchronized void a(Context context, String str, boolean z, BuglyStrategy buglyStrategy) {
        int i;
        byte[] bArr;
        if (e) {
            al.d("[init] initial Multi-times, ignore this.", new Object[0]);
            return;
        }
        if (context == null) {
            Log.w(al.b, "[init] context is null, check it.");
            return;
        }
        if (str == null) {
            Log.e(al.b, "init arg 'crashReportAppID' should not be null!");
            return;
        }
        e = true;
        if (z) {
            c = true;
            al.c = true;
            al.d("Bugly debug模式开启，请在发布时把isDebug关闭。 -- Running in debug model for 'isDebug' is enabled. Please disable it when you release.", new Object[0]);
            al.e("--------------------------------------------------------------------------------------------", new Object[0]);
            al.d("Bugly debug模式将有以下行为特性 -- The following list shows the behaviour of debug model: ", new Object[0]);
            al.d("[1] 输出详细的Bugly SDK的Log -- More detailed log of Bugly SDK will be output to logcat;", new Object[0]);
            al.d("[2] 每一条Crash都会被立即上报 -- Every crash caught by Bugly will be uploaded immediately.", new Object[0]);
            al.d("[3] 自定义日志将会在Logcat中输出 -- Custom log will be output to logcat.", new Object[0]);
            al.e("--------------------------------------------------------------------------------------------", new Object[0]);
            al.b("[init] Open debug mode of Bugly.", new Object[0]);
        }
        al.a(" crash report start initializing...", new Object[0]);
        al.b("[init] Bugly start initializing...", new Object[0]);
        al.a("[init] Bugly complete version: v%s", "4.1.9.2");
        Context contextA = ap.a(context);
        aa aaVarA = aa.a(contextA);
        aaVarA.o();
        ao.a(contextA);
        d = w.a(contextA, b);
        ai.a(contextA);
        ac.a(contextA, b);
        u uVarA = u.a(contextA);
        if (a(aaVarA)) {
            a = false;
            return;
        }
        aaVarA.r = str;
        aaVarA.b("APP_ID", str);
        al.a("[param] Set APP ID:%s", str);
        if (buglyStrategy == null) {
            while (i < b.size()) {
            }
            s.a(contextA, buglyStrategy);
            if (buglyStrategy == null) {
            }
            final ac acVarA = ac.a();
            acVarA.c.a(new Thread() {
                @Override
                public final void run() {
                    try {
                        Map<String, byte[]> mapA = w.a().a(ac.a, (v) null);
                        if (mapA != null) {
                            byte[] bArr2 = mapA.get("device");
                            byte[] bArr3 = mapA.get("gateway");
                            if (bArr2 != null) {
                                aa.a(ac.this.h).d(new String(bArr2));
                            }
                            if (bArr3 != null) {
                                aa.a(ac.this.h).c(new String(bArr3));
                            }
                        }
                        ac.this.g = ac.d();
                        if (ac.this.g != null) {
                            if (ap.b(ac.i) || !ap.d(ac.i)) {
                                ac.this.g.q = StrategyBean.a;
                                ac.this.g.r = StrategyBean.b;
                            } else {
                                ac.this.g.q = ac.i;
                                ac.this.g.r = ac.i;
                            }
                        }
                    } catch (Throwable th) {
                        if (!al.a(th)) {
                            th.printStackTrace();
                        }
                    }
                    ac acVar = ac.this;
                    acVar.a(acVar.g, false);
                }
            }, appReportDelay);
            al.b("[init] Bugly initialization finished.", new Object[0]);
            return;
        }
        String appVersion = buglyStrategy.getAppVersion();
        if (!TextUtils.isEmpty(appVersion)) {
            if (appVersion.length() > 100) {
                String strSubstring = appVersion.substring(0, 100);
                al.d("appVersion %s length is over limit %d substring to %s", appVersion, 100, strSubstring);
                appVersion = strSubstring;
            }
            aaVarA.o = appVersion;
            al.a("[param] Set App version: %s", buglyStrategy.getAppVersion());
        }
        try {
            if (buglyStrategy.isReplaceOldChannel()) {
                String appChannel = buglyStrategy.getAppChannel();
                if (!TextUtils.isEmpty(appChannel)) {
                    if (appChannel.length() > 100) {
                        String strSubstring2 = appChannel.substring(0, 100);
                        al.d("appChannel %s length is over limit %d substring to %s", appChannel, 100, strSubstring2);
                        appChannel = strSubstring2;
                    }
                    d.a(556, "app_channel", appChannel.getBytes(), false);
                    aaVarA.s = appChannel;
                }
            } else {
                Map<String, byte[]> mapA = d.a(556, (v) null);
                if (mapA != null && (bArr = mapA.get("app_channel")) != null) {
                    aaVarA.s = new String(bArr);
                }
            }
            al.a("[param] Set App channel: %s", aaVarA.s);
        } catch (Exception e2) {
            if (c) {
                e2.printStackTrace();
            }
        }
        String appPackageName = buglyStrategy.getAppPackageName();
        if (!TextUtils.isEmpty(appPackageName)) {
            if (appPackageName.length() > 100) {
                String strSubstring3 = appPackageName.substring(0, 100);
                al.d("appPackageName %s length is over limit %d substring to %s", appPackageName, 100, strSubstring3);
                appPackageName = strSubstring3;
            }
            aaVarA.c = appPackageName;
            al.a("[param] Set App package: %s", buglyStrategy.getAppPackageName());
        }
        String deviceID = buglyStrategy.getDeviceID();
        if (deviceID != null) {
            if (deviceID.length() > 100) {
                String strSubstring4 = deviceID.substring(0, 100);
                al.d("deviceId %s length is over limit %d substring to %s", deviceID, 100, strSubstring4);
                deviceID = strSubstring4;
            }
            aaVarA.a(deviceID);
            al.a("[param] Set device ID: %s", deviceID);
        }
        String deviceModel = buglyStrategy.getDeviceModel();
        if (deviceModel != null) {
            aaVarA.b(deviceModel);
            al.a("[param] Set device model: %s", deviceModel);
        }
        aaVarA.f = buglyStrategy.isUploadProcess();
        ao.b = buglyStrategy.isBuglyLogUpload();
        for (i = 0; i < b.size(); i++) {
            try {
                if (uVarA.b(b.get(i).id)) {
                    b.get(i).init(contextA, z, buglyStrategy);
                }
            } catch (Throwable th) {
                if (!al.a(th)) {
                    th.printStackTrace();
                }
            }
        }
        s.a(contextA, buglyStrategy);
        long appReportDelay = buglyStrategy == null ? buglyStrategy.getAppReportDelay() : 0L;
        final ac acVarA2 = ac.a();
        acVarA2.c.a(new Thread() {
            @Override
            public final void run() {
                try {
                    Map<String, byte[]> mapA2 = w.a().a(ac.a, (v) null);
                    if (mapA2 != null) {
                        byte[] bArr2 = mapA2.get("device");
                        byte[] bArr3 = mapA2.get("gateway");
                        if (bArr2 != null) {
                            aa.a(ac.this.h).d(new String(bArr2));
                        }
                        if (bArr3 != null) {
                            aa.a(ac.this.h).c(new String(bArr3));
                        }
                    }
                    ac.this.g = ac.d();
                    if (ac.this.g != null) {
                        if (ap.b(ac.i) || !ap.d(ac.i)) {
                            ac.this.g.q = StrategyBean.a;
                            ac.this.g.r = StrategyBean.b;
                        } else {
                            ac.this.g.q = ac.i;
                            ac.this.g.r = ac.i;
                        }
                    }
                } catch (Throwable th2) {
                    if (!al.a(th2)) {
                        th2.printStackTrace();
                    }
                }
                ac acVar = ac.this;
                acVar.a(acVar.g, false);
            }
        }, appReportDelay);
        al.b("[init] Bugly initialization finished.", new Object[0]);
        return;
    }

    public static synchronized void a(o oVar) {
        if (!b.contains(oVar)) {
            b.add(oVar);
        }
    }
}
