package com.bianfeng.roomlib;

import android.app.Activity;
import com.bianfeng.roomlib.ui.GameRoomWebActivity;
import com.bianfeng.roomlib.utils.YmnH5GameRoomUtils;
import com.bianfeng.utilslib.UtilsSdk;

/* JADX INFO: loaded from: classes.dex */
public class YmnH5GameRoomSdk {
    private static YmnH5GameRoomSdk ymnH5GameRoomSdk;
    private YmnH5GameRoomCallback callback;

    private YmnH5GameRoomSdk() {
    }

    public static YmnH5GameRoomSdk getInstance() {
        if (ymnH5GameRoomSdk == null) {
            synchronized (YmnH5GameRoomSdk.class) {
                if (ymnH5GameRoomSdk == null) {
                    ymnH5GameRoomSdk = new YmnH5GameRoomSdk();
                }
            }
        }
        return ymnH5GameRoomSdk;
    }

    public void startGameRoomWeb(Activity activity, String str, String str2, String str3, String str4, String str5, String str6) {
        String data = YmnH5GameRoomUtils.getData(str, str6);
        UtilsSdk.getAppConfig().setExt(str6);
        UtilsSdk.getAppConfig().setCp(str);
        GameRoomWebActivity.start(activity, data, str, str2);
    }

    public YmnH5GameRoomSdk setCallback(YmnH5GameRoomCallback ymnH5GameRoomCallback) {
        this.callback = ymnH5GameRoomCallback;
        return this;
    }

    public YmnH5GameRoomCallback getCallback() {
        YmnH5GameRoomCallback ymnH5GameRoomCallback = this.callback;
        if (ymnH5GameRoomCallback != null) {
            return ymnH5GameRoomCallback;
        }
        UtilsSdk.getLogger().i("YmnH5LoginCallBack 对象为null");
        return null;
    }
}
