package com.bianfeng.seppellita.net;

import com.bianfeng.seppellita.bean.InitBean;
import com.bianfeng.seppellita.utils.SeppellitaLogger;
import com.huawei.hms.framework.common.ContainerUtils;
import java.util.Map;

public class UrlManager {
    private static final String SEPPELLITA_ABTEST_ROUTER = "/api/abtest";
    private static final String SEPPELLITA_INIT_ROUTER = "/api/init";
    private static final String SEPPELLITA_POST_ROUTER = "/api/action";
    private static volatile UrlManager manager;
    private UrlStrategy urlStrategy = new UrlStrategy();

    public String getPostRouter() {
        return SEPPELLITA_POST_ROUTER;
    }

    private UrlManager() {
    }

    public static UrlManager getInstance() {
        if (manager == null) {
            synchronized (UrlManager.class) {
                if (manager == null) {
                    manager = new UrlManager();
                }
            }
        }
        return manager;
    }

    public void setUrls(InitBean.DataBean.SevrerListBean sevrerListBean) {
        this.urlStrategy.setUrls(sevrerListBean);
    }

    public void setUrlBean(String str, String str2) {
        this.urlStrategy.setUrlBean(str, str2);
    }

    public String getInitUrl(Map<String, String> map) {
        return createGetUrl(this.urlStrategy.getUrl() + SEPPELLITA_INIT_ROUTER, map);
    }

    private synchronized String createGetUrl(String str, Map<String, String> map) {
        if (map.size() == 0) {
            SeppellitaLogger.e("createGetUrl--->map");
            return str;
        }
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : map.entrySet()) {
            sb.append("&");
            sb.append(entry.getKey());
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(entry.getValue());
        }
        return str + "?" + sb.substring(1);
    }

    public String getAbTest(Map<String, String> map) {
        return createGetUrl(this.urlStrategy.getUrl() + SEPPELLITA_ABTEST_ROUTER, map);
    }

    public String getPostUrl() {
        return this.urlStrategy.getAction() + SEPPELLITA_POST_ROUTER;
    }

    public void onSuc() {
        this.urlStrategy.onSuc();
    }

    public void onFail() {
        this.urlStrategy.onFail();
    }
}
