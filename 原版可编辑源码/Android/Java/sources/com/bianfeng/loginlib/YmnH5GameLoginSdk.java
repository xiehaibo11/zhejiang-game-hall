package com.bianfeng.loginlib;

import android.app.Activity;
import com.bianfeng.loginlib.ui.LoginRequest;
import com.bianfeng.loginlib.utils.YmnLoginUtils;
import com.bianfeng.splitscreenwindow.SplitScreenSdk;
import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.UtilsSdk;
import java.util.TreeMap;

public class YmnH5GameLoginSdk {
    private static YmnH5GameLoginSdk ymnH5GameSdk;
    private Activity activity;
    private YmnH5LoginCallBack loginCallBack;
    private TreeMap<String, String> map;

    private YmnH5GameLoginSdk() {
    }

    public static YmnH5GameLoginSdk getInstance() {
        if (ymnH5GameSdk == null) {
            synchronized (YmnH5GameLoginSdk.class) {
                if (ymnH5GameSdk == null) {
                    ymnH5GameSdk = new YmnH5GameLoginSdk();
                }
            }
        }
        return ymnH5GameSdk;
    }

    public YmnH5GameLoginSdk setCallback(YmnH5LoginCallBack ymnH5LoginCallBack) {
        this.loginCallBack = ymnH5LoginCallBack;
        return this;
    }

    public void startGame(Activity activity, String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        this.activity = activity;
        TreeMap<String, String> treeMap = new TreeMap<>();
        this.map = treeMap;
        treeMap.put("gameid", str);
        this.map.put("userid", str2);
        this.map.put("nickname", str3);
        this.map.put("sex", str4);
        this.map.put("avatar", str5);
        this.map.put("ext", str7);
        UtilsSdk.getAppConfig().setExt(str7);
        UtilsSdk.getAppConfig().setCp("");
        YmnLoginUtils.getInstance().setDirection(str7);
        SplitScreenSdk.getInstance().init(activity, str6, YmnLoginUtils.getInstance().getDirection());
        loginStart(this.map);
    }

    public YmnH5LoginCallBack getCallback() {
        YmnH5LoginCallBack ymnH5LoginCallBack = this.loginCallBack;
        if (ymnH5LoginCallBack != null) {
            return ymnH5LoginCallBack;
        }
        UtilsSdk.getLogger().i("YmnH5LoginCallBack 对象为null");
        return null;
    }

    public void startRoom(Activity activity, String str, String str2, String str3, String str4, String str5, String str6) {
        TreeMap<String, String> treeMap = new TreeMap<>();
        this.map = treeMap;
        this.activity = activity;
        treeMap.put("userid", str2);
        this.map.put("nickname", str3);
        this.map.put("sex", str4);
        this.map.put("avatar", str5);
        this.map.put("ext", YmnLoginUtils.getInstance().getExt(str6, str));
    }

    public void startGame(String str, String str2, int i, int i2) {
        this.map.put("gameid", str);
        YmnLoginUtils.getInstance().setDirection(i, i2);
        SplitScreenSdk.getInstance().init(this.activity, str2, YmnLoginUtils.getInstance().getDirection());
        loginStart(this.map);
    }

    private void loginStart(TreeMap<String, String> treeMap) {
        ThridSdk.getYmnDatafun().onClickWithSingle(treeMap.get("userid"), treeMap.get("gameid"), YmnLoginUtils.getInstance().getCpFromExt(treeMap.get("ext")));
        LoginRequest.start(this.activity, treeMap);
    }

    public void onDestory() {
        SplitScreenSdk.getInstance().onDestory();
    }

    public void onWindowFocusChanged(boolean z, Activity activity) {
        SplitScreenSdk.getInstance().onWindowFocusChanged(z, activity);
    }

    public void endPay() {
        SplitScreenSdk.getInstance().endPay();
    }
}
