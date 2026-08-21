package com.xiaomi.mipush.sdk;

import com.xiaomi.push.ho;
import com.xiaomi.push.service.ba;

/* JADX INFO: loaded from: classes4.dex */
class g extends ba.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ f f8009a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    g(f fVar, int i, String str) {
        super(i, str);
        this.f8009a = fVar;
    }

    @Override // com.xiaomi.push.service.ba.a
    protected void onCallback() {
        boolean zA = ba.a(this.f8009a.f92a).a(ho.AggregatePushSwitch.a(), true);
        if (this.f8009a.f95a != zA) {
            this.f8009a.f95a = zA;
            i.b(this.f8009a.f92a);
        }
    }
}
