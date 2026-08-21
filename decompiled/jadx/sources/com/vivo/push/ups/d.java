package com.vivo.push.ups;

import com.vivo.push.IPushActionListener;

/* JADX INFO: loaded from: classes4.dex */
final class d implements IPushActionListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ UPSTurnCallback f7942a;
    final /* synthetic */ VUpsManager b;

    d(VUpsManager vUpsManager, UPSTurnCallback uPSTurnCallback) {
        this.b = vUpsManager;
        this.f7942a = uPSTurnCallback;
    }

    @Override // com.vivo.push.IPushActionListener
    public final void onStateChanged(int i) {
        this.f7942a.onResult(new CodeResult(i));
    }
}
