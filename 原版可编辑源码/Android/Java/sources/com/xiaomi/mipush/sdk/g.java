package com.xiaomi.mipush.sdk;

import com.xiaomi.push.ho;
import com.xiaomi.push.service.ba;

class g extends ba.a {
    final f a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    g(f fVar, int i, String str) {
        super(i, str);
        this.a = fVar;
    }

    @Override
    protected void onCallback() {
        boolean zA = ba.a(this.a.a).a(ho.ao.a(), true);
        if (this.a.a != zA) {
            this.a.a = zA;
            i.b(this.a.a);
        }
    }
}
