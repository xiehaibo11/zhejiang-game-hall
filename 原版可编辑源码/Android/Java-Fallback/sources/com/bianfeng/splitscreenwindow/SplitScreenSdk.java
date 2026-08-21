package com.bianfeng.splitscreenwindow;

public class SplitScreenSdk {
    private static volatile com.bianfeng.splitscreenwindow.SplitScreenSdk screenSdk;
    private android.app.Activity activity;
    private java.lang.String shopid;
    private com.bianfeng.splitscreenwindow.ShowType showtype;
    private com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager windowManager;

    static class 1 {
        static final int[] $SwitchMap$com$bianfeng$splitscreenwindow$ShowType = null;

        static {
                com.bianfeng.splitscreenwindow.ShowType[] r0 = com.bianfeng.splitscreenwindow.ShowType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.bianfeng.splitscreenwindow.SplitScreenSdk.1.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType = r0
                com.bianfeng.splitscreenwindow.ShowType r1 = com.bianfeng.splitscreenwindow.ShowType.FENPING_LAND     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.bianfeng.splitscreenwindow.SplitScreenSdk.1.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType     // Catch: java.lang.NoSuchFieldError -> L1d
                com.bianfeng.splitscreenwindow.ShowType r1 = com.bianfeng.splitscreenwindow.ShowType.FENPING_PORTRAIT     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.bianfeng.splitscreenwindow.SplitScreenSdk.1.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType     // Catch: java.lang.NoSuchFieldError -> L28
                com.bianfeng.splitscreenwindow.ShowType r1 = com.bianfeng.splitscreenwindow.ShowType.QUANPING_PORTRAIT     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.bianfeng.splitscreenwindow.SplitScreenSdk.1.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType     // Catch: java.lang.NoSuchFieldError -> L33
                com.bianfeng.splitscreenwindow.ShowType r1 = com.bianfeng.splitscreenwindow.ShowType.QUANPING_LAND     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.bianfeng.splitscreenwindow.SplitScreenSdk.1.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType     // Catch: java.lang.NoSuchFieldError -> L3e
                com.bianfeng.splitscreenwindow.ShowType r1 = com.bianfeng.splitscreenwindow.ShowType.ACTIVITY_LAND     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = com.bianfeng.splitscreenwindow.SplitScreenSdk.1.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType     // Catch: java.lang.NoSuchFieldError -> L49
                com.bianfeng.splitscreenwindow.ShowType r1 = com.bianfeng.splitscreenwindow.ShowType.ACTIVITY_PORTRAIT     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                return
        }
    }

    private SplitScreenSdk() {
            r0 = this;
            r0.<init>()
            return
    }

    private void closeWindow() {
            r1 = this;
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0 = r1.windowManager
            if (r0 == 0) goto La
            r0.closeWindow()
            r0 = 0
            r1.windowManager = r0
        La:
            return
    }

    public static com.bianfeng.splitscreenwindow.SplitScreenSdk getInstance() {
            com.bianfeng.splitscreenwindow.SplitScreenSdk r0 = com.bianfeng.splitscreenwindow.SplitScreenSdk.screenSdk
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.splitscreenwindow.SplitScreenSdk> r0 = com.bianfeng.splitscreenwindow.SplitScreenSdk.class
            monitor-enter(r0)
            com.bianfeng.splitscreenwindow.SplitScreenSdk r1 = com.bianfeng.splitscreenwindow.SplitScreenSdk.screenSdk     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.splitscreenwindow.SplitScreenSdk r1 = new com.bianfeng.splitscreenwindow.SplitScreenSdk     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.splitscreenwindow.SplitScreenSdk.screenSdk = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.splitscreenwindow.SplitScreenSdk r0 = com.bianfeng.splitscreenwindow.SplitScreenSdk.screenSdk
            return r0
    }

    private void show(com.bianfeng.splitscreenwindow.ShowType r2) {
            r1 = this;
            int[] r0 = com.bianfeng.splitscreenwindow.SplitScreenSdk.1.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType
            int r2 = r2.ordinal()
            r2 = r0[r2]
            r0 = 1
            if (r2 == r0) goto L15
            r0 = 2
            if (r2 == r0) goto L15
            r0 = 3
            if (r2 == r0) goto L15
            r0 = 4
            if (r2 == r0) goto L15
            goto L22
        L15:
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r2 = r1.windowManager
            if (r2 != 0) goto L22
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r2 = new com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager
            android.app.Activity r0 = r1.activity
            r2.<init>(r0)
            r1.windowManager = r2
        L22:
            return
    }

    public void endPay() {
            r1 = this;
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0 = r1.windowManager
            if (r0 == 0) goto L7
            r0.setPaying()
        L7:
            return
    }

    public void init(android.app.Activity r3, java.lang.String r4, com.bianfeng.splitscreenwindow.ShowType r5) {
            r2 = this;
            r2.activity = r3
            r2.shopid = r4
            r2.showtype = r5
            com.bianfeng.utilslib.Logger r3 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "data_map init: shopid"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.i(r4)
            r2.show(r5)
            return
    }

