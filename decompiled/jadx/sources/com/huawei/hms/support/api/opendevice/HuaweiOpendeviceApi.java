package com.huawei.hms.support.api.opendevice;

import com.huawei.hms.api.HuaweiApiClient;
import com.huawei.hms.support.api.client.PendingResult;

/* JADX INFO: loaded from: classes.dex */
public interface HuaweiOpendeviceApi {
    PendingResult<OdidResult> getOdid(HuaweiApiClient huaweiApiClient);
}
