package com.tkay.basead.ui;

import android.content.Context;
import android.widget.RelativeLayout;
import com.tkay.basead.ui.MraidContainerView;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;

public class MraidEndCardView extends BaseEndCardView {
    private static String g = MraidEndCardView.class.getSimpleName();
    MraidContainerView e;
    a f;

    public interface a {
        void a();

        void a(String str);

        void b();
    }

    public MraidEndCardView(Context context, h hVar, i iVar) {
        super(context, hVar, iVar);
        setBackgroundColor(-1);
    }

    public void setEndCardListener(a aVar) {
        this.f = aVar;
    }

    public void init(boolean z) {
        MraidContainerView mraidContainerView = new MraidContainerView(getContext(), this.b, this.c, new MraidContainerView.a() {
            @Override
            public final void b() {
            }

            @Override
            public final void a(String str) {
                if (MraidEndCardView.this.f != null) {
                    MraidEndCardView.this.f.a(str);
                }
            }

            @Override
            public final void a() {
                if (MraidEndCardView.this.f != null) {
                    MraidEndCardView.this.f.a();
                }
            }
        });
        this.e = mraidContainerView;
        addView(mraidContainerView, new RelativeLayout.LayoutParams(-1, -1));
        this.e.setNeedRegisterVolumeChangeReceiver(true);
        this.e.init();
        if (z) {
            this.e.loadMraidWebView();
        }
    }

    @Override
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        MraidContainerView mraidContainerView = this.e;
        if (mraidContainerView != null) {
            mraidContainerView.fireMraidIsViewable(z);
        }
    }

    @Override
    protected final void a() {
        MraidContainerView mraidContainerView = this.e;
        if (mraidContainerView != null) {
            mraidContainerView.release();
        }
    }
}
