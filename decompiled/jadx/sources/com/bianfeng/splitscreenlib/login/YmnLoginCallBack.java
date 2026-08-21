package com.bianfeng.splitscreenlib.login;

import com.bianfeng.loginlib.YmnH5LoginCallBack;
import com.bianfeng.splitscreenlib.YmnH5GameSdk;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class YmnLoginCallBack implements YmnH5LoginCallBack {
    @Override // com.bianfeng.loginlib.YmnH5LoginCallBack
    public void onLoginFail(String str) {
        YmnH5GameSdk.getInstance().getCallback().onLoginFail(str);
    }

    public void onCall(HashMap<String, String> map) {
        String str = map.get("type");
        if (str.equalsIgnoreCase("GameClose")) {
            YmnH5GameSdk.getInstance().getCallback().onCloseGame();
        } else if (str.equalsIgnoreCase("SplitScreen")) {
            YmnH5GameSdk.getInstance().getCallback().onSplitScreen();
        } else if (str.equalsIgnoreCase("FullScreen")) {
            YmnH5GameSdk.getInstance().getCallback().onFullScreen();
        }
    }
}
