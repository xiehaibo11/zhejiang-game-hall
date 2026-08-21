package com.huawei.hms.support.api.client;

public final class Status extends com.huawei.hms.support.api.client.Result implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.huawei.hms.support.api.client.Status> CREATOR = null;
    public static final com.huawei.hms.support.api.client.Status CoreException = null;
    public static final com.huawei.hms.support.api.client.Status FAILURE = null;
    public static final com.huawei.hms.support.api.client.Status MessageNotFound = null;

    @java.lang.Deprecated
    public static final com.huawei.hms.support.api.client.Status RESULT_CANCELED = null;

    @java.lang.Deprecated
    public static final com.huawei.hms.support.api.client.Status RESULT_DEAD_CLIENT = null;

    @java.lang.Deprecated
    public static final com.huawei.hms.support.api.client.Status RESULT_INTERNAL_ERROR = null;

    @java.lang.Deprecated
    public static final com.huawei.hms.support.api.client.Status RESULT_INTERRUPTED = null;

    @java.lang.Deprecated
    public static final com.huawei.hms.support.api.client.Status RESULT_TIMEOUT = null;
    public static final com.huawei.hms.support.api.client.Status SUCCESS = null;

    @com.huawei.hms.core.aidl.annotation.Packed
    private android.content.Intent intent;

    @com.huawei.hms.core.aidl.annotation.Packed
    private android.app.PendingIntent pendingIntent;

    @com.huawei.hms.core.aidl.annotation.Packed
    private int statusCode;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String statusMessage;

    static class a implements android.os.Parcelable.Creator {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.huawei.hms.support.api.client.Status createFromParcel(android.os.Parcel r4) {
                r3 = this;
                com.huawei.hms.support.api.client.Status r0 = new com.huawei.hms.support.api.client.Status
                int r1 = r4.readInt()
                java.lang.String r2 = r4.readString()
                android.app.PendingIntent r4 = android.app.PendingIntent.readPendingIntentOrNullFromParcel(r4)
                r0.<init>(r1, r2, r4)
                return r0
        }

        @Override
        public java.lang.Object createFromParcel(android.os.Parcel r1) {
                r0 = this;
                com.huawei.hms.support.api.client.Status r1 = r0.createFromParcel(r1)
                return r1
        }

        @Override
        public com.huawei.hms.support.api.client.Status[] newArray(int r1) {
                r0 = this;
                com.huawei.hms.support.api.client.Status[] r1 = new com.huawei.hms.support.api.client.Status[r1]
                return r1
        }

        @Override
        public java.lang.Object[] newArray(int r1) {
                r0 = this;
                com.huawei.hms.support.api.client.Status[] r1 = r0.newArray(r1)
                return r1
        }
    }

    static {
            com.huawei.hms.support.api.client.Status r0 = new com.huawei.hms.support.api.client.Status
            r1 = 0
            r0.<init>(r1)
            com.huawei.hms.support.api.client.Status.SUCCESS = r0
            com.huawei.hms.support.api.client.Status r0 = new com.huawei.hms.support.api.client.Status
            r1 = 1
            r0.<init>(r1)
            com.huawei.hms.support.api.client.Status.FAILURE = r0
            com.huawei.hms.support.api.client.Status r0 = new com.huawei.hms.support.api.client.Status
            r1 = 16
            r0.<init>(r1)
            com.huawei.hms.support.api.client.Status.RESULT_CANCELED = r0
            com.huawei.hms.support.api.client.Status r0 = new com.huawei.hms.support.api.client.Status
            r1 = 18
            r0.<init>(r1)
            com.huawei.hms.support.api.client.Status.RESULT_DEAD_CLIENT = r0
            com.huawei.hms.support.api.client.Status r0 = new com.huawei.hms.support.api.client.Status
            r1 = 8
            r0.<init>(r1)
            com.huawei.hms.support.api.client.Status.RESULT_INTERNAL_ERROR = r0
            com.huawei.hms.support.api.client.Status r0 = new com.huawei.hms.support.api.client.Status
            r1 = 14
            r0.<init>(r1)
            com.huawei.hms.support.api.client.Status.RESULT_INTERRUPTED = r0
            com.huawei.hms.support.api.client.Status r0 = new com.huawei.hms.support.api.client.Status
            r1 = 15
            r0.<init>(r1)
            com.huawei.hms.support.api.client.Status.RESULT_TIMEOUT = r0
            com.huawei.hms.support.api.client.Status r0 = new com.huawei.hms.support.api.client.Status
            r1 = 404(0x194, float:5.66E-43)
            r0.<init>(r1)
            com.huawei.hms.support.api.client.Status.MessageNotFound = r0
            com.huawei.hms.support.api.client.Status r0 = new com.huawei.hms.support.api.client.Status
            r1 = 500(0x1f4, float:7.0E-43)
            r0.<init>(r1)
            com.huawei.hms.support.api.client.Status.CoreException = r0
            com.huawei.hms.support.api.client.Status$a r0 = new com.huawei.hms.support.api.client.Status$a
            r0.<init>()
            com.huawei.hms.support.api.client.Status.CREATOR = r0
            return
    }

    public Status(int r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public Status(int r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.statusCode = r1
            r0.statusMessage = r2
            return
    }

    public Status(int r1, java.lang.String r2, android.app.PendingIntent r3) {
            r0 = this;
            r0.<init>()
            r0.statusCode = r1
            r0.statusMessage = r2
            r0.pendingIntent = r3
            return
    }

    public Status(int r1, java.lang.String r2, android.content.Intent r3) {
            r0 = this;
            r0.<init>()
            r0.statusCode = r1
            r0.statusMessage = r2
            r0.intent = r3
            return
    }

    private static boolean equal(java.lang.Object r0, java.lang.Object r1) {
            if (r0 == r1) goto Ld
            if (r0 == 0) goto Lb
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.huawei.hms.support.api.client.Status
            r2 = 0
            if (r1 == 0) goto L32
            com.huawei.hms.support.api.client.Status r5 = (com.huawei.hms.support.api.client.Status) r5
            int r1 = r4.statusCode
            int r3 = r5.statusCode
            if (r1 != r3) goto L30
            java.lang.String r1 = r4.statusMessage
            java.lang.String r3 = r5.statusMessage
            boolean r1 = equal(r1, r3)
            if (r1 == 0) goto L30
            android.app.PendingIntent r1 = r4.pendingIntent
            android.app.PendingIntent r3 = r5.pendingIntent
            boolean r1 = equal(r1, r3)
            if (r1 == 0) goto L30
            android.content.Intent r1 = r4.intent
            android.content.Intent r5 = r5.intent
            boolean r5 = equal(r1, r5)
            if (r5 == 0) goto L30
            goto L31
        L30:
            r0 = r2
        L31:
            return r0
        L32:
            return r2
    }

    public java.lang.String getErrorString() {
            r1 = this;
            java.lang.String r0 = r1.getStatusMessage()
            return r0
    }

    public android.app.PendingIntent getResolution() {
            r1 = this;
            android.app.PendingIntent r0 = r1.pendingIntent
            return r0
    }

    public android.content.Intent getResolutionIntent() {
            r1 = this;
            android.content.Intent r0 = r1.intent
            return r0
    }

    @Override
    public com.huawei.hms.support.api.client.Status getStatus() {
            r0 = this;
            return r0
    }

    public int getStatusCode() {
            r1 = this;
            int r0 = r1.statusCode
            return r0
    }

    public java.lang.String getStatusMessage() {
            r1 = this;
            java.lang.String r0 = r1.statusMessage
            return r0
    }

    public boolean hasResolution() {
            r1 = this;
            android.app.PendingIntent r0 = r1.pendingIntent
            if (r0 != 0) goto Lb
            android.content.Intent r0 = r1.intent
            if (r0 == 0) goto L9
            goto Lb
        L9:
            r0 = 0
            goto Lc
        Lb:
            r0 = 1
        Lc:
            return r0
    }

    public int hashCode() {
            r3 = this;
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            int r1 = r3.statusCode
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = r3.statusMessage
            r2 = 1
            r0[r2] = r1
            android.app.PendingIntent r1 = r3.pendingIntent
            r2 = 2
            r0[r2] = r1
            android.content.Intent r1 = r3.intent
            r2 = 3
            r0[r2] = r1
            int r0 = java.util.Arrays.hashCode(r0)
            return r0
    }

    public boolean isCanceled() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean isInterrupted() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean isSuccess() {
            r1 = this;
            int r0 = r1.statusCode
            if (r0 > 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public void setIntent(android.content.Intent r1) {
            r0 = this;
            r0.intent = r1
            return
    }

    public void setPendingIntent(android.app.PendingIntent r1) {
            r0 = this;
            r0.pendingIntent = r1
            return
    }

    public void startResolutionForResult(android.app.Activity r9, int r10) throws android.content.IntentSender.SendIntentException {
            r8 = this;
            boolean r0 = r8.hasResolution()
            if (r0 == 0) goto L1d
            android.app.PendingIntent r0 = r8.pendingIntent
            if (r0 == 0) goto L18
            android.content.IntentSender r2 = r0.getIntentSender()
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r1 = r9
            r3 = r10
            r1.startIntentSenderForResult(r2, r3, r4, r5, r6, r7)
            goto L1d
        L18:
            android.content.Intent r0 = r8.intent
            r9.startActivityForResult(r0, r10)
        L1d:
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "{statusCode: "
            r0.append(r1)
            int r1 = r2.statusCode
            r0.append(r1)
            java.lang.String r1 = ", statusMessage: "
            r0.append(r1)
            java.lang.String r1 = r2.statusMessage
            r0.append(r1)
            java.lang.String r1 = ", pendingIntent: "
            r0.append(r1)
            android.app.PendingIntent r1 = r2.pendingIntent
            r0.append(r1)
            java.lang.String r1 = ", intent: "
            r0.append(r1)
            android.content.Intent r1 = r2.intent
            r0.append(r1)
            java.lang.String r1 = ",}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r2, int r3) {
            r1 = this;
            int r0 = r1.statusCode
            r2.writeInt(r0)
            java.lang.String r0 = r1.statusMessage
            r2.writeString(r0)
            android.app.PendingIntent r0 = r1.pendingIntent
            if (r0 == 0) goto L11
            r0.writeToParcel(r2, r3)
        L11:
            android.app.PendingIntent r0 = r1.pendingIntent
            android.app.PendingIntent.writePendingIntentOrNullToParcel(r0, r2)
            android.content.Intent r0 = r1.intent
            if (r0 == 0) goto L1d
            r0.writeToParcel(r2, r3)
        L1d:
            return
    }
}
