package com.mbridge.msdk.mbjscommon.base;

import android.net.Uri;
import android.text.TextUtils;

public final class c implements a {
    @Override
    public final boolean a(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        String scheme = Uri.parse(str).getScheme();
        if (TextUtils.isEmpty(scheme) || !scheme.equals("intent")) {
            return false;
        }
        return com.mbridge.msdk.click.c.e(com.mbridge.msdk.foundation.controller.a.f().j(), str);
    }
}
