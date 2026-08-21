package com.mbridge.msdk.dycreator.e;

import android.text.TextUtils;
import android.view.View;
import com.mbridge.msdk.dycreator.baseview.inter.InterBase;
import java.lang.reflect.Method;

public final class d {
    /* JADX WARN: Multi-variable type inference failed */
    public static boolean a(View view, com.mbridge.msdk.dycreator.f.a.a aVar) {
        String[] strArrSplit;
        if (view == 0) {
            return true;
        }
        try {
            if (!(view instanceof InterBase) || aVar == null) {
                return true;
            }
            String actionDes = ((InterBase) view).getActionDes();
            if (TextUtils.isEmpty(actionDes) || (strArrSplit = actionDes.split("\\|")) == null || strArrSplit.length < 2 || TextUtils.isEmpty(strArrSplit[0]) || !strArrSplit[0].startsWith("click") || TextUtils.isEmpty(strArrSplit[1]) || !strArrSplit[1].equals(com.tkay.expressad.video.dynview.a.a.L) || aVar.getEffectData() == null) {
                return true;
            }
            return aVar.getEffectData().isClickScreen();
        } catch (Exception e) {
            e.printStackTrace();
            return true;
        }
    }

    public static void a(String str, View view, boolean z) {
        if (view == null || !(view instanceof InterBase) || TextUtils.isEmpty(str)) {
            return;
        }
        try {
            String[] strArrSplit = str.split("\\|");
            if (strArrSplit == null || strArrSplit.length < 2 || TextUtils.isEmpty(strArrSplit[0]) || !strArrSplit[0].startsWith("visible") || TextUtils.isEmpty(strArrSplit[1]) || !strArrSplit[1].equals("parent") || !z) {
                return;
            }
            view.setVisibility(8);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static Object a(Object obj, String str) {
        Method method;
        try {
            try {
                method = obj.getClass().getMethod(str, new Class[0]);
                if (method != null) {
                    try {
                        return method.invoke(obj, new Object[0]);
                    } catch (NoSuchMethodException unused) {
                        if (obj instanceof com.mbridge.msdk.dycreator.f.a.a) {
                            method = ((com.mbridge.msdk.dycreator.f.a.a) obj).getBindData().getClass().getMethod(str, new Class[0]);
                        }
                        if (method != null) {
                            return method.invoke(((com.mbridge.msdk.dycreator.f.a.a) obj).getBindData(), new Object[0]);
                        }
                        return null;
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        } catch (NoSuchMethodException unused2) {
            method = null;
        }
        return null;
    }

    public static String a(boolean z, int i, String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            str = "";
        }
        if (TextUtils.isEmpty(str2) || !str2.contains(com.tkay.expressad.video.dynview.a.a.Q)) {
            return str + " " + i + "s";
        }
        if (z) {
            return str + i + "s";
        }
        return i + "s " + str;
    }
}
