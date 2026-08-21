package com.bianfeng.ymnsdk.ymnlink;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class YmnLinkInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper {
    private static final int CODE_GET_URI_FAILURE = 1602;
    private static final int CODE_GET_URI_SUCCESS = 1601;
    private static final java.lang.String IDENTIFIER = "＄";

    public YmnLinkInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    private void cleanClipBoardContent() {
            r3 = this;
            boolean r0 = com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils.isYmnClipAllow()
            if (r0 != 0) goto L7
            return
        L7:
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "clipboard"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.content.ClipboardManager r0 = (android.content.ClipboardManager) r0
            if (r0 == 0) goto L20
            java.lang.String r1 = "data"
            java.lang.String r2 = ""
            android.content.ClipData r1 = android.content.ClipData.newPlainText(r1, r2)
            r0.setPrimaryClip(r1)
        L20:
            return
    }

    private java.lang.String getClipBoardContent() {
            r3 = this;
            boolean r0 = com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils.isYmnClipAllow()
            java.lang.String r1 = ""
            if (r0 != 0) goto L9
            return r1
        L9:
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "clipboard"
            java.lang.Object r0 = r0.getSystemService(r2)
            android.content.ClipboardManager r0 = (android.content.ClipboardManager) r0
            if (r0 == 0) goto L3a
            boolean r2 = r0.hasPrimaryClip()
            if (r2 == 0) goto L3a
            android.content.ClipData r0 = r0.getPrimaryClip()
            r2 = 0
            android.content.ClipData$Item r0 = r0.getItemAt(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.CharSequence r0 = r0.getText()
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
            return r0
        L3a:
            return r1
    }

    private java.lang.String getLinkCode(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "＄"
            java.lang.String[] r1 = r4.split(r0)
            int r1 = r1.length
            r2 = 2
            if (r1 < r2) goto L12
            java.lang.String[] r4 = r4.split(r0)
            r0 = 1
            r4 = r4[r0]
            goto L13
        L12:
            r4 = 0
        L13:
            return r4
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "29"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "ymnlink"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 17
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "2.0.0"
            return r0
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "get_uri")
    public void getUriData() {
            r5 = this;
            android.content.Context r0 = r5.getContext()
            android.app.Activity r0 = (android.app.Activity) r0
            android.content.Intent r0 = r0.getIntent()
            java.lang.String r1 = "----------------get uri from intent----------------------"
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "get uri from intent "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            r1 = 0
            if (r0 == 0) goto L2b
            android.net.Uri r2 = r0.getData()
            goto L2c
        L2b:
            r2 = r1
        L2c:
            if (r2 != 0) goto L35
            android.net.Uri r2 = com.bianfeng.ymnsdk.ymnlink.YmnLinkCache.getLaunchData()
            com.bianfeng.ymnsdk.ymnlink.YmnLinkCache.clearLaunchData()
        L35:
            r3 = 1601(0x641, float:2.243E-42)
            java.lang.String r4 = "get_uri"
            if (r2 == 0) goto L46
            java.lang.String r2 = r2.getQuery()
            r5.sendResult(r3, r2, r4)
            r0.setData(r1)
            goto L62
        L46:
            java.lang.String r0 = r5.getClipBoardContent()
            java.lang.String r0 = r5.getLinkCode(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L5b
            r5.sendResult(r3, r0, r4)
            r5.cleanClipBoardContent()
            goto L62
        L5b:
            r0 = 1602(0x642, float:2.245E-42)
            java.lang.String r1 = "uri is null & ymnlinkstr is null"
            r5.sendResult(r0, r1, r4)
        L62:
            return
    }

    @Override
    public void onNewIntent(android.content.Intent r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onNewIntent intent = "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            android.net.Uri r0 = r4.getData()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onNewIntent uri = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            java.lang.String r1 = "get_uri"
            if (r0 == 0) goto L3e
            r2 = 1601(0x641, float:2.243E-42)
            java.lang.String r0 = r0.getQuery()
            r3.sendResult(r2, r0, r1)
            r0 = 0
            r4.setData(r0)
            goto L45
        L3e:
            r4 = 1602(0x642, float:2.245E-42)
            java.lang.String r0 = "uri is null"
            r3.sendResult(r4, r0, r1)
        L45:
            return
    }
}
