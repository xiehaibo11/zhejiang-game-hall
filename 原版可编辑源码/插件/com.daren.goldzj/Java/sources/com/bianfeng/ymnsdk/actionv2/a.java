package com.bianfeng.ymnsdk.actionv2;

import android.content.Context;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV3;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import org.json.JSONObject;

public class a extends ActionSupportV3<IUserFeature.UserInfo> {
    private String a;
    private String b;
    private String c;
    private String d;
    private String e;
    private IPlugin f;

    public a(Context context) {
        super(context);
        this.a = IUserFeature.LOGIN_SUC_RS_UID;
        this.b = "pid";
        this.c = "gid";
        this.d = "username";
        this.e = IUserFeature.LOGIN_SUC_RS_SESSION;
    }

    @Override
    protected String getURL() {
        String url = formatUrl("sync/login_data");
        YmnDataFunUtils.getInstance().loginNewRequest(url);
        return url;
    }

    @Override
    public JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws YmnsdkException {
        this.f = iPlugin;
        return null;
    }

    @Override
    protected IUserFeature.UserInfo onSuccess(ActionSupportV3.ResponseResult responseResult) throws Exception {
        responseResult.data.put("platform_id", this.f.getPluginId());
        responseResult.data.put("platform_name", this.f.getPluginName());
        responseResult.data.put("thirdparty", this.f.getPluginName());
        IUserFeature.UserInfo userInfo = new IUserFeature.UserInfo();
        userInfo.setYmnLogined(true);
        userInfo.setYmnUserIdInt(responseResult.data.optString(this.b));
        userInfo.setYmnUserId(responseResult.data.optString(this.a));
        userInfo.setPlatformUserId(responseResult.data.optString(this.c));
        userInfo.setYmnSession(responseResult.data.optString(this.e));
        userInfo.setYmnUserName(responseResult.data.optString(this.d));
        userInfo.setResponseExt(responseResult.ext.toString());
        return userInfo;
    }
}
