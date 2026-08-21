package com.huawei.hms.opendevice;

import com.huawei.hms.core.aidl.IMessageEntity;
import com.huawei.hms.support.api.PendingResultImpl;
import com.huawei.hms.support.api.client.ApiClient;
import com.huawei.hms.support.api.client.Status;
import com.huawei.hms.support.api.entity.opendevice.OdidResp;
import com.huawei.hms.support.api.opendevice.HuaweiOpendeviceApiImpl;
import com.huawei.hms.support.api.opendevice.OdidResult;
import com.huawei.hms.support.log.HMSLog;

/* JADX INFO: compiled from: HuaweiOpendeviceApiImpl.java */
/* JADX INFO: loaded from: classes.dex */
public class u extends PendingResultImpl<OdidResult, OdidResp> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ HuaweiOpendeviceApiImpl f2143a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public u(HuaweiOpendeviceApiImpl huaweiOpendeviceApiImpl, ApiClient apiClient, String str, IMessageEntity iMessageEntity) {
        super(apiClient, str, iMessageEntity);
        this.f2143a = huaweiOpendeviceApiImpl;
    }

    @Override // com.huawei.hms.support.api.PendingResultImpl
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public OdidResult onComplete(OdidResp odidResp) {
        if (odidResp == null) {
            HMSLog.e("OpenIdentifierApiImpl", "getOdid OaidResp is null");
            return null;
        }
        Status commonStatus = odidResp.getCommonStatus();
        if (commonStatus == null) {
            HMSLog.e("OpenIdentifierApiImpl", "getOdid commonStatus is null");
            return null;
        }
        HMSLog.i("OpenIdentifierApiImpl", "getOdid onComplete:" + commonStatus.getStatusCode());
        OdidResult odidResult = new OdidResult();
        odidResult.setStatus(commonStatus);
        odidResult.setId(odidResp.getId());
        return odidResult;
    }
}
