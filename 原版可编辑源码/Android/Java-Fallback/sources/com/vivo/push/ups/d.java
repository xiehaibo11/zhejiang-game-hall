package com.vivo.push.ups;

final class d implements com.vivo.push.IPushActionListener {
    final com.vivo.push.ups.UPSTurnCallback a;
    final com.vivo.push.ups.VUpsManager b;

    d(com.vivo.push.ups.VUpsManager r1, com.vivo.push.ups.UPSTurnCallback r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public final void onStateChanged(int r3) {
            r2 = this;
            com.vivo.push.ups.UPSTurnCallback r0 = r2.a
            com.vivo.push.ups.CodeResult r1 = new com.vivo.push.ups.CodeResult
            r1.<init>(r3)
            r0.onResult(r1)
            return
    }
}
