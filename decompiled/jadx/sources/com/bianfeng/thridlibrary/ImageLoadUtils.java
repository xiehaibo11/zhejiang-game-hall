package com.bianfeng.thridlibrary;

import android.app.Activity;
import android.widget.ImageView;
import com.bumptech.glide.Glide;

/* JADX INFO: loaded from: classes.dex */
public class ImageLoadUtils {
    private static volatile ImageLoadUtils utils;

    private ImageLoadUtils() {
    }

    public static ImageLoadUtils getInstance() {
        if (utils == null) {
            synchronized (ImageLoadUtils.class) {
                if (utils == null) {
                    utils = new ImageLoadUtils();
                }
            }
        }
        return utils;
    }

    public void displayImage(Activity activity, String str, ImageView imageView) {
        if (checkGif(str)) {
            Glide.with(activity).load(str).asGif().into(imageView);
        } else {
            Glide.with(activity).load(str).into(imageView);
        }
    }

    private boolean checkGif(String str) {
        return str.endsWith(".gif");
    }
}
