package com.kwad.sdk.utils;

import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import android.text.TextUtils;
import com.kwad.sdk.service.ServiceProvider;
import com.vivo.push.PushClientConstants;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

public final class InstalledAppInfoManager {

    public static class AppPackageInfo implements Serializable {
        private static final long serialVersionUID = -324393456884895874L;
        public String appName;
        public long firstInstallTime;
        public boolean isSystemApp;
        public long lastUpdateTime;
        public String packageName;
        public int reportMethod;
        public String versionName;
    }

    public static AppPackageInfo a(PackageInfo packageInfo, PackageManager packageManager) {
        AppPackageInfo appPackageInfo = new AppPackageInfo();
        appPackageInfo.packageName = packageInfo.packageName;
        if (packageInfo.applicationInfo != null) {
            appPackageInfo.isSystemApp = a(packageInfo.applicationInfo) || b(packageInfo.applicationInfo);
        }
        appPackageInfo.versionName = packageInfo.versionName;
        appPackageInfo.firstInstallTime = packageInfo.firstInstallTime;
        appPackageInfo.lastUpdateTime = packageInfo.lastUpdateTime;
        if (packageManager != null && packageInfo.applicationInfo != null && ak.ak(ServiceProvider.getContext(), packageInfo.packageName)) {
            try {
                appPackageInfo.appName = packageInfo.applicationInfo.loadLabel(packageManager).toString();
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            }
        }
        return appPackageInfo;
    }

