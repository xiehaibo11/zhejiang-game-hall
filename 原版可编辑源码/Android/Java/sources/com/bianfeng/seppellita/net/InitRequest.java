package com.bianfeng.seppellita.net;

import com.bianfeng.seppellita.SepperllitaCallback;
import com.bianfeng.seppellita.bean.InitBean;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import java.util.Map;

public class InitRequest extends BaseSeppellitaRequest {
    private SepperllitaCallback callback;
    private Map<String, String> map;

    @Override
    public int getMethod() {
        return 0;
    }

    public InitRequest(Map<String, String> map, SepperllitaCallback sepperllitaCallback) {
        this.callback = sepperllitaCallback;
        this.map = map;
    }

    @Override
    public String getUrl() {
        return UrlManager.getInstance().getInitUrl(this.map);
    }

    @Override
    public void onFail(String str) {
        SepperllitaCallback sepperllitaCallback = this.callback;
        if (sepperllitaCallback != null) {
            sepperllitaCallback.onInitFail(str);
        }
    }

    @Override
    public void onSuc(String str) {
        if (this.callback != null) {
            try {
                InitBean initBean = (InitBean) UtilsSdk.getGsonUtils().fromJson(str, InitBean.class);
                if (initBean.getCode() == 0) {
                    this.callback.onInitSuc((InitBean.DataBean) UtilsSdk.getGsonUtils().fromJson((Object) initBean.getData(), InitBean.DataBean.class));
                }
            } catch (Exception e) {
                e.printStackTrace();
                this.callback.onInitFail("601|参数解析出错 " + e.getCause());
            }
        }
    }
}
