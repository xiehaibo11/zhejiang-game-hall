package com.bytedance.pangle.e;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import com.bytedance.pangle.util.MethodUtils;
import com.bytedance.pangle.util.i;
import java.io.File;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static int f1517a = 1;
    public static int b = 2;

    public static SharedPreferences a(Context context) {
        return context.getApplicationContext().getSharedPreferences("plugin_oat_info", 0);
    }

    static String[] a(String str, String str2, int i) {
        ArrayList arrayList = new ArrayList();
        arrayList.add("dex2oat");
        if (Build.VERSION.SDK_INT >= 24) {
            arrayList.add("--runtime-arg");
            arrayList.add("-classpath");
            arrayList.add("--runtime-arg");
            arrayList.add("&");
        }
        arrayList.add("--instruction-set=" + a());
        if (i == f1517a) {
            if (i.h()) {
                arrayList.add("--compiler-filter=quicken");
            } else {
                arrayList.add("--compiler-filter=interpret-only");
            }
        } else if (i == b) {
            arrayList.add("--compiler-filter=speed");
        }
        arrayList.add("--dex-file=".concat(String.valueOf(str)));
        arrayList.add("--oat-file=".concat(String.valueOf(str2)));
        return (String[]) arrayList.toArray(new String[arrayList.size()]);
    }

    public static String a() {
        try {
            return (String) MethodUtils.invokeStaticMethod(Class.forName("dalvik.system.VMRuntime"), "getCurrentInstructionSet", new Object[0]);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String a(String str) {
        String strSubstring = str.substring(str.lastIndexOf("/") + 1);
        String strSubstring2 = strSubstring.substring(strSubstring.lastIndexOf("."));
        String str2 = Build.VERSION.SDK_INT >= 26 ? ".odex" : ".dex";
        if (".dex".equals(strSubstring2)) {
            return strSubstring;
        }
        if (".zip".equals(strSubstring2) || com.tkay.china.common.a.a.g.equals(strSubstring2)) {
            return strSubstring.replace(strSubstring2, str2);
        }
        return strSubstring + str2;
    }

    public static String b(String str) {
        String strSubstring = str.substring(str.lastIndexOf("."));
        String str2 = Build.VERSION.SDK_INT >= 26 ? ".odex" : ".dex";
        if (".dex".equals(strSubstring)) {
            return strSubstring;
        }
        if (".zip".equals(strSubstring) || com.tkay.china.common.a.a.g.equals(strSubstring)) {
            return str2;
        }
        return str + str2;
    }

    public static void a(String str, String str2) {
        a.a(a(str, str2, f1517a));
    }

    public static boolean a(String... strArr) {
        for (int i = 0; i <= 0; i++) {
            File file = new File(strArr[0]);
            if (!file.exists() || !h.a(file)) {
                return false;
            }
        }
        return true;
    }

    public static boolean a(String str, String... strArr) {
        for (String str2 : strArr) {
            if (!new File(str + File.separator + a(str2)).exists()) {
                return false;
            }
        }
        return true;
    }
}
