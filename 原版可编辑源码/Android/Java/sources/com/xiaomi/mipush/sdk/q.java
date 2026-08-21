package com.xiaomi.mipush.sdk;

import android.content.Context;
import com.xiaomi.push.ed;
import com.xiaomi.push.ho;
import com.xiaomi.push.service.ba;

final class q extends ba.a {
    final Context a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    q(int i, String str, Context context) {
        super(i, str);
        this.a = context;
    }

    @Override
    protected void onCallback() {
        ed.a(this.a).a(ba.a(this.a).a(ho.aF.a(), 0));
    }
}
