package com.bytedance.pangle.d;

import android.app.Application;
import android.content.Context;
import android.os.Build;
import android.os.Process;
import android.text.TextUtils;
import com.bytedance.pangle.log.ZeusLogger;
import com.bytedance.pangle.util.MethodUtils;
import com.qihoo360.replugin.RePlugin;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f1507a;
    private static List<String> b = new CopyOnWriteArrayList();

    private static String b() {
        BufferedReader bufferedReader;
        try {
            bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream("/proc/" + Process.myPid() + "/cmdline"), "iso-8859-1"));
        } catch (Throwable unused) {
            bufferedReader = null;
        }
        try {
            StringBuilder sb = new StringBuilder();
            while (true) {
                int i = bufferedReader.read();
                if (i <= 0) {
                    break;
                }
                sb.append((char) i);
            }
            if (ZeusLogger.isDebug()) {
                ZeusLogger.d("Process", "get processName = " + sb.toString());
            }
            String string = sb.toString();
            try {
                bufferedReader.close();
            } catch (Exception unused2) {
            }
            return string;
        } catch (Throwable unused3) {
            if (bufferedReader != null) {
                try {
                    bufferedReader.close();
                } catch (Exception unused4) {
                }
            }
            return null;
        }
    }

    public static String a() {
        if (!TextUtils.isEmpty(f1507a)) {
            return f1507a;
        }
        try {
            if (Build.VERSION.SDK_INT >= 28) {
                String processName = Application.getProcessName();
                if (!TextUtils.isEmpty(processName)) {
                    f1507a = processName;
                }
                return f1507a;
            }
        } catch (Throwable unused) {
        }
        try {
            Object objInvokeStaticMethod = MethodUtils.invokeStaticMethod(Class.forName("android.app.ActivityThread"), "currentProcessName", new Object[0]);
            if (!TextUtils.isEmpty((String) objInvokeStaticMethod)) {
                f1507a = (String) objInvokeStaticMethod;
            }
            return f1507a;
        } catch (Exception e) {
            e.printStackTrace();
            String strB = b();
            f1507a = strB;
            return strB;
        }
    }

    public static boolean a(Context context) {
        String strA = a();
        return (strA == null || !strA.contains(Constants.COLON_SEPARATOR)) && strA != null && strA.equals(context.getPackageName());
    }

    public static String a(String str) {
        return (TextUtils.isEmpty(str) || !str.contains(Constants.COLON_SEPARATOR)) ? RePlugin.PLUGIN_NAME_MAIN : str.split(Constants.COLON_SEPARATOR)[1];
    }
}
