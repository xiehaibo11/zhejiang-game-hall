package com.kwad.components.core.widget;

import android.content.Context;
import android.os.Message;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.sdk.utils.bm;
import com.kwad.sdk.utils.bn;
import com.kwad.sdk.widget.KSFrameLayout;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends KSFrameLayout implements bn.a {
    private final View SM;
    private InterfaceC0176a XK;
    private boolean XL;
    private boolean XM;
    private int XN;
    private boolean XO;
    private long XP;
    private boolean XQ;
    private final float XR;
    private final int XS;
    private final bn gx;

    /* JADX INFO: renamed from: com.kwad.components.core.widget.a$a, reason: collision with other inner class name */
    public interface InterfaceC0176a {
        void aa();

        void ab();

        void eH();

        void k(View view);
    }

    public a(Context context, View view) {
        super(context, view);
        this.gx = new bn(this);
        this.XN = 5;
        this.SM = view;
        setLayoutParams(new ViewGroup.LayoutParams(1, 1));
        float fZH = com.kwad.sdk.core.config.d.zH();
        this.XR = fZH;
        setVisiblePercent(fZH);
        float fZI = com.kwad.sdk.core.config.d.zI();
        this.XS = (int) ((fZI < 0.0f ? 1.0f : fZI) * 1000.0f);
    }

    private void si() {
        InterfaceC0176a interfaceC0176a;
        if (this.XS == 0 && (interfaceC0176a = this.XK) != null) {
            interfaceC0176a.k(this.SM);
            return;
        }
        Message messageObtainMessage = this.gx.obtainMessage();
        messageObtainMessage.what = 2;
        this.gx.sendMessageDelayed(messageObtainMessage, this.XS);
    }

    private void sj() {
        this.gx.removeCallbacksAndMessages(null);
        this.XM = false;
    }

    private void sk() {
        if (this.XM) {
            return;
        }
        this.XM = true;
        this.gx.sendEmptyMessage(1);
    }

    @Override // com.kwad.sdk.utils.bn.a
    public final void a(Message message) {
        if (this.XL) {
            return;
        }
        int i = message.what;
        if (i != 1) {
            if (i != 2) {
                return;
            }
            if (!bm.a(this.SM, (int) (this.XR * 100.0f), false)) {
                this.XN = 5;
                this.gx.sendEmptyMessage(1);
                return;
            } else {
                InterfaceC0176a interfaceC0176a = this.XK;
                if (interfaceC0176a != null) {
                    interfaceC0176a.k(this.SM);
                    return;
                }
                return;
            }
        }
        com.kwad.sdk.core.e.c.d("AdExposureView", "handleMsg MSG_CHECKING");
        if (!bm.a(this.SM, (int) (this.XR * 100.0f), false)) {
            InterfaceC0176a interfaceC0176a2 = this.XK;
            if (interfaceC0176a2 != null && !this.XQ) {
                interfaceC0176a2.eH();
            }
            this.XQ = true;
            bn bnVar = this.gx;
            int i2 = this.XN;
            this.XN = i2 - 1;
            bnVar.sendEmptyMessageDelayed(1, i2 <= 0 ? 500L : 100L);
            return;
        }
        sj();
        if (this.XO) {
            InterfaceC0176a interfaceC0176a3 = this.XK;
            if (interfaceC0176a3 != null) {
                interfaceC0176a3.k(this.SM);
            }
        } else {
            this.XO = true;
            this.XP = System.currentTimeMillis();
            si();
        }
        this.XQ = false;
        bn bnVar2 = this.gx;
        int i3 = this.XN;
        this.XN = i3 - 1;
        bnVar2.sendEmptyMessageDelayed(1, i3 <= 0 ? 500L : 100L);
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout
    public final void aa() {
        super.aa();
        this.XN = 5;
        this.XL = false;
        this.XO = false;
        sk();
        InterfaceC0176a interfaceC0176a = this.XK;
        if (interfaceC0176a != null) {
            interfaceC0176a.aa();
        }
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout
    public final void ab() {
        super.ab();
        sj();
        this.XN = 0;
        this.XP = 0L;
        this.XL = true;
        InterfaceC0176a interfaceC0176a = this.XK;
        if (interfaceC0176a != null) {
            interfaceC0176a.ab();
        }
    }

    @Override // android.view.View
    public final void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        com.kwad.sdk.core.e.c.d("AdExposureView", "onWindowFocusChanged hasWindowFocus:" + z);
    }

    public final void setViewCallback(InterfaceC0176a interfaceC0176a) {
        this.XK = interfaceC0176a;
    }

    public final void sl() {
        sk();
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout, com.kwad.sdk.widget.i
    public final void z(View view) {
        InterfaceC0176a interfaceC0176a;
        InterfaceC0176a interfaceC0176a2;
        super.z(view);
        if (this.XS == 0 && (interfaceC0176a2 = this.XK) != null) {
            interfaceC0176a2.k(view);
            return;
        }
        if (!this.XO) {
            this.XO = true;
            this.XP = System.currentTimeMillis();
            sj();
            si();
            return;
        }
        if (System.currentTimeMillis() - this.XP <= this.XS || (interfaceC0176a = this.XK) == null) {
            return;
        }
        interfaceC0176a.k(view);
        sj();
    }
}
