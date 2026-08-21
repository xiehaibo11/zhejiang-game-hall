package com.bianfeng.ymnsdk.allogin.checkAction;

import android.content.Context;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV3;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import org.json.JSONObject;

public class CheckLoginAction extends ActionSupportV3<IUserFeature.UserInfo> {
    private String LOGIN_SUC_RS_GID;
    private String LOGIN_SUC_RS_PID;
    private String LOGIN_SUC_RS_SESSION;
    private String LOGIN_SUC_RS_UID;
    private String LOGIN_SUC_RS_USERNAME;
    private Context context;

    public CheckLoginAction(Context context) {
        super(context);
        this.LOGIN_SUC_RS_UID = IUserFeature.LOGIN_SUC_RS_UID;
        this.LOGIN_SUC_RS_PID = "pid";
        this.LOGIN_SUC_RS_GID = "gid";
        this.LOGIN_SUC_RS_USERNAME = "username";
        this.LOGIN_SUC_RS_SESSION = IUserFeature.LOGIN_SUC_RS_SESSION;
    }

    @Override
    public JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws YmnsdkException {
        String str = (String) objArr[0];
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("sid", new JSONObject(str).getString(IUserFeature.LOGIN_SUC_RS_SESSION));
        } catch (Exception e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    @Override
    protected String getURL() {
        String url = formatUrl("check");
        YmnDataFunUtils.getInstance().loginNewRequest(url);
        return url;
    }

    @Override
    protected IUserFeature.UserInfo onSuccess(ActionSupportV3.ResponseResult responseResult) throws Exception {
        IUserFeature.UserInfo userInfo = new IUserFeature.UserInfo();
        userInfo.setYmnLogined(true);
        userInfo.setYmnUserIdInt(responseResult.data.optString(this.LOGIN_SUC_RS_PID));
        userInfo.setYmnUserId(responseResult.data.optString(this.LOGIN_SUC_RS_UID));
        userInfo.setPlatformUserId(responseResult.data.optString(this.LOGIN_SUC_RS_GID));
        userInfo.setYmnSession(responseResult.data.optString(this.LOGIN_SUC_RS_SESSION));
        userInfo.setYmnUserName(responseResult.data.optString(this.LOGIN_SUC_RS_USERNAME));
        if (responseResult.ext != null) {
            userInfo.setResponseExt(responseResult.ext.toString());
        }
        return userInfo;
    }
}
