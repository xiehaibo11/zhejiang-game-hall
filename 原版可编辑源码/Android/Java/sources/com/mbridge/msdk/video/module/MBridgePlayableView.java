package com.mbridge.msdk.video.module;

import android.content.Context;
import android.util.AttributeSet;
import com.mbridge.msdk.video.js.factory.b;

public class MBridgePlayableView extends MBridgeH5EndCardView {
    public MBridgePlayableView(Context context) {
        super(context);
    }

    public MBridgePlayableView(Context context, AttributeSet attributeSet) {
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
