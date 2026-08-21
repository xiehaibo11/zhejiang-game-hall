package com.vivo.push.ups;

import com.vivo.push.IPushActionListener;

final class b implements IPushActionListener {
    final UPSRegisterCallback a;
    final VUpsManager b;

    b(VUpsManager vUpsManager, UPSRegisterCallback uPSRegisterCallback) {
        this.b = vUpsManager;
        this.a = uPSRegisterCallback;
    }

    @Override
    public final void onStateChanged(int i) {
        this.a.onResult(new TokenResult(i, ""));
    }
}
