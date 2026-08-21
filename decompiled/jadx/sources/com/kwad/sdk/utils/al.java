package com.kwad.sdk.utils;

import android.app.AppOpsManager;
import android.content.Context;
import android.os.Binder;
import android.os.Build;
import android.os.Process;
import android.provider.Settings;
import com.igexin.assist.sdk.AssistPushConsts;
import java.lang.reflect.Method;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

/* JADX INFO: loaded from: classes2.dex */
public final class al {
    private static Map<String, Integer> aIT;
    private static Set<String> aIU;
    private static Method aIV;

    static {
        HashSet hashSet = new HashSet();
        aIU = hashSet;
        hashSet.add("android.permission.REQUEST_INSTALL_PACKAGES");
        aIU.add("android.permission.WRITE_SETTINGS");
        aIU.add("android.permission.SYSTEM_ALERT_WINDOW");
    }

    public static int ao(Context context, String str) {
        int iAp;
        if (aIT == null) {
            h(aj.cp(context));
        }
        if (aIU.contains(str) && (iAp = ap(context, str)) != -2) {
            return iAp;
        }
        int iAq = aq(context, str);
        if (iAq != -2) {
            return iAq;
        }
        try {
            return context.checkPermission(str, Process.myPid(), Process.myUid());
        } catch (Throwable unused) {
            return iAq;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0036  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static int ap(android.content.Context r6, java.lang.String r7) {
        /*
            int r0 = r7.hashCode()
            r1 = -2078357533(0xffffffff841ec7e3, float:-1.8664594E-36)
            r2 = 2
            r3 = 1
            r4 = 0
            r5 = -1
            if (r0 == r1) goto L2c
            r1 = -1561629405(0xffffffffa2eb6d23, float:-6.381243E-18)
            if (r0 == r1) goto L22
            r1 = 1777263169(0x69eee241, float:3.60991E25)
            if (r0 == r1) goto L18
            goto L36
        L18:
            java.lang.String r0 = "android.permission.REQUEST_INSTALL_PACKAGES"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L36
            r7 = r4
            goto L37
        L22:
            java.lang.String r0 = "android.permission.SYSTEM_ALERT_WINDOW"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L36
            r7 = r2
            goto L37
        L2c:
            java.lang.String r0 = "android.permission.WRITE_SETTINGS"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L36
            r7 = r3
            goto L37
        L36:
            r7 = r5
        L37:
            if (r7 == 0) goto L5d
            r0 = 23
            if (r7 == r3) goto L52
            if (r7 == r2) goto L40
            goto L6a
        L40:
            int r7 = android.os.Build.VERSION.SDK_INT
            if (r7 < r0) goto L6a
            boolean r6 = android.provider.Settings.canDrawOverlays(r6)     // Catch: java.lang.Throwable -> L4d
            if (r6 == 0) goto L4b
            goto L6b
        L4b:
            r4 = r5
            goto L6b
        L4d:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r6)
            goto L6a
        L52:
            int r7 = android.os.Build.VERSION.SDK_INT
            if (r7 < r0) goto L6a
            boolean r6 = android.provider.Settings.System.canWrite(r6)     // Catch: java.lang.Throwable -> L6a
            if (r6 == 0) goto L4b
            goto L6b
        L5d:
            int r7 = android.os.Build.VERSION.SDK_INT
            r0 = 26
            if (r7 < r0) goto L6a
            boolean r6 = com.kwad.sdk.utils.aj.co(r6)
            if (r6 == 0) goto L4b
            goto L6b
        L6a:
            r4 = -2
        L6b:
            return r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.utils.al.ap(android.content.Context, java.lang.String):int");
    }

    private static int aq(Context context, String str) {
        if (aIT == null || str == null) {
            return -2;
        }
        if (Build.VERSION.SDK_INT < 19) {
            return 0;
        }
        if (!aIT.containsKey(str)) {
            return -2;
        }
        try {
            Integer num = aIT.get(str);
            if (num == null) {
                return -2;
            }
            if (aIV == null) {
                Method declaredMethod = AppOpsManager.class.getDeclaredMethod("checkOp", Integer.TYPE, Integer.TYPE, String.class);
                aIV = declaredMethod;
                declaredMethod.setAccessible(true);
            }
            return ((Integer) aIV.invoke((AppOpsManager) context.getSystemService("appops"), num, Integer.valueOf(Binder.getCallingUid()), context.getPackageName())).intValue() == 0 ? 0 : -1;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            return 0;
        }
    }

    public static boolean cq(Context context) {
        int i;
        try {
            i = Settings.Secure.getInt(context.getContentResolver(), "accessibility_enabled");
        } catch (Throwable unused) {
            i = 0;
        }
        return i == 1;
    }

    private static String fD(String str) {
        if (str == null) {
            return null;
        }
        int iLastIndexOf = str.lastIndexOf(".");
        if (iLastIndexOf < 0) {
            return str;
        }
        try {
            return str.substring(iLastIndexOf + 1);
        } catch (Exception unused) {
            return str;
        }
    }

    private static void h(String[] strArr) {
        if (Build.VERSION.SDK_INT < 19 || strArr == null) {
            return;
        }
        aIT = new HashMap();
        for (String str : strArr) {
            try {
                int iIntValue = ((Integer) s.c(AppOpsManager.class, AssistPushConsts.OPPO_PREFIX + fD(str))).intValue();
                if (iIntValue >= 0) {
                    aIT.put(str, Integer.valueOf(iIntValue));
                }
            } catch (Throwable unused) {
            }
        }
    }
}
