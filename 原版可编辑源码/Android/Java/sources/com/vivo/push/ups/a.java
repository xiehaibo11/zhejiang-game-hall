package com.vivo.push.ups;

import android.content.Context;
import com.vivo.push.IPushActionListener;
import com.vivo.push.PushClient;

final class a implements IPushActionListener {
    final UPSRegisterCallback a;
    final Context b;
    final VUpsManager c;

    a(VUpsManager vUpsManager, UPSRegisterCallback uPSRegisterCallback, Context context) {
        this.c = vUpsManager;
        this.a = uPSRegisterCallback;
        this.b = context;
    }

    @Override
    public final void onStateChanged(int i) {
        this.a.onResult(new TokenResult(i, PushClient.getInstance(this.b).getRegId()));
    }
}
