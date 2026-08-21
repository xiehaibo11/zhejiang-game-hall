package com.qq.e.ads;

import com.qq.e.comm.pi.ADI;

public abstract class NativeAbstractAD<T extends com.qq.e.comm.pi.ADI> extends com.qq.e.ads.AbstractAD<T> {
    private com.qq.e.ads.cfg.DownAPPConfirmPolicy f;

    public interface BasicADListener {
        void onNoAD(com.qq.e.comm.util.AdError r1);
    }

    public NativeAbstractAD() {
            r0 = this;
            r0.<init>()
            return
    }

    protected void a(T r1) {
            r0 = this;
            com.qq.e.ads.cfg.DownAPPConfirmPolicy r1 = r0.f
            if (r1 == 0) goto L7
            r0.setDownAPPConfirmPolicy(r1)
        L7:
            return
    }

    @Override
    protected void a(java.lang.Object r1) {
            r0 = this;
            com.qq.e.comm.pi.ADI r1 = (com.qq.e.comm.pi.ADI) r1
            r0.a(r1)
            return
    }

    public void setDownAPPConfirmPolicy(com.qq.e.ads.cfg.DownAPPConfirmPolicy r2) {
            r1 = this;
            r1.f = r2
            T r0 = r1.a
            if (r0 == 0) goto Ld
            if (r2 == 0) goto Ld
            com.qq.e.comm.pi.ADI r0 = (com.qq.e.comm.pi.ADI) r0
            r0.setDownAPPConfirmPolicy(r2)
        Ld:
            return
    }
}
