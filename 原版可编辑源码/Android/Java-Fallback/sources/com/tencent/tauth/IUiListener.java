package com.tencent.tauth;

public interface IUiListener {
    void onCancel();

    void onComplete(java.lang.Object r1);

    void onError(com.tencent.tauth.UiError r1);

    void onWarning(int r1);
}
