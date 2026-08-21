package com.bytedance.android.live.base.api;

import android.content.Context;
import android.webkit.WebResourceResponse;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.regex.Pattern;

public class DefaultHostWebViewParam implements ILiveHostWebViewParam {
    @Override
    public Object createJsBridge2(Context context, Object obj) {
        return null;
    }

    @Override
    public String getFileProvider() {
        return null;
    }

    @Override
    public String getGeckoChannel(boolean z) {
        return null;
    }

    @Override
    public String getOfflineCacheDir() {
        return null;
    }

    @Override
    public WebResourceResponse interceptRequest(String str) {
        return null;
    }

    @Override
    public boolean isSafeDomain(String str) {
        return false;
    }

    @Override
    public void setCachePrefix(List<Pattern> list) {
    }

    @Override
    public List<String> getShareCookie(String str) {
        return Collections.emptyList();
    }

    @Override
    public Map<String, String> getHeaderMap(String str) {
        return Collections.emptyMap();
    }

    @Override
    public List<String> getSafeJsbHostList() {
        return Collections.emptyList();
    }
}
