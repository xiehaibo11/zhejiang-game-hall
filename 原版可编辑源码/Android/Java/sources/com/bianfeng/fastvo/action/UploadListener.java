package com.bianfeng.fastvo.action;

public interface UploadListener {
    void onComplete(String str);

    void onError(int i, String str);
}
