package com.vivo.push.ups;

import com.vivo.push.IPushActionListener;

/* JADX INFO: loaded from: classes4.dex */
final class b implements IPushActionListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ UPSRegisterCallback f7940a;
    final /* synthetic */ VUpsManager b;

    b(VUpsManager vUpsManager, UPSRegisterCallback uPSRegisterCallback) {
        this.b = vUpsManager;
        this.f7940a = uPSRegisterCallback;
    }

    @Override // com.vivo.push.IPushActionListener
    public final void onStateChanged(int i) {
        this.f7940a.onResult(new TokenResult(i, ""));
    }
}
