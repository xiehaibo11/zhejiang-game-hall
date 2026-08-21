package com.bianfeng.ymnshare;

public class BaseUiListener implements com.tencent.tauth.IUiListener {
    private static final int QQ_FLAG_SHARERESULT_DENY = 803;
    public static final int QQ_FLAG_SHARERESULT_FAIL = 802;
    private static final int QQ_FLAG_SHARERESULT_SUCCESS = 801;
    private static final int QQ_FLAG_SHARERESULT_UNKNOWN = 804;

    public BaseUiListener() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onCancel() {
            r2 = this;
            r0 = 802(0x322, float:1.124E-42)
            java.lang.String r1 = "发送取消"
            com.bianfeng.ymnshare.YmnShareInterface.notifyResult(r0, r1)
            return
    }

    @Override
    public void onComplete(java.lang.Object r2) {
            r1 = this;
            r2 = 801(0x321, float:1.122E-42)
            java.lang.String r0 = "发送成功"
            com.bianfeng.ymnshare.YmnShareInterface.notifyResult(r2, r0)
            return
    }

    @Override
    public void onError(com.tencent.tauth.UiError r2) {
            r1 = this;
            java.lang.String r2 = r2.errorMessage
            r0 = 802(0x322, float:1.124E-42)
            com.bianfeng.ymnshare.YmnShareInterface.notifyResult(r0, r2)
            return
    }

    @Override
    public void onWarning(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "BaseUiListener--->"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r3)
            return
    }
}
