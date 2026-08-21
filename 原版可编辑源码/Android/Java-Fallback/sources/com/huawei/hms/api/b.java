package com.huawei.hms.api;

final class b extends com.huawei.hms.api.HuaweiApiAvailability {
    private static final com.huawei.hms.api.b b = null;

    class a implements com.huawei.hms.activity.internal.BusResponseCallback {
        final com.huawei.hmf.tasks.TaskCompletionSource[] a;

        a(com.huawei.hms.api.b r1, com.huawei.hmf.tasks.TaskCompletionSource[] r2) {
                r0 = this;
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public com.huawei.hms.activity.internal.BusResponseResult innerError(android.app.Activity r2, int r3, java.lang.String r4) {
                r1 = this;
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r0 = "Test foreground bus error: resultCode "
                r2.append(r0)
                r2.append(r3)
                java.lang.String r3 = ", errMessage"
                r2.append(r3)
                r2.append(r4)
                java.lang.String r2 = r2.toString()
                java.lang.String r3 = "HuaweiApiAvailabilityImpl"
                com.huawei.hms.support.log.HMSLog.e(r3, r2)
                com.huawei.hmf.tasks.TaskCompletionSource[] r2 = r1.a
                r3 = 0
                r2 = r2[r3]
                com.huawei.hms.common.api.AvailabilityException r3 = new com.huawei.hms.common.api.AvailabilityException
                r3.<init>()
                r2.setException(r3)
                r2 = 0
                return r2
        }

        @Override
        public com.huawei.hms.activity.internal.BusResponseResult succeedReturn(android.app.Activity r2, int r3, android.content.Intent r4) {
                r1 = this;
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r0 = "Test foreground bus success: resultCode "
                r2.append(r0)
                r2.append(r3)
                java.lang.String r3 = ", data"
                r2.append(r3)
                r2.append(r4)
                java.lang.String r2 = r2.toString()
                java.lang.String r3 = "HuaweiApiAvailabilityImpl"
                com.huawei.hms.support.log.HMSLog.i(r3, r2)
                r2 = 0
                return r2
        }
    }

    static {
            com.huawei.hms.api.b r0 = new com.huawei.hms.api.b
            r0.<init>()
            com.huawei.hms.api.b.b = r0
            return
    }

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static int a(android.app.Activity r1) {
            int r1 = a(r1)
            if (r1 == 0) goto Le
            int r1 = android.os.Build.VERSION.SDK_INT
            r0 = 16
            if (r1 < r0) goto Le
            r1 = 0
            return r1
        Le:
            r1 = 3
            return r1
    }

    private static int a(android.content.Context r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            android.content.res.Resources r2 = r2.getResources()
            r0 = 0
            java.lang.String r1 = "androidhwext:style/Theme.Emui"
            int r2 = r2.getIdentifier(r1, r0, r0)
            return r2
    }

    private static android.app.Dialog a(android.app.Activity r2, int r3, com.huawei.hms.common.internal.DialogRedirect r4, android.content.DialogInterface.OnCancelListener r5) {
            if (r3 != 0) goto L4
            r2 = 0
            return r2
        L4:
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder
            int r1 = a(r2)
            r0.<init>(r2, r1)
            java.lang.String r1 = com.huawei.hms.common.internal.ConnectionErrorMessages.getErrorMessage(r2, r3)
            r0.setMessage(r1)
            if (r5 == 0) goto L19
            r0.setOnCancelListener(r5)
        L19:
            java.lang.String r5 = com.huawei.hms.common.internal.ConnectionErrorMessages.getErrorDialogButtonMessage(r2, r3)
            r0.setPositiveButton(r5, r4)
            java.lang.String r2 = com.huawei.hms.common.internal.ConnectionErrorMessages.getErrorTitle(r2, r3)
            if (r2 == 0) goto L29
            r0.setTitle(r2)
        L29:
            android.app.AlertDialog r2 = r0.create()
            return r2
    }

