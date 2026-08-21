package com.bianfeng.ymnshare.wxshare;

public class WXShareCallBack implements com.tencent.mm.opensdk.openapi.IWXAPIEventHandler {
    static final java.lang.String KEY_GAME_ACTIVITY = "GAME_ACTIVITY";
    public static final int WX_FLAG_REQUEST_SUBSCRIBE_FAILED = 35002;
    public static final int WX_FLAG_REQUEST_SUBSCRIBE_SUCCEED = 35001;
    private static final int WX_FLAG_SHARERESULT_DENY = 803;
    public static final int WX_FLAG_SHARERESULT_FAIL = 802;
    private static final int WX_FLAG_SHARERESULT_SUCCESS = 801;
    private static final int WX_FLAG_SHARERESULT_UNKNOWN = 804;
    private static final int WX_TYPE_SHARE = 2;
    private static volatile boolean isFirst = true;
    private android.content.Context mContext;

    static {
            return
    }

    public WXShareCallBack(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            return
    }

    private java.lang.String getGameActivityName() {
            r2 = this;
            java.lang.String r0 = r2.getGameActivityNameByManifest()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Le
            java.lang.String r0 = r2.getGameActivityNameByDefault()
        Le:
            return r0
    }

    private java.lang.String getGameActivityNameByDefault() {
            r1 = this;
            java.lang.String r0 = "org.cocos2dx.cpp.AppActivity"
            java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L6
            return r0
        L6:
            r0 = 0
            return r0
    }

