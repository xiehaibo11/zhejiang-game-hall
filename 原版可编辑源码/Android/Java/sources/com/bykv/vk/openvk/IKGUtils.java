package com.bykv.vk.openvk;

import android.webkit.WebResourceResponse;
import java.util.List;
import java.util.Map;

public interface IKGUtils {
    WebResourceResponse findRes(String str, String str2, FindResProxy findResProxy);

    Map<String, Long> getChannelVersion();

    void preload(List<String> list);

    void releaseLoader();
}