    private android.content.Intent a(android.app.Activity r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getErrorResolutionIntent, errorCode: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HuaweiApiAvailabilityImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r0 = 1
            if (r4 == r0) goto L40
            r0 = 2
            if (r4 == r0) goto L40
            r0 = 6
            if (r4 == r0) goto L35
            r0 = 9
            if (r4 == r0) goto L24
            goto L4b
        L24:
            boolean r4 = com.huawei.hms.utils.Util.isAvailableLibExist(r3)
            if (r4 == 0) goto L4b
            java.lang.Class<com.huawei.hms.update.note.AppSpoofResolution> r4 = com.huawei.hms.update.note.AppSpoofResolution.class
            java.lang.String r4 = r4.getName()
            android.content.Intent r3 = com.huawei.hms.activity.BridgeActivity.getIntentStartBridgeActivity(r3, r4)
            goto L4c
        L35:
            java.lang.Class<com.huawei.hms.api.BindingFailedResolution> r4 = com.huawei.hms.api.BindingFailedResolution.class
            java.lang.String r4 = r4.getName()
            android.content.Intent r3 = com.huawei.hms.activity.BridgeActivity.getIntentStartBridgeActivity(r3, r4)
            goto L4c
        L40:
            boolean r4 = com.huawei.hms.utils.Util.isAvailableLibExist(r3)
            if (r4 == 0) goto L4b
            android.content.Intent r3 = com.huawei.hms.update.manager.UpdateManager.startUpdateIntent(r3)
            goto L4c
        L4b:
            r3 = 0
        L4c:
            return r3
    }

    private static android.content.Intent a(android.app.Activity r0, java.lang.String r1) {
            android.content.Intent r0 = com.huawei.hms.activity.BridgeActivity.getIntentStartBridgeActivity(r0, r1)
            return r0
    }

    private static android.content.Intent a(android.content.Context r0, java.lang.String r1) {
            android.content.Intent r0 = com.huawei.hms.activity.BridgeActivity.getIntentStartBridgeActivity(r0, r1)
            return r0
    }

    private static void a(android.app.Activity r1, android.app.Dialog r2, java.lang.String r3, android.content.DialogInterface.OnCancelListener r4) {
            java.lang.String r0 = "activity must not be null."
            com.huawei.hms.utils.Checker.checkNonNull(r1, r0)
            com.huawei.hms.common.ErrorDialogFragment r2 = com.huawei.hms.common.ErrorDialogFragment.newInstance(r2, r4)
            android.app.FragmentManager r1 = r1.getFragmentManager()
            r2.show(r1, r3)
            return
    }

    private void a(java.lang.Object r3) throws com.huawei.hms.common.api.AvailabilityException {
            r2 = this;
            com.huawei.hms.common.api.AvailabilityException r0 = new com.huawei.hms.common.api.AvailabilityException
            r0.<init>()
            boolean r1 = r3 instanceof com.huawei.hms.common.HuaweiApi
            if (r1 == 0) goto L10
            com.huawei.hms.common.HuaweiApi r3 = (com.huawei.hms.common.HuaweiApi) r3
            com.huawei.hms.api.ConnectionResult r3 = r0.getConnectionResult(r3)
            goto L16
        L10:
            com.huawei.hms.common.api.HuaweiApiCallable r3 = (com.huawei.hms.common.api.HuaweiApiCallable) r3
            com.huawei.hms.api.ConnectionResult r3 = r0.getConnectionResult(r3)
        L16:
            int r3 = r3.getErrorCode()
            if (r3 != 0) goto L1d
            return
        L1d:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "The service is unavailable: "
            r3.append(r1)
            java.lang.String r1 = r0.getMessage()
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            java.lang.String r1 = "HuaweiApiAvailabilityImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r3)
            throw r0
    }

    public static com.huawei.hms.api.b getInstance() {
            com.huawei.hms.api.b r0 = com.huawei.hms.api.b.b
            return r0
    }

