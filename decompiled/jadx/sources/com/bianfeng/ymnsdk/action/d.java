package com.bianfeng.ymnsdk.action;

import android.content.Context;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import org.json.JSONObject;

/* JADX INFO: compiled from: RequestLoginAction.java */
/* JADX INFO: loaded from: classes.dex */
public class d extends ActionSupport<IUserFeature.UserInfo> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f1423a;
    private String b;
    private String c;
    private String d;
    private String e;
    private IPlugin f;

    public d(Context context) {
        super(context);
        this.f1423a = IUserFeature.LOGIN_SUC_RS_UID;
        this.b = "pid";
        this.c = "gid";
        this.d = "username";
        this.e = IUserFeature.LOGIN_SUC_RS_SESSION;
    }

    @Override // com.bianfeng.ymnsdk.action.ActionSupport
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

    @Override // com.bianfeng.ymnsdk.action.ActionSupport
    protected String getURL() {
        String url = formatUrl(HostConstant.login);
        YmnDataFunUtils.getInstance().loginOldRequestEvent(url);
        return url;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    /* JADX WARN: Can't rename method to resolve collision */
    @Override // com.bianfeng.ymnsdk.action.ActionSupport
    public IUserFeature.UserInfo onSuccess(ActionSupport.ResponseResult result) throws Exception {
        result.data.put("platform_id", this.f.getPluginId());
        result.data.put("platform_name", this.f.getPluginName());
        result.data.put("thirdparty", this.f.getPluginName());
        IUserFeature.UserInfo userInfo = new IUserFeature.UserInfo();
        userInfo.setYmnLogined(true);
        userInfo.setYmnUserIdInt(result.data.optString(this.b));
        userInfo.setYmnUserId(result.data.optString(this.f1423a));
        userInfo.setPlatformUserId(result.data.optString(this.c));
        userInfo.setYmnSession(result.data.optString(this.e));
        userInfo.setYmnUserName(result.data.optString(this.d));
        userInfo.setResponseExt(result.ext.toString());
        return userInfo;
    }
}
