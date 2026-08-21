package com.bianfeng.ymnsdk.actionv2;

import android.content.Context;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV3;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import org.json.JSONObject;

/* JADX INFO: compiled from: RequestLoginActionV2.java */
/* JADX INFO: loaded from: classes.dex */
public class a extends ActionSupportV3<IUserFeature.UserInfo> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f1426a;
    private String b;
    private String c;
    private String d;
    private String e;
    private IPlugin f;

    public a(Context context) {
        super(context);
        this.f1426a = IUserFeature.LOGIN_SUC_RS_UID;
        this.b = "pid";
        this.c = "gid";
        this.d = "username";
        this.e = IUserFeature.LOGIN_SUC_RS_SESSION;
    }

    @Override // com.bianfeng.ymnsdk.actionv2.ActionSupportV3
    public JSONObject onPrepareData(IPlugin plugin, Object... datas) throws YmnsdkException {
        this.f = plugin;
        return null;
    }

    @Override // com.bianfeng.ymnsdk.actionv2.ActionSupportV3
    protected String getURL() {
        String url = formatUrl("sync/login_data");
        YmnDataFunUtils.getInstance().loginNewRequest(url);
        return url;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    /* JADX WARN: Can't rename method to resolve collision */
    @Override // com.bianfeng.ymnsdk.actionv2.ActionSupportV3
    public IUserFeature.UserInfo onSuccess(ActionSupportV3.ResponseResult result) throws Exception {
        result.data.put("platform_id", this.f.getPluginId());
        result.data.put("platform_name", this.f.getPluginName());
        result.data.put("thirdparty", this.f.getPluginName());
        IUserFeature.UserInfo userInfo = new IUserFeature.UserInfo();
        userInfo.setYmnLogined(true);
        userInfo.setYmnUserIdInt(result.data.optString(this.b));
        userInfo.setYmnUserId(result.data.optString(this.f1426a));
        userInfo.setPlatformUserId(result.data.optString(this.c));
        userInfo.setYmnSession(result.data.optString(this.e));
        userInfo.setYmnUserName(result.data.optString(this.d));
        userInfo.setResponseExt(result.ext.toString());
        return userInfo;
    }
}
