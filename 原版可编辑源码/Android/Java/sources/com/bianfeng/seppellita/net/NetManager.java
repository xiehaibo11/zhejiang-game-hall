package com.bianfeng.seppellita.net;

import com.bianfeng.netlibsdk.DefaultRetryPolicy;
import com.bianfeng.netlibsdk.NetlibSdk;
import com.bianfeng.seppellita.SepperllitaCallback;
import com.bianfeng.seppellita.bean.PostDataBean;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public class NetManager {
    private Map<String, String> map;

    public NetManager(Map<String, String> map) {
        this.map = map;
    }

    public void postInit(String str, SepperllitaCallback sepperllitaCallback) {
        this.map.put(IUserFeature.LOGIN_SUC_RS_UID, str);
        InitRequest initRequest = new InitRequest(this.map, sepperllitaCallback);
        initRequest.setRetryPolicy(new DefaultRetryPolicy(15000, 3, 1.0f));
        NetlibSdk.getInstance().add(initRequest);
    }

    public void postData(List<PostDataBean> list, SepperllitaCallback sepperllitaCallback) {
        Iterator<PostDataBean> it = list.iterator();
        while (it.hasNext()) {
            try {
                PostRequest postRequest = new PostRequest(it.next());
                postRequest.setCallback(sepperllitaCallback);
                NetlibSdk.getInstance().add(postRequest);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}
