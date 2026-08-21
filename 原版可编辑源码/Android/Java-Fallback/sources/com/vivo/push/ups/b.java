package com.vivo.push.ups;

final class b implements com.vivo.push.IPushActionListener {
    final com.vivo.push.ups.UPSRegisterCallback a;
    final com.vivo.push.ups.VUpsManager b;

    b(com.vivo.push.ups.VUpsManager r1, com.vivo.push.ups.UPSRegisterCallback r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public final void onStateChanged(int r4) {
            r3 = this;
            com.vivo.push.ups.UPSRegisterCallback r0 = r3.a
            com.vivo.push.ups.TokenResult r1 = new com.vivo.push.ups.TokenResult
            java.lang.String r2 = ""
            r1.<init>(r4, r2)
            r0.onResult(r1)
            return
    }
}
