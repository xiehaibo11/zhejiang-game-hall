package com.xiaomi.push;

import com.xiaomi.push.ao;

/* JADX INFO: loaded from: classes4.dex */
final class ha extends ao.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Runnable f8197a;

    ha(Runnable runnable) {
        this.f8197a = runnable;
    }

    @Override // com.xiaomi.push.ao.b
    public void b() {
        this.f8197a.run();
    }
}
