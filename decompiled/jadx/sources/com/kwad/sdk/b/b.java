package com.kwad.sdk.b;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.text.TextUtils;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.InstalledAppInfoManager;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public final class b {
    private static final Map<String, String> ajA = new HashMap();
    private final AtomicBoolean ajB;
    private final AtomicBoolean ajC;
    private final BroadcastReceiver ajD;
    private final List<com.kwad.sdk.b.a> mListeners;

    static class a {
        private static final b ajF = new b(0);
    }

    private b() {
        this.ajB = new AtomicBoolean();
        this.ajC = new AtomicBoolean();
        this.mListeners = new CopyOnWriteArrayList();
        this.ajD = new BroadcastReceiver() { // from class: com.kwad.sdk.b.b.1
            @Override // android.content.BroadcastReceiver
            public final void onReceive(Context context, Intent intent) {
                Uri data;
                if (intent == null) {
                    return;
                }
                try {
                    String action = intent.getAction();
                    if (TextUtils.isEmpty(action) || (data = intent.getData()) == null) {
                        return;
                    }
                    String schemeSpecificPart = data.getSchemeSpecificPart();
                    if (TextUtils.isEmpty(schemeSpecificPart)) {
                        return;
                    }
                    if (TextUtils.equals("android.intent.action.PACKAGE_ADDED", action)) {
                        b.this.w(context, schemeSpecificPart);
                    } else if (TextUtils.equals("android.intent.action.PACKAGE_REMOVED", action)) {
                        b.this.ce(schemeSpecificPart);
                    }
                } catch (Throwable th) {
                    c.printStackTrace(th);
                }
            }
        };
    }

    /* synthetic */ b(byte b) {
        this();
    }

    private synchronized void aF(Context context) {
        if (this.ajB.get()) {
            return;
        }
        y(context, "com.smile.gifmaker");
        y(context, "com.kuaishou.nebula");
        y(context, "com.tencent.mm");
        this.ajB.set(true);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void ce(String str) {
        c.d("AppInstallManager", "unInstallApp packageName: " + str);
        ci(str);
        cf(str);
        ch(str);
    }

    private static void cf(String str) {
        try {
            InstalledAppInfoManager.AppPackageInfo appPackageInfo = new InstalledAppInfoManager.AppPackageInfo();
            appPackageInfo.packageName = str;
            ((com.kwad.sdk.service.a.b) ServiceProvider.get(com.kwad.sdk.service.a.b.class)).e(InstalledAppInfoManager.a(appPackageInfo), 2);
        } catch (Throwable th) {
            c.printStackTrace(th);
        }
    }

    private void cg(String str) {
        Iterator<com.kwad.sdk.b.a> it = this.mListeners.iterator();
        while (it.hasNext()) {
            try {
                it.next().S(str);
            } catch (Throwable th) {
                c.printStackTrace(th);
            }
        }
    }

    private void ch(String str) {
        Iterator<com.kwad.sdk.b.a> it = this.mListeners.iterator();
        while (it.hasNext()) {
            it.next();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0034  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static void ci(java.lang.String r7) {
        /*
            int r0 = r7.hashCode()
            r1 = -973170826(0xffffffffc5fe9776, float:-8146.9326)
            java.lang.String r2 = "com.smile.gifmaker"
            java.lang.String r3 = "com.kuaishou.nebula"
            java.lang.String r4 = "com.tencent.mm"
            r5 = 2
            r6 = 1
            if (r0 == r1) goto L2c
            r1 = 473713875(0x1c3c4cd3, float:6.2303275E-22)
            if (r0 == r1) goto L24
            r1 = 1659293491(0x62e6cf33, float:2.1288407E21)
            if (r0 == r1) goto L1c
            goto L34
        L1c:
            boolean r7 = r7.equals(r2)
            if (r7 == 0) goto L34
            r7 = 0
            goto L35
        L24:
            boolean r7 = r7.equals(r3)
            if (r7 == 0) goto L34
            r7 = r6
            goto L35
        L2c:
            boolean r7 = r7.equals(r4)
            if (r7 == 0) goto L34
            r7 = r5
            goto L35
        L34:
            r7 = -1
        L35:
            java.lang.String r0 = ""
            if (r7 == 0) goto L4a
            if (r7 == r6) goto L44
            if (r7 == r5) goto L3e
            goto L43
        L3e:
            java.util.Map<java.lang.String, java.lang.String> r7 = com.kwad.sdk.b.b.ajA
            r7.put(r4, r0)
        L43:
            return
        L44:
            java.util.Map<java.lang.String, java.lang.String> r7 = com.kwad.sdk.b.b.ajA
            r7.put(r3, r0)
            return
        L4a:
            java.util.Map<java.lang.String, java.lang.String> r7 = com.kwad.sdk.b.b.ajA
            r7.put(r2, r0)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.b.b.ci(java.lang.String):void");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void w(Context context, String str) {
        c.d("AppInstallManager", "installApp packageName: " + str);
        y(context, str);
        x(context, str);
        cg(str);
    }

    private static void x(Context context, String str) {
        try {
            PackageManager packageManager = context.getPackageManager();
            PackageInfo packageInfo = packageManager.getPackageInfo(str, 0);
            if (packageInfo != null) {
                ((com.kwad.sdk.service.a.b) ServiceProvider.get(com.kwad.sdk.service.a.b.class)).e(InstalledAppInfoManager.a(InstalledAppInfoManager.a(packageInfo, packageManager)), 1);
            }
        } catch (Throwable th) {
            c.printStackTrace(th);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0034  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static void y(android.content.Context r7, java.lang.String r8) {
        /*
            int r0 = r8.hashCode()
            r1 = -973170826(0xffffffffc5fe9776, float:-8146.9326)
            r2 = 2
            r3 = 1
            java.lang.String r4 = "com.smile.gifmaker"
            java.lang.String r5 = "com.kuaishou.nebula"
            java.lang.String r6 = "com.tencent.mm"
            if (r0 == r1) goto L2c
            r1 = 473713875(0x1c3c4cd3, float:6.2303275E-22)
            if (r0 == r1) goto L24
            r1 = 1659293491(0x62e6cf33, float:2.1288407E21)
            if (r0 == r1) goto L1c
            goto L34
        L1c:
            boolean r8 = r8.equals(r4)
            if (r8 == 0) goto L34
            r8 = 0
            goto L35
        L24:
            boolean r8 = r8.equals(r5)
            if (r8 == 0) goto L34
            r8 = r3
            goto L35
        L2c:
            boolean r8 = r8.equals(r6)
            if (r8 == 0) goto L34
            r8 = r2
            goto L35
        L34:
            r8 = -1
        L35:
            if (r8 == 0) goto L50
            if (r8 == r3) goto L46
            if (r8 == r2) goto L3c
            goto L45
        L3c:
            java.util.Map<java.lang.String, java.lang.String> r8 = com.kwad.sdk.b.b.ajA
            java.lang.String r7 = com.kwad.sdk.utils.k.J(r7, r6)
            r8.put(r6, r7)
        L45:
            return
        L46:
            java.util.Map<java.lang.String, java.lang.String> r8 = com.kwad.sdk.b.b.ajA
            java.lang.String r7 = com.kwad.sdk.utils.k.J(r7, r5)
            r8.put(r5, r7)
            return
        L50:
            java.util.Map<java.lang.String, java.lang.String> r8 = com.kwad.sdk.b.b.ajA
            java.lang.String r7 = com.kwad.sdk.utils.k.J(r7, r4)
            r8.put(r4, r7)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.b.b.y(android.content.Context, java.lang.String):void");
    }

    public static b yB() {
        return a.ajF;
    }

    public final void a(com.kwad.sdk.b.a aVar) {
        if (aVar == null) {
            return;
        }
        checkInit();
        this.mListeners.add(aVar);
    }

    public final void b(com.kwad.sdk.b.a aVar) {
        if (aVar == null) {
            return;
        }
        checkInit();
        this.mListeners.remove(aVar);
    }

    public final synchronized void checkInit() {
        try {
            if (this.ajC.get()) {
                return;
            }
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("android.intent.action.PACKAGE_ADDED");
            intentFilter.addAction("android.intent.action.PACKAGE_REMOVED");
            intentFilter.addDataScheme("package");
            ServiceProvider.HD().registerReceiver(this.ajD, intentFilter);
            this.ajC.set(true);
        } catch (Throwable th) {
            c.printStackTraceOnly(th);
        }
    }

    public final String getVersion(Context context, String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        aF(context);
        return ajA.get(str);
    }
}
