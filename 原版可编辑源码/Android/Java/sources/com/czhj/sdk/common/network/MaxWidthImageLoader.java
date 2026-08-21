package com.czhj.sdk.common.network;

import android.content.Context;
import android.graphics.Point;
import android.view.Display;
import android.view.WindowManager;
import com.czhj.volley.RequestQueue;
import com.czhj.volley.toolbox.ImageLoader;

class MaxWidthImageLoader extends ImageLoader {
    private final int a;

    MaxWidthImageLoader(RequestQueue requestQueue, Context context, ImageLoader.ImageCache imageCache) {
        int iMin;
        super(requestQueue, imageCache);
        WindowManager windowManager = (WindowManager) context.getSystemService("window");
        if (windowManager == null) {
            iMin = 320;
        } else {
            Display defaultDisplay = windowManager.getDefaultDisplay();
            Point point = new Point();
            defaultDisplay.getSize(point);
            iMin = Math.min(point.x, point.y);
        }
        this.a = iMin;
    }

    @Override
    public ImageLoader.ImageContainer get(String str, ImageLoader.ImageListener imageListener) {
        return super.get(str, imageListener, this.a, 0);
    }
}
