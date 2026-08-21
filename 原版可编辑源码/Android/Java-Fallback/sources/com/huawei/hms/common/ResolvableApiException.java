package com.huawei.hms.common;

public class ResolvableApiException extends com.huawei.hms.common.ApiException {
    public ResolvableApiException(com.huawei.hms.common.internal.ResponseErrorCode r4) {
            r3 = this;
            com.huawei.hms.support.api.client.Status r0 = new com.huawei.hms.support.api.client.Status
            int r1 = r4.getErrorCode()
            java.lang.String r2 = r4.getErrorReason()
            r0.<init>(r1, r2)
            r3.<init>(r0)
            boolean r0 = r4.hasResolution()
            if (r0 == 0) goto L3d
            android.os.Parcelable r0 = r4.getParcelable()
            boolean r0 = r0 instanceof android.app.PendingIntent
            if (r0 == 0) goto L2a
            com.huawei.hms.support.api.client.Status r0 = r3.mStatus
            android.os.Parcelable r4 = r4.getParcelable()
            android.app.PendingIntent r4 = (android.app.PendingIntent) r4
            r0.setPendingIntent(r4)
            goto L3d
        L2a:
            android.os.Parcelable r0 = r4.getParcelable()
            boolean r0 = r0 instanceof android.content.Intent
            if (r0 == 0) goto L3d
            com.huawei.hms.support.api.client.Status r0 = r3.mStatus
            android.os.Parcelable r4 = r4.getParcelable()
            android.content.Intent r4 = (android.content.Intent) r4
            r0.setIntent(r4)
        L3d:
            return
    }

    public ResolvableApiException(com.huawei.hms.support.api.client.Status r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public android.app.PendingIntent getResolution() {
            r1 = this;
            com.huawei.hms.support.api.client.Status r0 = r1.mStatus
            android.app.PendingIntent r0 = r0.getResolution()
            return r0
    }

    public android.content.Intent getResolutionIntent() {
            r1 = this;
            com.huawei.hms.support.api.client.Status r0 = r1.mStatus
            android.content.Intent r0 = r0.getResolutionIntent()
            return r0
    }

    public void startResolutionForResult(android.app.Activity r2, int r3) throws android.content.IntentSender.SendIntentException {
            r1 = this;
            com.huawei.hms.support.api.client.Status r0 = r1.mStatus
            r0.startResolutionForResult(r2, r3)
            return
    }
}
