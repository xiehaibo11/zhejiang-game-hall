package com.alibaba.sdk.android.oss.callback;

import com.alibaba.sdk.android.oss.model.OSSRequest;
import com.alibaba.sdk.android.oss.model.OSSResult;

public interface OSSCompletedCallback<T1 extends com.alibaba.sdk.android.oss.model.OSSRequest, T2 extends com.alibaba.sdk.android.oss.model.OSSResult> {
    void onFailure(T1 r1, com.alibaba.sdk.android.oss.ClientException r2, com.alibaba.sdk.android.oss.ServiceException r3);

    void onSuccess(T1 r1, T2 r2);
}
