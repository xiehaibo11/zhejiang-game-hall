package com.bianfeng.ymnshare.wxshare;

import android.app.AlertDialog;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.BitmapFactory;
import android.net.Uri;
import android.text.TextUtils;
import android.widget.ImageView;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnshare.YmnShareInterface;
import com.bianfeng.ymnshare.utils.Tools;
import com.google.gson.Gson;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tencent.connect.common.Constants;
import com.tencent.mm.opensdk.modelbase.BaseReq;
import com.tencent.mm.opensdk.modelbase.BaseResp;
import com.tencent.mm.opensdk.modelbiz.SubscribeMessage;
import com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram;
import com.tencent.mm.opensdk.modelmsg.ShowMessageFromWX;
import com.tencent.mm.opensdk.modelmsg.WXAppExtendObject;
import com.tencent.mm.opensdk.modelmsg.WXMediaMessage;
import com.tencent.mm.opensdk.openapi.IWXAPIEventHandler;

public class WXShareCallBack implements IWXAPIEventHandler {
    static final String KEY_GAME_ACTIVITY = "GAME_ACTIVITY";
    public static final int WX_FLAG_REQUEST_SUBSCRIBE_FAILED = 35002;
    public static final int WX_FLAG_REQUEST_SUBSCRIBE_SUCCEED = 35001;
    private static final int WX_FLAG_SHARERESULT_DENY = 803;
    public static final int WX_FLAG_SHARERESULT_FAIL = 802;
    private static final int WX_FLAG_SHARERESULT_SUCCESS = 801;
    private static final int WX_FLAG_SHARERESULT_UNKNOWN = 804;
    private static final int WX_TYPE_SHARE = 2;
    private static volatile boolean isFirst = true;
    private Context mContext;

    public WXShareCallBack(Context context) {
        this.mContext = context;
    }

    @Override
    public void onReq(BaseReq baseReq) {
        if (4 == baseReq.getType() && isFirst) {
            isFirst = false;
            startMainNoParam((ShowMessageFromWX.Req) baseReq);
        }
    }

    @Override
    public void onResp(BaseResp baseResp) {
        if (baseResp.getType() == 18) {
            SubscribeMessage.Resp resp = (SubscribeMessage.Resp) baseResp;
            JsonObject jsonObject = new JsonObject();
            jsonObject.addProperty(Constants.JumpUrlConstants.URL_KEY_OPENID, resp.openId);
            jsonObject.addProperty("action", resp.action);
            jsonObject.addProperty("template_id", resp.templateID);
            jsonObject.addProperty("reserved", resp.reserved);
            jsonObject.addProperty("scene", Integer.valueOf(resp.scene));
            YmnShareInterface.notifyResult(resp.action.equals("confirm") ? WX_FLAG_REQUEST_SUBSCRIBE_SUCCEED : WX_FLAG_REQUEST_SUBSCRIBE_FAILED, new Gson().toJson((JsonElement) jsonObject));
            String packageName = this.mContext.getPackageName();
            String gameActivityName = getGameActivityName();
            if (TextUtils.isEmpty(gameActivityName)) {
                return;
            }
            ComponentName componentName = new ComponentName(packageName, gameActivityName);
            Intent intent = new Intent();
            intent.setComponent(componentName);
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            this.mContext.startActivity(intent);
            return;
        }
        if (2 != baseResp.getType()) {
            return;
        }
        if (baseResp.getType() == 19) {
            Logger.d(((WXLaunchMiniProgram.Resp) baseResp).extMsg);
        }
        int i = baseResp.errCode;
        if (i == -4) {
            YmnShareInterface.notifyResult(WX_FLAG_SHARERESULT_DENY, "发送被拒绝");
            return;
        }
        if (i == -2) {
            YmnShareInterface.notifyResult(802, "发送取消");
        } else if (i == 0) {
            YmnShareInterface.notifyResult(WX_FLAG_SHARERESULT_SUCCESS, "发送成功");
        } else {
            YmnShareInterface.notifyResult(WX_FLAG_SHARERESULT_UNKNOWN, "发送返回");
        }
    }

    private void goToShowMsg(ShowMessageFromWX.Req req) {
        WXMediaMessage wXMediaMessage = req.message;
        WXAppExtendObject wXAppExtendObject = (WXAppExtendObject) wXMediaMessage.mediaObject;
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("description: ");
        stringBuffer.append(wXMediaMessage.description);
        stringBuffer.append("\n");
        stringBuffer.append("extInfo: ");
        stringBuffer.append(wXAppExtendObject.extInfo);
        stringBuffer.append("\n");
        stringBuffer.append("filePath: ");
        stringBuffer.append(wXAppExtendObject.filePath);
        AlertDialog.Builder builder = new AlertDialog.Builder(this.mContext);
        builder.setTitle(wXMediaMessage.title);
        builder.setMessage(stringBuffer.toString());
        if (wXMediaMessage.thumbData != null && wXMediaMessage.thumbData.length > 0) {
            ImageView imageView = new ImageView(this.mContext);
            imageView.setImageBitmap(BitmapFactory.decodeByteArray(wXMediaMessage.thumbData, 0, wXMediaMessage.thumbData.length));
            builder.setView(imageView);
        }
        builder.show();
    }

    private void startMainNoParam(ShowMessageFromWX.Req req) {
        Logger.i("==========startMainNoParam======");
        String packageName = this.mContext.getPackageName();
        String gameActivityName = getGameActivityName();
        WXAppExtendObject wXAppExtendObject = (WXAppExtendObject) req.message.mediaObject;
        if (!TextUtils.isEmpty(gameActivityName)) {
            ComponentName componentName = new ComponentName(packageName, gameActivityName);
            Intent intent = new Intent();
            intent.setComponent(componentName);
            String str = wXAppExtendObject.extInfo;
            Tools.setUriCache(Uri.parse(str));
            intent.setData(Uri.parse(str));
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            this.mContext.startActivity(intent);
            return;
        }
        Intent launchIntentForPackage = this.mContext.getPackageManager().getLaunchIntentForPackage(packageName);
        String str2 = wXAppExtendObject.extInfo;
        Tools.setUriCache(Uri.parse(str2));
        launchIntentForPackage.setData(Uri.parse(str2));
        this.mContext.startActivity(launchIntentForPackage);
    }

    private String getGameActivityName() {
        String gameActivityNameByManifest = getGameActivityNameByManifest();
        return TextUtils.isEmpty(gameActivityNameByManifest) ? getGameActivityNameByDefault() : gameActivityNameByManifest;
    }

    private String getGameActivityNameByManifest() {
        try {
            return this.mContext.getPackageManager().getApplicationInfo(this.mContext.getPackageName(), 128).metaData.getString(KEY_GAME_ACTIVITY);
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    private String getGameActivityNameByDefault() {
        try {
            Class.forName("org.cocos2dx.cpp.AppActivity");
            return "org.cocos2dx.cpp.AppActivity";
        } catch (ClassNotFoundException unused) {
            return null;
        }
    }
}
