package com.bianfeng.ymnsdk.ymndatalib.bean.login;

import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.ymndatalib.b;
import com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent;
import com.bianfeng.ymnsdk.ymndatalib.f;
import com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger;
import com.igexin.sdk.PushConsts;

/* JADX INFO: loaded from: classes.dex */
public class LoginEventMap {
    public static volatile LoginEventMap loginEventMap;
    public long startCallSdkTime = 0;
    public long startRequestTime = 0;
    public long startOldRequestTime = 0;
    public long startCheckRequestTime = 0;
    public long startCustomTime = 0;
    public String loginAsynServerName = "";
    public String loginOldServerName = "";
    public String loginCheckServerName = "";
    public String loginCustomServerName = "";

    public static LoginEventMap getInstance() {
        if (loginEventMap == null) {
            synchronized (LoginEventMap.class) {
                if (loginEventMap == null) {
                    loginEventMap = new LoginEventMap();
                }
            }
        }
        return loginEventMap;
    }

    private void onLoginDataEvent(int i, String str, Long l, String str2, String str3, int i2) {
        f.a().a(new BaseEvent(new b(new ResponseDataUtils(i, str, l), str2, str3), i2, HostConstant.login).toString());
    }

    public void loginCustomCallEvent(Integer num, String str, String str2) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.startCustomTime = jCurrentTimeMillis;
        this.loginCustomServerName = str;
        onLoginDataEvent(0, "", Long.valueOf(jCurrentTimeMillis), str2, str, num.intValue());
    }

    public void loginCustomReturnEvent(Integer num, Integer num2, String str) {
        onLoginDataEvent(num2.intValue(), str, Long.valueOf(this.startCustomTime), "", this.loginCustomServerName, num.intValue());
    }

    public void loginFinishEvent(Integer num, String str) {
        onLoginDataEvent(num.intValue(), str, Long.valueOf(this.startCallSdkTime), "", "", 12000);
    }

    public void loginNewRequestEvent(String str) {
        this.startRequestTime = System.currentTimeMillis();
        this.loginAsynServerName = str;
        YmnDatalibLogger.i("触发loginNewRequestEvent埋点");
        onLoginDataEvent(0, "", Long.valueOf(this.startRequestTime), "", str, 10002);
    }

    public void loginNewResponseEvent(Integer num, String str) {
        onLoginDataEvent(num.intValue(), str, Long.valueOf(this.startRequestTime), "", this.loginAsynServerName, 10003);
    }

    public void loginOldRequestCheckEvent(String str) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.startCheckRequestTime = jCurrentTimeMillis;
        this.loginCheckServerName = str;
        onLoginDataEvent(0, "", Long.valueOf(jCurrentTimeMillis), "", str, 10022);
    }

    public void loginOldRequestEvent(String str) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.startOldRequestTime = jCurrentTimeMillis;
        this.loginOldServerName = str;
        onLoginDataEvent(0, "", Long.valueOf(jCurrentTimeMillis), "", str, PushConsts.ACTION_NOTIFICATION_CLICKED);
    }

    public void loginOldResponseCheckEvent(Integer num, String str) {
        onLoginDataEvent(num.intValue(), str, Long.valueOf(this.startCheckRequestTime), "", this.loginCheckServerName, 10023);
    }

    public void loginOldResponseEvent(int i, String str, String str2, String str3) {
        onLoginDataEvent(i, str, Long.valueOf(this.startOldRequestTime), "", this.loginOldServerName, PushConsts.GET_DEVICETOKEN, str2, str3);
    }

    public void loginSdkReturnEvent(Integer num, String str) {
        YmnDatalibLogger.i("触发 loginSdkReturnEvent 埋点");
        onLoginDataEvent(num.intValue(), str, Long.valueOf(this.startCallSdkTime), "", "", 10001);
    }

    public void loginStartEvent() {
        YmnDatalibLogger.i("触发loginStartEvent埋点");
        TraceUtils.getInstance().getStartLoginTrace();
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.startCallSdkTime = jCurrentTimeMillis;
        onLoginDataEvent(0, "", Long.valueOf(jCurrentTimeMillis), "", "", 10000);
    }

    private void onLoginDataEvent(int i, String str, Long l, String str2, String str3, int i2, String str4, String str5) {
        f.a().a(new BaseEvent(new b(new ResponseDataUtils(i, str, l), str2, str3, str4, str5), i2, HostConstant.login).toString());
    }
}
