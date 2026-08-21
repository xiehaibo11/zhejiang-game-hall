package com.tkay.expressad.video.signal.a;

import android.app.Activity;
import com.tkay.expressad.video.bt.module.TkayBTContainer;

/* JADX INFO: loaded from: classes3.dex */
public final class i extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Activity f7348a;
    private TkayBTContainer d;

    public i(Activity activity, TkayBTContainer tkayBTContainer) {
        this.f7348a = activity;
        this.d = tkayBTContainer;
    }

    @Override // com.tkay.expressad.video.signal.a.b, com.tkay.expressad.video.signal.b
    public final void reactDeveloper(Object obj, String str) {
        super.reactDeveloper(obj, str);
        TkayBTContainer tkayBTContainer = this.d;
        if (tkayBTContainer != null) {
            tkayBTContainer.reactDeveloper(obj, str);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.b, com.tkay.expressad.video.signal.d
    public final void handlerH5Exception(int i, String str) {
        super.handlerH5Exception(i, str);
        TkayBTContainer tkayBTContainer = this.d;
        if (tkayBTContainer != null) {
            tkayBTContainer.handlerH5Exception(i, str);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.b, com.tkay.expressad.video.signal.d
    public final void click(int i, String str) {
        super.click(i, str);
        TkayBTContainer tkayBTContainer = this.d;
        if (tkayBTContainer != null) {
            tkayBTContainer.click(i, str);
        }
    }
}
