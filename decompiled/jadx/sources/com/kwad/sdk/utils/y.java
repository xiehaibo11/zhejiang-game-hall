package com.kwad.sdk.utils;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.kwad.sdk.service.ServiceProvider;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public final class y {
    private static String sAppTag = "";

    public static long IA() {
        return b("ksadsdk_push_ad_common", "key_push_last_show_time", -1L);
    }

    public static String IB() {
        return getContext() == null ? "" : h("ksadsdk_install_tips_show_count", "init_install_tips_show_count", "");
    }

    public static void IC() {
        b("ksadsdk_perf", "image_load_total", c("ksadsdk_perf", "image_load_total", 0) + 1);
    }

    public static void ID() {
        b("ksadsdk_perf", "image_load_suc", c("ksadsdk_perf", "image_load_suc", 0) + 1);
    }

    public static void IE() {
        b("ksadsdk_perf", "image_load_failed", c("ksadsdk_perf", "image_load_failed", 0) + 1);
    }

    public static double IF() {
        int iC = c("ksadsdk_perf", "image_load_complete_count", 0);
        long jB = b("ksadsdk_perf", "image_load_complete_total", 0L);
        b("ksadsdk_perf", "image_load_complete_count", 0);
        a("ksadsdk_perf", "image_load_complete_total", 0L);
        if (iC == 0) {
            return 0.0d;
        }
        return jB / ((double) iC);
    }

    public static int IG() {
        int iC = c("ksadsdk_perf", "image_load_total", 0);
        com.kwad.sdk.core.e.c.d("Ks_UnionUtils", "imageLoadTotal:" + iC);
        b("ksadsdk_perf", "image_load_total", 0);
        return iC;
    }

    public static int IH() {
        int iC = c("ksadsdk_perf", "image_load_suc", 0);
        com.kwad.sdk.core.e.c.d("Ks_UnionUtils", "imageLoadSuccess:" + iC);
        b("ksadsdk_perf", "image_load_suc", 0);
        return iC;
    }

    public static int II() {
        int iC = c("ksadsdk_perf", "image_load_failed", 0);
        com.kwad.sdk.core.e.c.d("Ks_UnionUtils", "imageLoadFailed:" + iC);
        b("ksadsdk_perf", "image_load_failed", 0);
        return iC;
    }

    public static String Is() {
        Context context = getContext();
        return context == null ? "" : b(context, "ksadsdk_interstitial_daily_show_count", "KEY_INTERSTITIAL_DAILY_SHOW_COUNT", "");
    }

    public static String It() {
        Context context = getContext();
        if (context == null) {
            return "";
        }
        return b(context, ba.JD() ? "ksadsdk_interstitial_daily_show_count" : "ksadsdk_interstitial_aggregate_daily_show_count", "KEY_INTERSTITIAL_AGGREGATE_DAILY_SHOW_COUNT", "");
    }

    public static String Iu() {
        Context context = getContext();
        return context == null ? "" : b(context, "ksadsdk_reward_full_ad_jump_direct", "KEY_REWARD_FULL_AD_JUMP_DIRECT", "");
    }

    public static String Iv() {
        Context context = getContext();
        if (context == null) {
            return "";
        }
        return b(context, ba.Jz() ? "ksadsdk_splash_local_ad_force_active" : "ksadsdk_splash_daily_show_count", "KEY_SPLASH_DAILY_SHOW_COUNT", "");
    }

    public static String Iw() {
        Context context = getContext();
        return context == null ? "" : ba.JB() ? h("ksadsdk_reward_full_ad_jump_direct", "KEY_REWARD_AUTO_CALL_APP_CARD_SHOW_COUNT", "") : b(context, "ksadsdk_reward_auto_call_app_card_show_count", "KEY_REWARD_AUTO_CALL_APP_CARD_SHOW_COUNT", "");
    }

    public static String Ix() {
        return h("ksadsdk_interstitial_daily_show_count", "KEY_INTERSTITIAL_AUTO_CALL_APP_CARD_SHOW_COUNT", "");
    }

    public static String Iy() {
        if (!TextUtils.isEmpty(sAppTag)) {
            return sAppTag;
        }
        Context context = getContext();
        return context == null ? "" : b(context, "ksadsdk_pref", "appTag", "");
    }

    public static String Iz() {
        Context context = getContext();
        return context == null ? "" : bY(context);
    }

    public static long Q(Context context, String str) {
        if (context == null) {
            return 0L;
        }
        return b(context, "ksadsdk_pref", str, 0L);
    }

    public static long R(Context context, String str) {
        if (context == null) {
            return 0L;
        }
        return b(context, "ksadsdk_download_package_length", str, 0L);
    }

    public static String S(Context context, String str) {
        return context == null ? "" : b(context, "ksadsdk_download_package_md5", str, "");
    }

    public static void T(Context context, String str) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_egid", "KEY_SDK_EGID", str);
    }

    public static void U(Context context, String str) {
        if (context == null) {
            return;
        }
        a("ksadsdk_model", "KEY_SDK_MODEL", str, true);
    }

    public static void V(Context context, String str) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_interstitial_daily_show_count", "KEY_INTERSTITIAL_DAILY_SHOW_COUNT", str);
    }

    public static void W(Context context, String str) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_interstitial_daily_show_count", "KEY_INTERSTITIAL_AGGREGATE_DAILY_SHOW_COUNT", str);
        ba.JC();
    }

    public static void X(Context context, String str) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_reward_full_ad_jump_direct", "KEY_REWARD_INTERACT_AD_SHOW_INFO", str);
    }

    public static void Y(Context context, String str) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_reward_full_ad_jump_direct", "KEY_REWARD_FULL_AD_JUMP_DIRECT", str);
    }

    public static void Z(Context context, String str) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_splash_local_ad_force_active", "KEY_SPLASH_DAILY_SHOW_COUNT", str);
        ba.Jy();
    }

    private static void a(Context context, String str, String str2, int i) {
        if (context == null) {
            return;
        }
        if (x.Il()) {
            bb.b(str, str2, i);
        } else {
            com.kwad.sdk.utils.a.e.at(context, str).putInt(str2, i);
        }
    }

    private static void a(Context context, String str, String str2, long j) {
        if (context == null) {
            return;
        }
        if (x.Il()) {
            bb.a(str, str2, j);
        } else {
            com.kwad.sdk.utils.a.e.at(context, str).putLong(str2, j);
        }
    }

    public static void a(Context context, String str, String str2, String str3) {
        if (context == null) {
            return;
        }
        if (x.Il()) {
            bb.g(str, str2, str3);
            if (com.kwad.framework.a.a.ml.booleanValue()) {
                com.kwad.sdk.core.e.c.d("Ks_UnionUtils", "putString Sp key:" + str2 + " value:" + str3);
                return;
            }
            return;
        }
        com.kwad.sdk.utils.a.e.at(context, str).putString(str2, str3);
        if (com.kwad.framework.a.a.ml.booleanValue()) {
            com.kwad.sdk.core.e.c.d("Ks_UnionUtils", "putString key:" + str2 + " value:" + str3);
        }
        x.ap(str2, str3);
    }

    private static void a(Context context, String str, String str2, String str3, boolean z) {
        if (context == null) {
            return;
        }
        if (x.Il()) {
            bb.a(str, str2, str3, z);
            if (com.kwad.framework.a.a.ml.booleanValue()) {
                com.kwad.sdk.core.e.c.d("Ks_UnionUtils", "putString Sp key:" + str2 + " value:" + str3);
                return;
            }
            return;
        }
        com.kwad.sdk.utils.a.e.at(context, str).putString(str2, str3);
        if (com.kwad.framework.a.a.ml.booleanValue()) {
            com.kwad.sdk.core.e.c.d("Ks_UnionUtils", "putString key:" + str2 + " value:" + str3);
        }
        x.ap(str2, str3);
    }

    public static void a(String str, String str2, long j) {
        Context context = getContext();
        if (context == null) {
            return;
        }
        a(context, str, str2, j);
    }

    public static void a(String str, String str2, String str3, boolean z) {
        Context context = getContext();
        if (context == null) {
            return;
        }
        a(context, str, str2, str3, true);
    }

    public static void aa(Context context, String str) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_reward_full_ad_jump_direct", "KEY_REWARD_AUTO_CALL_APP_CARD_SHOW_COUNT", str);
        ba.JA();
    }

    public static void ab(Context context, String str) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_interstitial_daily_show_count", "KEY_INTERSTITIAL_AUTO_CALL_APP_CARD_SHOW_COUNT", str);
    }

    public static void ac(Context context, String str) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_device_sig", "KEY_SDK_DEVICE_SIG", str);
    }

    public static void ad(Context context, final String str) {
        if (context == null || TextUtils.isEmpty(str)) {
            return;
        }
        g.execute(new aw() { // from class: com.kwad.sdk.utils.y.1
            @Override // com.kwad.sdk.utils.aw
            public final void doTask() {
                y.ae(ServiceProvider.getContext(), str);
            }
        });
    }

    public static void ae(Context context, String str) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_pref", "appTag", str);
    }

    public static void af(Context context, String str) {
        if (context == null) {
            return;
        }
        a("ksadsdk_pref", "webview_ua", str, true);
    }

    public static void ag(Context context, String str) {
        if (context == null || TextUtils.isEmpty(str)) {
            return;
        }
        ba.k(context.getApplicationContext(), "ksadsdk_sdk_config_data", str);
    }

    public static void ah(Context context, String str) {
        if (context == null) {
            return;
        }
        g("ksadsdk_install_tips_show_count", "init_install_tips_show_count", str);
    }

    public static Map<String, ?> ai(Context context, String str) {
        if (context == null) {
            return null;
        }
        if (!x.Il()) {
            return com.kwad.sdk.utils.a.e.at(context, str).getAll();
        }
        SharedPreferences sharedPreferencesFH = bb.fH(str);
        if (sharedPreferencesFH != null) {
            return sharedPreferencesFH.getAll();
        }
        return null;
    }

    public static void ar(String str, String str2) {
        Context context = getContext();
        if (context == null) {
            return;
        }
        i(context, str, str2);
    }

    public static void at(long j) {
        a("ksadsdk_push_ad_common", "key_push_last_show_time", j);
    }

    public static void au(long j) {
        b("ksadsdk_perf", "image_load_complete_count", c("ksadsdk_perf", "image_load_complete_count", 0) + 1);
        a("ksadsdk_perf", "image_load_complete_total", b("ksadsdk_perf", "image_load_complete_total", 0L) + j);
    }

    private static int b(Context context, String str, String str2, int i) {
        return context == null ? i : x.Il() ? bb.c(str, str2, i) : com.kwad.sdk.utils.a.e.at(context, str).getInt(str2, i);
    }

    private static long b(Context context, String str, String str2, long j) {
        return context == null ? j : x.Il() ? bb.b(str, str2, j) : com.kwad.sdk.utils.a.e.at(context, str).getLong(str2, j);
    }

    public static long b(String str, String str2, long j) {
        Context context = getContext();
        return context == null ? j : b(context, str, str2, j);
    }

    public static String b(Context context, String str, String str2, String str3) {
        String string;
        StringBuilder sb;
        if (context == null) {
            return str3;
        }
        if (x.Il()) {
            string = bb.h(str, str2, str3);
            if (com.kwad.framework.a.a.ml.booleanValue()) {
                sb = new StringBuilder("getString From Sp key:");
                sb.append(str2);
                sb.append(" value:");
                sb.append(string);
                com.kwad.sdk.core.e.c.d("Ks_UnionUtils", sb.toString());
            }
        } else {
            com.kwad.sdk.utils.a.e.at(context, str);
            string = com.kwad.sdk.utils.a.e.at(context, str).getString(str2, str3);
            x.aq(str2, string);
            if (com.kwad.framework.a.a.ml.booleanValue()) {
                sb = new StringBuilder("getString key:");
                sb.append(str2);
                sb.append(" value:");
                sb.append(string);
                com.kwad.sdk.core.e.c.d("Ks_UnionUtils", sb.toString());
            }
        }
        return com.kwad.sdk.core.a.c.cT(string) ? com.kwad.sdk.core.a.c.cS(string) : string;
    }

    public static void b(Context context, String str, String str2, boolean z) {
        if (context == null) {
            return;
        }
        l("ksadsdk_solder", "solder_is_success_loaded_" + str + str2, z);
    }

    public static void b(String str, String str2, int i) {
        Context context = getContext();
        if (context == null) {
            return;
        }
        a(context, str, str2, i);
    }

    public static String bY(Context context) {
        return context == null ? "" : b(context, "ksadsdk_egid", "KEY_SDK_EGID", "");
    }

    public static long bZ(Context context) {
        if (context == null) {
            return 0L;
        }
        return b(context, "ksadsdk_gidExpireTimeMs", "KEY_SDK_EGID", 0L);
    }

    public static int c(String str, String str2, int i) {
        Context context = getContext();
        if (context == null) {
            return 0;
        }
        return b(context, str, str2, 0);
    }

    private static void c(Context context, String str, String str2, boolean z) {
        if (context == null) {
            return;
        }
        if (x.Il()) {
            bb.l(str, str2, z);
        } else {
            com.kwad.sdk.utils.a.e.at(context, str).putBoolean(str2, z);
        }
    }

    public static int ca(Context context) {
        if (context == null) {
            return 0;
        }
        return b(context, "ksadsdk_config_request", "KEY_CONFIG_REQUEST_FAIL", 0);
    }

    public static String cb(Context context) {
        if (context == null) {
            return "";
        }
        String strB = b(context, "ksadsdk_model", "KEY_SDK_MODEL", "");
        bb.i(strB, "ksadsdk_model", "KEY_SDK_MODEL");
        return strB;
    }

    public static int cc(Context context) {
        if (context == null) {
            return 0;
        }
        return b(context, "ksadsdk_reward_full_ad_jump_direct", "KEY_REWARD_AD_SHOW_INTERACT_INTERVAL_SHOW_COUNT", 0);
    }

    public static String cd(Context context) {
        return context == null ? "" : b(context, "ksadsdk_reward_full_ad_jump_direct", "KEY_REWARD_INTERACT_AD_SHOW_INFO", "");
    }

    public static String ce(Context context) {
        return context == null ? "" : b(context, "ksadsdk_device_sig", "KEY_SDK_DEVICE_SIG", "");
    }

    public static String cf(Context context) {
        if (context == null) {
            return "";
        }
        String strH = h("ksadsdk_pref", "webview_ua", "");
        bb.i(strH, "ksadsdk_pref", "webview_ua");
        return strH;
    }

    public static String cg(Context context) {
        if (ba.Jw()) {
            return ba.as(context.getApplicationContext(), "ksadsdk_sdk_config_data");
        }
        String strH = bb.h("ksadsdk_sdk_config_data", "config_str", "");
        ba.j(context.getApplicationContext(), "ksadsdk_sdk_config_data", strH);
        return strH;
    }

    public static void d(Context context, long j) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_gidExpireTimeMs", "KEY_SDK_EGID", j);
    }

    private static boolean d(Context context, String str, String str2, boolean z) {
        return context == null ? z : x.Il() ? bb.m(str, str2, z) : com.kwad.sdk.utils.a.e.at(context, str).getBoolean(str2, z);
    }

    public static void e(Context context, String str, long j) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_pref", str, j);
    }

    public static void f(Context context, String str, long j) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_download_package_length", str, j);
    }

    public static void g(Context context, String str, String str2) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_download_package_md5", str, str2);
    }

    private static void g(String str, String str2, String str3) {
        Context context = getContext();
        if (context == null) {
            return;
        }
        a(context, str, str2, str3);
    }

    public static Context getContext() {
        return ServiceProvider.HD();
    }

    public static String h(String str, String str2, String str3) {
        Context context = getContext();
        return context == null ? str3 : b(context, str, str2, str3);
    }

    public static boolean h(Context context, String str, String str2) {
        if (context == null) {
            return false;
        }
        return m("ksadsdk_solder", "solder_is_success_loaded_" + str + str2, false);
    }

    public static void i(Context context, String str, String str2) {
        if (context == null) {
            return;
        }
        if (x.Il()) {
            bb.ar(str, str2);
        } else {
            com.kwad.sdk.utils.a.e.at(context, str).remove(str2);
            x.ap(str2, "");
        }
    }

    public static void i(String str, String str2, String str3) {
        if (x.Il()) {
            bb.i(str, str2, str3);
        }
    }

    public static void j(Context context, int i) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_config_request", "KEY_CONFIG_REQUEST_FAIL", i);
    }

    public static void k(Context context, int i) {
        if (context == null) {
            return;
        }
        a(context, "ksadsdk_reward_full_ad_jump_direct", "KEY_REWARD_AD_SHOW_INTERACT_INTERVAL_SHOW_COUNT", i);
    }

    public static void l(String str, String str2, boolean z) {
        Context context = getContext();
        if (context == null) {
            return;
        }
        c(context, str, str2, z);
    }

    public static boolean m(String str, String str2, boolean z) {
        Context context = getContext();
        if (context == null) {
            return false;
        }
        return d(context, str, str2, false);
    }
}
