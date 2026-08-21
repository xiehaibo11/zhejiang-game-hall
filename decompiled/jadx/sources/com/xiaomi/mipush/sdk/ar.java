package com.xiaomi.mipush.sdk;

import android.database.ContentObserver;
import android.os.Handler;
import com.xiaomi.push.bj;
import com.xiaomi.push.service.bn;

/* JADX INFO: loaded from: classes4.dex */
class ar extends ContentObserver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ao f8000a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ar(ao aoVar, Handler handler) {
        super(handler);
        this.f8000a = aoVar;
    }

    @Override // android.database.ContentObserver
    public void onChange(boolean z) {
        ao aoVar = this.f8000a;
        aoVar.f74a = Integer.valueOf(bn.a(aoVar.f70a).a());
        if (this.f8000a.f74a.intValue() != 0) {
            this.f8000a.f70a.getContentResolver().unregisterContentObserver(this);
            if (bj.b(this.f8000a.f70a)) {
                this.f8000a.m82c();
            }
        }
    }
}
