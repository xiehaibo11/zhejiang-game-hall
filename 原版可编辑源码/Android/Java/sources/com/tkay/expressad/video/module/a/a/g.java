package com.tkay.expressad.video.module.a.a;

import com.tkay.expressad.video.module.TkayClickMiniCardView;

public final class g extends i {
    private TkayClickMiniCardView a;

    public g(TkayClickMiniCardView tkayClickMiniCardView, com.tkay.expressad.video.module.a.a aVar) {
        super(aVar);
        this.a = tkayClickMiniCardView;
    }

    @Override
    public final void a(int i, Object obj) {
        boolean z = false;
        switch (i) {
            case 100:
                TkayClickMiniCardView tkayClickMiniCardView = this.a;
                if (tkayClickMiniCardView != null) {
                    tkayClickMiniCardView.webviewshow();
                    TkayClickMiniCardView tkayClickMiniCardView2 = this.a;
                    tkayClickMiniCardView2.onSelfConfigurationChanged(tkayClickMiniCardView2.getResources().getConfiguration());
                }
                break;
            case 101:
            case 102:
                z = true;
                break;
            case 103:
                i = 107;
                break;
        }
        if (z) {
            return;
        }
        super.a(i, obj);
    }
}
