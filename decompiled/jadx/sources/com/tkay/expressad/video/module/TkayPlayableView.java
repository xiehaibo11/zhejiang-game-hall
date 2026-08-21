package com.tkay.expressad.video.module;

import android.content.Context;
import android.util.AttributeSet;
import com.tkay.expressad.video.signal.factory.b;

/* JADX INFO: loaded from: classes3.dex */
public class TkayPlayableView extends TkayH5EndCardView {
    public TkayPlayableView(Context context) {
        super(context);
    }

    public TkayPlayableView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    @Override // com.tkay.expressad.video.module.TkayH5EndCardView, com.tkay.expressad.video.module.TkayBaseView
    public void init(Context context) {
        super.init(context);
    }

    @Override // com.tkay.expressad.video.module.TkayH5EndCardView
    protected final String a() {
        return super.a();
    }

    @Override // com.tkay.expressad.video.module.TkayH5EndCardView, com.tkay.expressad.video.signal.f
    public void preLoadData(b bVar) {
        super.preLoadData(bVar);
        super.setLoadPlayable(true);
    }

    @Override // com.tkay.expressad.video.module.TkayH5EndCardView
    public void onBackPress() {
        super.onBackPress();
    }
}
