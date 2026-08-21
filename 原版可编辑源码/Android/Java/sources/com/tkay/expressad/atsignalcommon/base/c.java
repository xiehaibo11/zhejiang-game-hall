package com.tkay.expressad.atsignalcommon.base;

import android.net.Uri;
import android.text.TextUtils;

public final class c implements a {
    @Override
    public final boolean a(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        String scheme = Uri.parse(str).getScheme();
        if (TextUtils.isEmpty(scheme)) {
            return false;
        }
        scheme.equals("intent");
        return false;
    }
}
