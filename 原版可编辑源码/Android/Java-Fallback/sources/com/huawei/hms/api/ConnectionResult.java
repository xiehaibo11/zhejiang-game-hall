package com.huawei.hms.api;

public final class ConnectionResult implements android.os.Parcelable {
    public static final int API_UNAVAILABLE = 1000;
    public static final int BINDFAIL_RESOLUTION_BACKGROUND = 7;
    public static final int BINDFAIL_RESOLUTION_REQUIRED = 6;
    public static final int CANCELED = 13;
    public static final android.os.Parcelable.Creator<com.huawei.hms.api.ConnectionResult> CREATOR = null;
    public static final int DEVELOPER_ERROR = 10;
    public static final int DRIVE_EXTERNAL_STORAGE_REQUIRED = 9002;
    public static final int INTERNAL_ERROR = 8;
    public static final int INTERRUPTED = 15;
    public static final int INVALID_ACCOUNT = 5;
    public static final int LICENSE_CHECK_FAILED = 11;
    public static final int NETWORK_ERROR = 9000;
    public static final int RESOLUTION_REQUIRED = 9001;
    public static final int RESTRICTED_PROFILE = 9003;
    public static final int SERVICE_DISABLED = 3;
    public static final int SERVICE_INVALID = 9;
    public static final int SERVICE_MISSING = 1;
    public static final int SERVICE_MISSING_PERMISSION = 19;
    public static final int SERVICE_UNSUPPORTED = 21;
    public static final int SERVICE_UPDATING = 9004;
    public static final int SERVICE_VERSION_UPDATE_REQUIRED = 2;
    public static final int SIGN_IN_FAILED = 9005;
    public static final int SIGN_IN_REQUIRED = 4;
    public static final int SUCCESS = 0;
    public static final int TIMEOUT = 14;
    private int a;
    private android.app.PendingIntent b;
    private java.lang.String c;
    private int d;

    static class a implements android.os.Parcelable.Creator<com.huawei.hms.api.ConnectionResult> {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.huawei.hms.api.ConnectionResult createFromParcel(android.os.Parcel r3) {
                r2 = this;
                com.huawei.hms.api.ConnectionResult r0 = new com.huawei.hms.api.ConnectionResult
                r1 = 0
                r0.<init>(r3, r1)
                return r0
        }

        @Override
        public com.huawei.hms.api.ConnectionResult createFromParcel(android.os.Parcel r1) {
                r0 = this;
                com.huawei.hms.api.ConnectionResult r1 = r0.createFromParcel(r1)
                return r1
        }

        @Override
        public com.huawei.hms.api.ConnectionResult[] newArray(int r1) {
                r0 = this;
                com.huawei.hms.api.ConnectionResult[] r1 = new com.huawei.hms.api.ConnectionResult[r1]
                return r1
        }

        @Override
        public com.huawei.hms.api.ConnectionResult[] newArray(int r1) {
                r0 = this;
                com.huawei.hms.api.ConnectionResult[] r1 = r0.newArray(r1)
                return r1
        }
    }

    static {
            com.huawei.hms.api.ConnectionResult$a r0 = new com.huawei.hms.api.ConnectionResult$a
            r0.<init>()
            com.huawei.hms.api.ConnectionResult.CREATOR = r0
            return
    }

    public ConnectionResult(int r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    ConnectionResult(int r2, int r3, android.app.PendingIntent r4, java.lang.String r5) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.a = r0
            r0 = 0
            r1.b = r0
            r1.c = r0
            r1.a = r2
            r1.d = r3
            r1.b = r4
            r1.c = r5
            return
    }