    public void onDestory() {
            r1 = this;
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0 = r1.windowManager
            if (r0 == 0) goto L7
            r0.onDestory()
        L7:
            return
    }

    public void onWindowFocusChanged(boolean r2, android.app.Activity r3) {
            r1 = this;
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0 = r1.windowManager
            if (r0 != 0) goto L5
            return
        L5:
            if (r2 == 0) goto Lb
            r0.onResume(r3)
            goto Le
        Lb:
            r0.onPause()
        Le:
            return
    }

    public void pay(java.lang.String r4) {
            r3 = this;
            com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.util.Map r4 = r0.fromJson(r4)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L15:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L2d
            java.lang.Object r1 = r4.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.Object r1 = r1.getValue()
            r0.put(r2, r1)
            goto L15
        L2d:
            java.lang.String r4 = r3.shopid
            java.lang.String r1 = "shop_id"
            r0.put(r1, r4)
            com.bianfeng.utilslib.Logger r4 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "data_map:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            r4.i(r1)
            com.bianfeng.utilslib.reflex.ReflexCallbackUtils r4 = com.bianfeng.utilslib.UtilsSdk.getReflexCall()
            com.bianfeng.utilslib.reflex.ClassNameSetUtils r1 = com.bianfeng.utilslib.UtilsSdk.getClassNameSet()
            java.lang.String r1 = r1.getH5PayCallback()
            r4.onCallWithObject(r1, r0)
            return
    }

    public void payWeb(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = "ext"
            com.bianfeng.thridlibrary.GsonUtils r1 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.util.Map r5 = r1.fromJson(r5)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L17:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L2f
            java.lang.Object r2 = r5.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.Object r2 = r2.getValue()
            r1.put(r3, r2)
            goto L17
        L2f:
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: org.json.JSONException -> L41
            java.lang.Object r2 = r1.get(r0)     // Catch: org.json.JSONException -> L41
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L41
            r5.<init>(r2)     // Catch: org.json.JSONException -> L41
            java.lang.String r2 = "app_cp"
            java.lang.String r5 = r5.getString(r2)     // Catch: org.json.JSONException -> L41
            goto L47
        L41:
            r5 = move-exception
            r5.printStackTrace()
            java.lang.String r5 = ""
        L47:
            java.lang.String r2 = "cp"
            r1.put(r2, r5)
            java.lang.String r5 = r4.shopid
            java.lang.String r2 = "shop_id"
            r1.put(r2, r5)
            java.lang.String r5 = "gameid"
            java.lang.Object r5 = r1.get(r5)
            java.lang.String r5 = (java.lang.String) r5
            java.lang.String r2 = "game_id"
            r1.put(r2, r5)
            java.lang.Object r5 = r1.get(r0)
            java.lang.String r5 = (java.lang.String) r5
            java.lang.String r2 = "thirdGame_ext"
            r1.put(r2, r5)
            com.bianfeng.utilslib.AppConfigUtils r5 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r5 = r5.getExt()
            r1.put(r0, r5)
            com.bianfeng.utilslib.AppConfigUtils r5 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r5 = r5.getSdkVersion()
            java.lang.String r0 = "sdk_version"
            r1.put(r0, r5)
            com.bianfeng.utilslib.reflex.ReflexCallbackUtils r5 = com.bianfeng.utilslib.UtilsSdk.getReflexCall()
            com.bianfeng.utilslib.reflex.ClassNameSetUtils r0 = com.bianfeng.utilslib.UtilsSdk.getClassNameSet()
            java.lang.String r0 = r0.getH5PayWebCallback()
            r5.onCallWithObject(r0, r1)
            return
    }

    public void show(java.lang.String r3) {
            r2 = this;
            int[] r0 = com.bianfeng.splitscreenwindow.SplitScreenSdk.1.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType
            com.bianfeng.splitscreenwindow.ShowType r1 = r2.showtype
            int r1 = r1.ordinal()
            r0 = r0[r1]
            switch(r0) {
                case 1: goto L20;
                case 2: goto L20;
                case 3: goto L20;
                case 4: goto L20;
                case 5: goto L17;
                case 6: goto Le;
                default: goto Ld;
            }
        Ld:
            goto L2e
        Le:
            r2.closeWindow()
            android.app.Activity r0 = r2.activity
            com.bianfeng.splitscreenwindow.ui.YmnH5WebviewActivity.start(r0, r3)
            goto L2e
        L17:
            r2.closeWindow()
            android.app.Activity r0 = r2.activity
            com.bianfeng.splitscreenwindow.ui.YmnH5WebviewLandActivity.start(r0, r3)
            goto L2e
        L20:
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0 = r2.windowManager
            if (r0 == 0) goto L2e
            com.bianfeng.splitscreenwindow.ShowType r1 = r2.showtype
            r0.setShowType(r1)
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0 = r2.windowManager
            r0.show(r3)
        L2e:
            return
    }
}
