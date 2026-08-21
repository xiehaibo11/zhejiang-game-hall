package com.bianfeng.ymnsdk.action;

import android.content.Context;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import org.json.JSONObject;

public class d extends ActionSupport<IUserFeature.UserInfo> {
    private String a;
    private String b;
    private String c;
    private String d;
    private String e;
    private IPlugin f;

    public d(Context context) {
        super(context);
        this.a = IUserFeature.LOGIN_SUC_RS_UID;
        this.b = "pid";
        this.c = "gid";
        this.d = "username";
        this.e = IUserFeature.LOGIN_SUC_RS_SESSION;
    }

    @Override
    protected String getURL() {
        String url = formatUrl(HostConstant.login);
        YmnDataFunUtils.getInstance().loginOldRequestEvent(url);
        return url;
    }

    @Override
    public JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws YmnsdkException {
        this.f = iPlugin;
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("platform_id", iPlugin.getPluginId());
            jSONObject.put("platform_name", iPlugin.getPluginName());
            jSONObject.put("platform_ver", iPlugin.getPluginVersion());
            jSONObject.put("isDebug", String.valueOf(iPlugin.isDebugMode() ? 1 : 0));
            jSONObject.put("data", formatType(objArr[0]));
            jSONObject.put("ext", formatType(objArr[1]));
            setTransactionId(YmnDataFunUtils.getInstance().getLoginTrace());
            return jSONObject;
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    @Override
    protected IUserFeature.UserInfo onSuccess(ActionSupport.ResponseResult responseResult) throws Exception {
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
