package com.bykv.vk.openvk;

import android.content.res.Resources;
import android.os.Bundle;

public interface TTPluginListener {
    Bundle config();

    void onPluginListener(int i, ClassLoader classLoader, Resources resources, Bundle bundle);

    String packageName();
}
