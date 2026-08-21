package com.bykv.vk.openvk;

public interface TTPluginListener {
    android.os.Bundle config();

    void onPluginListener(int r1, java.lang.ClassLoader r2, android.content.res.Resources r3, android.os.Bundle r4);

    java.lang.String packageName();
}
