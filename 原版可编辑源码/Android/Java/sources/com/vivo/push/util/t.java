package com.vivo.push.util;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ProviderInfo;
import android.content.pm.ResolveInfo;
import android.content.pm.Signature;
import android.database.Cursor;
import android.text.TextUtils;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import kotlin.UByte;

public final class t {
    private static Boolean a;
    private static String b;

    public static com.vivo.push.model.b a(Context context) {
        com.vivo.push.model.b bVarF;
        com.vivo.push.model.b bVarF2;
        String string;
        String str;
        StringBuilder sb;
        Context applicationContext = ContextDelegate.getContext(context).getApplicationContext();
        com.vivo.push.model.b bVarD = d(applicationContext);
        if (bVarD != null) {
            p.d("PushPackageUtils", "get system push info :".concat(String.valueOf(bVarD)));
            return bVarD;
        }
        List<String> listE = e(applicationContext);
        com.vivo.push.model.b bVarF3 = f(applicationContext, applicationContext.getPackageName());
        if (listE.size() <= 0) {
            if (bVarF3 != null && bVarF3.d()) {
                bVarD = bVarF3;
            }
            p.a("PushPackageUtils", "findAllPushPackages error: find no package!");
        } else {
            com.vivo.push.model.b bVar = null;
            String strA = y.b(applicationContext).a("com.vivo.push.cur_pkg", null);
            if (TextUtils.isEmpty(strA) || !a(applicationContext, strA, "com.vivo.pushservice.action.METHOD") || (bVarF = f(applicationContext, strA)) == null || !bVarF.d()) {
                bVarF = null;
            }
            if (bVarF3 == null || !bVarF3.d()) {
                bVarF3 = null;
            }
            if (bVarF == null) {
                bVarF = null;
            }
            if (bVarF3 == null || (bVarF != null && (!bVarF3.c() ? !(bVarF.c() || bVarF3.b() > bVarF.b()) : !(bVarF.c() && bVarF3.b() > bVarF.b())))) {
                bVarF3 = bVarF;
            }
            HashMap map = new HashMap();
            if (bVarF3 == null) {
                bVarF3 = null;
            } else if (bVarF3.c()) {
                bVar = bVarF3;
                bVarF3 = null;
            }
            int size = listE.size();
            for (int i = 0; i < size; i++) {
                String str2 = listE.get(i);
                if (!TextUtils.isEmpty(str2) && (bVarF2 = f(applicationContext, str2)) != null) {
                    map.put(str2, bVarF2);
                    if (bVarF2.d()) {
                        if (bVarF2.c()) {
                            if (bVar == null || bVarF2.b() > bVar.b()) {
                                bVar = bVarF2;
                            }
                        } else if (bVarF3 == null || bVarF2.b() > bVarF3.b()) {
                            bVarF3 = bVarF2;
                        }
                    }
                }
            }
            if (bVarF3 != null) {
                bVarD = bVarF3;
            } else {
                p.d("PushPackageUtils", "findSuitablePushPackage, all push app in balck list.");
                bVarD = bVar;
            }
        }
        if (bVarD != null) {
            if (bVarD.c()) {
                StringBuilder sb2 = new StringBuilder("查找最优包为:");
                sb2.append(bVarD.a());
                sb2.append("(");
                sb2.append(bVarD.b());
                str = ", Black)";
                sb2.append(", Black)");
                p.a(applicationContext, sb2.toString());
                sb = new StringBuilder("finSuitablePushPackage");
            } else {
                StringBuilder sb3 = new StringBuilder("查找最优包为:");
                sb3.append(bVarD.a());
                sb3.append("(");
                sb3.append(bVarD.b());
                str = ")";
                sb3.append(")");
                p.a(applicationContext, sb3.toString());
                sb = new StringBuilder("finSuitablePushPackage");
            }
            sb.append(bVarD.a());
            sb.append("(");
            sb.append(bVarD.b());
            sb.append(str);
            string = sb.toString();
        } else {
            p.b(applicationContext, "查找最优包为空!");
            string = "finSuitablePushPackage is null";
        }
        p.d("PushPackageUtils", string);
        return bVarD;
    }

    private static boolean a(Context context, long j) {
        com.vivo.push.cache.d dVarA = com.vivo.push.cache.b.a().a(context);
        if (dVarA != null) {
            return dVarA.isInBlackList(j);
        }
        return false;
    }