    public static JSONObject a(AppPackageInfo appPackageInfo) {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, PushClientConstants.TAG_PKG_NAME, appPackageInfo.packageName);
        t.putValue(jSONObject, "system_app", appPackageInfo.isSystemApp ? 1 : 0);
        t.putValue(jSONObject, "appVersion", appPackageInfo.versionName);
        t.putValue(jSONObject, "firstInstallTime", appPackageInfo.firstInstallTime);
        t.putValue(jSONObject, "lastUpdateTime", appPackageInfo.lastUpdateTime);
        t.putValue(jSONObject, "reportMethod", appPackageInfo.reportMethod);
        t.putValue(jSONObject, "appName", appPackageInfo.appName);
        return jSONObject;
    }

    public static void a(final Context context, final com.kwad.sdk.g.a<JSONArray> aVar) {
        g.execute(new aw() {
            @Override
            public final void doTask() {
                aVar.accept(InstalledAppInfoManager.f(InstalledAppInfoManager.bV(context)));
            }
        });
    }

    private static boolean a(ApplicationInfo applicationInfo) {
        return (applicationInfo.flags & 1) != 0;
    }

    private static boolean b(ApplicationInfo applicationInfo) {
        return (applicationInfo.flags & 128) != 0;
    }

    public static Map<String, AppPackageInfo> bV(Context context) {
        HashMap map = new HashMap();
        if (context == null) {
            return map;
        }
        PackageManager packageManager = context.getPackageManager();
        if (at.Ji()) {
            List<String> listJj = at.Jj();
            if (listJj != null && !listJj.isEmpty()) {
                Iterator it = new ArrayList(listJj).iterator();
                while (it.hasNext()) {
                    try {
                        PackageInfo packageInfo = packageManager.getPackageInfo((String) it.next(), 0);
                        if (packageInfo != null) {
                            AppPackageInfo appPackageInfoA = a(packageInfo, packageManager);
                            appPackageInfoA.reportMethod = 3;
                            map.put(appPackageInfoA.packageName, appPackageInfoA);
                        }
                    } catch (Throwable unused) {
                    }
                }
            }
            return map;
        }
        com.kwad.sdk.service.a.f fVar = (com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class);
        if (fVar != null && o.Ia()) {
            try {
                List<String> listDk = be.dk(context);
                Intent intent = new Intent("android.intent.action.MAIN", (Uri) null);
                intent.addCategory("android.intent.category.LAUNCHER");
                for (ResolveInfo resolveInfo : context.getPackageManager().queryIntentActivities(intent, 32)) {
                    if (resolveInfo != null && resolveInfo.activityInfo != null && !TextUtils.isEmpty(resolveInfo.activityInfo.packageName)) {
                        String str = resolveInfo.activityInfo.packageName;
                        if (listDk != null && !listDk.isEmpty()) {
                            listDk.remove(str);
                        }
                        PackageInfo packageInfo2 = packageManager.getPackageInfo(str, 0);
                        if (packageInfo2 != null) {
                            AppPackageInfo appPackageInfoA2 = a(packageInfo2, packageManager);
                            appPackageInfoA2.reportMethod = 1;
                            map.put(appPackageInfoA2.packageName, appPackageInfoA2);
                        }
                    }
                }
                if (listDk != null && !listDk.isEmpty()) {
                    Iterator<String> it2 = listDk.iterator();
                    while (it2.hasNext()) {
                        try {
                            PackageInfo packageInfo3 = packageManager.getPackageInfo(it2.next(), 0);
                            if (packageInfo3 != null) {
                                AppPackageInfo appPackageInfoA3 = a(packageInfo3, packageManager);
                                appPackageInfoA3.reportMethod = 2;
                                map.put(appPackageInfoA3.packageName, appPackageInfoA3);
                            }
                        } catch (Throwable unused2) {
                        }
                    }
                }
            } catch (Exception unused3) {
            }
            map.putAll(d(context, fVar.xA()));
        }
        return map;
    }

    public static JSONArray[] c(Context context, List<String> list) {
        JSONArray[] jSONArrayArr = new JSONArray[2];
        com.kwad.sdk.service.a.f fVar = (com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class);
        if (context == null || list == null || list.isEmpty() || fVar == null || !o.Ia()) {
            return jSONArrayArr;
        }
        HashMap map = new HashMap();
        HashMap map2 = new HashMap();
        for (String str : list) {
            try {
                PackageManager packageManager = context.getPackageManager();
                PackageInfo packageInfo = packageManager.getPackageInfo(str, 0);
                if (packageInfo != null) {
                    AppPackageInfo appPackageInfoA = a(packageInfo, packageManager);
                    map.put(appPackageInfoA.packageName, appPackageInfoA);
                } else {
                    AppPackageInfo appPackageInfo = new AppPackageInfo();
                    appPackageInfo.packageName = str;
                    map2.put(appPackageInfo.packageName, appPackageInfo);
                }
            } catch (Exception unused) {
                AppPackageInfo appPackageInfo2 = new AppPackageInfo();
                appPackageInfo2.packageName = str;
                map2.put(appPackageInfo2.packageName, appPackageInfo2);
            }
        }
        jSONArrayArr[0] = f(map);
        jSONArrayArr[1] = f(map2);
        return jSONArrayArr;
    }

    private static Map<String, AppPackageInfo> d(Context context, List<String> list) {
        HashMap map = new HashMap();
        if (context != null && list != null) {
            for (String str : list) {
                try {
                    PackageManager packageManager = context.getPackageManager();
                    PackageInfo packageInfo = packageManager.getPackageInfo(str, 0);
                    if (packageInfo != null) {
                        AppPackageInfo appPackageInfoA = a(packageInfo, packageManager);
                        map.put(appPackageInfoA.packageName, appPackageInfoA);
                    }
                } catch (Exception unused) {
                }
            }
        }
        return map;
    }

    public static JSONArray f(Map<String, AppPackageInfo> map) {
        JSONArray jSONArray = new JSONArray();
        try {
            Iterator<String> it = map.keySet().iterator();
            while (it.hasNext()) {
                AppPackageInfo appPackageInfo = map.get(it.next());
                if (appPackageInfo != null && !TextUtils.isEmpty(appPackageInfo.packageName)) {
                    t.putValue(jSONArray, a(appPackageInfo));
                }
            }
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
        return jSONArray;
    }
}
