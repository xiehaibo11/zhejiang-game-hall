package com.bianfeng.ymnshare;

import com.bianfeng.ymnsdk.util.Logger;
import com.tencent.tauth.IUiListener;
import com.tencent.tauth.UiError;

/* JADX INFO: loaded from: classes.dex */
public class BaseUiListener implements IUiListener {
    private static final int QQ_FLAG_SHARERESULT_DENY = 803;
    public static final int QQ_FLAG_SHARERESULT_FAIL = 802;
    private static final int QQ_FLAG_SHARERESULT_SUCCESS = 801;
    private static final int QQ_FLAG_SHARERESULT_UNKNOWN = 804;

    @Override // com.tencent.tauth.IUiListener
    public void onComplete(Object obj) {
        YmnShareInterface.notifyResult(QQ_FLAG_SHARERESULT_SUCCESS, "发送成功");
    }

    @Override // com.tencent.tauth.IUiListener
    public void onError(UiError uiError) {
        YmnShareInterface.notifyResult(802, uiError.errorMessage);
    }

    @Override // com.tencent.tauth.IUiListener
    public void onCancel() {
        YmnShareInterface.notifyResult(802, "发送取消");
    }

    @Override // com.tencent.tauth.IUiListener
    public void onWarning(int i) {
        Logger.i("BaseUiListener--->" + i);
    }
}
