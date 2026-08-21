package com.kwad.components.core.widget;

import android.content.Context;
import android.content.res.Configuration;
import android.widget.FrameLayout;
import com.kwad.sdk.utils.ai;

public final class f extends FrameLayout {
    private boolean Zc;
    protected g hA;
    protected boolean hT;
    protected Context mContext;

    public f(Context context) {
        super(context);
        this.mContext = context;
        this.hT = ai.IN();
    }

    private void sw() {
        boolean zIN = ai.IN();
        if (!this.Zc || zIN == this.hT) {
            return;
        }
        this.hT = zIN;
        g gVar = this.hA;
        if (gVar != null) {
            gVar.j(!zIN);
        }
    }

    @Override
    protected final void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        sw();
    }

    @Override
    protected final void onWindowVisibilityChanged(int i) {
        super.onWindowVisibilityChanged(i);
        this.Zc = i == 0;
        sw();
    }

    public final void setOrientationChangeListener(g gVar) {
        this.hA = gVar;
    }
}
