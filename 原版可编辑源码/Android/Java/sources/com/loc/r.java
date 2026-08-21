package com.loc;

import android.net.Uri;
import android.text.TextUtils;

public abstract class r extends bt {
    @Override
    public String c() {
        Uri.Builder builderBuildUpon;
        String str;
        if (TextUtils.isEmpty(b())) {
            return b();
        }
        String strB = b();
        Uri uri = Uri.parse(strB);
        if (uri.getAuthority().startsWith("dualstack-")) {
            return strB;
        }
        if (uri.getAuthority().startsWith("restsdk.amap.com")) {
            builderBuildUpon = uri.buildUpon();
            str = "dualstack-arestapi.amap.com";
        } else {
            builderBuildUpon = uri.buildUpon();
            str = "dualstack-" + uri.getAuthority();
        }
        return builderBuildUpon.authority(str).build().toString();
    }
}
