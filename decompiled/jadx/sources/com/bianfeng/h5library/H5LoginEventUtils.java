package com.bianfeng.h5library;

import com.bianfeng.h5library.H5LoginEvent;
import com.bianfeng.h5library.utils.H5libMd5Utils;

/* JADX INFO: loaded from: classes.dex */
class H5LoginEventUtils {
    private H5LoginEvent.AppEventsBean appEventsBean;
    private H5LoginEvent baseRequestBean;
    private String uniqueId;

    public H5LoginEventUtils(String str, String str2, String str3, String str4, String str5, String str6) {
        H5LoginEvent.AppEventsBean appEventsBean = new H5LoginEvent.AppEventsBean(str, str2, str3, str4, str5);
        this.appEventsBean = appEventsBean;
        String strMd5 = H5libMd5Utils.md5(appEventsBean.toString());
        this.uniqueId = strMd5;
        this.appEventsBean.setUniqueId(strMd5);
        this.baseRequestBean = new H5LoginEvent(str6, this.appEventsBean);
    }

    public String toString() {
        return this.baseRequestBean.toString();
    }
}
