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
import android.text.TextUtils;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import kotlin.UByte;

/* JADX INFO: loaded from: classes4.dex */
public final class t {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Boolean f7953a;
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
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String b(android.content.Context r10) {
        /*
            java.lang.String r0 = "name"
            java.lang.String r1 = "close"
            java.lang.String r2 = "PushPackageUtils"
            java.lang.String r3 = com.vivo.push.util.t.b
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L11
            java.lang.String r10 = com.vivo.push.util.t.b
            return r10
        L11:
            r3 = 0
            android.content.ContentResolver r4 = r10.getContentResolver()     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            android.net.Uri r5 = com.vivo.push.p.f7933a     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r10 = r4.query(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            if (r10 != 0) goto L36
            java.lang.String r0 = "cursor is null"
            com.vivo.push.util.p.a(r2, r0)     // Catch: java.lang.Exception -> L32 java.lang.Throwable -> La1
            if (r10 == 0) goto L31
            r10.close()     // Catch: java.lang.Exception -> L2d
            goto L31
        L2d:
            r10 = move-exception
            com.vivo.push.util.p.a(r2, r1, r10)
        L31:
            return r3
        L32:
            r0 = move-exception
            r5 = r3
            goto La5
        L36:
            r4 = 0
            r5 = r3
        L38:
            boolean r6 = r10.moveToNext()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            if (r6 == 0) goto L76
            java.lang.String r6 = "pushPkgName"
            int r7 = r10.getColumnIndex(r0)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            java.lang.String r7 = r10.getString(r7)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            boolean r6 = r6.equals(r7)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            java.lang.String r7 = "value"
            if (r6 == 0) goto L59
            int r6 = r10.getColumnIndex(r7)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            java.lang.String r5 = r10.getString(r6)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            goto L38
        L59:
            java.lang.String r6 = "pushEnable"
            int r8 = r10.getColumnIndex(r0)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            java.lang.String r8 = r10.getString(r8)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            boolean r6 = r6.equals(r8)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            if (r6 == 0) goto L38
            int r4 = r10.getColumnIndex(r7)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            java.lang.String r4 = r10.getString(r4)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            boolean r4 = java.lang.Boolean.parseBoolean(r4)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            goto L38
        L76:
            com.vivo.push.util.t.b = r5     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La4
            if (r0 == 0) goto L89
            if (r10 == 0) goto L88
            r10.close()     // Catch: java.lang.Exception -> L84
            goto L88
        L84:
            r10 = move-exception
            com.vivo.push.util.p.a(r2, r1, r10)
        L88:
            return r3
        L89:
            if (r4 != 0) goto L96
            if (r10 == 0) goto L95
            r10.close()     // Catch: java.lang.Exception -> L91
            goto L95
        L91:
            r10 = move-exception
            com.vivo.push.util.p.a(r2, r1, r10)
        L95:
            return r3
        L96:
            if (r10 == 0) goto Lb5
            r10.close()     // Catch: java.lang.Exception -> L9c
            goto Lb5
        L9c:
            r10 = move-exception
            com.vivo.push.util.p.a(r2, r1, r10)
            goto Lb5
        La1:
            r0 = move-exception
            r3 = r10
            goto Lb6
        La4:
            r0 = move-exception
        La5:
            r3 = r10
            goto Lab
        La7:
            r0 = move-exception
            goto Lb6
        La9:
            r0 = move-exception
            r5 = r3
        Lab:
            java.lang.String r10 = "getSystemPush"
            com.vivo.push.util.p.a(r2, r10, r0)     // Catch: java.lang.Throwable -> La7
            if (r3 == 0) goto Lb5
            r3.close()     // Catch: java.lang.Exception -> L9c
        Lb5:
            return r5
        Lb6:
            if (r3 == 0) goto Lc0
            r3.close()     // Catch: java.lang.Exception -> Lbc
            goto Lc0
        Lbc:
            r10 = move-exception
            com.vivo.push.util.p.a(r2, r1, r10)
        Lc0:
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.vivo.push.util.t.b(android.content.Context):java.lang.String");
    }

    public static boolean c(Context context) {
        ProviderInfo providerInfoResolveContentProvider;
        Boolean bool = f7953a;
        if (bool != null) {
            return bool.booleanValue();
        }
        String str = null;
        if (context != null && !TextUtils.isEmpty("com.vivo.push.sdk.service.SystemPushConfig") && (providerInfoResolveContentProvider = context.getPackageManager().resolveContentProvider("com.vivo.push.sdk.service.SystemPushConfig", 128)) != null) {
            str = providerInfoResolveContentProvider.packageName;
        }
        Boolean boolValueOf = Boolean.valueOf("BCC35D4D3606F154F0402AB7634E8490C0B244C2675C3C6238986987024F0C02".equals(g(context, str)));
        f7953a = boolValueOf;
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
