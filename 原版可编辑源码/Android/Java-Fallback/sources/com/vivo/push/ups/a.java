package com.vivo.push.ups;

final class a implements com.vivo.push.IPushActionListener {
    final com.vivo.push.ups.UPSRegisterCallback a;
    final android.content.Context b;
    final com.vivo.push.ups.VUpsManager c;

    a(com.vivo.push.ups.VUpsManager r1, com.vivo.push.ups.UPSRegisterCallback r2, android.content.Context r3) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r3
            r0.<init>()
            return
    }

    @Override
    public final void onStateChanged(int r4) {
            r3 = this;
            com.vivo.push.ups.UPSRegisterCallback r0 = r3.a
            com.vivo.push.ups.TokenResult r1 = new com.vivo.push.ups.TokenResult
            android.content.Context r2 = r3.b
            com.vivo.push.PushClient r2 = com.vivo.push.PushClient.getInstance(r2)
            java.lang.String r2 = r2.getRegId()
            r1.<init>(r4, r2)
            r0.onResult(r1)
            return
    }
}
