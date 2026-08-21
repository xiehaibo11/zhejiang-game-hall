package com.bianfeng.loginlib.action;

import android.app.Activity;
import com.bianfeng.loginlib.utils.UrlManagerUtils;
import com.bianfeng.netlib.ActionSupport;
import java.util.HashMap;
import java.util.Map;

public class H5GameLoginAction extends ActionSupport {
    private Map<String, String> map;

    public H5GameLoginAction(Activity activity) {
        super(activity);
        this.map = new HashMap();
    }

    @Override
    protected String getURL() {
        return UrlManagerUtils.getUrl();
    }

    @Override
    protected Map<String, String> onSuccess(ActionSupport.ResponseResult responseResult) throws Exception {
        this.map.put("address", responseResult.getData().getString("address"));
        return this.map;
    }
}
