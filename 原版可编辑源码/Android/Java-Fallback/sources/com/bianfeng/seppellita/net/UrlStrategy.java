package com.bianfeng.seppellita.net;

class UrlStrategy {
    private static final java.lang.String SEPPELLITA_POST_URL = "sl_url_main";
    private static final java.lang.String SEPPELLITA_POST_URL_2 = "sl_url_alternate";
    private com.bianfeng.seppellita.net.UrlStrategy.UrlBean urlActionBean;
    private com.bianfeng.seppellita.net.UrlStrategy.UrlBean urlBean;

    private class UrlBean {
        private static final int DEF_MAX_COUNT = 3;
        volatile int count;
        private volatile java.util.concurrent.atomic.AtomicInteger modify;
        final com.bianfeng.seppellita.net.UrlStrategy this$0;
        private java.lang.String[] uris;
        java.lang.String url;

        public UrlBean(com.bianfeng.seppellita.net.UrlStrategy r2, java.lang.String r3, java.lang.String r4) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                java.util.concurrent.atomic.AtomicInteger r2 = new java.util.concurrent.atomic.AtomicInteger
                r0 = 0
                r2.<init>(r0)
                r1.modify = r2
                r2 = 2
                java.lang.String[] r2 = new java.lang.String[r2]
                r1.uris = r2
                r1.url = r3
                r2[r0] = r3
                r3 = 1
                r2[r3] = r4
                return
        }

        public int getCount() {
                r1 = this;
                int r0 = r1.count
                return r0
        }

        public java.lang.String getUrl() {
                r2 = this;
                int r0 = r2.getCount()
                r1 = 3
                if (r0 <= r1) goto L1e
                java.util.concurrent.atomic.AtomicInteger r0 = r2.modify
                int r0 = r0.incrementAndGet()
                int r0 = r0 % 2
                com.bianfeng.seppellita.net.UrlStrategy r1 = r2.this$0
                com.bianfeng.seppellita.net.UrlStrategy$UrlBean r1 = com.bianfeng.seppellita.net.UrlStrategy.access$000(r1)
                r1.setTo0()
                java.lang.String[] r1 = r2.uris
                r0 = r1[r0]
                r2.url = r0
            L1e:
                java.lang.String r0 = r2.url
                return r0
        }

        public void increment() {
                r2 = this;
                int r0 = r2.count
                int r0 = r0 + 1
                r2.count = r0
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "次数--->"
                r0.append(r1)
                int r1 = r2.count
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
                return
        }

        public void setTo0() {
                r1 = this;
                r0 = 0
                r1.count = r0
                return
        }
    }

    public UrlStrategy() {
            r4 = this;
            java.lang.String r0 = ""
            r4.<init>()
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()     // Catch: java.lang.Exception -> L10
            java.lang.String r2 = "sl_url_main"
            java.lang.String r1 = r1.getMetaDataValueString(r2)     // Catch: java.lang.Exception -> L10
            goto L11
        L10:
            r1 = r0
        L11:
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()     // Catch: java.lang.Exception -> L1b
            java.lang.String r3 = "sl_url_alternate"
            java.lang.String r0 = r2.getMetaDataValueString(r3)     // Catch: java.lang.Exception -> L1b
        L1b:
            com.bianfeng.seppellita.net.UrlStrategy$UrlBean r2 = new com.bianfeng.seppellita.net.UrlStrategy$UrlBean
            r2.<init>(r4, r1, r0)
            r4.urlBean = r2
            return
    }

    static com.bianfeng.seppellita.net.UrlStrategy.UrlBean access$000(com.bianfeng.seppellita.net.UrlStrategy r0) {
            com.bianfeng.seppellita.net.UrlStrategy$UrlBean r0 = r0.urlBean
            return r0
    }

    java.lang.String getAction() {
            r1 = this;
            com.bianfeng.seppellita.net.UrlStrategy$UrlBean r0 = r1.urlActionBean
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getUrl()
            return r0
        L9:
            java.lang.String r0 = r1.getUrl()
            return r0
    }

    java.lang.String getUrl() {
            r1 = this;
            com.bianfeng.seppellita.net.UrlStrategy$UrlBean r0 = r1.urlBean
            java.lang.String r0 = r0.getUrl()
            return r0
    }

    public void onFail() {
            r1 = this;
            com.bianfeng.seppellita.net.UrlStrategy$UrlBean r0 = r1.urlBean
            r0.increment()
            com.bianfeng.seppellita.net.UrlStrategy$UrlBean r0 = r1.urlActionBean
            if (r0 == 0) goto Lc
            r0.increment()
        Lc:
            return
    }

    public void onSuc() {
            r1 = this;
            com.bianfeng.seppellita.net.UrlStrategy$UrlBean r0 = r1.urlBean
            r0.setTo0()
            com.bianfeng.seppellita.net.UrlStrategy$UrlBean r0 = r1.urlActionBean
            if (r0 == 0) goto Lc
            r0.setTo0()
        Lc:
            return
    }

    public void setUrlBean(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.seppellita.net.UrlStrategy$UrlBean r0 = new com.bianfeng.seppellita.net.UrlStrategy$UrlBean
            r0.<init>(r1, r2, r3)
            r1.urlBean = r0
            return
    }

    public void setUrls(com.bianfeng.seppellita.bean.InitBean.DataBean.SevrerListBean r5) {
            r4 = this;
            java.lang.String r0 = "setUrls--->"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            if (r5 == 0) goto L58
            java.util.List r1 = r5.getAction()
            if (r1 == 0) goto L58
            java.util.List r1 = r5.getAction()
            int r1 = r1.size()
            if (r1 != 0) goto L18
            goto L58
        L18:
            java.util.List r5 = r5.getAction()
            int r1 = r5.size()
            r2 = 0
            r3 = 1
            if (r1 != r3) goto L44
            java.lang.Object r5 = r5.get(r2)
            java.lang.String r5 = (java.lang.String) r5
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r5)
            java.lang.String r0 = r1.toString()
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            com.bianfeng.seppellita.net.UrlStrategy$UrlBean r0 = new com.bianfeng.seppellita.net.UrlStrategy$UrlBean
            r0.<init>(r4, r5, r5)
            r4.urlActionBean = r0
            return
        L44:
            java.lang.Object r0 = r5.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.Object r5 = r5.get(r3)
            java.lang.String r5 = (java.lang.String) r5
            com.bianfeng.seppellita.net.UrlStrategy$UrlBean r1 = new com.bianfeng.seppellita.net.UrlStrategy$UrlBean
            r1.<init>(r4, r0, r5)
            r4.urlActionBean = r1
            return
        L58:
            java.lang.String r5 = "setUrls---null>"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r5)
            return
    }
}
