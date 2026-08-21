package com.vivo.push.ups;

import android.content.Context;
import com.vivo.push.IPushActionListener;
import com.vivo.push.PushClient;

/* JADX INFO: loaded from: classes4.dex */
final class a implements IPushActionListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ UPSRegisterCallback f7939a;
    final /* synthetic */ Context b;
    final /* synthetic */ VUpsManager c;

    a(VUpsManager vUpsManager, UPSRegisterCallback uPSRegisterCallback, Context context) {
        this.c = vUpsManager;
        this.f7939a = uPSRegisterCallback;
        this.b = context;
    }

    @Override // com.vivo.push.IPushActionListener
    public final void onStateChanged(int i) {
        this.f7939a.onResult(new TokenResult(i, PushClient.getInstance(this.b).getRegId()));
    }
}
