package com.mbridge.msdk.mbjscommon.base;

import android.net.Uri;
import android.text.TextUtils;

/* JADX INFO: compiled from: IntentFilter.java */
/* JADX INFO: loaded from: classes2.dex */
public final class c implements a {
    @Override // com.mbridge.msdk.mbjscommon.base.a
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
