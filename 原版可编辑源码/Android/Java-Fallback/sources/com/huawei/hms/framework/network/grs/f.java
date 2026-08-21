package com.huawei.hms.framework.network.grs;

public class f implements com.huawei.hms.framework.network.restclient.hwhttp.plugin.PluginInterceptor {
    private static final java.lang.String a = "f";

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.huawei.hms.framework.network.restclient.hwhttp.Response intercept(com.huawei.hms.framework.network.restclient.hwhttp.Interceptor.Chain r8) {
            r7 = this;
            com.huawei.hms.framework.network.restclient.hwhttp.RealInterceptorChain r8 = (com.huawei.hms.framework.network.restclient.hwhttp.RealInterceptorChain) r8
            com.huawei.hms.framework.network.restclient.hwhttp.Request r0 = r8.request()
            com.huawei.hms.framework.network.restclient.hwhttp.url.HttpUrl r1 = r0.getUrl()
            java.lang.String r1 = r1.getUrl()
            boolean r2 = com.huawei.hms.framework.network.grs.GrsManager.isGRSSchema(r1)
            if (r2 == 0) goto L54
            java.lang.String r2 = com.huawei.hms.framework.network.grs.f.a
            java.lang.String r3 = "request url is grs schema."
            com.huawei.hms.framework.common.Logger.v(r2, r3)
            com.huawei.hms.framework.network.restclient.hianalytics.RCEventListener r2 = r8.getRCEventListener()
            r2.convertGrsStart(r1)
            com.huawei.hms.framework.network.grs.GrsManager r3 = com.huawei.hms.framework.network.grs.GrsManager.getInstance()
            java.lang.String r1 = r3.parseGrs(r1)
            com.huawei.hms.framework.network.restclient.hwhttp.Request$Builder r0 = r0.newBuilder()
            com.huawei.hms.framework.network.restclient.hwhttp.url.HttpUrl r3 = new com.huawei.hms.framework.network.restclient.hwhttp.url.HttpUrl
            r3.<init>(r1)
            com.huawei.hms.framework.network.restclient.hwhttp.Request$Builder r0 = r0.url(r3)
            com.huawei.hms.framework.network.restclient.hwhttp.Request r0 = r0.build()
            java.lang.String r3 = com.huawei.hms.framework.network.grs.f.a
            r4 = 1
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.String r5 = r0.toString()
            r6 = 0
            r4[r6] = r5
            java.lang.String r5 = "origin url is grs schema and by intercepted,and now request is:%s"
            com.huawei.hms.framework.common.Logger.v(r3, r5, r4)
            r2.convertGrsEnd(r1)
            com.huawei.hms.framework.network.restclient.hwhttp.Response r8 = r8.proceed(r0)
            return r8
        L54:
            com.huawei.hms.framework.network.restclient.hwhttp.Response r8 = r8.proceed(r0)
            return r8
    }

    public java.lang.String pluginName() {
            r1 = this;
            java.lang.Class<com.huawei.hms.framework.network.grs.f> r0 = com.huawei.hms.framework.network.grs.f.class
            java.lang.String r0 = r0.getSimpleName()
            return r0
    }
}
