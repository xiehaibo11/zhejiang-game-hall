package com.bytedance.android.live.base.api;

import android.view.View;
import android.widget.ImageView;

public interface ILiveBorderAnimController {
    void endAnimation(ImageView imageView, View view);

    void startAnimation(ImageView imageView, View view);
}
