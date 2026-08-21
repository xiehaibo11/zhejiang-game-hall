package com.tkay.expressad.video.module;

import android.content.Context;
import android.util.AttributeSet;
import com.tkay.expressad.video.signal.factory.b;

public class TkayPlayableView extends TkayH5EndCardView {
    public TkayPlayableView(Context context) {
        super(context);
    }

    public TkayPlayableView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    @Override
    public void init(Context context) {
        super.init(context);
    }

    @Override
    protected final String a() {
        return super.a();
    }

    @Override
    public void preLoadData(b bVar) {
        super.preLoadData(bVar);
        super.setLoadPlayable(true);
    }

    @Override
    public void onBackPress() {
        super.onBackPress();
    }
}
