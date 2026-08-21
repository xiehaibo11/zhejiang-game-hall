package com.vivo.push.ups;

import com.vivo.push.IPushActionListener;

/* JADX INFO: loaded from: classes4.dex */
final class c implements IPushActionListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ UPSTurnCallback f7941a;
    final /* synthetic */ VUpsManager b;

    c(VUpsManager vUpsManager, UPSTurnCallback uPSTurnCallback) {
        this.b = vUpsManager;
        this.f7941a = uPSTurnCallback;
    }

    @Override // com.vivo.push.IPushActionListener
    public final void onStateChanged(int i) {
        this.f7941a.onResult(new CodeResult(i));
    }
}
