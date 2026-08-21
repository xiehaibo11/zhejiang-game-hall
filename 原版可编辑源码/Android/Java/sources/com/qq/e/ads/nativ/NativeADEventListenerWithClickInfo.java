package com.qq.e.ads.nativ;

import android.view.View;

public abstract class NativeADEventListenerWithClickInfo implements NativeADEventListener {
    @Override
    public final void onADClicked() {
    }

    public abstract void onADClicked(View view);
}
