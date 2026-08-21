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

    public d(Context r1) {
        super(r1);
        this.a = IUserFeature.LOGIN_SUC_RS_UID;
        this.b = "pid";
        this.c = "gid";
        this.d = "username";
        this.e = IUserFeature.LOGIN_SUC_RS_SESSION;
    }

    @Override
    protected String getURL() {
        String r0 = formatUrl(HostConstant.login);
        YmnDataFunUtils.getInstance().loginOldRequestEvent(r0);
        return r0;
    }

    @Override
    public JSONObject onPrepareData(IPlugin r4, Object... r5) throws YmnsdkException {
        this.f = r4;
        JSONObject r0 = new JSONObject();
        r0.put("platform_id", r4.getPluginId());     // Catch: Exception -> L15
        r0.put("platform_name", r4.getPluginName());     // Catch: Exception -> L15
        r0.put("platform_ver", r4.getPluginVersion());     // Catch: Exception -> L15
        r0.put("isDebug", String.valueOf(r4.isDebugMode() ? 1 : 0));     // Catch: Exception -> L15
        r0.put("data", formatType(r5[0]));     // Catch: Exception -> L15
        r0.put("ext", formatType(r5[1]));     // Catch: Exception -> L15
        setTransactionId(YmnDataFunUtils.getInstance().getLoginTrace());     // Catch: Exception -> L15
        return r0;
    L15:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    @Override
    protected IUserFeature.UserInfo onSuccess(ActionSupport.ResponseResult r1) throws Exception {
        return onSuccess(r1);
    }

    @Override
    protected IUserFeature.UserInfo onSuccess(ActionSupport.ResponseResult r4) throws Exception {
        r4.data.put("platform_id", this.f.getPluginId());
        r4.data.put("platform_name", this.f.getPluginName());
        r4.data.put("thirdparty", this.f.getPluginName());
        IUserFeature.UserInfo r0 = new IUserFeature.UserInfo();
        r0.setYmnLogined(true);
        r0.setYmnUserIdInt(r4.data.optString(this.b));
        r0.setYmnUserId(r4.data.optString(this.a));
        r0.setPlatformUserId(r4.data.optString(this.c));
        r0.setYmnSession(r4.data.optString(this.e));
        r0.setYmnUserName(r4.data.optString(this.d));
        r0.setResponseExt(r4.ext.toString());
        return r0;
    }
}