    private java.lang.String getGameActivityNameByManifest() {
            r3 = this;
            android.content.Context r0 = r3.mContext     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1b
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1b
            android.content.Context r1 = r3.mContext     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1b
            java.lang.String r1 = r1.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1b
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r1, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1b
            android.os.Bundle r0 = r0.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1b
            java.lang.String r1 = "GAME_ACTIVITY"
            java.lang.String r0 = r0.getString(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1b
            return r0
        L1b:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    private void goToShowMsg(com.tencent.mm.opensdk.modelmsg.ShowMessageFromWX.Req r5) {
            r4 = this;
            com.tencent.mm.opensdk.modelmsg.WXMediaMessage r5 = r5.message
            com.tencent.mm.opensdk.modelmsg.WXMediaMessage$IMediaObject r0 = r5.mediaObject
            com.tencent.mm.opensdk.modelmsg.WXAppExtendObject r0 = (com.tencent.mm.opensdk.modelmsg.WXAppExtendObject) r0
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            java.lang.String r2 = "description: "
            r1.append(r2)
            java.lang.String r2 = r5.description
            r1.append(r2)
            java.lang.String r2 = "\n"
            r1.append(r2)
            java.lang.String r3 = "extInfo: "
            r1.append(r3)
            java.lang.String r3 = r0.extInfo
            r1.append(r3)
            r1.append(r2)
            java.lang.String r2 = "filePath: "
            r1.append(r2)
            java.lang.String r0 = r0.filePath
            r1.append(r0)
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder
            android.content.Context r2 = r4.mContext
            r0.<init>(r2)
            java.lang.String r2 = r5.title
            r0.setTitle(r2)
            java.lang.String r1 = r1.toString()
            r0.setMessage(r1)
            byte[] r1 = r5.thumbData
            if (r1 == 0) goto L64
            byte[] r1 = r5.thumbData
            int r1 = r1.length
            if (r1 <= 0) goto L64
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r2 = r4.mContext
            r1.<init>(r2)
            byte[] r2 = r5.thumbData
            r3 = 0
            byte[] r5 = r5.thumbData
            int r5 = r5.length
            android.graphics.Bitmap r5 = android.graphics.BitmapFactory.decodeByteArray(r2, r3, r5)
            r1.setImageBitmap(r5)
            r0.setView(r1)
        L64:
            r0.show()
            return
    }

    private void startMainNoParam(com.tencent.mm.opensdk.modelmsg.ShowMessageFromWX.Req r4) {
            r3 = this;
            java.lang.String r0 = "==========startMainNoParam======"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            android.content.Context r0 = r3.mContext
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r1 = r3.getGameActivityName()
            com.tencent.mm.opensdk.modelmsg.WXMediaMessage r4 = r4.message
            com.tencent.mm.opensdk.modelmsg.WXMediaMessage$IMediaObject r4 = r4.mediaObject
            com.tencent.mm.opensdk.modelmsg.WXAppExtendObject r4 = (com.tencent.mm.opensdk.modelmsg.WXAppExtendObject) r4
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L43
            android.content.ComponentName r2 = new android.content.ComponentName
            r2.<init>(r0, r1)
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            r0.setComponent(r2)
            java.lang.String r4 = r4.extInfo
            android.net.Uri r1 = android.net.Uri.parse(r4)
            com.bianfeng.ymnshare.utils.Tools.setUriCache(r1)
            android.net.Uri r4 = android.net.Uri.parse(r4)
            r0.setData(r4)
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r4)
            android.content.Context r4 = r3.mContext
            r4.startActivity(r0)
            goto L62
        L43:
            android.content.Context r1 = r3.mContext
            android.content.pm.PackageManager r1 = r1.getPackageManager()
            android.content.Intent r0 = r1.getLaunchIntentForPackage(r0)
            java.lang.String r4 = r4.extInfo
            android.net.Uri r1 = android.net.Uri.parse(r4)
            com.bianfeng.ymnshare.utils.Tools.setUriCache(r1)
            android.net.Uri r4 = android.net.Uri.parse(r4)
            r0.setData(r4)
            android.content.Context r4 = r3.mContext
            r4.startActivity(r0)
        L62:
            return
    }

    @Override
    public void onReq(com.tencent.mm.opensdk.modelbase.BaseReq r3) {
            r2 = this;
            int r0 = r3.getType()
            r1 = 4
            if (r1 != r0) goto L13
            boolean r0 = com.bianfeng.ymnshare.wxshare.WXShareCallBack.isFirst
            if (r0 == 0) goto L13
            r0 = 0
            com.bianfeng.ymnshare.wxshare.WXShareCallBack.isFirst = r0
            com.tencent.mm.opensdk.modelmsg.ShowMessageFromWX$Req r3 = (com.tencent.mm.opensdk.modelmsg.ShowMessageFromWX.Req) r3
            r2.startMainNoParam(r3)
        L13:
            return
    }

    @Override
    public void onResp(com.tencent.mm.opensdk.modelbase.BaseResp r4) {
            r3 = this;
            int r0 = r4.getType()
            r1 = 18
            if (r0 != r1) goto L7b
            com.tencent.mm.opensdk.modelbiz.SubscribeMessage$Resp r4 = (com.tencent.mm.opensdk.modelbiz.SubscribeMessage.Resp) r4
            com.google.gson.JsonObject r0 = new com.google.gson.JsonObject
            r0.<init>()
            java.lang.String r1 = r4.openId
            java.lang.String r2 = "open_id"
            r0.addProperty(r2, r1)
            java.lang.String r1 = r4.action
            java.lang.String r2 = "action"
            r0.addProperty(r2, r1)
            java.lang.String r1 = r4.templateID
            java.lang.String r2 = "template_id"
            r0.addProperty(r2, r1)
            java.lang.String r1 = r4.reserved
            java.lang.String r2 = "reserved"
            r0.addProperty(r2, r1)
            int r1 = r4.scene
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "scene"
            r0.addProperty(r2, r1)
            com.google.gson.Gson r1 = new com.google.gson.Gson
            r1.<init>()
            java.lang.String r0 = r1.toJson(r0)
            java.lang.String r4 = r4.action
            java.lang.String r1 = "confirm"
            boolean r4 = r4.equals(r1)
            if (r4 == 0) goto L4d
            r4 = 35001(0x88b9, float:4.9047E-41)
            goto L50
        L4d:
            r4 = 35002(0x88ba, float:4.9048E-41)
        L50:
            com.bianfeng.ymnshare.YmnShareInterface.notifyResult(r4, r0)
            android.content.Context r4 = r3.mContext
            java.lang.String r4 = r4.getPackageName()
            java.lang.String r0 = r3.getGameActivityName()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L7a
            android.content.ComponentName r1 = new android.content.ComponentName
            r1.<init>(r4, r0)
            android.content.Intent r4 = new android.content.Intent
            r4.<init>()
            r4.setComponent(r1)
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r4.addFlags(r0)
            android.content.Context r0 = r3.mContext
            r0.startActivity(r4)
        L7a:
            return
        L7b:
            r0 = 2
            int r1 = r4.getType()
            if (r0 == r1) goto L83
            return
        L83:
            int r0 = r4.getType()
            r1 = 19
            if (r0 != r1) goto L93
            r0 = r4
            com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram$Resp r0 = (com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram.Resp) r0
            java.lang.String r0 = r0.extMsg
            com.bianfeng.ymnsdk.util.Logger.d(r0)
        L93:
            int r4 = r4.errCode
            r0 = -4
            if (r4 == r0) goto Lb5
            r0 = -2
            if (r4 == r0) goto Lad
            if (r4 == 0) goto La5
            r4 = 804(0x324, float:1.127E-42)
            java.lang.String r0 = "发送返回"
            com.bianfeng.ymnshare.YmnShareInterface.notifyResult(r4, r0)
            goto Lbc
        La5:
            r4 = 801(0x321, float:1.122E-42)
            java.lang.String r0 = "发送成功"
            com.bianfeng.ymnshare.YmnShareInterface.notifyResult(r4, r0)
            goto Lbc
        Lad:
            r4 = 802(0x322, float:1.124E-42)
            java.lang.String r0 = "发送取消"
            com.bianfeng.ymnshare.YmnShareInterface.notifyResult(r4, r0)
            goto Lbc
        Lb5:
            r4 = 803(0x323, float:1.125E-42)
            java.lang.String r0 = "发送被拒绝"
            com.bianfeng.ymnshare.YmnShareInterface.notifyResult(r4, r0)
        Lbc:
            return
    }
}
