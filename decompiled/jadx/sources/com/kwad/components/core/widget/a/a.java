package com.kwad.components.core.widget.a;

import android.os.Message;
import android.view.View;
import com.bykv.vk.openvk.TTVfConstant;
import com.kwad.sdk.core.h.c;
import com.kwad.sdk.utils.ah;
import com.kwad.sdk.utils.bn;
import java.util.HashSet;
import java.util.Set;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public abstract class a implements com.kwad.sdk.core.h.a, bn.a {
    private Set<c> Zf;
    private final int Zg;
    private final View mRootView;
    private final AtomicBoolean Ze = new AtomicBoolean(false);
    protected final bn gx = new bn(this);

    public a(View view, int i) {
        this.mRootView = view;
        this.Zg = i;
    }

    private void aS(boolean z) {
        Set<c> set = this.Zf;
        if (set == null) {
            return;
        }
        for (c cVar : set) {
            if (cVar != null) {
                if (z) {
                    cVar.aK();
                } else {
                    cVar.aL();
                }
            }
        }
    }

    private void jg() {
        if (this.Ze.getAndSet(true)) {
            return;
        }
        aS(true);
    }

    private void sA() {
        if (this.Ze.getAndSet(false)) {
            aS(false);
        }
    }

    private void sx() {
        if (ep()) {
            jg();
        } else {
            sA();
        }
    }

    @Override // com.kwad.sdk.utils.bn.a
    public final void a(Message message) {
        if (message.what == 666) {
            sx();
            this.gx.sendEmptyMessageDelayed(TTVfConstant.STYLE_SIZE_RADIO_2_3, 500L);
        }
    }

    @Override // com.kwad.sdk.core.h.a
    public final void a(c cVar) {
        ah.checkUiThread();
        if (cVar == null) {
            return;
        }
        if (ep()) {
            cVar.aK();
        } else {
            cVar.aL();
        }
        if (this.Zf == null) {
            this.Zf = new HashSet();
        }
        this.Zf.add(cVar);
    }

    @Override // com.kwad.sdk.core.h.a
    public final void b(c cVar) {
        Set<c> set;
        ah.checkUiThread();
        if (cVar == null || (set = this.Zf) == null) {
            return;
        }
        set.remove(cVar);
    }

    public abstract boolean ep();

    @Override // com.kwad.sdk.core.h.a
    public final void release() {
        sz();
        Set<c> set = this.Zf;
        if (set != null) {
            set.clear();
        }
    }

    @Override // com.kwad.sdk.core.h.a
    public final boolean sB() {
        return this.Ze.get();
    }

    public final void sy() {
        this.gx.removeMessages(TTVfConstant.STYLE_SIZE_RADIO_2_3);
        this.gx.sendEmptyMessage(TTVfConstant.STYLE_SIZE_RADIO_2_3);
    }

    public final void sz() {
        sx();
        this.gx.removeCallbacksAndMessages(null);
    }
}
