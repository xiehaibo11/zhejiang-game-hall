package com.sigmob.sdk.videoplayer;

import android.app.Activity;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.Resources;
import android.graphics.Point;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import android.view.Display;
import android.view.KeyCharacterMap;
import android.view.ViewConfiguration;
import android.view.Window;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.util.Formatter;
import java.util.Locale;

/* JADX INFO: loaded from: classes3.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static int f5247a;

    public static int a(Activity activity) {
        Resources resources;
        int identifier;
        if (!b(activity) || (identifier = (resources = activity.getResources()).getIdentifier("navigation_bar_height", "dimen", "android")) == 0) {
            return 0;
        }
        return resources.getDimensionPixelSize(identifier);
    }

    public static int a(Context context, float f) {
        return (int) ((f * context.getResources().getDisplayMetrics().density) + 0.5f);
    }

    public static String a(long j) {
        if (j <= 0 || j >= 86400000) {
            return "00:00";
        }
        long j2 = j / 1000;
        int i = (int) (j2 % 60);
        int i2 = (int) ((j2 / 60) % 60);
        int i3 = (int) (j2 / com.tkay.expressad.d.a.b.P);
        Formatter formatter = new Formatter(new StringBuilder(), Locale.getDefault());
        return (i3 > 0 ? formatter.format("%d:%02d:%02d", Integer.valueOf(i3), Integer.valueOf(i2), Integer.valueOf(i)) : formatter.format("%02d:%02d", Integer.valueOf(i2), Integer.valueOf(i))).toString();
    }

    public static void a(Context context, int i) {
        if (b(context) != null) {
            b(context).setRequestedOrientation(i);
        }
    }

    public static boolean a(Context context) {
        NetworkInfo activeNetworkInfo = ((ConnectivityManager) context.getSystemService("connectivity")).getActiveNetworkInfo();
        return activeNetworkInfo != null && activeNetworkInfo.getType() == 1;
    }

    public static Activity b(Context context) {
        if (context == null) {
            return null;
        }
        if (context instanceof Activity) {
            return (Activity) context;
        }
        if (context instanceof ContextWrapper) {
            return b(((ContextWrapper) context).getBaseContext());
        }
        return null;
    }

    public static boolean b(Activity activity) {
        if (Build.VERSION.SDK_INT < 17) {
            return (ViewConfiguration.get(activity).hasPermanentMenuKey() || KeyCharacterMap.deviceHasKey(4)) ? false : true;
        }
        Display defaultDisplay = activity.getWindowManager().getDefaultDisplay();
        Point point = new Point();
        Point point2 = new Point();
        defaultDisplay.getSize(point);
        defaultDisplay.getRealSize(point2);
        return point2.y != point.y;
    }

    public static Window c(Context context) {
        if (b(context) != null) {
            return b(context).getWindow();
        }
        return null;
    }

    public static void d(Context context) {
        Window windowC;
        if (!g.p || (windowC = c(context)) == null) {
            return;
        }
        windowC.clearFlags(1024);
    }

    public static void e(Context context) {
        Window windowC;
        if (!g.p || (windowC = c(context)) == null) {
            return;
        }
        windowC.setFlags(1024, 1024);
    }

    public static void f(Context context) {
        int i = Build.VERSION.SDK_INT >= 19 ? 5638 : 1542;
        Window windowC = c(context);
        if (windowC != null) {
            f5247a = windowC.getDecorView().getSystemUiVisibility();
            windowC.getDecorView().setSystemUiVisibility(i);
        }
    }

    public static void g(Context context) {
        Window windowC = c(context);
        if (windowC != null) {
            windowC.getDecorView().setSystemUiVisibility(f5247a);
        }
    }

    public static int h(Context context) {
        int identifier = context.getResources().getIdentifier("status_bar_height", "dimen", "android");
        if (identifier > 0) {
            return context.getResources().getDimensionPixelSize(identifier);
        }
        try {
            Class<?> cls = Class.forName("com.android.internal.R$dimen");
            return context.getResources().getDimensionPixelSize(Integer.parseInt(cls.getField("status_bar_height").get(cls.newInstance()).toString()));
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    private static void i(Context context) {
        if (Build.VERSION.SDK_INT < 21) {
            if (Build.VERSION.SDK_INT >= 19) {
                c(context).addFlags(DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
                return;
            }
            return;
        }
        Window windowC = c(context);
        windowC.clearFlags(DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
        windowC.getDecorView().setSystemUiVisibility(windowC.getDecorView().getSystemUiVisibility() | 1024 | 4 | 256 | 512);
        windowC.addFlags(Integer.MIN_VALUE);
        windowC.setStatusBarColor(0);
        windowC.setNavigationBarColor(0);
    }
}