    public android.content.Intent a(android.content.Context r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Enter getResolveErrorIntent, errorCode: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HuaweiApiAvailabilityImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r0 = 1
            if (r4 == r0) goto L40
            r1 = 2
            if (r4 == r1) goto L40
            r0 = 6
            if (r4 == r0) goto L35
            r0 = 9
            if (r4 == r0) goto L24
            goto L84
        L24:
            boolean r4 = com.huawei.hms.utils.Util.isAvailableLibExist(r3)
            if (r4 == 0) goto L84
            java.lang.Class<com.huawei.hms.update.note.AppSpoofResolution> r4 = com.huawei.hms.update.note.AppSpoofResolution.class
            java.lang.String r4 = r4.getName()
            android.content.Intent r3 = a(r3, r4)
            goto L85
        L35:
            java.lang.Class<com.huawei.hms.api.BindingFailedResolution> r4 = com.huawei.hms.api.BindingFailedResolution.class
            java.lang.String r4 = r4.getName()
            android.content.Intent r3 = a(r3, r4)
            goto L85
        L40:
            boolean r4 = com.huawei.hms.utils.Util.isAvailableLibExist(r3)
            if (r4 == 0) goto L84
            com.huawei.hms.update.ui.UpdateBean r4 = new com.huawei.hms.update.ui.UpdateBean
            r4.<init>()
            r4.setHmsOrApkUpgrade(r0)
            android.content.Context r0 = r3.getApplicationContext()
            com.huawei.hms.utils.HMSPackageManager r0 = com.huawei.hms.utils.HMSPackageManager.getInstance(r0)
            java.lang.String r0 = r0.getHMSPackageName()
            r4.setClientPackageName(r0)
            int r0 = com.huawei.hms.api.HuaweiApiAvailability.getServicesVersionCode()
            r4.setClientVersionCode(r0)
            java.lang.String r0 = "C10132067"
            r4.setClientAppId(r0)
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
            if (r0 != 0) goto L76
            android.content.Context r0 = r3.getApplicationContext()
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r0)
        L76:
            java.lang.String r0 = "hms_update_title"
            java.lang.String r0 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r0)
            r4.setClientAppName(r0)
            android.content.Intent r3 = com.huawei.hms.update.manager.UpdateManager.getStartUpdateIntent(r3, r4)
            goto L85
        L84:
            r3 = 0
        L85:
            return r3
    }

    public android.app.PendingIntent b(android.content.Context r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Enter getResolveErrorPendingIntent, errorCode: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HuaweiApiAvailabilityImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            android.content.Intent r4 = r2.a(r3, r4)
            if (r4 == 0) goto L24
            r0 = 0
            r1 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r3 = android.app.PendingIntent.getActivity(r3, r0, r4, r1)
            goto L25
        L24:
            r3 = 0
        L25:
            return r3
    }

    @Override
    public com.huawei.hmf.tasks.Task<java.lang.Void> checkApiAccessible(com.huawei.hms.common.HuaweiApi<?> r4, com.huawei.hms.common.HuaweiApi<?>... r5) {
            r3 = this;
            com.huawei.hmf.tasks.TaskCompletionSource r0 = new com.huawei.hmf.tasks.TaskCompletionSource
            r0.<init>()
            com.huawei.hmf.tasks.Task r0 = r0.getTask()
            if (r4 == 0) goto L11
            r3.a(r4)     // Catch: com.huawei.hms.common.api.AvailabilityException -> Lf
            goto L11
        Lf:
            r4 = move-exception
            goto L1f
        L11:
            if (r5 == 0) goto L39
            int r4 = r5.length     // Catch: com.huawei.hms.common.api.AvailabilityException -> Lf
            r1 = 0
        L15:
            if (r1 >= r4) goto L39
            r2 = r5[r1]     // Catch: com.huawei.hms.common.api.AvailabilityException -> Lf
            r3.a(r2)     // Catch: com.huawei.hms.common.api.AvailabilityException -> Lf
            int r1 = r1 + 1
            goto L15
        L1f:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "checkApi has AvailabilityException "
            r5.append(r1)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.String r5 = "HuaweiApiAvailabilityImpl"
            com.huawei.hms.support.log.HMSLog.i(r5, r4)
        L39:
            return r0
    }

    @Override
    public com.huawei.hmf.tasks.Task<java.lang.Void> checkApiAccessible(com.huawei.hms.common.api.HuaweiApiCallable r4, com.huawei.hms.common.api.HuaweiApiCallable... r5) {
            r3 = this;
            com.huawei.hmf.tasks.TaskCompletionSource r0 = new com.huawei.hmf.tasks.TaskCompletionSource
            r0.<init>()
            com.huawei.hmf.tasks.Task r0 = r0.getTask()
            if (r4 == 0) goto L11
            r3.a(r4)     // Catch: com.huawei.hms.common.api.AvailabilityException -> Lf
            goto L11
        Lf:
            r4 = move-exception
            goto L1f
        L11:
            if (r5 == 0) goto L39
            int r4 = r5.length     // Catch: com.huawei.hms.common.api.AvailabilityException -> Lf
            r1 = 0
        L15:
            if (r1 >= r4) goto L39
            r2 = r5[r1]     // Catch: com.huawei.hms.common.api.AvailabilityException -> Lf
            r3.a(r2)     // Catch: com.huawei.hms.common.api.AvailabilityException -> Lf
            int r1 = r1 + 1
            goto L15
        L1f:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "HuaweiApiCallable checkApi has AvailabilityException "
            r5.append(r1)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.String r5 = "HuaweiApiAvailabilityImpl"
            com.huawei.hms.support.log.HMSLog.i(r5, r4)
        L39:
            return r0
    }

    @Override
    public android.app.PendingIntent getErrPendingIntent(android.content.Context r3, int r4, int r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Enter getResolveErrorPendingIntent, errorCode: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = " requestCode: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HuaweiApiAvailabilityImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            android.content.Intent r4 = r2.a(r3, r4)
            if (r4 == 0) goto L2b
            r0 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r3 = android.app.PendingIntent.getActivity(r3, r5, r4, r0)
            goto L2c
        L2b:
            r3 = 0
        L2c:
            return r3
    }

    @Override
    public android.app.PendingIntent getErrPendingIntent(android.content.Context r1, com.huawei.hms.api.ConnectionResult r2) {
            r0 = this;
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r1)
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r2)
            int r2 = r2.getErrorCode()
            android.app.PendingIntent r1 = r0.b(r1, r2)
            return r1
    }

    @Override
    public android.app.Dialog getErrorDialog(android.app.Activity r3, int r4, int r5) {
            r2 = this;
            java.lang.String r0 = "activity must not be null."
            com.huawei.hms.utils.Checker.checkNonNull(r3, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Enter getErrorDialog, errorCode: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HuaweiApiAvailabilityImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r0 = 0
            android.app.Dialog r3 = r2.getErrorDialog(r3, r4, r5, r0)
            return r3
    }

    @Override
    public android.app.Dialog getErrorDialog(android.app.Activity r3, int r4, int r5, android.content.DialogInterface.OnCancelListener r6) {
            r2 = this;
            java.lang.String r0 = "activity must not be null."
            com.huawei.hms.utils.Checker.checkNonNull(r3, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Enter getErrorDialog, errorCode: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HuaweiApiAvailabilityImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            android.content.Intent r0 = r2.a(r3, r4)
            com.huawei.hms.common.internal.DialogRedirect r5 = com.huawei.hms.common.internal.DialogRedirect.getInstance(r3, r0, r5)
            android.app.Dialog r3 = a(r3, r4, r5, r6)
            return r3
    }

    @Override
    public java.lang.String getErrorString(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Enter getErrorString, errorCode: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HuaweiApiAvailabilityImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            java.lang.String r3 = com.huawei.hms.api.ConnectionResult.a(r3)
            return r3
    }

    @Override
    public com.huawei.hmf.tasks.Task<java.lang.Void> getHuaweiServicesReady(android.app.Activity r7) {
            r6 = this;
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r7)
            r0 = 1
            com.huawei.hmf.tasks.TaskCompletionSource[] r0 = new com.huawei.hmf.tasks.TaskCompletionSource[r0]
            com.huawei.hmf.tasks.TaskCompletionSource r1 = new com.huawei.hmf.tasks.TaskCompletionSource
            r1.<init>()
            r2 = 0
            r0[r2] = r1
            r1 = r0[r2]
            com.huawei.hmf.tasks.Task r1 = r1.getTask()
            android.content.Context r3 = r7.getApplicationContext()
            r4 = 30000000(0x1c9c380, float:7.411627E-38)
            int r3 = r6.isHuaweiMobileServicesAvailable(r3, r4)
            android.content.Intent r4 = r6.getResolveErrorIntent(r7, r3)
            java.lang.Class<com.huawei.hms.api.ResolutionDelegate> r5 = com.huawei.hms.api.ResolutionDelegate.class
            java.lang.String r5 = r5.getName()
            android.content.Intent r5 = com.huawei.hms.activity.BridgeActivity.getIntentStartBridgeActivity(r7, r5)
            if (r4 == 0) goto L4a
            com.huawei.hms.api.b$a r2 = new com.huawei.hms.api.b$a
            r2.<init>(r6, r0)
            java.lang.String r0 = "CALLBACK_METHOD"
            com.huawei.hms.activity.ForegroundIntentBuilder.registerResponseCallback(r0, r2)
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r2 = "resolution"
            r0.putParcelable(r2, r4)
            r5.putExtras(r0)
            r7.startActivity(r5)
            goto L74
        L4a:
            r4 = 3
            if (r3 != r4) goto L5b
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.Class<com.huawei.hms.activity.EnableServiceActivity> r2 = com.huawei.hms.activity.EnableServiceActivity.class
            r0.setClass(r7, r2)
            r7.startActivity(r0)
            goto L74
        L5b:
            java.lang.String r7 = "HuaweiApiAvailabilityImpl"
            if (r3 != 0) goto L65
            java.lang.String r0 = "The HMS service is available."
            com.huawei.hms.support.log.HMSLog.i(r7, r0)
            goto L74
        L65:
            java.lang.String r3 = "Framework can not solve the availability problem."
            com.huawei.hms.support.log.HMSLog.e(r7, r3)
            r7 = r0[r2]
            com.huawei.hms.common.api.AvailabilityException r0 = new com.huawei.hms.common.api.AvailabilityException
            r0.<init>()
            r7.setException(r0)
        L74:
            return r1
    }

    @Override
    public android.content.Intent getResolveErrorIntent(android.app.Activity r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Enter getResolveErrorIntent, errorCode: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HuaweiApiAvailabilityImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r0 = 1
            if (r4 == r0) goto L40
            r1 = 2
            if (r4 == r1) goto L40
            r0 = 6
            if (r4 == r0) goto L35
            r0 = 9
            if (r4 == r0) goto L24
            goto L84
        L24:
            boolean r4 = com.huawei.hms.utils.Util.isAvailableLibExist(r3)
            if (r4 == 0) goto L84
            java.lang.Class<com.huawei.hms.update.note.AppSpoofResolution> r4 = com.huawei.hms.update.note.AppSpoofResolution.class
            java.lang.String r4 = r4.getName()
            android.content.Intent r3 = a(r3, r4)
            goto L85
        L35:
            java.lang.Class<com.huawei.hms.api.BindingFailedResolution> r4 = com.huawei.hms.api.BindingFailedResolution.class
            java.lang.String r4 = r4.getName()
            android.content.Intent r3 = a(r3, r4)
            goto L85
        L40:
            boolean r4 = com.huawei.hms.utils.Util.isAvailableLibExist(r3)
            if (r4 == 0) goto L84
            com.huawei.hms.update.ui.UpdateBean r4 = new com.huawei.hms.update.ui.UpdateBean
            r4.<init>()
            r4.setHmsOrApkUpgrade(r0)
            android.content.Context r0 = r3.getApplicationContext()
            com.huawei.hms.utils.HMSPackageManager r0 = com.huawei.hms.utils.HMSPackageManager.getInstance(r0)
            java.lang.String r0 = r0.getHMSPackageName()
            r4.setClientPackageName(r0)
            int r0 = com.huawei.hms.api.HuaweiApiAvailability.getServicesVersionCode()
            r4.setClientVersionCode(r0)
            java.lang.String r0 = "C10132067"
            r4.setClientAppId(r0)
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
            if (r0 != 0) goto L76
            android.content.Context r0 = r3.getApplicationContext()
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r0)
        L76:
            java.lang.String r0 = "hms_update_title"
            java.lang.String r0 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r0)
            r4.setClientAppName(r0)
            android.content.Intent r3 = com.huawei.hms.update.manager.UpdateManager.getStartUpdateIntent(r3, r4)
            goto L85
        L84:
            r3 = 0
        L85:
            return r3
    }

    @Override
    public android.app.PendingIntent getResolveErrorPendingIntent(android.app.Activity r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Enter getResolveErrorPendingIntent, errorCode: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HuaweiApiAvailabilityImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            android.content.Intent r4 = r2.getResolveErrorIntent(r3, r4)
            if (r4 == 0) goto L24
            r0 = 0
            r1 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r3 = android.app.PendingIntent.getActivity(r3, r0, r4, r1)
            goto L25
        L24:
            r3 = 0
        L25:
            return r3
    }

    @Override
    public int isHuaweiMobileNoticeAvailable(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = "context must not be null."
            com.huawei.hms.utils.Checker.checkNonNull(r3, r0)
            com.huawei.hms.utils.PackageManagerHelper r0 = new com.huawei.hms.utils.PackageManagerHelper
            r0.<init>(r3)
            com.huawei.hms.utils.HMSPackageManager r1 = com.huawei.hms.utils.HMSPackageManager.getInstance(r3)
            java.lang.String r1 = r1.getHMSPackageName()
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r0 = r0.getPackageStates(r1)
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r1 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.NOT_INSTALLED
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L20
            r3 = 1
            return r3
        L20:
            com.huawei.hms.utils.HMSPackageManager r3 = com.huawei.hms.utils.HMSPackageManager.getInstance(r3)
            r0 = 20600000(0x13a54c0, float:3.422361E-38)
            boolean r3 = r3.isApkUpdateNecessary(r0)
            if (r3 == 0) goto L2f
            r3 = 2
            return r3
        L2f:
            r3 = 0
            return r3
    }

    @Override
    public int isHuaweiMobileServicesAvailable(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "context must not be null."
            com.huawei.hms.utils.Checker.checkNonNull(r2, r0)
            int r0 = com.huawei.hms.api.HuaweiApiAvailability.getServicesVersionCode()
            int r2 = com.huawei.hms.api.HuaweiMobileServicesUtil.isHuaweiMobileServicesAvailable(r2, r0)
            return r2
    }

    @Override
    public int isHuaweiMobileServicesAvailable(android.content.Context r2, int r3) {
            r1 = this;
            java.lang.String r0 = "context must not be null."
            com.huawei.hms.utils.Checker.checkNonNull(r2, r0)
            int r2 = com.huawei.hms.api.HuaweiMobileServicesUtil.isHuaweiMobileServicesAvailable(r2, r3)
            return r2
    }

    @Override
    public boolean isUserResolvableError(int r2) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.isUserResolvableError(r2, r0)
            return r2
    }

    @Override
    public boolean isUserResolvableError(int r3, android.app.PendingIntent r4) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            r1 = 1
            if (r4 == 0) goto L8
            return r1
        L8:
            if (r3 == r1) goto L15
            r4 = 2
            if (r3 == r4) goto L15
            r4 = 6
            if (r3 == r4) goto L15
            r4 = 9
            if (r3 == r4) goto L15
            return r0
        L15:
            return r1
    }

    @Override
    public void popupErrNotification(android.content.Context r1, com.huawei.hms.api.ConnectionResult r2) {
            r0 = this;
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r1)
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r2)
            int r2 = r2.getErrorCode()
            r0.showErrorNotification(r1, r2)
            return
    }

    @Override
    public void resolveError(android.app.Activity r2, int r3, int r4) {
            r1 = this;
            r0 = 0
            r1.resolveError(r2, r3, r4, r0)
            return
    }

    @Override
    public void resolveError(android.app.Activity r10, int r11, int r12, android.app.PendingIntent r13) {
            r9 = this;
            java.lang.String r0 = "activity must not be null."
            com.huawei.hms.utils.Checker.checkNonNull(r10, r0)
            java.lang.String r0 = "HuaweiApiAvailabilityImpl"
            if (r13 == 0) goto L1e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Enter resolveError, param pendingIntent is not null. and.errorCode: "
            r1.append(r2)
            r1.append(r11)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            goto L36
        L1e:
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r1 = "Enter resolveError, param pendingIntent is  null. get pendingIntent from error code.and.errorCode: "
            r13.append(r1)
            r13.append(r11)
            java.lang.String r13 = r13.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r13)
            android.app.PendingIntent r13 = r9.getResolveErrorPendingIntent(r10, r11)
        L36:
            if (r13 == 0) goto L6e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "In resolveError, start pendingIntent.errorCode: "
            r1.append(r2)
            r1.append(r11)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            android.content.IntentSender r3 = r13.getIntentSender()     // Catch: android.content.IntentSender.SendIntentException -> L5a
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r2 = r10
            r4 = r12
            r2.startIntentSenderForResult(r3, r4, r5, r6, r7, r8)     // Catch: android.content.IntentSender.SendIntentException -> L5a
            goto L6e
        L5a:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r12 = "Enter resolveError, start pendingIntent failed.errorCode: "
            r10.append(r12)
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r10)
        L6e:
            return
    }

    @Override
    public boolean showErrorDialogFragment(android.app.Activity r2, int r3, int r4) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.showErrorDialogFragment(r2, r3, r4, r0)
            return r2
    }

    @Override
    public boolean showErrorDialogFragment(android.app.Activity r1, int r2, int r3, android.content.DialogInterface.OnCancelListener r4) {
            r0 = this;
            android.app.Dialog r2 = r0.getErrorDialog(r1, r2, r3, r4)
            if (r2 != 0) goto L8
            r1 = 0
            return r1
        L8:
            java.lang.String r3 = "HuaweiMobileServicesErrorDialog"
            a(r1, r2, r3, r4)
            r1 = 1
            return r1
    }

    @Override
    public boolean showErrorDialogFragment(android.app.Activity r1, int r2, android.app.Fragment r3, int r4, android.content.DialogInterface.OnCancelListener r5) {
            r0 = this;
            boolean r1 = r0.showErrorDialogFragment(r1, r2, r4, r5)
            return r1
    }

    @Override
    public void showErrorNotification(android.content.Context r3, int r4) {
            r2 = this;
            java.lang.String r0 = "context must not be null."
            com.huawei.hms.utils.Checker.checkNonNull(r3, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Enter showErrorNotification, errorCode: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HuaweiApiAvailabilityImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            android.app.Activity r3 = (android.app.Activity) r3
            r0 = 0
            android.app.Dialog r3 = r2.getErrorDialog(r3, r4, r0)
            if (r3 != 0) goto L2a
            java.lang.String r3 = "showErrorNotification errorDialog can not be null"
            com.huawei.hms.support.log.HMSLog.i(r1, r3)
            return
        L2a:
            r3.show()
            return
    }
}
