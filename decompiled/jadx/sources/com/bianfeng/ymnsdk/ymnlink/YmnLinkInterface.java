package com.bianfeng.ymnsdk.ymnlink;

import android.app.Activity;
import android.content.ClipData;
import android.content.ClipboardManager;
import android.content.Intent;
import android.net.Uri;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils;

/* JADX INFO: loaded from: classes.dex */
@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class YmnLinkInterface extends YmnPluginWrapper {
    private static final int CODE_GET_URI_FAILURE = 1602;
    private static final int CODE_GET_URI_SUCCESS = 1601;
    private static final String IDENTIFIER = "＄";

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginId() {
        return "29";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginName() {
        return "ymnlink";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public int getPluginVersion() {
        return 17;
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getSdkVersion() {
        return "2.0.0";
    }

    @YFunction(name = "get_uri")
    public void getUriData() {
        Intent intent = ((Activity) getContext()).getIntent();
        Logger.i("----------------get uri from intent----------------------");
        Logger.i("get uri from intent " + intent);
        Uri data = intent != null ? intent.getData() : null;
        if (data == null) {
            data = YmnLinkCache.getLaunchData();
            YmnLinkCache.clearLaunchData();
        }
        if (data != null) {
            sendResult(CODE_GET_URI_SUCCESS, data.getQuery(), "get_uri");
            intent.setData(null);
            return;
        }
        String linkCode = getLinkCode(getClipBoardContent());
        if (!TextUtils.isEmpty(linkCode)) {
            sendResult(CODE_GET_URI_SUCCESS, linkCode, "get_uri");
            cleanClipBoardContent();
        } else {
            sendResult(CODE_GET_URI_FAILURE, "uri is null & ymnlinkstr is null", "get_uri");
        }
    }

    private String getLinkCode(String str) {
        if (str.split(IDENTIFIER).length >= 2) {
            return str.split(IDENTIFIER)[1];
        }
        return null;
    }

    private String getClipBoardContent() {
        ClipboardManager clipboardManager;
        if (!YmnSharedPreferencesUtils.isYmnClipAllow() || (clipboardManager = (ClipboardManager) getContext().getSystemService("clipboard")) == null || !clipboardManager.hasPrimaryClip()) {
            return "";
        }
        return ((Object) clipboardManager.getPrimaryClip().getItemAt(0).getText()) + "";
    }

    private void cleanClipBoardContent() {
        ClipboardManager clipboardManager;
        if (YmnSharedPreferencesUtils.isYmnClipAllow() && (clipboardManager = (ClipboardManager) getContext().getSystemService("clipboard")) != null) {
            clipboardManager.setPrimaryClip(ClipData.newPlainText("data", ""));
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onNewIntent(Intent intent) {
        Logger.i("onNewIntent intent = " + intent);
        Uri data = intent.getData();
        Logger.i("onNewIntent uri = " + data);
        if (data != null) {
            sendResult(CODE_GET_URI_SUCCESS, data.getQuery(), "get_uri");
            intent.setData(null);
        } else {
            sendResult(CODE_GET_URI_FAILURE, "uri is null", "get_uri");
        }
    }
}
