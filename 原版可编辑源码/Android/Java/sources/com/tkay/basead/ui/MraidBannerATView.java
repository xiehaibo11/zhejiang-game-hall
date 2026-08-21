package com.tkay.basead.ui;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.tkay.basead.ui.MraidContainerView;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.j;

public class MraidBannerATView extends BaseBannerATView {
    MraidContainerView u;

    public MraidBannerATView(Context context) {
        super(context);
    }

    public MraidBannerATView(Context context, i iVar, h hVar, com.tkay.basead.e.a aVar) {
        super(context, iVar, hVar, aVar);
        c();
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0068  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void o() {
        byte b;
        String strR = this.c.m.r();
        LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_web_banner_ad_layout", "layout"), this);
        int iA = com.tkay.core.common.l.h.a(getContext(), 50.0f);
        int iA2 = com.tkay.core.common.l.h.a(getContext(), 320.0f);
        int iHashCode = strR.hashCode();
        if (iHashCode != -559799608) {
            if (iHashCode != 1507809854) {
                b = (iHashCode == 1622564786 && strR.equals(j.d)) ? (byte) 1 : (byte) -1;
            } else if (strR.equals(j.b)) {
                b = 0;
            }
        } else if (strR.equals(j.c)) {
            b = 2;
        }
        if (b == 0) {
            iA2 = com.tkay.core.common.l.h.a(getContext(), 320.0f);
            iA = com.tkay.core.common.l.h.a(getContext(), 90.0f);
        } else if (b == 1) {
            iA2 = com.tkay.core.common.l.h.a(getContext(), 720.0f);
            iA = com.tkay.core.common.l.h.a(getContext(), 90.0f);
        } else if (b == 2) {
            iA2 = com.tkay.core.common.l.h.a(getContext(), 300.0f);
            iA = com.tkay.core.common.l.h.a(getContext(), 250.0f);
        }
        int iMin = Math.min(iA2, getResources().getDisplayMetrics().widthPixels);
        MraidContainerView mraidContainerView = new MraidContainerView(getContext(), this.d, this.c, new 1());
        this.u = mraidContainerView;
        mraidContainerView.init();
        FrameLayout frameLayout = (FrameLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_web", "id"));
        this.u.setMinimumHeight(com.tkay.core.common.l.h.a(getContext(), 50.0f));
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(iMin, iA);
        layoutParams.gravity = 17;
        frameLayout.addView(this.u, 0, layoutParams);
        setLayoutParams(new ViewGroup.LayoutParams(iMin, iA));
        this.t = (CloseImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_close", "id"));
        if (this.c.m.s() == 0) {
            this.t.setVisibility(0);
            a(this.t, this.c.m.h());
        } else {
            this.t.setVisibility(8);
        }
    }

    final class 1 implements MraidContainerView.a {
        @Override
        public final void b() {
        }

        1() {
        }

        @Override
        public final void a(String str) {
            MraidBannerATView.this.d.v(str);
            MraidBannerATView.this.b(1);
        }

        @Override
        public final void a() {
            try {
                MraidBannerATView.this.b();
            } catch (Throwable unused) {
            }
        }
    }

    @Override
    protected final void b() {
        if (this.u == null) {
            return;
        }
        super.b();
    }

    @Override
    public void destroy() {
        super.destroy();
        MraidContainerView mraidContainerView = this.u;
        if (mraidContainerView != null) {
            mraidContainerView.release();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0068  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected final void a() {
        byte b;
        String strR = this.c.m.r();
        LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_web_banner_ad_layout", "layout"), this);
        int iA = com.tkay.core.common.l.h.a(getContext(), 50.0f);
        int iA2 = com.tkay.core.common.l.h.a(getContext(), 320.0f);
        int iHashCode = strR.hashCode();
        if (iHashCode != -559799608) {
            if (iHashCode != 1507809854) {
                b = (iHashCode == 1622564786 && strR.equals(j.d)) ? (byte) 1 : (byte) -1;
            } else if (strR.equals(j.b)) {
                b = 0;
            }
        } else if (strR.equals(j.c)) {
            b = 2;
        }
        if (b == 0) {
            iA2 = com.tkay.core.common.l.h.a(getContext(), 320.0f);
            iA = com.tkay.core.common.l.h.a(getContext(), 90.0f);
        } else if (b == 1) {
            iA2 = com.tkay.core.common.l.h.a(getContext(), 720.0f);
            iA = com.tkay.core.common.l.h.a(getContext(), 90.0f);
        } else if (b == 2) {
            iA2 = com.tkay.core.common.l.h.a(getContext(), 300.0f);
            iA = com.tkay.core.common.l.h.a(getContext(), 250.0f);
        }
        int iMin = Math.min(iA2, getResources().getDisplayMetrics().widthPixels);
        MraidContainerView mraidContainerView = new MraidContainerView(getContext(), this.d, this.c, new 1());
        this.u = mraidContainerView;
        mraidContainerView.init();
        FrameLayout frameLayout = (FrameLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_web", "id"));
        this.u.setMinimumHeight(com.tkay.core.common.l.h.a(getContext(), 50.0f));
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(iMin, iA);
        layoutParams.gravity = 17;
        frameLayout.addView(this.u, 0, layoutParams);
        setLayoutParams(new ViewGroup.LayoutParams(iMin, iA));
        this.t = (CloseImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_close", "id"));
        if (this.c.m.s() == 0) {
            this.t.setVisibility(0);
            a(this.t, this.c.m.h());
        } else {
            this.t.setVisibility(8);
        }
    }
}
