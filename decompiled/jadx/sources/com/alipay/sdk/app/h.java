package com.alipay.sdk.app;

import com.alipay.sdk.util.e;

/* JADX INFO: loaded from: classes.dex */
class h implements e.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ PayTask f1111a;

    @Override // com.alipay.sdk.util.e.a
    public void a() {
    }

    h(PayTask payTask) {
        this.f1111a = payTask;
    }

    @Override // com.alipay.sdk.util.e.a
    public void b() {
        this.f1111a.dismissLoading();
    }
}
