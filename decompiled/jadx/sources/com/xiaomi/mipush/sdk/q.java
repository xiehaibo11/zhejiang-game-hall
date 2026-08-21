package com.xiaomi.mipush.sdk;

import android.content.Context;
import com.xiaomi.push.ed;
import com.xiaomi.push.ho;
import com.xiaomi.push.service.ba;

/* JADX INFO: loaded from: classes4.dex */
final class q extends ba.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f8019a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    q(int i, String str, Context context) {
        super(i, str);
        this.f8019a = context;
    }

    @Override // com.xiaomi.push.service.ba.a
    protected void onCallback() {
        ed.a(this.f8019a).a(ba.a(this.f8019a).a(ho.AwakeInfoUploadWaySwitch.a(), 0));
    }
}
