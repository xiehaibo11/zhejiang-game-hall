package com.kwad.sdk.utils;

public final class y {
    private static java.lang.String sAppTag = "";


    static {
            return
    }

    public static long IA() {
            java.lang.String r0 = "ksadsdk_push_ad_common"
            java.lang.String r1 = "key_push_last_show_time"
            r2 = -1
            long r0 = b(r0, r1, r2)
            return r0
    }

    public static java.lang.String IB() {
            android.content.Context r0 = getContext()
            java.lang.String r1 = ""
            if (r0 != 0) goto L9
            return r1
        L9:
            java.lang.String r0 = "ksadsdk_install_tips_show_count"
            java.lang.String r2 = "init_install_tips_show_count"
            java.lang.String r0 = h(r0, r2, r1)
            return r0
    }

    public static void IC() {
            java.lang.String r0 = "image_load_total"
            java.lang.String r1 = "ksadsdk_perf"
            r2 = 0
            int r2 = c(r1, r0, r2)
            int r2 = r2 + 1
            b(r1, r0, r2)
            return
    }

    public static void ID() {
            java.lang.String r0 = "image_load_suc"
            java.lang.String r1 = "ksadsdk_perf"
            r2 = 0
            int r2 = c(r1, r0, r2)
            int r2 = r2 + 1
            b(r1, r0, r2)
            return
    }

    public static void IE() {
            java.lang.String r0 = "image_load_failed"
            java.lang.String r1 = "ksadsdk_perf"
            r2 = 0
            int r2 = c(r1, r0, r2)
            int r2 = r2 + 1
            b(r1, r0, r2)
            return
    }

    public static double IF() {
            r0 = 0
            java.lang.String r1 = "image_load_complete_count"
            java.lang.String r2 = "ksadsdk_perf"
            int r3 = c(r2, r1, r0)
            r4 = 0
            java.lang.String r6 = "image_load_complete_total"
            long r7 = b(r2, r6, r4)
            b(r2, r1, r0)
            a(r2, r6, r4)
            if (r3 != 0) goto L1c
            r0 = 0
            return r0
        L1c:
            double r0 = (double) r7
            double r2 = (double) r3
            double r0 = r0 / r2
            return r0
    }

