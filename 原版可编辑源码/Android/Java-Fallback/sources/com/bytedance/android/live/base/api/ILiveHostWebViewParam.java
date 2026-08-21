package com.bytedance.android.live.base.api;

public interface ILiveHostWebViewParam {
    java.lang.Object createJsBridge2(android.content.Context r1, java.lang.Object r2);

    java.lang.String getFileProvider();

    java.lang.String getGeckoChannel(boolean r1);

    java.util.Map<java.lang.String, java.lang.String> getHeaderMap(java.lang.String r1);

    @java.lang.Deprecated
    java.lang.String getOfflineCacheDir();

    java.util.List<java.lang.String> getSafeJsbHostList();

    java.util.List<java.lang.String> getShareCookie(java.lang.String r1);

    android.webkit.WebResourceResponse interceptRequest(java.lang.String r1);

    boolean isSafeDomain(java.lang.String r1);

    void setCachePrefix(java.util.List<java.util.regex.Pattern> r1);
}
