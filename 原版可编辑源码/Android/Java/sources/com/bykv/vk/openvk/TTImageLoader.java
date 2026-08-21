package com.bykv.vk.openvk;

import android.widget.ImageView;

public interface TTImageLoader {
    TTImageLoader from(String str);

    TTImageLoader to(ImageView imageView);
}