    public static boolean a(Context context, String str) {
        if (!TextUtils.isEmpty(str) && context != null) {
            Intent intent = new Intent("com.vivo.pushservice.action.PUSH_SERVICE");
            intent.setPackage(str);
            PackageManager packageManager = context.getPackageManager();
            List<ResolveInfo> listQueryIntentServices = packageManager.queryIntentServices(intent, 576);
            if (listQueryIntentServices != null && listQueryIntentServices.size() > 0) {
                int size = listQueryIntentServices.size();
                boolean z = false;
                for (int i = 0; i < size; i++) {
                    ResolveInfo resolveInfo = listQueryIntentServices.get(i);
                    if (resolveInfo != null && resolveInfo.serviceInfo != null) {
                        String str2 = resolveInfo.serviceInfo.name;
                        boolean z2 = resolveInfo.serviceInfo.exported;
                        if ("com.vivo.push.sdk.service.PushService".equals(str2) && z2) {
                            boolean z3 = resolveInfo.serviceInfo.enabled;
                            int componentEnabledSetting = packageManager.getComponentEnabledSetting(new ComponentName(str, "com.vivo.push.sdk.service.PushService"));
                            z = componentEnabledSetting == 1 || (componentEnabledSetting == 0 && z3);
                        }
                    }
                }
                return z;
            }
            p.a("PushPackageUtils", "isEnablePush error: can not find push service.");
        }
        return false;
    }

    private static boolean a(Context context, String str, String str2) {
        List<ResolveInfo> listQueryBroadcastReceivers;
        Intent intent = new Intent(str2);
        intent.setPackage(str);
        try {
            listQueryBroadcastReceivers = context.getPackageManager().queryBroadcastReceivers(intent, 576);
        } catch (Exception unused) {
            listQueryBroadcastReceivers = null;
        }
        return listQueryBroadcastReceivers != null && listQueryBroadcastReceivers.size() > 0;
    }

    public static int b(Context context, String str) {
        int i = a(context, str, "com.vivo.pushservice.action.RECEIVE") ? 0 : -1;
        if (a(context, str, "com.vivo.pushclient.action.RECEIVE")) {
            return 1;
        }
        return i;
    }

