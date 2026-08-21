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

    public a(Context r1) {
        super(r1);
        this.a = IUserFeature.LOGIN_SUC_RS_UID;
        this.b = "pid";
        this.c = "gid";
        this.d = "username";
        this.e = IUserFeature.LOGIN_SUC_RS_SESSION;
    }

    @Override
    protected String getURL() {
        String r0 = formatUrl("sync/login_data");
        YmnDataFunUtils.getInstance().loginNewRequest(r0);
        return r0;
    }

    @Override
    public JSONObject onPrepareData(IPlugin r1, Object... r2) throws YmnsdkException {
        this.f = r1;
        return null;
    }

    @Override
    protected IUserFeature.UserInfo onSuccess(ActionSupportV3.ResponseResult r1) throws Exception {
        return onSuccess(r1);
    }

    @Override
    protected IUserFeature.UserInfo onSuccess(ActionSupportV3.ResponseResult r4) throws Exception {
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
