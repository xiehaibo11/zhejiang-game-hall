package com.kwad.sdk.core.video.videoview;

import android.content.Context;
import android.widget.RelativeLayout;

public abstract class b extends RelativeLayout {
    private Runnable RZ;
    protected final c awf;

    public b(Context context, c cVar) {
        super(context);
        this.awf = cVar;
    }

    public void m(int i, int i2) {
    }

    protected abstract void onPlayStateChanged(int i);

    protected abstract void qB();

    protected final void qH() {
        qI();
        if (this.RZ == null) {
            this.RZ = new Runnable() {
                @Override
                public final void run() {
                    b.this.qB();
                    if (b.this.RZ != null) {
                        b bVar = b.this;
                        bVar.postDelayed(bVar.RZ, 1000L);
                    }
                }
            };
        }
        post(this.RZ);
    }

    protected final void qI() {
        Runnable runnable = this.RZ;
        if (runnable != null) {
            removeCallbacks(runnable);
            this.RZ = null;
        }
    }

    protected abstract void reset();
}
