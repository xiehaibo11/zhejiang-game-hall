package com.bianfeng.splitscreenlib;

import android.app.Activity;
import com.bianfeng.loginlib.YmnH5GameLoginSdk;
import com.bianfeng.paylib.YmnWebpaySdk;
import com.bianfeng.roomlib.YmnH5GameRoomSdk;
import com.bianfeng.splitscreenlib.gameroom.YmnGoomCallback;
import com.bianfeng.splitscreenlib.login.YmnLoginCallBack;
import com.bianfeng.splitscreenlib.utils.YmnH5GameUtils;
import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.UtilsSdk;

public class YmnH5GameSdk {
    private static YmnH5GameSdk ymnH5GameSdk;
    private Activity activity;
    private YmnH5Callback callback;
    private boolean isInitPostEvent = false;

    private YmnH5GameSdk() {
    }

    public static YmnH5GameSdk getInstance() {
        if (ymnH5GameSdk == null) {
            synchronized (YmnH5GameSdk.class) {
                if (ymnH5GameSdk == null) {
                    ymnH5GameSdk = new YmnH5GameSdk();
                }
            }
        }
        return ymnH5GameSdk;
    }

    public YmnH5Callback getCallback() {
        return this.callback;
    }

    public void startGameRoomWeb(String str, String str2, String str3, String str4, String str5, String str6, YmnH5Callback ymnH5Callback) {
        YmnH5GameUtils.checkOnCreat(this.activity);
        this.callback = ymnH5Callback;
        ThridSdk.getYmnDatafun().onClickWithRoom(str2, str);
        YmnH5GameLoginSdk.getInstance().setCallback(new YmnLoginCallBack()).startRoom(this.activity, str, str2, str3, str4, str5, str6);
        YmnH5GameRoomSdk.getInstance().startGameRoomWeb(this.activity, str, str2, str3, str4, str5, str6);
    }

    private void initPostEvent(Activity activity) {
        if (this.isInitPostEvent) {
            return;
        }
        this.activity = activity;
        this.isInitPostEvent = true;
        UtilsSdk.init(activity);
        ThridSdk.init(activity);
        YmnH5GameRoomSdk.getInstance().setCallback(new YmnGoomCallback());
        YmnWebpaySdk.getInstance().init(activity);
    }

    public void startGameLogin(String str, String str2, String str3, String str4, String str5, String str6, String str7, YmnH5Callback ymnH5Callback) {
        this.callback = ymnH5Callback;
        YmnH5GameLoginSdk.getInstance().setCallback(new YmnLoginCallBack()).startGame(this.activity, str, str2, str3, str4, str5, str6, str7);
    }

    public void onCreate(Activity activity) {
        initPostEvent(activity);
        UtilsSdk.onCreate(activity);
    }

    public void onResume() {
        ThridSdk.onResume();
    }

    public void onDestory() {
        ThridSdk.onDestory();
        YmnH5GameLoginSdk.getInstance().onDestory();
        UtilsSdk.getSharedPreferences().putBoolean("enterGame", false);
    }

    public void onWindowFocusChanged(boolean z, Activity activity) {
        this.activity = activity;
        YmnH5GameLoginSdk.getInstance().onWindowFocusChanged(z, activity);
        UtilsSdk.onWindowFocusChanged(z, activity);
    }

    public void enterGame() {
        UtilsSdk.getSharedPreferences().putBoolean("enterGame", true);
    }

    public void finishGame() {
        UtilsSdk.getSharedPreferences().putBoolean("enterGame", false);
    }
}