    public ConnectionResult(int r2, android.app.PendingIntent r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ConnectionResult(int r2, android.app.PendingIntent r3, java.lang.String r4) {
            r1 = this;
            r0 = 1
            r1.<init>(r0, r2, r3, r4)
            return
    }

    private ConnectionResult(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.a = r0
            r0 = 0
            r1.b = r0
            r1.c = r0
            int r0 = r2.readInt()
            r1.a = r0
            int r0 = r2.readInt()
            r1.d = r0
            java.lang.String r0 = r2.readString()
            r1.c = r0
            android.os.Parcelable$Creator r0 = android.app.PendingIntent.CREATOR
            java.lang.Object r2 = r0.createFromParcel(r2)
            android.os.Parcelable r2 = (android.os.Parcelable) r2
            if (r2 == 0) goto L2b
            android.app.PendingIntent r2 = (android.app.PendingIntent) r2
            r1.b = r2
        L2b:
            return
    }

    ConnectionResult(android.os.Parcel r1, com.huawei.hms.api.ConnectionResult.a r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static java.lang.String a(int r2) {
            r0 = -1
            if (r2 == r0) goto L62
            if (r2 == 0) goto L5f
            r0 = 1
            if (r2 == r0) goto L5c
            r0 = 2
            if (r2 == r0) goto L59
            r0 = 3
            if (r2 == r0) goto L56
            r0 = 13
            if (r2 == r0) goto L53
            r0 = 14
            if (r2 == r0) goto L50
            r0 = 19
            if (r2 == r0) goto L4d
            r0 = 21
            if (r2 == r0) goto L4a
            switch(r2) {
                case 6: goto L47;
                case 7: goto L44;
                case 8: goto L41;
                case 9: goto L3e;
                case 10: goto L3b;
                case 11: goto L38;
                default: goto L21;
            }
        L21:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UNKNOWN_ERROR_CODE("
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = ")"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
        L38:
            java.lang.String r2 = "LICENSE_CHECK_FAILED"
            return r2
        L3b:
            java.lang.String r2 = "DEVELOPER_ERROR"
            return r2
        L3e:
            java.lang.String r2 = "SERVICE_INVALID"
            return r2
        L41:
            java.lang.String r2 = "INTERNAL_ERROR"
            return r2
        L44:
            java.lang.String r2 = "NETWORK_ERROR"
            return r2
        L47:
            java.lang.String r2 = "RESOLUTION_REQUIRED"
            return r2
        L4a:
            java.lang.String r2 = "API_VERSION_UPDATE_REQUIRED"
            return r2
        L4d:
            java.lang.String r2 = "SERVICE_MISSING_PERMISSION"
            return r2
        L50:
            java.lang.String r2 = "TIMEOUT"
            return r2
        L53:
            java.lang.String r2 = "CANCELED"
            return r2
        L56:
            java.lang.String r2 = "SERVICE_DISABLED"
            return r2
        L59:
            java.lang.String r2 = "SERVICE_VERSION_UPDATE_REQUIRED"
            return r2
        L5c:
            java.lang.String r2 = "SERVICE_MISSING"
            return r2
        L5f:
            java.lang.String r2 = "SUCCESS"
            return r2
        L62:
            java.lang.String r2 = "UNKNOWN"
            return r2
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
            r1 = 0
            boolean r2 = r5 instanceof com.huawei.hms.api.ConnectionResult     // Catch: java.lang.Exception -> L37
            if (r2 == 0) goto L35
            int r2 = r4.a     // Catch: java.lang.Exception -> L37
            r3 = r5
            com.huawei.hms.api.ConnectionResult r3 = (com.huawei.hms.api.ConnectionResult) r3     // Catch: java.lang.Exception -> L37
            int r3 = r3.a     // Catch: java.lang.Exception -> L37
            if (r2 != r3) goto L35
            int r2 = r4.d     // Catch: java.lang.Exception -> L37
            r3 = r5
            com.huawei.hms.api.ConnectionResult r3 = (com.huawei.hms.api.ConnectionResult) r3     // Catch: java.lang.Exception -> L37
            int r3 = r3.d     // Catch: java.lang.Exception -> L37
            if (r2 != r3) goto L35
            java.lang.String r2 = r4.c     // Catch: java.lang.Exception -> L37
            r3 = r5
            com.huawei.hms.api.ConnectionResult r3 = (com.huawei.hms.api.ConnectionResult) r3     // Catch: java.lang.Exception -> L37
            java.lang.String r3 = r3.c     // Catch: java.lang.Exception -> L37
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Exception -> L37
            if (r2 == 0) goto L35
            android.app.PendingIntent r2 = r4.b     // Catch: java.lang.Exception -> L37
            com.huawei.hms.api.ConnectionResult r5 = (com.huawei.hms.api.ConnectionResult) r5     // Catch: java.lang.Exception -> L37
            android.app.PendingIntent r5 = r5.b     // Catch: java.lang.Exception -> L37
            boolean r5 = r2.equals(r5)     // Catch: java.lang.Exception -> L37
            if (r5 == 0) goto L35
            goto L36
        L35:
            r0 = r1
        L36:
            return r0
        L37:
            return r1
    }

    public int getErrorCode() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public final java.lang.String getErrorMessage() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public final android.app.PendingIntent getResolution() {
            r1 = this;
            android.app.PendingIntent r0 = r1.b
            return r0
    }

    public final boolean hasResolution() {
            r3 = this;
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            int r1 = r3.d
            android.app.PendingIntent r2 = r3.b
            boolean r0 = r0.isUserResolvableError(r1, r2)
            return r0
    }

    public int hashCode() {
            r3 = this;
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            int r1 = r3.a
            long r1 = (long) r1
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            int r1 = r3.getErrorCode()
            long r1 = (long) r1
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = r3.getErrorMessage()
            r2 = 2
            r0[r2] = r1
            android.app.PendingIntent r1 = r3.b
            r2 = 3
            r0[r2] = r1
            int r0 = com.huawei.hms.common.internal.Objects.hashCode(r0)
            return r0
    }

    public final boolean isSuccess() {
            r1 = this;
            int r0 = r1.d
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public final void startResolutionForResult(android.app.Activity r4, int r5) throws android.content.IntentSender.SendIntentException {
            r3 = this;
            boolean r0 = r3.hasResolution()
            if (r0 == 0) goto L11
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            int r1 = r3.d
            android.app.PendingIntent r2 = r3.b
            r0.resolveError(r4, r1, r5, r2)
        L11:
            return
    }

    @Override
    public void writeToParcel(android.os.Parcel r2, int r3) {
            r1 = this;
            int r0 = r1.a
            r2.writeInt(r0)
            int r0 = r1.d
            r2.writeInt(r0)
            java.lang.String r0 = r1.c
            r2.writeString(r0)
            android.app.PendingIntent r0 = r1.b
            r0.writeToParcel(r2, r3)
            return
    }
}
