package com.qq.e.comm;

import android.content.Context;
import android.content.Intent;
import com.kuaishou.weapon.p0.g;
import com.qq.e.comm.constants.CustomPkgConstants;
import com.qq.e.comm.util.GDTLogger;

/* JADX INFO: loaded from: classes3.dex */
public class a {
    public static boolean a(Context context) {
        boolean z;
        boolean z2;
        try {
            String[] strArr = {g.f2775a, g.b, g.d};
            for (int i = 0; i < 3; i++) {
                try {
                    String str = strArr[i];
                    if (context.checkCallingOrSelfPermission(str) == -1) {
                        GDTLogger.e(String.format("Permission[%s]需要在AndroidManifest.xml中声明", str));
                    }
                } catch (Throwable th) {
                    GDTLogger.e("检查权限时发生异常", th);
                }
                z = false;
            }
            z = true;
            if (!z || !a(context, Class.forName(CustomPkgConstants.getADActivityName())) || !a(context, Class.forName(CustomPkgConstants.getPortraitADActivityName())) || !a(context, Class.forName(CustomPkgConstants.getLandscapeADActivityName()))) {
                return false;
            }
            Class<?>[] clsArr = {Class.forName(CustomPkgConstants.getDownLoadServiceName())};
            for (int i2 = 0; i2 < 1; i2++) {
                try {
                    Class<?> cls = clsArr[i2];
                    Intent intent = new Intent();
                    intent.setClass(context, cls);
                    if (context.getPackageManager().resolveService(intent, 65536) == null) {
                        GDTLogger.e(String.format("Service[%s]需要在AndroidManifest.xml中声明", cls.getName()));
                    }
                } catch (Throwable th2) {
                    GDTLogger.e("检查Service时发生异常", th2);
                }
                z2 = false;
                break;
            }
            z2 = true;
            return z2;
        } catch (Throwable th3) {
            GDTLogger.e("检查AndroidManifest.xml时发生异常", th3);
            return false;
        }
    }

    private static boolean a(Context context, Class<?>... clsArr) {
        for (int i = 0; i < clsArr.length; i++) {
            try {
                Intent intent = new Intent();
                intent.setClass(context, clsArr[i]);
                if (context.getPackageManager().resolveActivity(intent, 65536) == null) {
                    GDTLogger.e(String.format("Activity[%s]需要在AndroidManifest.xml中声明", clsArr[i].getName()));
                    return false;
                }
            } catch (Throwable th) {
                GDTLogger.e("检查Activity时发生异常", th);
                return false;
            }
        }
        return true;
    }
}
