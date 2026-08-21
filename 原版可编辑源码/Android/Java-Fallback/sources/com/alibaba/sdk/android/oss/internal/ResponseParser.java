package com.alibaba.sdk.android.oss.internal;

import com.alibaba.sdk.android.oss.model.OSSResult;

public interface ResponseParser<T extends com.alibaba.sdk.android.oss.model.OSSResult> {
    T parse(com.alibaba.sdk.android.oss.internal.ResponseMessage r1) throws java.io.IOException;
}
