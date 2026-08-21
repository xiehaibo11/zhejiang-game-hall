package com.yxcorp.kuaishou.addfp;

public interface ResponseDfpCallback {
    void onFailed(int i, String str);

    void onSuccess(String str, String str2);
}
