package com.kwad.sdk.utils;

import android.content.Context;
import android.text.TextUtils;
import java.io.File;

public final class ba {
    public static void JA() {
        y.l("ksadsdk_pref", "reward_auto_transfer", true);
    }

    public static boolean JB() {
        return y.m("ksadsdk_pref", "reward_auto_transfer", false);
    }

    public static void JC() {
        y.l("ksadsdk_pref", "interstitial_aggregate_transfer", true);
    }

    public static boolean JD() {
        return y.m("ksadsdk_pref", "interstitial_aggregate_transfer", false);
    }

    public static boolean Jw() {
        return y.m("ksadsdk_pref", "config_data_transfer", false);
    }

    private static void Jx() {
        y.l("ksadsdk_pref", "config_data_transfer", true);
    }

    public static void Jy() {
        y.l("ksadsdk_pref", "splash_daily_transfer", true);
    }

    public static boolean Jz() {
        return y.m("ksadsdk_pref", "splash_daily_transfer", false);
    }

    public static String as(Context context, String str) {
        File file = new File(context.getFilesDir(), str);
        if (!file.exists()) {
            return "";
        }
        try {
            String strI = com.kwad.sdk.crash.utils.h.I(file);
            return TextUtils.isEmpty(strI) ? "" : strI;
        } catch (Throwable unused) {
            return "";
        }
    }

    public static void j(final Context context, final String str, final String str2) {
        g.execute(new Runnable() {
            @Override
            public final void run() {
                ba.k(context, str, str2);
            }
        });
    }

    public static void k(Context context, String str, String str2) {
        com.kwad.sdk.crash.utils.h.k(new File(context.getFilesDir(), str).getAbsolutePath(), str2, false);
        Jx();
    }
}
