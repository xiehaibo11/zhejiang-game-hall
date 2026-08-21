package com.reyun.tracking.utils;

import com.reyun.tracking.sdk.Tracking;

/* JADX INFO: loaded from: classes3.dex */
class t implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ s f4757a;

    t(s sVar) {
        this.f4757a = sVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        com.reyun.tracking.a.a.d(Tracking.TAG, "install 发送成功 开启Startup");
        Tracking.setStartupInternal(this.f4757a.d);
    }
}
