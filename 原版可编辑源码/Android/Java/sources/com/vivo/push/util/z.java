package com.vivo.push.util;

import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.ApplicationInfo;
import android.content.pm.ComponentInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.content.pm.ServiceInfo;
import android.database.Cursor;
import android.os.Bundle;
import android.text.TextUtils;
import com.sigmob.sdk.base.mta.PointCategory;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import java.security.PublicKey;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public final class z {
    private static String[] a = {"com.vivo.push.sdk.RegistrationReceiver", "com.vivo.push.sdk.service.PushService", "com.vivo.push.sdk.service.CommonJobService"};
    private static String[] b = {com.kuaishou.weapon.p0.g.a, "android.permission.READ_PHONE_STATE", com.kuaishou.weapon.p0.g.b, "android.permission.WRITE_SETTINGS", "android.permission.VIBRATE", "android.permission.WRITE_EXTERNAL_STORAGE", com.kuaishou.weapon.p0.g.d, "android.permission.WAKE_LOCK", com.kuaishou.weapon.p0.g.f, "com.bbk.account.permission.READ_ACCOUNTINFO", "android.permission.AUTHENTICATE_ACCOUNTS", "android.permission.MOUNT_UNMOUNT_FILESYSTEMS", com.kuaishou.weapon.p0.g.e};
    private static String[] c = {"com.vivo.push.sdk.service.CommandService", "com.vivo.push.sdk.service.CommonJobService"};
    private static String[] d = {"com.vivo.push.sdk.RegistrationReceiver"};
    private static String[] e = new String[0];
    private static Map<String, Bundle> f = new ConcurrentHashMap();

    public static long a(Context context) {
        String strB = t.b(context);
        if (!TextUtils.isEmpty(strB)) {
            return a(context, strB);
        }
        p.a("Utility", "systemPushPkgName is null");
        return -1L;
    }

    public static long a(Context context, String str) {
        Object objA = a(context, str, "com.vivo.push.sdk_version");
        if (objA == null) {
            objA = a(context, str, "sdk_version");
        }
        if (objA == null) {
            p.a("Utility", "getSdkVersionCode sdk version is null");
            return -1L;
        }
        try {
            return Long.parseLong(objA.toString());
        } catch (Exception e2) {
            e2.printStackTrace();
            p.a("Utility", "getSdkVersionCode error ", e2);
            return -1L;
        }
    }

    /* JADX WARN: Type inference incomplete: some casts might be missing */
    public static Object a(Context context, String str, String str2) {
        Bundle bundle;
        Object obj;
        Bundle bundle2;
        Object obj2 = null;
        if (context == null || str2 == null || TextUtils.isEmpty(str)) {
            return null;
        }
        try {
            Object obj3 = (f == null || f.size() <= 0 || (bundle2 = f.get(str)) == null) ? null : bundle2.get(str2);
            if (obj3 != null) {
                return obj3;
            }
            try {
                ApplicationInfo applicationInfo = context.getPackageManager().getApplicationInfo(str, 128);
                bundle = applicationInfo != null ? applicationInfo.metaData : null;
                obj = bundle != null ? bundle.get(str2) : obj3;
            } catch (Exception e2) {
                e = e2;
                obj2 = obj3;
            }
            try {
                if (f.size() > 300) {
                    return obj;
                }
                f.put(str, bundle);
                return obj;
            } catch (Exception e3) {
                obj2 = obj;
                e = e3;
                p.a("Utility", "getMetaValue::".concat(String.valueOf(e)));
                return obj2;
            }
        } catch (Exception e4) {
            e = e4;
        }
    }

    public static Object a(String str, String str2) throws ClassNotFoundException {
        Class<?> cls = Class.forName(str);
        return cls.getField(str2).get(cls);
    }

    public static void a(Context context, Intent intent) {
        String strB = t.b(context);
        String stringExtra = intent.getStringExtra("client_pkgname");
        if (TextUtils.isEmpty(strB)) {
            p.a("Utility", "illegality abe adapter : push pkg is null");
            return;
        }
        if (TextUtils.isEmpty(stringExtra)) {
            p.a("Utility", "illegality abe adapter : src pkg is null");
            return;
        }
        if (strB.equals(context.getPackageName())) {
            p.a("Utility", "illegality abe adapter : abe is not pushservice");
            return;
        }
        if (strB.equals(stringExtra)) {
            p.a("Utility", "illegality abe adapter : pushPkg = " + strB + " ; srcPkg = " + stringExtra);
            return;
        }
        p.d("Utility", "proxy to core : intent pkg : " + intent.getPackage() + " ; src pkg : " + stringExtra + " ; push pkg : " + strB);
        intent.setPackage(strB);
        intent.setClassName(strB, "com.vivo.push.sdk.service.PushService");
        context.startService(intent);
    }

    private static void a(Context context, String str, String str2, boolean z) throws VivoPushException {
        Intent intent = new Intent(str);
        intent.setPackage(context.getPackageName());
        try {
            PackageManager packageManager = context.getPackageManager();
            if (packageManager == null) {
                throw new VivoPushException("localPackageManager is null");
            }
            if (z) {
                List<ResolveInfo> listQueryBroadcastReceivers = packageManager.queryBroadcastReceivers(intent, 576);
                if (listQueryBroadcastReceivers == null || listQueryBroadcastReceivers.size() <= 0) {
                    throw new VivoPushException("checkModule " + intent + " has no receivers");
                }
                Iterator<ResolveInfo> it = listQueryBroadcastReceivers.iterator();
                while (it.hasNext()) {
                    if (str2.equals(it.next().activityInfo.name)) {
                        return;
                    }
                }
                throw new VivoPushException(str2 + " is missing");
            }
            List<ResolveInfo> listQueryIntentServices = packageManager.queryIntentServices(intent, 576);
            if (listQueryIntentServices == null || listQueryIntentServices.size() <= 0) {
                throw new VivoPushException("checkModule " + intent + " has no services");
            }
            for (ResolveInfo resolveInfo : listQueryIntentServices) {
                if (str2.equals(resolveInfo.serviceInfo.name)) {
                    if (resolveInfo.serviceInfo.exported) {
                        return;
                    }
                    throw new VivoPushException(resolveInfo.serviceInfo.name + " exported is false");
                }
            }
            throw new VivoPushException(str2 + " is missing");
        } catch (Exception e2) {
            p.a("Utility", "error  " + e2.getMessage());
            throw new VivoPushException("checkModule error" + e2.getMessage());
        }
    }

    private static void a(ComponentInfo componentInfo, String str) throws VivoPushException {
        if (componentInfo.applicationInfo.packageName.equals(str)) {
            return;
        }
        for (String str2 : a) {
            if (str2.equals(componentInfo.name) && !componentInfo.processName.contains(":pushservice")) {
                throw new VivoPushException("module : " + componentInfo.name + " process :" + componentInfo.processName + "  check process fail");
            }
        }
    }

    private static void a(String str, ComponentInfo[] componentInfoArr, String str2) throws VivoPushException {
        for (ComponentInfo componentInfo : componentInfoArr) {
            if (str.equals(componentInfo.name)) {
                if (componentInfo.enabled) {
                    a(componentInfo, str2);
                    return;
                }
                throw new VivoPushException(componentInfo.name + " module Push-SDK need is illegitmacy !");
            }
        }
        throw new VivoPushException(str + " module Push-SDK need is not exist");
    }

    public static String b(Context context, String str) {
        Object objA = a(context, str, "com.vivo.push.app_id");
        if (objA != null) {
            return objA.toString();
        }
        Object objA2 = a(context, str, "app_id");
        return objA2 != null ? objA2.toString() : "";
    }

    public static String b(String str, String str2) {
        String str3;
        try {
            str3 = (String) Class.forName("android.os.SystemProperties").getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(null, str);
        } catch (Exception e2) {
            e2.printStackTrace();
            str3 = str2;
        }
        return (str3 == null || str3.length() == 0) ? str2 : str3;
    }

    /* JADX WARN: Code restructure failed: missing block: B:28:0x00c7, code lost:
    
        r10 = r10 + 1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void b(Context context) throws VivoPushException {
        String string;
        p.d("Utility", "check PushService AndroidManifest declearation !");
        String strB = t.b(context);
        boolean zD = t.d(context, context.getPackageName());
        boolean zE = t.e(context, context.getPackageName());
        boolean zC = t.c(context, context.getPackageName());
        if (zE) {
            a = new String[]{"com.vivo.push.sdk.RegistrationReceiver", "com.vivo.push.sdk.service.PushService", "com.vivo.push.sdk.service.CommonJobService"};
            b = new String[]{com.kuaishou.weapon.p0.g.a, "android.permission.READ_PHONE_STATE", com.kuaishou.weapon.p0.g.b, "android.permission.WRITE_SETTINGS", "android.permission.VIBRATE", "android.permission.WRITE_EXTERNAL_STORAGE", com.kuaishou.weapon.p0.g.d, "android.permission.WAKE_LOCK", com.kuaishou.weapon.p0.g.f, "com.bbk.account.permission.READ_ACCOUNTINFO", "android.permission.AUTHENTICATE_ACCOUNTS", "android.permission.MOUNT_UNMOUNT_FILESYSTEMS", com.kuaishou.weapon.p0.g.e};
            c = new String[]{"com.vivo.push.sdk.service.CommandService", "com.vivo.push.sdk.service.CommonJobService"};
            d = new String[]{"com.vivo.push.sdk.RegistrationReceiver"};
        } else {
            if (!zC && !zD) {
                throw new VivoPushException("AndroidManifest.xml中receiver配置项错误，详见接入文档");
            }
            if (zC) {
                c = new String[]{"com.vivo.push.sdk.service.CommandClientService"};
            } else {
                c = new String[]{"com.vivo.push.sdk.service.CommandService"};
            }
            d = new String[0];
            a = new String[0];
            if (zD) {
                b = new String[]{com.kuaishou.weapon.p0.g.a, "android.permission.WRITE_SETTINGS"};
            } else {
                b = new String[]{com.kuaishou.weapon.p0.g.a};
            }
        }
        try {
            PackageManager packageManager = context.getPackageManager();
            if (packageManager == null) {
                throw new VivoPushException("localPackageManager is null");
            }
            String[] strArr = packageManager.getPackageInfo(context.getPackageName(), 4096).requestedPermissions;
            if (strArr == null) {
                throw new VivoPushException("Permissions is null!");
            }
            String[] strArr2 = b;
            int length = strArr2.length;
            int i = 0;
            while (i < length) {
                String str = strArr2[i];
                for (String str2 : strArr) {
                    int i2 = str.equals(str2) ? 0 : i2 + 1;
                }
                throw new VivoPushException("permission : " + str + "  check fail : " + Arrays.toString(strArr));
            }
            f(context, strB);
            d(context, strB);
            e(context, strB);
            try {
                if (a(context, context.getPackageName(), "local_iv") == null) {
                    throw new VivoPushException("AndroidManifest.xml中未配置".concat("local_iv"));
                }
                String packageName = context.getPackageName();
                Object objA = a(context, packageName, "com.vivo.push.api_key");
                if (objA != null) {
                    string = objA.toString();
                } else {
                    Object objA2 = a(context, packageName, "api_key");
                    string = objA2 != null ? objA2.toString() : "";
                }
                if (TextUtils.isEmpty(string)) {
                    throw new VivoPushException("com.vivo.push.api_key is null");
                }
                if (TextUtils.isEmpty(b(context, context.getPackageName()))) {
                    throw new VivoPushException("com.vivo.push.app_id is null");
                }
                if ((zD || zE) && a(context, context.getPackageName()) == -1) {
                    throw new VivoPushException("sdkversion is null");
                }
                if (zE) {
                    a(context, "com.vivo.pushservice.action.METHOD", "com.vivo.push.sdk.RegistrationReceiver", true);
                    a(context, "com.vivo.pushservice.action.PUSH_SERVICE", "com.vivo.push.sdk.service.PushService", false);
                }
            } catch (Exception e2) {
                throw new VivoPushException("getMetaValue error " + e2.getMessage());
            }
        } catch (Exception e3) {
            throw new VivoPushException(e3.getMessage());
        }
    }

    public static boolean b(Context context, String str, String str2) {
        Cursor cursor = null;
        try {
            try {
                try {
                } catch (Throwable th) {
                    if (0 != 0) {
                        try {
                            cursor.close();
                        } catch (Exception e2) {
                            p.a("Utility", "close", e2);
                        }
                    }
                    throw th;
                }
            } catch (Exception e3) {
                p.a("Utility", "close", e3);
            }
        } catch (Exception e4) {
            p.a("Utility", "isOverdue", e4);
            if (0 != 0) {
                cursor.close();
            }
        }
        if (context == null) {
            p.a("Utility", com.tkay.expressad.foundation.g.b.b.a);
            return false;
        }
        Cursor cursorQuery = context.getContentResolver().query(com.vivo.push.p.c, null, "appPkgName = ? and regId = ? sdkVersion = ? ", new String[]{str, str2, "323"}, null);
        if (cursorQuery == null) {
            p.a("Utility", "cursor is null");
            if (cursorQuery != null) {
                try {
                    cursorQuery.close();
                } catch (Exception e5) {
                    p.a("Utility", "close", e5);
                }
            }
            return false;
        }
        if (!cursorQuery.moveToFirst()) {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            return false;
        }
        boolean z = Boolean.parseBoolean(cursorQuery.getString(cursorQuery.getColumnIndex("clientState")));
        if (cursorQuery != null) {
            try {
                cursorQuery.close();
            } catch (Exception e6) {
                p.a("Utility", "close", e6);
            }
        }
        return z;
    }

    public static String c(Context context, String str) {
        Object objA = a(context, str, "verification_status");
        return objA != null ? objA.toString() : "";
    }

    public static PublicKey c(Context context) {
        Cursor cursorQuery = context.getContentResolver().query(com.vivo.push.p.a, null, null, null, null);
        if (cursorQuery == null) {
            return null;
        }
        while (cursorQuery.moveToNext()) {
            try {
                try {
                    if ("pushkey".equals(cursorQuery.getString(cursorQuery.getColumnIndex("name")))) {
                        String string = cursorQuery.getString(cursorQuery.getColumnIndex("value"));
                        p.d("Utility", "result key : ".concat(String.valueOf(string)));
                        return u.a(string);
                    }
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            } finally {
                try {
                    cursorQuery.close();
                } catch (Exception unused) {
                }
            }
        }
        try {
            cursorQuery.close();
        } catch (Exception unused2) {
        }
        return null;
    }

    private static void d(Context context, String str) throws VivoPushException {
        try {
            if (context.getPackageManager() == null) {
                throw new VivoPushException("localPackageManager is null");
            }
            ServiceInfo[] serviceInfoArr = context.getPackageManager().getPackageInfo(context.getPackageName(), 4).services;
            if (serviceInfoArr == null) {
                throw new VivoPushException("serviceInfos is null");
            }
            for (String str2 : c) {
                a(str2, serviceInfoArr, str);
            }
        } catch (Exception e2) {
            throw new VivoPushException("error " + e2.getMessage());
        }
    }

    public static boolean d(Context context) {
        Cursor cursor = null;
        try {
            try {
                try {
                } catch (Exception e2) {
                    p.a("Utility", "close", e2);
                }
            } catch (Throwable th) {
                if (0 != 0) {
                    try {
                        cursor.close();
                    } catch (Exception e3) {
                        p.a("Utility", "close", e3);
                    }
                }
                throw th;
            }
        } catch (Exception e4) {
            p.a("Utility", "isSupport", e4);
            if (0 != 0) {
                cursor.close();
            }
        }
        if (context == null) {
            p.a("Utility", com.tkay.expressad.foundation.g.b.b.a);
            return false;
        }
        String packageName = context.getPackageName();
        Cursor cursorQuery = context.getContentResolver().query(com.vivo.push.p.b, null, "pushVersion = ? and appPkgName = ? and appCode = ? ", new String[]{"323", packageName, String.valueOf(context.getPackageManager().getPackageInfo(packageName, 0).versionCode)}, null);
        if (cursorQuery == null) {
            p.a("Utility", "cursor is null");
            if (cursorQuery != null) {
                try {
                    cursorQuery.close();
                } catch (Exception e5) {
                    p.a("Utility", "close", e5);
                }
            }
            return false;
        }
        if (!cursorQuery.moveToFirst() || (cursorQuery.getInt(cursorQuery.getColumnIndex(PointCategory.PERMISSION)) & 1) == 0) {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            return false;
        }
        if (cursorQuery != null) {
            try {
                cursorQuery.close();
            } catch (Exception e6) {
                p.a("Utility", "close", e6);
            }
        }
        return true;
    }

    private static void e(Context context, String str) throws VivoPushException {
        if (e.length <= 0) {
            return;
        }
        try {
            if (context.getPackageManager() == null) {
                throw new VivoPushException("localPackageManager is null");
            }
            ActivityInfo[] activityInfoArr = context.getPackageManager().getPackageInfo(context.getPackageName(), 1).activities;
            if (activityInfoArr == null) {
                throw new VivoPushException("activityInfos is null");
            }
            for (String str2 : e) {
                a(str2, activityInfoArr, str);
            }
        } catch (Exception e2) {
            throw new VivoPushException("error " + e2.getMessage());
        }
    }

    private static void f(Context context, String str) throws VivoPushException {
        try {
            if (context.getPackageManager() == null) {
                throw new VivoPushException("localPackageManager is null");
            }
            ActivityInfo[] activityInfoArr = context.getPackageManager().getPackageInfo(context.getPackageName(), 2).receivers;
            if (activityInfoArr == null) {
                throw new VivoPushException("receivers is null");
            }
            for (String str2 : d) {
                a(str2, activityInfoArr, str);
            }
        } catch (Exception e2) {
            throw new VivoPushException(e2.getMessage());
        }
    }
}
