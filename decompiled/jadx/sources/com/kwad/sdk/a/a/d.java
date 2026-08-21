package com.kwad.sdk.a.a;

import android.text.TextUtils;
import com.kwad.sdk.core.response.model.AdInfo;

/* JADX INFO: loaded from: classes2.dex */
public final class d {
    public static String A(AdInfo adInfo) {
        return com.kwad.sdk.core.config.d.zU().replace("[appname]", adInfo.adBaseInfo.appName).replace("[appsize]", com.kwad.components.core.t.e.a(adInfo.adBaseInfo.packageSize, true)).replace("[appver]", adInfo.adBaseInfo.appVersion);
    }

    public static String yh() {
        String strZV = com.kwad.sdk.core.config.d.zV();
        return TextUtils.isEmpty(strZV) ? "安装" : strZV;
    }

    public static String yi() {
        String strZW = com.kwad.sdk.core.config.d.zW();
        return TextUtils.isEmpty(strZW) ? "取消" : strZW;
    }
}
