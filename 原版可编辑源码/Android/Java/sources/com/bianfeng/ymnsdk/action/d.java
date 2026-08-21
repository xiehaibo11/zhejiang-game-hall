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
    public JSONObject onPrepareData(IPlugin plugin, Object... datas) throws YmnsdkException {
        this.f = plugin;
        JSONObject json = new JSONObject();
        try {
            json.put("platform_id", plugin.getPluginId());
            json.put("platform_name", plugin.getPluginName());
            json.put("platform_ver", plugin.getPluginVersion());
            json.put("isDebug", String.valueOf(plugin.isDebugMode() ? 1 : 0));
            json.put("data", formatType(datas[0]));
            json.put("ext", formatType(datas[1]));
            setTransactionId(YmnDataFunUtils.getInstance().getLoginTrace());
            return json;
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    @Override
    protected String getURL() {
        String url = formatUrl(HostConstant.login);
        YmnDataFunUtils.getInstance().loginOldRequestEvent(url);
        return url;
    }

    @Override
    protected IUserFeature.UserInfo onSuccess(ActionSupport.ResponseResult result) throws Exception {
        result.data.put("platform_id", this.f.getPluginId());
        result.data.put("platform_name", this.f.getPluginName());
        result.data.put("thirdparty", this.f.getPluginName());
        IUserFeature.UserInfo userInfo = new IUserFeature.UserInfo();
        userInfo.setYmnLogined(true);
        userInfo.setYmnUserIdInt(result.data.optString(this.b));
        userInfo.setYmnUserId(result.data.optString(this.a));
        userInfo.setPlatformUserId(result.data.optString(this.c));
        userInfo.setYmnSession(result.data.optString(this.e));
        userInfo.setYmnUserName(result.data.optString(this.d));
        userInfo.setResponseExt(result.ext.toString());
        return userInfo;
    }
}
