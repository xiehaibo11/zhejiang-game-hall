package com.huawei.hms.support.api.client;

import android.app.Activity;
import com.huawei.hms.common.internal.Preconditions;
import com.huawei.hms.support.api.client.Result;
import com.huawei.hms.support.log.HMSLog;

/* JADX INFO: loaded from: classes.dex */
@Deprecated
public abstract class ResolvingResultCallbacks<R extends Result> extends ResultCallbacks<R> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Activity f2181a;
    private final int b;

    protected ResolvingResultCallbacks(Activity activity, int i) {
        this.f2181a = (Activity) Preconditions.checkNotNull(activity, "Activity must not be null");
        this.b = i;
    }

    @Override // com.huawei.hms.support.api.client.ResultCallbacks
    public final void onFailure(Status status) {
        try {
            if (status.hasResolution()) {
                status.startResolutionForResult(this.f2181a, this.b);
            } else {
                onUnresolvableFailure(status);
            }
        } catch (Exception e) {
            HMSLog.e("ResolvingResultCallbacks", "Failed to start resolution: " + e);
            onUnresolvableFailure(Status.RESULT_INTERNAL_ERROR);
        }
    }

    @Override // com.huawei.hms.support.api.client.ResultCallbacks
    public abstract void onSuccess(R r);

    public abstract void onUnresolvableFailure(Status status);
}