    public static int IG() {
            r0 = 0
            java.lang.String r1 = "image_load_total"
            java.lang.String r2 = "ksadsdk_perf"
            int r3 = c(r2, r1, r0)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "imageLoadTotal:"
            r4.<init>(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "Ks_UnionUtils"
            com.kwad.sdk.core.e.c.d(r5, r4)
            b(r2, r1, r0)
            return r3
    }

    public static int IH() {
            r0 = 0
            java.lang.String r1 = "image_load_suc"
            java.lang.String r2 = "ksadsdk_perf"
            int r3 = c(r2, r1, r0)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "imageLoadSuccess:"
            r4.<init>(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "Ks_UnionUtils"
            com.kwad.sdk.core.e.c.d(r5, r4)
            b(r2, r1, r0)
            return r3
    }

    public static int II() {
            r0 = 0
            java.lang.String r1 = "image_load_failed"
            java.lang.String r2 = "ksadsdk_perf"
            int r3 = c(r2, r1, r0)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "imageLoadFailed:"
            r4.<init>(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "Ks_UnionUtils"
            com.kwad.sdk.core.e.c.d(r5, r4)
            b(r2, r1, r0)
            return r3
    }

    public static java.lang.String Is() {
            android.content.Context r0 = getContext()
            java.lang.String r1 = ""
            if (r0 != 0) goto L9
            return r1
        L9:
            java.lang.String r2 = "ksadsdk_interstitial_daily_show_count"
            java.lang.String r3 = "KEY_INTERSTITIAL_DAILY_SHOW_COUNT"
            java.lang.String r0 = b(r0, r2, r3, r1)
            return r0
    }

    public static java.lang.String It() {
            android.content.Context r0 = getContext()
            java.lang.String r1 = ""
            if (r0 != 0) goto L9
            return r1
        L9:
            boolean r2 = com.kwad.sdk.utils.ba.JD()
            java.lang.String r3 = "KEY_INTERSTITIAL_AGGREGATE_DAILY_SHOW_COUNT"
            if (r2 == 0) goto L14
            java.lang.String r2 = "ksadsdk_interstitial_daily_show_count"
            goto L16
        L14:
            java.lang.String r2 = "ksadsdk_interstitial_aggregate_daily_show_count"
        L16:
            java.lang.String r0 = b(r0, r2, r3, r1)
            return r0
    }

    public static java.lang.String Iu() {
            android.content.Context r0 = getContext()
            java.lang.String r1 = ""
            if (r0 != 0) goto L9
            return r1
        L9:
            java.lang.String r2 = "ksadsdk_reward_full_ad_jump_direct"
            java.lang.String r3 = "KEY_REWARD_FULL_AD_JUMP_DIRECT"
            java.lang.String r0 = b(r0, r2, r3, r1)
            return r0
    }

    public static java.lang.String Iv() {
            android.content.Context r0 = getContext()
            java.lang.String r1 = ""
            if (r0 != 0) goto L9
            return r1
        L9:
            boolean r2 = com.kwad.sdk.utils.ba.Jz()
            java.lang.String r3 = "KEY_SPLASH_DAILY_SHOW_COUNT"
            if (r2 == 0) goto L14
            java.lang.String r2 = "ksadsdk_splash_local_ad_force_active"
            goto L16
        L14:
            java.lang.String r2 = "ksadsdk_splash_daily_show_count"
        L16:
            java.lang.String r0 = b(r0, r2, r3, r1)
            return r0
    }

    public static java.lang.String Iw() {
            android.content.Context r0 = getContext()
            java.lang.String r1 = ""
            if (r0 != 0) goto L9
            return r1
        L9:
            boolean r2 = com.kwad.sdk.utils.ba.JB()
            java.lang.String r3 = "KEY_REWARD_AUTO_CALL_APP_CARD_SHOW_COUNT"
            if (r2 == 0) goto L18
            java.lang.String r0 = "ksadsdk_reward_full_ad_jump_direct"
            java.lang.String r0 = h(r0, r3, r1)
            goto L1e
        L18:
            java.lang.String r2 = "ksadsdk_reward_auto_call_app_card_show_count"
            java.lang.String r0 = b(r0, r2, r3, r1)
        L1e:
            return r0
    }

    public static java.lang.String Ix() {
            java.lang.String r0 = "ksadsdk_interstitial_daily_show_count"
            java.lang.String r1 = "KEY_INTERSTITIAL_AUTO_CALL_APP_CARD_SHOW_COUNT"
            java.lang.String r2 = ""
            java.lang.String r0 = h(r0, r1, r2)
            return r0
    }

    public static java.lang.String Iy() {
            java.lang.String r0 = com.kwad.sdk.utils.y.sAppTag
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = com.kwad.sdk.utils.y.sAppTag
            return r0
        Lb:
            android.content.Context r0 = getContext()
            java.lang.String r1 = ""
            if (r0 != 0) goto L14
            return r1
        L14:
            java.lang.String r2 = "ksadsdk_pref"
            java.lang.String r3 = "appTag"
            java.lang.String r0 = b(r0, r2, r3, r1)
            return r0
    }

    public static java.lang.String Iz() {
            android.content.Context r0 = getContext()
            if (r0 != 0) goto L9
            java.lang.String r0 = ""
            return r0
        L9:
            java.lang.String r0 = bY(r0)
            return r0
    }

    public static long Q(android.content.Context r3, java.lang.String r4) {
            r0 = 0
            if (r3 != 0) goto L5
            return r0
        L5:
            java.lang.String r2 = "ksadsdk_pref"
            long r3 = b(r3, r2, r4, r0)
            return r3
    }

    public static long R(android.content.Context r3, java.lang.String r4) {
            r0 = 0
            if (r3 != 0) goto L5
            return r0
        L5:
            java.lang.String r2 = "ksadsdk_download_package_length"
            long r3 = b(r3, r2, r4, r0)
            return r3
    }

    public static java.lang.String S(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = ""
            if (r2 != 0) goto L5
            return r0
        L5:
            java.lang.String r1 = "ksadsdk_download_package_md5"
            java.lang.String r2 = b(r2, r1, r3, r0)
            return r2
    }

    public static void T(android.content.Context r2, java.lang.String r3) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_egid"
            java.lang.String r1 = "KEY_SDK_EGID"
            a(r2, r0, r1, r3)
            return
    }

    public static void U(android.content.Context r2, java.lang.String r3) {
            if (r2 != 0) goto L3
            return
        L3:
            r2 = 1
            java.lang.String r0 = "ksadsdk_model"
            java.lang.String r1 = "KEY_SDK_MODEL"
            a(r0, r1, r3, r2)
            return
    }

    public static void V(android.content.Context r2, java.lang.String r3) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_interstitial_daily_show_count"
            java.lang.String r1 = "KEY_INTERSTITIAL_DAILY_SHOW_COUNT"
            a(r2, r0, r1, r3)
            return
    }

    public static void W(android.content.Context r2, java.lang.String r3) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_interstitial_daily_show_count"
            java.lang.String r1 = "KEY_INTERSTITIAL_AGGREGATE_DAILY_SHOW_COUNT"
            a(r2, r0, r1, r3)
            com.kwad.sdk.utils.ba.JC()
            return
    }

