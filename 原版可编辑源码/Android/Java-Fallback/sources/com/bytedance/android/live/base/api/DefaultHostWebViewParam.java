package com.bytedance.android.live.base.api;

public class DefaultHostWebViewParam implements com.bytedance.android.live.base.api.ILiveHostWebViewParam {
    public DefaultHostWebViewParam() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.Object createJsBridge2(android.content.Context r1, java.lang.Object r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.lang.String getFileProvider() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getGeckoChannel(boolean r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getHeaderMap(java.lang.String r1) {
            r0 = this;
            java.util.Map r1 = java.util.Collections.emptyMap()
            return r1
    }

    @Override
    public java.lang.String getOfflineCacheDir() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.util.List<java.lang.String> getSafeJsbHostList() {
            r1 = this;
            java.util.List r0 = java.util.Collections.emptyList()
            return r0
    }

    @Override
    public java.util.List<java.lang.String> getShareCookie(java.lang.String r1) {
            r0 = this;
            java.util.List r1 = java.util.Collections.emptyList()
            return r1
    }

    @Override
    public android.webkit.WebResourceResponse interceptRequest(java.lang.String r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean isSafeDomain(java.lang.String r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void setCachePrefix(java.util.List<java.util.regex.Pattern> r1) {
            r0 = this;
            return
    }
}
