package com.loc;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.security.MessageDigest;
import java.util.Locale;
import kotlin.UByte;

public final class l {
    static String a = null;
    static boolean b = false;
    private static String c = "";
    private static String d = "";
    private static String e = "";
    private static String f = "";

    public static String a(Context context) {
        try {
            return h(context);
        } catch (Throwable th) {
            th.printStackTrace();
            return f;
        }
    }

    static void a(final Context context, final String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        f = str;
        if (context != null) {
            cr.a().b(new cs() {
                @Override
                public final void a() {
                    FileOutputStream fileOutputStream = null;
                    try {
                        File file = new File(at.c(context, "k.store"));
                        if (!file.getParentFile().exists()) {
                            file.getParentFile().mkdirs();
                        }
                        FileOutputStream fileOutputStream2 = new FileOutputStream(file);
                        try {
                            fileOutputStream2.write(x.a(str));
                            try {
                                fileOutputStream2.close();
                            } catch (Throwable th) {
                                th.printStackTrace();
                            }
                        } catch (Throwable th2) {
                            th = th2;
                            fileOutputStream = fileOutputStream2;
                            try {
                                as.a(th, "AI", "stf");
                                if (fileOutputStream != null) {
                                    try {
                                        fileOutputStream.close();
                                    } catch (Throwable th3) {
                                        th3.printStackTrace();
                                    }
                                }
                            } catch (Throwable th4) {
                                if (fileOutputStream != null) {
                                    try {
                                        fileOutputStream.close();
                                    } catch (Throwable th5) {
                                        th5.printStackTrace();
                                    }
                                }
                                throw th4;
                            }
                        }
                    } catch (Throwable th6) {
                        th = th6;
                    }
                }
            });
        }
    }

    public static void a(String str) {
        d = str;
    }

    static boolean a() {
        if (b) {
            return true;
        }
        if (b(a)) {
            b = true;
            return true;
        }
        if (!TextUtils.isEmpty(a)) {
            b = false;
            a = null;
            return false;
        }
        if (b(d)) {
            b = true;
            return true;
        }
        if (!TextUtils.isEmpty(d)) {
            b = false;
            d = null;
            return false;
        }
        return true;
    }

    public static String b(Context context) {
        try {
        } catch (Throwable th) {
            as.a(th, "AI", "gAN");
        }
        if (!"".equals(c)) {
            return c;
        }
        PackageManager packageManager = context.getPackageManager();
        c = (String) packageManager.getApplicationLabel(packageManager.getApplicationInfo(context.getPackageName(), 0));
        return c;
    }

    private static boolean b(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        str.toCharArray();
        for (char c2 : str.toCharArray()) {
            if (('A' > c2 || c2 > 'z') && (('0' > c2 || c2 > ':') && c2 != '.')) {
                try {
                    av.b(x.a(), str, "errorPackage");
                } catch (Throwable unused) {
                }
                return false;
            }
        }
        return true;
    }

    public static String c(Context context) {
        try {
        } catch (Throwable th) {
            as.a(th, "AI", "gpck");
        }
        if (d != null && !"".equals(d)) {
            return d;
        }
        String packageName = context.getPackageName();
        d = packageName;
        if (!b(packageName)) {
            d = context.getPackageName();
        }
        return d;
    }

    public static String d(Context context) {
        try {
        } catch (Throwable th) {
            as.a(th, "AI", "gAV");
        }
        if (!"".equals(e)) {
            return e;
        }
        e = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionName;
        String str = e;
        return str == null ? "" : str;
    }

    public static String e(Context context) {
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(context.getPackageName(), 64);
            byte[] bArrDigest = MessageDigest.getInstance(x.c("IU0hBMQ")).digest(packageInfo.signatures[0].toByteArray());
            StringBuffer stringBuffer = new StringBuffer();
            for (byte b2 : bArrDigest) {
                String upperCase = Integer.toHexString(b2 & UByte.MAX_VALUE).toUpperCase(Locale.US);
                if (upperCase.length() == 1) {
                    stringBuffer.append("0");
                }
                stringBuffer.append(upperCase);
                stringBuffer.append(Constants.COLON_SEPARATOR);
            }
            String strC = packageInfo.packageName;
            if (b(strC)) {
                strC = packageInfo.packageName;
            }
            if (!TextUtils.isEmpty(d)) {
                strC = c(context);
            }
            stringBuffer.append(strC);
            String string = stringBuffer.toString();
            a = string;
            return string;
        } catch (Throwable th) {
            as.a(th, "AI", "gsp");
            return a;
        }
    }

    public static String f(Context context) {
        try {
            m.a(context);
        } catch (Throwable unused) {
        }
        try {
            return h(context);
        } catch (Throwable th) {
            as.a(th, "AI", "gKy");
            return f;
        }
    }

    private static String g(Context context) {
        FileInputStream fileInputStream;
        Throwable th;
        File file = new File(at.c(context, "k.store"));
        if (!file.exists()) {
            return "";
        }
        try {
            fileInputStream = new FileInputStream(file);
            try {
                byte[] bArr = new byte[fileInputStream.available()];
                fileInputStream.read(bArr);
                String strA = x.a(bArr);
                String str = strA.length() == 32 ? strA : "";
                try {
                    fileInputStream.close();
                } catch (Throwable th2) {
                    th2.printStackTrace();
                }
                return str;
            } catch (Throwable th3) {
                th = th3;
                try {
                    as.a(th, "AI", "gKe");
                    try {
                        if (file.exists()) {
                            file.delete();
                        }
                    } catch (Throwable th4) {
                        th4.printStackTrace();
                    }
                    return "";
                } finally {
                    if (fileInputStream != null) {
                        try {
                            fileInputStream.close();
                        } catch (Throwable th5) {
                            th5.printStackTrace();
                        }
                    }
                }
            }
        } catch (Throwable th6) {
            fileInputStream = null;
            th = th6;
        }
    }

    private static String h(Context context) throws PackageManager.NameNotFoundException {
        String str = f;
        if (str == null || str.equals("")) {
            ApplicationInfo applicationInfo = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128);
            if (applicationInfo == null || applicationInfo.metaData == null) {
                return f;
            }
            String string = applicationInfo.metaData.getString("com.amap.api.v2.apikey");
            f = string;
            if (string == null) {
                f = g(context);
            }
        }
        return f;
    }
}
