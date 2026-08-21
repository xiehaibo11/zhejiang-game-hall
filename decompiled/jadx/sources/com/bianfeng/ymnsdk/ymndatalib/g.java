package com.bianfeng.ymnsdk.ymndatalib;

import com.bianfeng.netlibsdk.BaseRequest;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: compiled from: WhiteListRequest.java */
/* JADX INFO: loaded from: classes.dex */
public class g extends BaseRequest {
    @Override // com.bianfeng.netlibsdk.Request
    public Map<String, String> addHeaders() {
        return new HashMap();
    }

    @Override // com.bianfeng.netlibsdk.Request
    public int getMethod() {
        return 0;
    }

    @Override // com.bianfeng.netlibsdk.Request
    public String getRequestBody() {
        return "";
    }

    @Override // com.bianfeng.netlibsdk.Request
    public String getUrl() {
        return YmnDataUrlUtils.getInstance().get_ymndata_white_list();
    }
}
