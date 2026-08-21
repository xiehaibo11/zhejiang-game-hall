package com.bianfeng.seppellita.net;

public class UrlManager {
    private static final java.lang.String SEPPELLITA_ABTEST_ROUTER = "/api/abtest";
    private static final java.lang.String SEPPELLITA_INIT_ROUTER = "/api/init";
    private static final java.lang.String SEPPELLITA_POST_ROUTER = "/api/action";
    private static volatile com.bianfeng.seppellita.net.UrlManager manager;
    private com.bianfeng.seppellita.net.UrlStrategy urlStrategy;

    private UrlManager() {
            r1 = this;
            r1.<init>()
            com.bianfeng.seppellita.net.UrlStrategy r0 = new com.bianfeng.seppellita.net.UrlStrategy
            r0.<init>()
            r1.urlStrategy = r0
            return
    }

    private synchronized java.lang.String createGetUrl(java.lang.String r4, java.util.Map<java.lang.String, java.lang.String> r5) {
            r3 = this;
            monitor-enter(r3)
            int r0 = r5.size()     // Catch: java.lang.Throwable -> L5f
            if (r0 != 0) goto Le
            java.lang.String r5 = "createGetUrl--->map"
            com.bianfeng.seppellita.utils.SeppellitaLogger.e(r5)     // Catch: java.lang.Throwable -> L5f
            monitor-exit(r3)
            return r4
        Le:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            r0.<init>()     // Catch: java.lang.Throwable -> L5f
            java.util.Set r5 = r5.entrySet()     // Catch: java.lang.Throwable -> L5f
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L5f
        L1b:
            boolean r1 = r5.hasNext()     // Catch: java.lang.Throwable -> L5f
            if (r1 == 0) goto L44
            java.lang.Object r1 = r5.next()     // Catch: java.lang.Throwable -> L5f
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L5f
            java.lang.String r2 = "&"
            r0.append(r2)     // Catch: java.lang.Throwable -> L5f
            java.lang.Object r2 = r1.getKey()     // Catch: java.lang.Throwable -> L5f
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L5f
            r0.append(r2)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r2 = "="
            r0.append(r2)     // Catch: java.lang.Throwable -> L5f
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L5f
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L5f
            r0.append(r1)     // Catch: java.lang.Throwable -> L5f
            goto L1b
        L44:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            r5.<init>()     // Catch: java.lang.Throwable -> L5f
            r5.append(r4)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r4 = "?"
            r5.append(r4)     // Catch: java.lang.Throwable -> L5f
            r4 = 1
            java.lang.String r4 = r0.substring(r4)     // Catch: java.lang.Throwable -> L5f
            r5.append(r4)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L5f
            monitor-exit(r3)
            return r4
        L5f:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public static com.bianfeng.seppellita.net.UrlManager getInstance() {
            com.bianfeng.seppellita.net.UrlManager r0 = com.bianfeng.seppellita.net.UrlManager.manager
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.seppellita.net.UrlManager> r0 = com.bianfeng.seppellita.net.UrlManager.class
            monitor-enter(r0)
            com.bianfeng.seppellita.net.UrlManager r1 = com.bianfeng.seppellita.net.UrlManager.manager     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.seppellita.net.UrlManager r1 = new com.bianfeng.seppellita.net.UrlManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.seppellita.net.UrlManager.manager = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.seppellita.net.UrlManager r0 = com.bianfeng.seppellita.net.UrlManager.manager
            return r0
    }

    public java.lang.String getAbTest(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.bianfeng.seppellita.net.UrlStrategy r1 = r2.urlStrategy
            java.lang.String r1 = r1.getUrl()
            r0.append(r1)
            java.lang.String r1 = "/api/abtest"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = r2.createGetUrl(r0, r3)
            return r3
    }

    public java.lang.String getInitUrl(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.bianfeng.seppellita.net.UrlStrategy r1 = r2.urlStrategy
            java.lang.String r1 = r1.getUrl()
            r0.append(r1)
            java.lang.String r1 = "/api/init"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = r2.createGetUrl(r0, r3)
            return r3
    }

    public java.lang.String getPostRouter() {
            r1 = this;
            java.lang.String r0 = "/api/action"
            return r0
    }

    public java.lang.String getPostUrl() {
            r2 = this;
            com.bianfeng.seppellita.net.UrlStrategy r0 = r2.urlStrategy
            java.lang.String r0 = r0.getAction()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "/api/action"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }

    public void onFail() {
            r1 = this;
            com.bianfeng.seppellita.net.UrlStrategy r0 = r1.urlStrategy
            r0.onFail()
            return
    }

    public void onSuc() {
            r1 = this;
            com.bianfeng.seppellita.net.UrlStrategy r0 = r1.urlStrategy
            r0.onSuc()
            return
    }

    public void setUrlBean(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.seppellita.net.UrlStrategy r0 = r1.urlStrategy
            r0.setUrlBean(r2, r3)
            return
    }

    public void setUrls(com.bianfeng.seppellita.bean.InitBean.DataBean.SevrerListBean r2) {
            r1 = this;
            com.bianfeng.seppellita.net.UrlStrategy r0 = r1.urlStrategy
            r0.setUrls(r2)
            return
    }
}
