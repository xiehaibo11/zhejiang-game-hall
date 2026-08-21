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
    */
    private static int ap(Context context, String str) {
        byte b;
        int iHashCode = str.hashCode();
        if (iHashCode != -2078357533) {
            if (iHashCode != -1561629405) {
                b = (iHashCode == 1777263169 && str.equals("android.permission.REQUEST_INSTALL_PACKAGES")) ? (byte) 0 : (byte) -1;
            } else if (str.equals("android.permission.SYSTEM_ALERT_WINDOW")) {
                b = 2;
            }
        } else if (str.equals("android.permission.WRITE_SETTINGS")) {
            b = 1;
        }
        if (b == 0) {
            if (Build.VERSION.SDK_INT >= 26) {
                if (aj.co(context)) {
                    return 0;
                }
                return -1;
            }
            return -2;
        }
        if (b == 1) {
            if (Build.VERSION.SDK_INT >= 23) {
                try {
                    if (Settings.System.canWrite(context)) {
                        return 0;
                    }
                    return -1;
                } catch (Throwable unused) {
                }
            }
            return -2;
        }
        if (b == 2 && Build.VERSION.SDK_INT >= 23) {
            try {
                if (Settings.canDrawOverlays(context)) {
                    return 0;
                }
                return -1;
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            }
        }
        return -2;
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