    public static void X(android.content.Context r2, java.lang.String r3) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_reward_full_ad_jump_direct"
            java.lang.String r1 = "KEY_REWARD_INTERACT_AD_SHOW_INFO"
            a(r2, r0, r1, r3)
            return
    }

    public static void Y(android.content.Context r2, java.lang.String r3) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_reward_full_ad_jump_direct"
            java.lang.String r1 = "KEY_REWARD_FULL_AD_JUMP_DIRECT"
            a(r2, r0, r1, r3)
            return
    }

    public static void Z(android.content.Context r2, java.lang.String r3) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_splash_local_ad_force_active"
            java.lang.String r1 = "KEY_SPLASH_DAILY_SHOW_COUNT"
            a(r2, r0, r1, r3)
            com.kwad.sdk.utils.ba.Jy()
            return
    }

    private static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3, int r4) {
            if (r1 != 0) goto L3
            return
        L3:
            boolean r0 = com.kwad.sdk.utils.x.Il()
            if (r0 == 0) goto Ld
            com.kwad.sdk.utils.bb.b(r2, r3, r4)
            return
        Ld:
            com.kwad.sdk.utils.a.c r1 = com.kwad.sdk.utils.a.e.at(r1, r2)
            r1.putInt(r3, r4)
            return
    }

    private static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3, long r4) {
            if (r1 != 0) goto L3
            return
        L3:
            boolean r0 = com.kwad.sdk.utils.x.Il()
            if (r0 == 0) goto Ld
            com.kwad.sdk.utils.bb.a(r2, r3, r4)
            return
        Ld:
            com.kwad.sdk.utils.a.c r1 = com.kwad.sdk.utils.a.e.at(r1, r2)
            r1.putLong(r3, r4)
            return
    }

    public static void a(android.content.Context r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            if (r3 != 0) goto L3
            return
        L3:
            boolean r0 = com.kwad.sdk.utils.x.Il()
            java.lang.String r1 = " value:"
            java.lang.String r2 = "Ks_UnionUtils"
            if (r0 == 0) goto L30
            com.kwad.sdk.utils.bb.g(r4, r5, r6)
            java.lang.Boolean r3 = com.kwad.framework.a.a.ml
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto L59
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "putString Sp key:"
            r3.<init>(r4)
            r3.append(r5)
            r3.append(r1)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            com.kwad.sdk.core.e.c.d(r2, r3)
            return
        L30:
            com.kwad.sdk.utils.a.c r3 = com.kwad.sdk.utils.a.e.at(r3, r4)
            r3.putString(r5, r6)
            java.lang.Boolean r3 = com.kwad.framework.a.a.ml
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto L56
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "putString key:"
            r3.<init>(r4)
            r3.append(r5)
            r3.append(r1)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            com.kwad.sdk.core.e.c.d(r2, r3)
        L56:
            com.kwad.sdk.utils.x.ap(r5, r6)
        L59:
            return
    }

    private static void a(android.content.Context r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, boolean r7) {
            if (r3 != 0) goto L3
            return
        L3:
            boolean r0 = com.kwad.sdk.utils.x.Il()
            java.lang.String r1 = " value:"
            java.lang.String r2 = "Ks_UnionUtils"
            if (r0 == 0) goto L30
            com.kwad.sdk.utils.bb.a(r4, r5, r6, r7)
            java.lang.Boolean r3 = com.kwad.framework.a.a.ml
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto L59
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "putString Sp key:"
            r3.<init>(r4)
            r3.append(r5)
            r3.append(r1)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            com.kwad.sdk.core.e.c.d(r2, r3)
            return
        L30:
            com.kwad.sdk.utils.a.c r3 = com.kwad.sdk.utils.a.e.at(r3, r4)
            r3.putString(r5, r6)
            java.lang.Boolean r3 = com.kwad.framework.a.a.ml
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto L56
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "putString key:"
            r3.<init>(r4)
            r3.append(r5)
            r3.append(r1)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            com.kwad.sdk.core.e.c.d(r2, r3)
        L56:
            com.kwad.sdk.utils.x.ap(r5, r6)
        L59:
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2, long r3) {
            android.content.Context r0 = getContext()
            if (r0 != 0) goto L7
            return
        L7:
            a(r0, r1, r2, r3)
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, boolean r4) {
            android.content.Context r4 = getContext()
            if (r4 != 0) goto L7
            return
        L7:
            r0 = 1
            a(r4, r1, r2, r3, r0)
            return
    }

    public static void aa(android.content.Context r2, java.lang.String r3) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_reward_full_ad_jump_direct"
            java.lang.String r1 = "KEY_REWARD_AUTO_CALL_APP_CARD_SHOW_COUNT"
            a(r2, r0, r1, r3)
            com.kwad.sdk.utils.ba.JA()
            return
    }

    public static void ab(android.content.Context r2, java.lang.String r3) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_interstitial_daily_show_count"
            java.lang.String r1 = "KEY_INTERSTITIAL_AUTO_CALL_APP_CARD_SHOW_COUNT"
            a(r2, r0, r1, r3)
            return
    }

    public static void ac(android.content.Context r2, java.lang.String r3) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_device_sig"
            java.lang.String r1 = "KEY_SDK_DEVICE_SIG"
            a(r2, r0, r1, r3)
            return
    }

    public static void ad(android.content.Context r0, java.lang.String r1) {
            if (r0 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L9
            goto L11
        L9:
            com.kwad.sdk.utils.y$1 r0 = new com.kwad.sdk.utils.y$1
            r0.<init>(r1)
            com.kwad.sdk.utils.g.execute(r0)
        L11:
            return
    }

    public static void ae(android.content.Context r2, java.lang.String r3) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_pref"
            java.lang.String r1 = "appTag"
            a(r2, r0, r1, r3)
            return
    }

    public static void af(android.content.Context r2, java.lang.String r3) {
            if (r2 != 0) goto L3
            return
        L3:
            r2 = 1
            java.lang.String r0 = "ksadsdk_pref"
            java.lang.String r1 = "webview_ua"
            a(r0, r1, r3, r2)
            return
    }

    public static void ag(android.content.Context r1, java.lang.String r2) {
            if (r1 != 0) goto L3
            return
        L3:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto La
            return
        La:
            android.content.Context r1 = r1.getApplicationContext()
            java.lang.String r0 = "ksadsdk_sdk_config_data"
            com.kwad.sdk.utils.ba.k(r1, r0, r2)
            return
    }

    public static void ah(android.content.Context r1, java.lang.String r2) {
            if (r1 != 0) goto L3
            return
        L3:
            java.lang.String r1 = "ksadsdk_install_tips_show_count"
            java.lang.String r0 = "init_install_tips_show_count"
            g(r1, r0, r2)
            return
    }

    public static java.util.Map<java.lang.String, ?> ai(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            boolean r1 = com.kwad.sdk.utils.x.Il()
            if (r1 == 0) goto L16
            android.content.SharedPreferences r2 = com.kwad.sdk.utils.bb.fH(r3)
            if (r2 == 0) goto L15
            java.util.Map r2 = r2.getAll()
            return r2
        L15:
            return r0
        L16:
            com.kwad.sdk.utils.a.c r2 = com.kwad.sdk.utils.a.e.at(r2, r3)
            java.util.Map r2 = r2.getAll()
            return r2
    }

    public static void ar(java.lang.String r1, java.lang.String r2) {
            android.content.Context r0 = getContext()
            if (r0 != 0) goto L7
            return
        L7:
            i(r0, r1, r2)
            return
    }

    public static void at(long r2) {
            java.lang.String r0 = "ksadsdk_push_ad_common"
            java.lang.String r1 = "key_push_last_show_time"
            a(r0, r1, r2)
            return
    }

    public static void au(long r4) {
            java.lang.String r0 = "image_load_complete_count"
            java.lang.String r1 = "ksadsdk_perf"
            r2 = 0
            int r2 = c(r1, r0, r2)
            int r2 = r2 + 1
            b(r1, r0, r2)
            java.lang.String r0 = "image_load_complete_total"
            r2 = 0
            long r2 = b(r1, r0, r2)
            long r2 = r2 + r4
            a(r1, r0, r2)
            return
    }

    private static int b(android.content.Context r1, java.lang.String r2, java.lang.String r3, int r4) {
            if (r1 != 0) goto L3
            return r4
        L3:
            boolean r0 = com.kwad.sdk.utils.x.Il()
            if (r0 == 0) goto Le
            int r1 = com.kwad.sdk.utils.bb.c(r2, r3, r4)
            goto L16
        Le:
            com.kwad.sdk.utils.a.c r1 = com.kwad.sdk.utils.a.e.at(r1, r2)
            int r1 = r1.getInt(r3, r4)
        L16:
            return r1
    }

    private static long b(android.content.Context r1, java.lang.String r2, java.lang.String r3, long r4) {
            if (r1 != 0) goto L3
            return r4
        L3:
            boolean r0 = com.kwad.sdk.utils.x.Il()
            if (r0 == 0) goto Le
            long r1 = com.kwad.sdk.utils.bb.b(r2, r3, r4)
            return r1
        Le:
            com.kwad.sdk.utils.a.c r1 = com.kwad.sdk.utils.a.e.at(r1, r2)
            long r1 = r1.getLong(r3, r4)
            return r1
    }

    public static long b(java.lang.String r1, java.lang.String r2, long r3) {
            android.content.Context r0 = getContext()
            if (r0 != 0) goto L7
            return r3
        L7:
            long r1 = b(r0, r1, r2, r3)
            return r1
    }

    public static java.lang.String b(android.content.Context r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            if (r3 != 0) goto L3
            return r6
        L3:
            boolean r0 = com.kwad.sdk.utils.x.Il()
            java.lang.String r1 = " value:"
            java.lang.String r2 = "Ks_UnionUtils"
            if (r0 == 0) goto L31
            java.lang.String r3 = com.kwad.sdk.utils.bb.h(r4, r5, r6)
            java.lang.Boolean r4 = com.kwad.framework.a.a.ml
            boolean r4 = r4.booleanValue()
            if (r4 == 0) goto L4f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r6 = "getString From Sp key:"
            r4.<init>(r6)
        L20:
            r4.append(r5)
            r4.append(r1)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            com.kwad.sdk.core.e.c.d(r2, r4)
            goto L4f
        L31:
            com.kwad.sdk.utils.a.e.at(r3, r4)
            com.kwad.sdk.utils.a.c r3 = com.kwad.sdk.utils.a.e.at(r3, r4)
            java.lang.String r3 = r3.getString(r5, r6)
            com.kwad.sdk.utils.x.aq(r5, r3)
            java.lang.Boolean r4 = com.kwad.framework.a.a.ml
            boolean r4 = r4.booleanValue()
            if (r4 == 0) goto L4f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r6 = "getString key:"
            r4.<init>(r6)
            goto L20
        L4f:
            boolean r4 = com.kwad.sdk.core.a.c.cT(r3)
            if (r4 == 0) goto L59
            java.lang.String r3 = com.kwad.sdk.core.a.c.cS(r3)
        L59:
            return r3
    }

    public static void b(android.content.Context r1, java.lang.String r2, java.lang.String r3, boolean r4) {
            if (r1 != 0) goto L3
            return
        L3:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r0 = "solder_is_success_loaded_"
            r1.<init>(r0)
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ksadsdk_solder"
            l(r2, r1, r4)
            return
    }

    public static void b(java.lang.String r1, java.lang.String r2, int r3) {
            android.content.Context r0 = getContext()
            if (r0 != 0) goto L7
            return
        L7:
            a(r0, r1, r2, r3)
            return
    }

    public static java.lang.String bY(android.content.Context r3) {
            java.lang.String r0 = ""
            if (r3 != 0) goto L5
            return r0
        L5:
            java.lang.String r1 = "ksadsdk_egid"
            java.lang.String r2 = "KEY_SDK_EGID"
            java.lang.String r3 = b(r3, r1, r2, r0)
            return r3
    }

    public static long bZ(android.content.Context r4) {
            r0 = 0
            if (r4 != 0) goto L5
            return r0
        L5:
            java.lang.String r2 = "ksadsdk_gidExpireTimeMs"
            java.lang.String r3 = "KEY_SDK_EGID"
            long r0 = b(r4, r2, r3, r0)
            return r0
    }

    public static int c(java.lang.String r1, java.lang.String r2, int r3) {
            android.content.Context r3 = getContext()
            r0 = 0
            if (r3 != 0) goto L8
            return r0
        L8:
            int r1 = b(r3, r1, r2, r0)
            return r1
    }

    private static void c(android.content.Context r1, java.lang.String r2, java.lang.String r3, boolean r4) {
            if (r1 != 0) goto L3
            return
        L3:
            boolean r0 = com.kwad.sdk.utils.x.Il()
            if (r0 == 0) goto Ld
            com.kwad.sdk.utils.bb.l(r2, r3, r4)
            return
        Ld:
            com.kwad.sdk.utils.a.c r1 = com.kwad.sdk.utils.a.e.at(r1, r2)
            r1.putBoolean(r3, r4)
            return
    }

    public static int ca(android.content.Context r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "ksadsdk_config_request"
            java.lang.String r2 = "KEY_CONFIG_REQUEST_FAIL"
            int r3 = b(r3, r1, r2, r0)
            return r3
    }

    public static java.lang.String cb(android.content.Context r3) {
            java.lang.String r0 = ""
            if (r3 != 0) goto L5
            return r0
        L5:
            java.lang.String r1 = "KEY_SDK_MODEL"
            java.lang.String r2 = "ksadsdk_model"
            java.lang.String r3 = b(r3, r2, r1, r0)
            com.kwad.sdk.utils.bb.i(r3, r2, r1)
            return r3
    }

    public static int cc(android.content.Context r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "ksadsdk_reward_full_ad_jump_direct"
            java.lang.String r2 = "KEY_REWARD_AD_SHOW_INTERACT_INTERVAL_SHOW_COUNT"
            int r3 = b(r3, r1, r2, r0)
            return r3
    }

    public static java.lang.String cd(android.content.Context r3) {
            java.lang.String r0 = ""
            if (r3 != 0) goto L5
            return r0
        L5:
            java.lang.String r1 = "ksadsdk_reward_full_ad_jump_direct"
            java.lang.String r2 = "KEY_REWARD_INTERACT_AD_SHOW_INFO"
            java.lang.String r3 = b(r3, r1, r2, r0)
            return r3
    }

    public static java.lang.String ce(android.content.Context r3) {
            java.lang.String r0 = ""
            if (r3 != 0) goto L5
            return r0
        L5:
            java.lang.String r1 = "ksadsdk_device_sig"
            java.lang.String r2 = "KEY_SDK_DEVICE_SIG"
            java.lang.String r3 = b(r3, r1, r2, r0)
            return r3
    }

    public static java.lang.String cf(android.content.Context r2) {
            java.lang.String r0 = ""
            if (r2 != 0) goto L5
            return r0
        L5:
            java.lang.String r2 = "webview_ua"
            java.lang.String r1 = "ksadsdk_pref"
            java.lang.String r0 = h(r1, r2, r0)
            com.kwad.sdk.utils.bb.i(r0, r1, r2)
            return r0
    }

    public static java.lang.String cg(android.content.Context r3) {
            boolean r0 = com.kwad.sdk.utils.ba.Jw()
            java.lang.String r1 = "ksadsdk_sdk_config_data"
            if (r0 == 0) goto L11
            android.content.Context r3 = r3.getApplicationContext()
            java.lang.String r3 = com.kwad.sdk.utils.ba.as(r3, r1)
            goto L21
        L11:
            java.lang.String r0 = "config_str"
            java.lang.String r2 = ""
            java.lang.String r0 = com.kwad.sdk.utils.bb.h(r1, r0, r2)
            android.content.Context r3 = r3.getApplicationContext()
            com.kwad.sdk.utils.ba.j(r3, r1, r0)
            r3 = r0
        L21:
            return r3
    }

    public static void d(android.content.Context r2, long r3) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_gidExpireTimeMs"
            java.lang.String r1 = "KEY_SDK_EGID"
            a(r2, r0, r1, r3)
            return
    }

    private static boolean d(android.content.Context r1, java.lang.String r2, java.lang.String r3, boolean r4) {
            if (r1 != 0) goto L3
            return r4
        L3:
            boolean r0 = com.kwad.sdk.utils.x.Il()
            if (r0 == 0) goto Le
            boolean r1 = com.kwad.sdk.utils.bb.m(r2, r3, r4)
            return r1
        Le:
            com.kwad.sdk.utils.a.c r1 = com.kwad.sdk.utils.a.e.at(r1, r2)
            boolean r1 = r1.getBoolean(r3, r4)
            return r1
    }

    public static void e(android.content.Context r1, java.lang.String r2, long r3) {
            if (r1 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_pref"
            a(r1, r0, r2, r3)
            return
    }

    public static void f(android.content.Context r1, java.lang.String r2, long r3) {
            if (r1 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_download_package_length"
            a(r1, r0, r2, r3)
            return
    }

    public static void g(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            if (r1 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_download_package_md5"
            a(r1, r0, r2, r3)
            return
    }

    private static void g(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            android.content.Context r0 = getContext()
            if (r0 != 0) goto L7
            return
        L7:
            a(r0, r1, r2, r3)
            return
    }

    public static android.content.Context getContext() {
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.HD()
            return r0
    }

    public static java.lang.String h(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            android.content.Context r0 = getContext()
            if (r0 != 0) goto L7
            return r3
        L7:
            java.lang.String r1 = b(r0, r1, r2, r3)
            return r1
    }

    public static boolean h(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r1 = "solder_is_success_loaded_"
            r2.<init>(r1)
            r2.append(r3)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ksadsdk_solder"
            boolean r2 = m(r3, r2, r0)
            return r2
    }

    public static void i(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            if (r1 != 0) goto L3
            return
        L3:
            boolean r0 = com.kwad.sdk.utils.x.Il()
            if (r0 == 0) goto Ld
            com.kwad.sdk.utils.bb.ar(r2, r3)
            return
        Ld:
            com.kwad.sdk.utils.a.c r1 = com.kwad.sdk.utils.a.e.at(r1, r2)
            r1.remove(r3)
            java.lang.String r1 = ""
            com.kwad.sdk.utils.x.ap(r3, r1)
            return
    }

    public static void i(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.kwad.sdk.utils.x.Il()
            if (r0 != 0) goto L7
            return
        L7:
            com.kwad.sdk.utils.bb.i(r1, r2, r3)
            return
    }

    public static void j(android.content.Context r2, int r3) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_config_request"
            java.lang.String r1 = "KEY_CONFIG_REQUEST_FAIL"
            a(r2, r0, r1, r3)
            return
    }

    public static void k(android.content.Context r2, int r3) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ksadsdk_reward_full_ad_jump_direct"
            java.lang.String r1 = "KEY_REWARD_AD_SHOW_INTERACT_INTERVAL_SHOW_COUNT"
            a(r2, r0, r1, r3)
            return
    }

    public static void l(java.lang.String r1, java.lang.String r2, boolean r3) {
            android.content.Context r0 = getContext()
            if (r0 != 0) goto L7
            return
        L7:
            c(r0, r1, r2, r3)
            return
    }

    public static boolean m(java.lang.String r1, java.lang.String r2, boolean r3) {
            android.content.Context r3 = getContext()
            r0 = 0
            if (r3 != 0) goto L8
            return r0
        L8:
            boolean r1 = d(r3, r1, r2, r0)
            return r1
    }
}
