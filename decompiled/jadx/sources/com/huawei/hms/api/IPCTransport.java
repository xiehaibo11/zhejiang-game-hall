package com.huawei.hms.api;

import android.os.Bundle;
import com.huawei.hms.core.aidl.IMessageEntity;
import com.huawei.hms.core.aidl.RequestHeader;
import com.huawei.hms.core.aidl.c;
import com.huawei.hms.core.aidl.e;
import com.huawei.hms.support.api.client.AidlApiClient;
import com.huawei.hms.support.api.client.ApiClient;
import com.huawei.hms.support.api.entity.core.CommonCode;
import com.huawei.hms.support.api.transport.DatagramTransport;
import com.huawei.hms.support.log.HMSLog;

/* JADX INFO: loaded from: classes.dex */
public class IPCTransport implements DatagramTransport {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f2009a;
    private final IMessageEntity b;
    private final Class<? extends IMessageEntity> c;
    private int d;

    public IPCTransport(String str, IMessageEntity iMessageEntity, Class<? extends IMessageEntity> cls) {
        this.f2009a = str;
        this.b = iMessageEntity;
        this.c = cls;
    }

    private int a(ApiClient apiClient, c cVar) {
        if (!(apiClient instanceof HuaweiApiClientImpl)) {
            if (apiClient instanceof AidlApiClient) {
                AidlApiClient aidlApiClient = (AidlApiClient) apiClient;
                com.huawei.hms.core.aidl.b bVar = new com.huawei.hms.core.aidl.b(this.f2009a, ProtocolNegotiate.getInstance().getVersion());
                bVar.a(com.huawei.hms.core.aidl.a.a(bVar.c()).a(this.b, new Bundle()));
                try {
                    aidlApiClient.getService().a(bVar, cVar);
                    return 0;
                } catch (Exception e) {
                    HMSLog.e("IPCTransport", "sync call ex:" + e);
                }
            }
            return CommonCode.ErrorCode.INTERNAL_ERROR;
        }
        com.huawei.hms.core.aidl.b bVar2 = new com.huawei.hms.core.aidl.b(this.f2009a, ProtocolNegotiate.getInstance().getVersion());
        e eVarA = com.huawei.hms.core.aidl.a.a(bVar2.c());
        bVar2.a(eVarA.a(this.b, new Bundle()));
        RequestHeader requestHeader = new RequestHeader();
        requestHeader.setAppID(apiClient.getAppID());
        requestHeader.setPackageName(apiClient.getPackageName());
        requestHeader.setSdkVersion(50300301);
        requestHeader.setApiNameList(((HuaweiApiClientImpl) apiClient).getApiNameList());
        requestHeader.setSessionId(apiClient.getSessionId());
        requestHeader.setApiLevel(this.d);
        bVar2.b = eVarA.a(requestHeader, new Bundle());
        try {
            HuaweiApiClientImpl huaweiApiClientImpl = (HuaweiApiClientImpl) apiClient;
            if (huaweiApiClientImpl.getService() == null) {
                HMSLog.e("IPCTransport", "HuaweiApiClient is not binded to service yet.");
                return CommonCode.ErrorCode.INTERNAL_ERROR;
            }
            huaweiApiClientImpl.getService().a(bVar2, cVar);
            return 0;
        } catch (Exception e2) {
            HMSLog.e("IPCTransport", "sync call ex:" + e2);
            return CommonCode.ErrorCode.INTERNAL_ERROR;
        }
    }

    @Override // com.huawei.hms.support.api.transport.DatagramTransport
    public final void post(ApiClient apiClient, DatagramTransport.a aVar) {
        send(apiClient, aVar);
    }

    @Override // com.huawei.hms.support.api.transport.DatagramTransport
    public final void send(ApiClient apiClient, DatagramTransport.a aVar) {
        int iA = a(apiClient, new IPCCallback(this.c, aVar));
        if (iA != 0) {
            aVar.a(iA, null);
        }
    }

    public IPCTransport(String str, IMessageEntity iMessageEntity, Class<? extends IMessageEntity> cls, int i) {
        this.f2009a = str;
        this.b = iMessageEntity;
        this.c = cls;
        this.d = i;
    }
}