    /* JADX WARN: Removed duplicated region for block: B:58:0x00b2 A[Catch: Exception -> 0x009c, TRY_ENTER, TRY_LEAVE, TryCatch #3 {Exception -> 0x009c, blocks: (B:44:0x0098, B:58:0x00b2), top: B:72:0x0012 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String b(Context context) {
        String string;
        Cursor cursorQuery;
        if (!TextUtils.isEmpty(b)) {
            return b;
        }
        Cursor cursor = null;
        try {
            try {
                try {
                    cursorQuery = context.getContentResolver().query(com.vivo.push.p.a, null, null, null, null);
                    try {
                    } catch (Throwable th) {
                        th = th;
                        cursor = cursorQuery;
                        if (cursor != null) {
                            try {
                                cursor.close();
                            } catch (Exception e) {
                                p.a("PushPackageUtils", "close", e);
                            }
                        }
                        throw th;
                    }
                } catch (Exception e2) {
                    p.a("PushPackageUtils", "close", e2);
                }
            } catch (Exception e3) {
                e = e3;
                string = null;
            }
            if (cursorQuery != null) {
                boolean z = false;
                string = null;
                while (cursorQuery.moveToNext()) {
                    try {
                        if ("pushPkgName".equals(cursorQuery.getString(cursorQuery.getColumnIndex("name")))) {
                            string = cursorQuery.getString(cursorQuery.getColumnIndex("value"));
                        } else if ("pushEnable".equals(cursorQuery.getString(cursorQuery.getColumnIndex("name")))) {
                            z = Boolean.parseBoolean(cursorQuery.getString(cursorQuery.getColumnIndex("value")));
                        }
                    } catch (Exception e4) {
                        e = e4;
                        cursor = cursorQuery;
                        p.a("PushPackageUtils", "getSystemPush", e);
                        if (cursor != null) {
                        }
                        return string;
                    }
                }
                b = string;
                if (TextUtils.isEmpty(string)) {
                    if (cursorQuery != null) {
                        try {
                            cursorQuery.close();
                        } catch (Exception e5) {
                            p.a("PushPackageUtils", "close", e5);
                        }
                    }
                    return null;
                }
                if (z) {
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return string;
                }
                if (cursorQuery != null) {
                    try {
                        cursorQuery.close();
                    } catch (Exception e6) {
                        p.a("PushPackageUtils", "close", e6);
                    }
                }
                return null;
            }
            try {
                p.a("PushPackageUtils", "cursor is null");
                if (cursorQuery != null) {
                    try {
                        cursorQuery.close();
                    } catch (Exception e7) {
                        p.a("PushPackageUtils", "close", e7);
                    }
                }
                return null;
            } catch (Exception e8) {
                e = e8;
                string = null;
            }
            cursor = cursorQuery;
            p.a("PushPackageUtils", "getSystemPush", e);
            if (cursor != null) {
                cursor.close();
            }
            return string;
        } catch (Throwable th2) {
            th = th2;
        }
    }

    public static boolean c(Context context) {
        ProviderInfo providerInfoResolveContentProvider;
        Boolean bool = a;
        if (bool != null) {
            return bool.booleanValue();
        }
        String str = null;
        if (context != null && !TextUtils.isEmpty("com.vivo.push.sdk.service.SystemPushConfig") && (providerInfoResolveContentProvider = context.getPackageManager().resolveContentProvider("com.vivo.push.sdk.service.SystemPushConfig", 128)) != null) {
            str = providerInfoResolveContentProvider.packageName;
        }
        Boolean boolValueOf = Boolean.valueOf("BCC35D4D3606F154F0402AB7634E8490C0B244C2675C3C6238986987024F0C02".equals(g(context, str)));
        a = boolValueOf;
        return boolValueOf.booleanValue();
    }

    public static boolean c(Context context, String str) {
        return a(context, str, "com.vivo.pushclient.action.RECEIVE");
    }

    private static com.vivo.push.model.b d(Context context) {
        String strB = b(context);
        ApplicationInfo applicationInfo = null;
        if (TextUtils.isEmpty(strB)) {
            return null;
        }
        com.vivo.push.model.b bVar = new com.vivo.push.model.b(strB);
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(strB, 128);
            if (packageInfo != null) {
                bVar.a(packageInfo.versionCode);
                bVar.a(packageInfo.versionName);
                applicationInfo = packageInfo.applicationInfo;
            }
            if (applicationInfo != null) {
                bVar.a(z.a(context, strB));
            }
            bVar.a(a(context, bVar.b()));
            bVar.b(a(context, strB));
            return bVar;
        } catch (Exception e) {
            e.printStackTrace();
            p.b("PushPackageUtils", "PackageManager NameNotFoundException is null", e);
            return null;
        }
    }

    public static boolean d(Context context, String str) {
        return a(context, str, "com.vivo.pushservice.action.RECEIVE");
    }

    private static List<String> e(Context context) {
        List<ResolveInfo> listQueryIntentServices;
        g.a("findAllCoreClientPush");
        ArrayList arrayList = new ArrayList();
        try {
            listQueryIntentServices = context.getPackageManager().queryIntentServices(new Intent("com.vivo.pushservice.action.PUSH_SERVICE"), 576);
        } catch (Exception unused) {
            listQueryIntentServices = null;
        }
        if (listQueryIntentServices != null && listQueryIntentServices.size() > 0) {
            int size = listQueryIntentServices.size();
            for (int i = 0; i < size; i++) {
                ResolveInfo resolveInfo = listQueryIntentServices.get(i);
                if (resolveInfo != null) {
                    String str = resolveInfo.serviceInfo.packageName;
                    if (!TextUtils.isEmpty(str)) {
                        arrayList.add(str);
                    }
                }
            }
        }
        if (arrayList.size() <= 0) {
            p.d("PushPackageUtils", "get all push packages is null");
        }
        return arrayList;
    }

    public static boolean e(Context context, String str) {
        return a(context, str, "com.vivo.pushservice.action.METHOD");
    }

    private static com.vivo.push.model.b f(Context context, String str) {
        ApplicationInfo applicationInfo;
        if (!TextUtils.isEmpty(str)) {
            if (a(context, str, "com.vivo.pushservice.action.METHOD") || a(context, str, "com.vivo.pushservice.action.RECEIVE")) {
                com.vivo.push.model.b bVar = new com.vivo.push.model.b(str);
                try {
                    PackageInfo packageInfo = context.getPackageManager().getPackageInfo(str, 128);
                    if (packageInfo != null) {
                        bVar.a(packageInfo.versionCode);
                        bVar.a(packageInfo.versionName);
                        applicationInfo = packageInfo.applicationInfo;
                    } else {
                        applicationInfo = null;
                    }
                    if (applicationInfo != null) {
                        bVar.a(z.a(context, str));
                    }
                    bVar.b(a(context, str));
                    bVar.a(a(context, bVar.b()));
                    return bVar;
                } catch (Exception e) {
                    p.a("PushPackageUtils", "getPushPackageInfo exception: ", e);
                }
            }
        }
        return null;
    }

    private static String g(Context context, String str) {
        if (!TextUtils.isEmpty(str) && context != null) {
            try {
                Signature[] signatureArr = context.getPackageManager().getPackageInfo(str, 64).signatures;
                byte[] bArrDigest = MessageDigest.getInstance("SHA256").digest(signatureArr[0].toByteArray());
                StringBuffer stringBuffer = new StringBuffer();
                for (byte b2 : bArrDigest) {
                    String upperCase = Integer.toHexString(b2 & UByte.MAX_VALUE).toUpperCase(Locale.US);
                    if (upperCase.length() == 1) {
                        stringBuffer.append("0");
                    }
                    stringBuffer.append(upperCase);
                }
                return stringBuffer.toString();
            } catch (Exception e) {
                p.a("PushPackageUtils", " getSignatureSHA exception ".concat(String.valueOf(e)));
            }
        }
        return null;
    }
}
