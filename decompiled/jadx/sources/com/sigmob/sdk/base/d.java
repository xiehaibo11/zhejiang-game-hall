package com.sigmob.sdk.base;

import com.czhj.sdk.common.ClientMetadata;

/* JADX INFO: loaded from: classes3.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f4880a = "sig_ad";
    private static final String b = "sig_close";
    private static final String c = "sig_back";
    private static final String d = "sig_skip_args_1";
    private static final String e = "sig_skip_args_2";
    private static final String f = "sig_skip_ad_args";
    private static final String g = "sig_close_args";
    private static final String h = "sig_close_ad_title";
    private static final String i = "sig_close_ad_message";
    private static final String j = "sig_close_ad_cancel";
    private static final String k = "sig_close_ad_ok";
    private static final String l = "sig_custom_dialog";
    private static final String m = "sig_dialog_window_anim";
    private static final String n = "sig_transparent_style";
    private static final String o = "sig_base_theme";
    private static final String p = "sig_land_theme";
    private static final String q = "sig_transparent_lang";

    public static int a() {
        return ClientMetadata.getInstance().getStyleResources(q);
    }

    public static String a(Object... objArr) {
        return ClientMetadata.getInstance().getStringResources(d, "跳过 %d", objArr);
    }

    public static int b() {
        return ClientMetadata.getInstance().getStyleResources(o);
    }

    public static String b(Object... objArr) {
        return ClientMetadata.getInstance().getStringResources(e, "%d 跳过", objArr);
    }

    public static int c() {
        return ClientMetadata.getInstance().getStyleResources(p);
    }

    public static String c(Object... objArr) {
        return ClientMetadata.getInstance().getStringResources(f, "跳过广告 %d", objArr);
    }

    public static int d() {
        return ClientMetadata.getInstance().getStyleResources(n);
    }

    public static String d(Object... objArr) {
        return ClientMetadata.getInstance().getStringResources(g, "%s 跳过", objArr);
    }

    public static int e() {
        return ClientMetadata.getInstance().getStyleResources(l);
    }

    public static int f() {
        return ClientMetadata.getInstance().getStyleResources(m);
    }

    public static String g() {
        return ClientMetadata.getInstance().getStringResources(f4880a, "广告");
    }

    public static String h() {
        return ClientMetadata.getInstance().getStringResources(b, "跳过");
    }

    public static String i() {
        return ClientMetadata.getInstance().getStringResources(c, "返回");
    }

    public static String j() {
        return ClientMetadata.getInstance().getStringResources(i, "还剩_SEC_秒，您就可以获得奖励了哦!");
    }

    public static String k() {
        return ClientMetadata.getInstance().getStringResources(h, "关闭视频?");
    }

    public static String l() {
        return ClientMetadata.getInstance().getStringResources(j, "继续播放");
    }

    public static String m() {
        return ClientMetadata.getInstance().getStringResources(k, "确定关闭!");
    }
}
