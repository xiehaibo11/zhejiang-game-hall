package com.vivo.push.ups;

import com.vivo.push.IPushActionListener;

final class c implements IPushActionListener {
    final UPSTurnCallback a;
    final VUpsManager b;

    c(VUpsManager vUpsManager, UPSTurnCallback uPSTurnCallback) {
        this.b = vUpsManager;
        this.a = uPSTurnCallback;
    }

    @Override
    public final void onStateChanged(int i) {
        this.a.onResult(new CodeResult(i));
    }
}
