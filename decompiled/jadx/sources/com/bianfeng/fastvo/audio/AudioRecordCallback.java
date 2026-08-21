package com.bianfeng.fastvo.audio;

import com.bianfeng.fastvo.ErrorCode;

/* JADX INFO: loaded from: classes.dex */
public interface AudioRecordCallback extends ErrorCode {
    void onRecordCancel();

    void onRecordFail(int i, String str);

    void onRecordSuccess(String str);
}
