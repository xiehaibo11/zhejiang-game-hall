package com.bianfeng.splitscreenlib.login;

public class YmnLoginCallBack implements com.bianfeng.loginlib.YmnH5LoginCallBack {
    public YmnLoginCallBack() {
            r0 = this;
            r0.<init>()
            return
    }

    public void onCall(java.util.HashMap<java.lang.String, java.lang.String> r2) {
            r1 = this;
            java.lang.String r0 = "type"
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r0 = "GameClose"
            boolean r0 = r2.equalsIgnoreCase(r0)
            if (r0 == 0) goto L1c
            com.bianfeng.splitscreenlib.YmnH5GameSdk r2 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            com.bianfeng.splitscreenlib.YmnH5Callback r2 = r2.getCallback()
            r2.onCloseGame()
            goto L43
        L1c:
            java.lang.String r0 = "SplitScreen"
            boolean r0 = r2.equalsIgnoreCase(r0)
            if (r0 == 0) goto L30
            com.bianfeng.splitscreenlib.YmnH5GameSdk r2 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            com.bianfeng.splitscreenlib.YmnH5Callback r2 = r2.getCallback()
            r2.onSplitScreen()
            goto L43
        L30:
            java.lang.String r0 = "FullScreen"
            boolean r2 = r2.equalsIgnoreCase(r0)
            if (r2 == 0) goto L43
            com.bianfeng.splitscreenlib.YmnH5GameSdk r2 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            com.bianfeng.splitscreenlib.YmnH5Callback r2 = r2.getCallback()
            r2.onFullScreen()
        L43:
            return
    }

    @Override
    public void onLoginFail(java.lang.String r2) {
            r1 = this;
            com.bianfeng.splitscreenlib.YmnH5GameSdk r0 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            com.bianfeng.splitscreenlib.YmnH5Callback r0 = r0.getCallback()
            r0.onLoginFail(r2)
            return
    }
}
