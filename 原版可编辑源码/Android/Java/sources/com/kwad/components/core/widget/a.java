package com.kwad.components.core.widget;

import android.content.Context;
import android.os.Message;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.sdk.utils.bm;
import com.kwad.sdk.utils.bn;
import com.kwad.sdk.widget.KSFrameLayout;

public final class a extends KSFrameLayout implements bn.a {
    private final View SM;
    private a XK;
    private boolean XL;
    private boolean XM;
    private int XN;
    private boolean XO;
    private long XP;
    private boolean XQ;
    private final float XR;
    private final int XS;
    private final bn gx;

    public interface a {
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
        a aVar;
        if (this.XS == 0 && (aVar = this.XK) != null) {
            aVar.k(this.SM);
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

    @Override
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
                a aVar = this.XK;
                if (aVar != null) {
                    aVar.k(this.SM);
                    return;
                }
                return;
            }
        }
        com.kwad.sdk.core.e.c.d("AdExposureView", "handleMsg MSG_CHECKING");
        if (!bm.a(this.SM, (int) (this.XR * 100.0f), false)) {
            a aVar2 = this.XK;
            if (aVar2 != null && !this.XQ) {
                aVar2.eH();
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
            a aVar3 = this.XK;
            if (aVar3 != null) {
                aVar3.k(this.SM);
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

    @Override
    public final void aa() {
        super.aa();
        this.XN = 5;
        this.XL = false;
        this.XO = false;
        sk();
        a aVar = this.XK;
        if (aVar != null) {
            aVar.aa();
        }
    }

    @Override
    public final void ab() {
        super.ab();
        sj();
        this.XN = 0;
        this.XP = 0L;
        this.XL = true;
        a aVar = this.XK;
        if (aVar != null) {
            aVar.ab();
        }
    }

    @Override
    public final void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        com.kwad.sdk.core.e.c.d("AdExposureView", "onWindowFocusChanged hasWindowFocus:" + z);
    }

    public final void setViewCallback(a aVar) {
        this.XK = aVar;
    }

    public final void sl() {
        sk();
    }

    @Override
    public final void z(View view) {
        a aVar;
        a aVar2;
        super.z(view);
        if (this.XS == 0 && (aVar2 = this.XK) != null) {
            aVar2.k(view);
            return;
        }
        if (!this.XO) {
            this.XO = true;
            this.XP = System.currentTimeMillis();
            sj();
            si();
            return;
        }
        if (System.currentTimeMillis() - this.XP <= this.XS || (aVar = this.XK) == null) {
            return;
        }
        aVar.k(view);
        sj();
    }
}
