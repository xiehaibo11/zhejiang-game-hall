package com.mbridge.msdk.foundation.tools;

import android.content.Context;
import android.content.pm.ProviderInfo;
import android.content.pm.ServiceInfo;
import android.os.Build;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;

public final class aj {
    public static int a = -1;
    public static String b = "";
    public static int c = -1;
    public static String d = "";
    public static int e = -1;
    public static int f = -1;
    public static String g = "";
    public static String h = "";
    public static int i = -1;
    public static String j = "";

    public static boolean a(Context context) {
        int i2 = i;
        if (i2 == 1) {
            return true;
        }
        if (i2 == 0) {
            return false;
        }
        try {
            if (context == null) {
                i = -1;
                j = "content is null";
                return false;
            }
            if (v.w(context) < 26 || Build.VERSION.SDK_INT < 26) {
                return true;
            }
            new NotificationCompat.Builder(context, "download");
            j = "ok";
            i = 1;
            return true;
        } catch (Exception e2) {
            j = e2.getMessage();
            i = -1;
            return false;
        } catch (NoSuchMethodError e3) {
            j = e3.getMessage();
            i = 0;
            return false;
        } catch (Throwable th) {
            j = th.getMessage();
            i = -1;
            return false;
        }
    }

    public static boolean b(Context context) {
        int i2 = e;
        boolean z = true;
        if (i2 == 1) {
            return true;
        }
        if (i2 == 0) {
            return false;
        }
        try {
            if (context == null) {
                e = -1;
                g = com.tkay.expressad.foundation.g.b.b.a;
                return false;
            }
            if (v.w(context) >= 26 && Build.VERSION.SDK_INT >= 26) {
                String[] strArr = context.getPackageManager().getPackageInfo(context.getPackageName(), 4096).requestedPermissions;
                if (strArr == null) {
                    e = -1;
                    g = "permissions is null";
                    return false;
                }
                if (strArr.length == 0) {
                    e = 0;
                    g = "permissions is zero";
                    return false;
                }
                int length = strArr.length;
                boolean z2 = true;
                int i3 = 0;
                while (true) {
                    if (i3 >= length) {
                        z = z2;
                        break;
                    }
                    if (strArr[i3].equals("android.permission.REQUEST_INSTALL_PACKAGES")) {
                        e = 1;
                        g = "ok";
                        break;
                    }
                    g = "can't find permission";
                    e = 0;
                    i3++;
                    z2 = false;
                }
            }
            return z;
        } catch (Exception e2) {
            g = e2.getMessage();
            e = -1;
            return false;
        } catch (Throwable th) {
            g = th.getMessage();
            e = -1;
            return false;
        }
    }

    public static boolean c(Context context) {
        int i2 = c;
        boolean z = true;
        if (i2 == 1) {
            return true;
        }
        if (i2 == 0) {
            return false;
        }
        try {
            if (context == null) {
                c = -1;
                d = com.tkay.expressad.foundation.g.b.b.a;
                return false;
            }
            ServiceInfo[] serviceInfoArr = context.getPackageManager().getPackageInfo(context.getPackageName(), 4).services;
            if (serviceInfoArr == null) {
                c = -1;
                d = "serviceinfo is null";
                return false;
            }
            if (serviceInfoArr.length == 0) {
                c = 0;
                d = "serviceinfos is zero";
                return false;
            }
            int length = serviceInfoArr.length;
            boolean z2 = true;
            int i3 = 0;
            while (true) {
                if (i3 >= length) {
                    z = z2;
                    break;
                }
                if (serviceInfoArr[i3].name.equals("com.mbridge.msdk.shell.MBService")) {
                    c = 1;
                    d = "ok";
                    break;
                }
                d = "can't find service";
                c = 0;
                i3++;
                z2 = false;
            }
            return z;
        } catch (Exception e2) {
            d = e2.getMessage();
            c = -1;
            return false;
        } catch (Throwable th) {
            d = th.getMessage();
            c = -1;
            return false;
        }
    }

    public static boolean d(Context context) {
        int i2 = f;
        boolean z = true;
        if (i2 == 1) {
            return true;
        }
        if (i2 == 0) {
            return false;
        }
        try {
            if (context == null) {
                f = -1;
                h = com.tkay.expressad.foundation.g.b.b.a;
                return false;
            }
            ProviderInfo[] providerInfoArr = context.getPackageManager().getPackageInfo(context.getPackageName(), 8).providers;
            if (providerInfoArr == null) {
                f = -1;
                h = "providerInfos is null";
                return false;
            }
            if (providerInfoArr.length == 0) {
                h = "providerInfos is zero";
                f = 0;
                return false;
            }
            int length = providerInfoArr.length;
            boolean z2 = true;
            int i3 = 0;
            while (i3 < length) {
                ProviderInfo providerInfo = providerInfoArr[i3];
                if (!providerInfo.name.equals("com.mbridge.msdk.foundation.tools.MBFileProvider") && (TextUtils.isEmpty(MBridgeConstans.FILE_PROVIDE_CUSTOM_PATH) || !providerInfo.name.equals(MBridgeConstans.FILE_PROVIDE_CUSTOM_PATH))) {
                    f = 0;
                    h = "providerInfos can't find";
                    i3++;
                    z2 = false;
                }
                f = 1;
                h = "ok";
                break;
            }
            z = z2;
            return z;
        } catch (Exception e2) {
            f = -1;
            h = e2.getMessage();
            return false;
        } catch (Throwable th) {
            h = th.getMessage();
            f = -1;
            return false;
        }
    }

    public static boolean e(Context context) {
        try {
            if (v.w(context) >= 24) {
                return Build.VERSION.SDK_INT >= 24;
            }
            return false;
        } catch (Throwable th) {
            if (!MBridgeConstans.DEBUG) {
                return false;
            }
            th.printStackTrace();
            return false;
        }
    }
}
