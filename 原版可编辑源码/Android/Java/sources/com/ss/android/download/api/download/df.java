package com.ss.android.download.api.download;

import org.json.JSONObject;

@Deprecated
public class df implements DownloadController {
    @Override
    public boolean enableAH() {
        return true;
    }

    @Override
    public boolean enableAM() {
        return true;
    }

    @Override
    public boolean enableNewActivity() {
        return true;
    }

    @Override
    public boolean enableShowComplianceDialog() {
        return true;
    }

    @Override
    public int getDowloadChunkCount() {
        return 0;
    }

    @Override
    public int getDownloadMode() {
        return 0;
    }

    @Override
    public Object getExtraClickOperation() {
        return null;
    }

    @Override
    public JSONObject getExtraJson() {
        return null;
    }

    @Override
    public Object getExtraObject() {
        return null;
    }

    @Override
    public int getInterceptFlag() {
        return 0;
    }

    @Override
    public int getLinkMode() {
        return 0;
    }

    @Override
    public boolean isAddToDownloadManage() {
        return false;
    }

    @Override
    public boolean isAutoDownloadOnCardShow() {
        return false;
    }

    @Override
    public boolean isEnableBackDialog() {
        return false;
    }

    @Override
    public boolean isEnableMultipleDownload() {
        return false;
    }

    @Override
    public void setDownloadMode(int i) {
    }

    @Override
    public void setEnableNewActivity(boolean z) {
    }

    @Override
    public void setEnableShowComplianceDialog(boolean z) {
    }

    @Override
    public void setLinkMode(int i) {
    }

    @Override
    public boolean shouldUseNewWebView() {
        return false;
    }
}
