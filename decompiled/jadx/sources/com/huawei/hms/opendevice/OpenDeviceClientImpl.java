package com.huawei.hms.opendevice;

import android.app.Activity;
import android.content.Context;
import com.huawei.hmf.tasks.Task;
import com.huawei.hms.api.Api;
import com.huawei.hms.api.HuaweiApiAvailability;
import com.huawei.hms.common.HuaweiApi;
import com.huawei.hms.common.internal.AbstractClientBuilder;
import com.huawei.hms.support.api.entity.opendevice.HuaweiOpendeviceNaming;
import com.huawei.hms.support.api.opendevice.OdidResult;
import com.huawei.hms.support.hianalytics.HiAnalyticsClient;
import com.huawei.hms.utils.JsonUtil;

/* JADX INFO: loaded from: classes.dex */
public class OpenDeviceClientImpl extends HuaweiApi<OpenDeviceOptions> implements OpenDeviceClient {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final OpenDeviceHmsClientBuilder f2131a = new OpenDeviceHmsClientBuilder();
    public static final Api<OpenDeviceOptions> b = new Api<>(HuaweiApiAvailability.HMS_API_NAME_OD);
    public static OpenDeviceOptions c = new OpenDeviceOptions();

    public OpenDeviceClientImpl(Activity activity) {
        super(activity, b, c, (AbstractClientBuilder) f2131a);
        super.setKitSdkVersion(50101303);
    }

    @Override // com.huawei.hms.opendevice.OpenDeviceClient
    public Task<OdidResult> getOdid() {
        return doWrite(new OpenDeviceTaskApiCall(HuaweiOpendeviceNaming.getOdid, JsonUtil.createJsonString(null), HiAnalyticsClient.reportEntry(getContext(), HuaweiOpendeviceNaming.getOdid, 50101303)));
    }

    public OpenDeviceClientImpl(Context context) {
        super(context, b, c, f2131a);
        super.setKitSdkVersion(50101303);
    }
}
