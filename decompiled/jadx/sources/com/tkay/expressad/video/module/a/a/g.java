package com.tkay.expressad.video.module.a.a;

import com.tkay.expressad.video.module.TkayClickMiniCardView;

/* JADX INFO: loaded from: classes3.dex */
public final class g extends i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private TkayClickMiniCardView f7339a;

    public g(TkayClickMiniCardView tkayClickMiniCardView, com.tkay.expressad.video.module.a.a aVar) {
        super(aVar);
        this.f7339a = tkayClickMiniCardView;
    }

    @Override // com.tkay.expressad.video.module.a.a.i, com.tkay.expressad.video.module.a.a.f, com.tkay.expressad.video.module.a.a
    public final void a(int i, Object obj) {
        boolean z = false;
        switch (i) {
            case 100:
                TkayClickMiniCardView tkayClickMiniCardView = this.f7339a;
                if (tkayClickMiniCardView != null) {
                    tkayClickMiniCardView.webviewshow();
                    TkayClickMiniCardView tkayClickMiniCardView2 = this.f7339a;
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
