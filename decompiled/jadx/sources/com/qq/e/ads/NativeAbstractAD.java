package com.qq.e.ads;

import com.qq.e.ads.cfg.DownAPPConfirmPolicy;
import com.qq.e.comm.pi.ADI;
import com.qq.e.comm.util.AdError;

/* JADX INFO: loaded from: classes3.dex */
public abstract class NativeAbstractAD<T extends ADI> extends AbstractAD<T> {
    private DownAPPConfirmPolicy f;

    public interface BasicADListener {
        void onNoAD(AdError adError);
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.qq.e.ads.AbstractAD
    public void a(T t) {
        DownAPPConfirmPolicy downAPPConfirmPolicy = this.f;
        if (downAPPConfirmPolicy != null) {
            setDownAPPConfirmPolicy(downAPPConfirmPolicy);
        }
    }

    public void setDownAPPConfirmPolicy(DownAPPConfirmPolicy downAPPConfirmPolicy) {
        this.f = downAPPConfirmPolicy;
        T t = this.f4642a;
        if (t == null || downAPPConfirmPolicy == null) {
            return;
        }
        t.setDownAPPConfirmPolicy(downAPPConfirmPolicy);
    }
}
