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
import com.kwad.sdk.utils.k;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

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
        this.ajD = new BroadcastReceiver() {
            @Override
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

    b(byte b) {
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

    private void ce(String str) {
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
    */
    private static void ci(String str) {
        byte b;
        int iHashCode = str.hashCode();
        if (iHashCode != -973170826) {
            if (iHashCode != 473713875) {
                b = (iHashCode == 1659293491 && str.equals("com.smile.gifmaker")) ? (byte) 0 : (byte) -1;
            } else if (str.equals("com.kuaishou.nebula")) {
                b = 1;
            }
        } else if (str.equals("com.tencent.mm")) {
            b = 2;
        }
        if (b == 0) {
            ajA.put("com.smile.gifmaker", "");
        } else if (b == 1) {
            ajA.put("com.kuaishou.nebula", "");
        } else {
            if (b != 2) {
                return;
            }
            ajA.put("com.tencent.mm", "");
        }
    }

    private void w(Context context, String str) {
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
    */
    private static void y(Context context, String str) {
        byte b;
        int iHashCode = str.hashCode();
        if (iHashCode != -973170826) {
            if (iHashCode != 473713875) {
                b = (iHashCode == 1659293491 && str.equals("com.smile.gifmaker")) ? (byte) 0 : (byte) -1;
            } else if (str.equals("com.kuaishou.nebula")) {
                b = 1;
            }
        } else if (str.equals("com.tencent.mm")) {
            b = 2;
        }
        if (b == 0) {
            ajA.put("com.smile.gifmaker", k.J(context, "com.smile.gifmaker"));
        } else if (b == 1) {
            ajA.put("com.kuaishou.nebula", k.J(context, "com.kuaishou.nebula"));
        } else {
            if (b != 2) {
                return;
            }
            ajA.put("com.tencent.mm", k.J(context, "com.tencent.mm"));
        }
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
