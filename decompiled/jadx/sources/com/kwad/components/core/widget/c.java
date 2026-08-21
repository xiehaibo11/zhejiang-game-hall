package com.kwad.components.core.widget;

import android.content.Context;
import android.os.Message;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.sdk.utils.bm;
import com.kwad.sdk.utils.bn;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public final class c extends View implements bn.a {
    private View SM;
    private final AtomicBoolean SN;
    private boolean XL;
    private boolean XM;
    private a Yi;
    private boolean Yj;
    private final int Yk;
    private final bn gx;

    public interface a {
        void eI();
    }

    public c(Context context, View view) {
        super(context);
        this.gx = new bn(this);
        this.SN = new AtomicBoolean(true);
        this.Yk = (int) (com.kwad.sdk.core.config.d.zH() * 100.0f);
        this.SM = view;
        setLayoutParams(new ViewGroup.LayoutParams(0, 0));
    }

    private void sj() {
        if (this.XM) {
            this.gx.removeCallbacksAndMessages(null);
            this.XM = false;
        }
    }

    private void sk() {
        if (!this.Yj || this.XM) {
            return;
        }
        this.XM = true;
        this.gx.sendEmptyMessage(1);
    }

    private void sn() {
        this.SN.getAndSet(false);
    }

    private void so() {
        this.SN.getAndSet(true);
    }

    @Override // com.kwad.sdk.utils.bn.a
    public final void a(Message message) {
        a aVar;
        int i = message.what;
        if (i != 1) {
            if (i != 2) {
                return;
            }
            if (!bm.a(this.SM, this.Yk, false)) {
                if (this.XL) {
                    return;
                }
                setNeedCheckingShow(true);
                return;
            } else {
                if (message.arg1 == 1000 && (aVar = this.Yi) != null) {
                    aVar.eI();
                }
                this.gx.sendEmptyMessageDelayed(2, 500L);
                return;
            }
        }
        com.kwad.sdk.core.e.c.d("EmptyView", "handleMsg MSG_CHECKING");
        if (this.XM) {
            if (!bm.a(this.SM, this.Yk, false)) {
                this.gx.sendEmptyMessageDelayed(1, 500L);
                return;
            }
            sj();
            Message messageObtainMessage = this.gx.obtainMessage();
            messageObtainMessage.what = 2;
            messageObtainMessage.arg1 = 1000;
            this.gx.sendMessageDelayed(messageObtainMessage, 1000L);
        }
    }

    @Override // android.view.View
    protected final void onAttachedToWindow() {
        super.onAttachedToWindow();
        com.kwad.sdk.core.e.c.d("EmptyView", "onAttachedToWindow:" + this);
        sk();
        this.XL = false;
        sn();
    }

    @Override // android.view.View
    protected final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        com.kwad.sdk.core.e.c.d("EmptyView", "onDetachedFromWindow" + this);
        sj();
        this.XL = true;
        so();
    }

    @Override // android.view.View
    public final void onFinishTemporaryDetach() {
        super.onFinishTemporaryDetach();
        com.kwad.sdk.core.e.c.d("EmptyView", "onFinishTemporaryDetach:" + this.SM.getParent());
        sn();
    }

    @Override // android.view.View
    public final void onStartTemporaryDetach() {
        super.onStartTemporaryDetach();
        com.kwad.sdk.core.e.c.d("EmptyView", "onStartTemporaryDetach:" + this.SM.getParent());
        so();
    }

    @Override // android.view.View
    public final void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        com.kwad.sdk.core.e.c.d("EmptyView", "onWindowFocusChanged hasWindowFocus:" + z);
    }

    @Override // android.view.View
    protected final void onWindowVisibilityChanged(int i) {
        super.onWindowVisibilityChanged(i);
        com.kwad.sdk.core.e.c.d("EmptyView", "onWindowVisibilityChanged visibility:" + i);
    }

    public final void setNeedCheckingShow(boolean z) {
        this.Yj = z;
        if (!z && this.XM) {
            sj();
        } else {
            if (!z || this.XM) {
                return;
            }
            sk();
        }
    }

    public final void setViewCallback(a aVar) {
        this.Yi = aVar;
    }
}
