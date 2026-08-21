package com.tkay.basead.a;

import android.content.Context;
import android.text.TextUtils;

public final class e {
    public static int a(Context context, com.tkay.core.common.f.h hVar) {
        int iD = hVar.D();
        if (iD == 1 || iD == 4) {
            return com.tkay.core.common.l.h.a(context, "myoffer_cta_install_now", com.tkay.expressad.foundation.h.i.g);
        }
        return com.tkay.core.common.l.h.a(context, "myoffer_cta_learn_more", com.tkay.expressad.foundation.h.i.g);
    }

    public static boolean a(com.tkay.core.common.f.h hVar) {
        return (TextUtils.isEmpty(hVar.t()) && TextUtils.isEmpty(hVar.r()) && TextUtils.isEmpty(hVar.s())) ? false : true;
    }
}
