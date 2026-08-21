package com.bianfeng.seppellita.net;

import com.bianfeng.seppellita.SepperllitaCallback;
import com.bianfeng.seppellita.bean.PostDataBean;
import com.bianfeng.seppellita.bean.PostResponseBean;
import com.bianfeng.seppellita.exception.SeppellitaException;
import com.bianfeng.seppellita.utils.AutUtils;
import com.bianfeng.seppellita.utils.PostDataSecurityUtils;
import com.bianfeng.seppellita.utils.SeppellitaGsonUtils;
import com.bianfeng.seppellita.utils.SeppellitaLogger;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class PostRequest extends BaseSeppellitaRequest {
    private String aut;
    private SepperllitaCallback callback;
    private String data;
    private List<String> idList;
    private String site;
    private String time;

    @Override // com.bianfeng.netlibsdk.Request
    public int getMethod() {
        return 1;
    }

    public void setCallback(SepperllitaCallback sepperllitaCallback) {
        this.callback = sepperllitaCallback;
    }

    public PostRequest(PostDataBean postDataBean) throws SeppellitaException {
        this.idList = postDataBean.getIdList();
        this.data = PostDataSecurityUtils.rncode(postDataBean.getData(), postDataBean.getEncrypt_key());
        String time = postDataBean.getTime();
        this.time = time;
        this.aut = AutUtils.getSign(this.data, time, postDataBean.getApihub_secret());
        this.site = postDataBean.getSite();
        SeppellitaLogger.i("idList--->" + SeppellitaGsonUtils.toJson(this.idList));
        SeppellitaLogger.i("dataBean--->" + SeppellitaGsonUtils.toJson(postDataBean));
    }

    @Override // com.bianfeng.netlibsdk.Request
    public String getUrl() {
        return UrlManager.getInstance().getPostUrl();
    }

    @Override // com.bianfeng.seppellita.net.BaseSeppellitaRequest, com.bianfeng.netlibsdk.Request
    public Map<String, String> addHeaders() {
        HashMap map = new HashMap();
        map.put("Authorization", this.aut);
        map.put("RequestTime", this.time);
        map.put("Site", this.site);
        return map;
    }

    @Override // com.bianfeng.seppellita.net.BaseSeppellitaRequest, com.bianfeng.netlibsdk.Request
    public String getRequestBody() {
        SeppellitaLogger.i("数据--body-" + this.data.getBytes().length);
        return this.data;
    }

    @Override // com.bianfeng.seppellita.net.BaseSeppellitaRequest
    public void onFail(String str) {
        SepperllitaCallback sepperllitaCallback = this.callback;
        if (sepperllitaCallback != null) {
            sepperllitaCallback.onPostFail(str);
        }
    }

    @Override // com.bianfeng.seppellita.net.BaseSeppellitaRequest
    public void onSuc(String str) {
        if (this.callback != null) {
            try {
                PostResponseBean postResponseBean = (PostResponseBean) SeppellitaGsonUtils.fromJson(str, PostResponseBean.class);
                if (postResponseBean.getCode() == 0) {
                    this.callback.onPostSuc(this.idList);
                } else {
                    this.callback.onInitFail(postResponseBean.getCode() + "|" + postResponseBean.getMsg());
                }
            } catch (Exception e) {
                e.printStackTrace();
                this.callback.onInitFail("601|参数解析出错 " + e.getCause());
            }
        }
    }
}
