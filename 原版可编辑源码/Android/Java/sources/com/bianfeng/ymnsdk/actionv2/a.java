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
    public JSONObject onPrepareData(IPlugin plugin, Object... datas) throws YmnsdkException {
        this.f = plugin;
        return null;
    }

    @Override
    protected String getURL() {
        String url = formatUrl("sync/login_data");
        YmnDataFunUtils.getInstance().loginNewRequest(url);
        return url;
    }

    @Override
    protected IUserFeature.UserInfo onSuccess(ActionSupportV3.ResponseResult result) throws Exception {
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
