package com.bianfeng.ymnsdk.ymndatalib;

import com.bianfeng.netlibsdk.BaseRequest;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils;
import java.util.HashMap;
import java.util.Map;

public class g extends BaseRequest {
    @Override
    public Map<String, String> addHeaders() {
        return new HashMap();
    }

    @Override
    public int getMethod() {
        return 0;
    }

    @Override
    public String getRequestBody() {
        return "";
    }

    @Override
    public String getUrl() {
        return YmnDataUrlUtils.getInstance().get_ymndata_white_list();
    }
}
