package com.bianfeng.seppellita.net;

import com.bianfeng.seppellita.bean.InitBean;
import com.bianfeng.seppellita.utils.SeppellitaLogger;
import com.bianfeng.ymnsdk.utilslib.appinfo.AppContext;
import java.util.List;
import java.util.concurrent.atomic.AtomicInteger;

class UrlStrategy {
    private static final String SEPPELLITA_POST_URL = "sl_url_main";
    private static final String SEPPELLITA_POST_URL_2 = "sl_url_alternate";
    private UrlBean urlActionBean;
    private UrlBean urlBean;

    public UrlStrategy() {
        String metaDataValueString;
        String metaDataValueString2 = "";
        try {
            metaDataValueString = AppContext.getInstance().getMetaDataValueString(SEPPELLITA_POST_URL);
        } catch (Exception unused) {
            metaDataValueString = "";
        }
        try {
            metaDataValueString2 = AppContext.getInstance().getMetaDataValueString(SEPPELLITA_POST_URL_2);
        } catch (Exception unused2) {
        }
        this.urlBean = new UrlBean(metaDataValueString, metaDataValueString2);
    }

    public void onSuc() {
        this.urlBean.setTo0();
        UrlBean urlBean = this.urlActionBean;
        if (urlBean != null) {
            urlBean.setTo0();
        }
    }

    public void onFail() {
        this.urlBean.increment();
        UrlBean urlBean = this.urlActionBean;
        if (urlBean != null) {
            urlBean.increment();
        }
    }

    public void setUrls(InitBean.DataBean.SevrerListBean sevrerListBean) {
        SeppellitaLogger.i("setUrls--->");
        if (sevrerListBean == null || sevrerListBean.getAction() == null || sevrerListBean.getAction().size() == 0) {
            SeppellitaLogger.i("setUrls---null>");
            return;
        }
        List<String> action = sevrerListBean.getAction();
        if (action.size() == 1) {
            String str = action.get(0);
            SeppellitaLogger.i("setUrls--->" + str);
            this.urlActionBean = new UrlBean(str, str);
            return;
        }
        this.urlActionBean = new UrlBean(action.get(0), action.get(1));
    }

    String getUrl() {
        return this.urlBean.getUrl();
    }

    public void setUrlBean(String str, String str2) {
        this.urlBean = new UrlBean(str, str2);
    }

    String getAction() {
        UrlBean urlBean = this.urlActionBean;
        if (urlBean != null) {
            return urlBean.getUrl();
        }
        return getUrl();
    }

    private class UrlBean {
        private static final int DEF_MAX_COUNT = 3;
        volatile int count;
        private volatile AtomicInteger modify = new AtomicInteger(0);
        private String[] uris;
        String url;

        public UrlBean(String str, String str2) {
            this.uris = new String[]{str, str2};
            this.url = str;
        }

        public int getCount() {
            return this.count;
        }

        public void increment() {
            this.count++;
            SeppellitaLogger.i("次数--->" + this.count);
        }

        public void setTo0() {
            this.count = 0;
        }

        public String getUrl() {
            if (getCount() > 3) {
                int iIncrementAndGet = this.modify.incrementAndGet() % 2;
                UrlStrategy.this.urlBean.setTo0();
                this.url = this.uris[iIncrementAndGet];
            }
            return this.url;
        }
    }
}
