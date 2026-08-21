package com.bianfeng.paylib.alipaysdk;

/* JADX INFO: loaded from: classes.dex */
public interface OnPayListener {
    public static final int CODE_SYSTEM_ERROR = 150;
    public static final int CODE_USER_CACEL_PAY = 6001;

    void onFailure(int i, String str);

    void onSuccess(String str);
}
