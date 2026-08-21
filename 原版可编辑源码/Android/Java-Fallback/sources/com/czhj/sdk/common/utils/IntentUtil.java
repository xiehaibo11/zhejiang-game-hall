package com.czhj.sdk.common.utils;

public class IntentUtil {
    private IntentUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.net.Uri a(android.content.Intent r2) {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "market://details?id="
            r0.append(r1)
            java.lang.String r2 = r2.getPackage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            android.net.Uri r2 = android.net.Uri.parse(r2)
            return r2
    }

    private static void a(android.content.Context r1, android.content.Intent r2) throws com.czhj.sdk.common.exceptions.IntentNotResolvableException {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            boolean r0 = r1 instanceof android.app.Activity
            if (r0 != 0) goto Lf
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r2.addFlags(r0)
        Lf:
            r1.startActivity(r2)     // Catch: java.lang.Throwable -> L13
            return
        L13:
            r1 = move-exception
            com.czhj.sdk.common.exceptions.IntentNotResolvableException r2 = new com.czhj.sdk.common.exceptions.IntentNotResolvableException
            r2.<init>(r1)
            throw r2
    }

    private static void a(android.content.Context r1, android.content.Intent r2, java.lang.String r3) throws com.czhj.sdk.common.exceptions.IntentNotResolvableException {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            a(r1, r2)     // Catch: java.lang.Throwable -> La
            return
        La:
            r1 = move-exception
            com.czhj.sdk.common.exceptions.IntentNotResolvableException r2 = new com.czhj.sdk.common.exceptions.IntentNotResolvableException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "\n"
            r0.append(r3)
            java.lang.String r1 = r1.getMessage()
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            r2.<init>(r1)
            throw r2
    }

    public static boolean deviceCanHandleIntent(android.content.Context r1, android.content.Intent r2) {
            r0 = 0
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.NullPointerException -> L10
            java.util.List r1 = r1.queryIntentActivities(r2, r0)     // Catch: java.lang.NullPointerException -> L10
            boolean r1 = r1.isEmpty()     // Catch: java.lang.NullPointerException -> L10
            r1 = r1 ^ 1
            return r1
        L10:
            return r0
    }

    public static android.content.Intent getStartActivityIntent(android.content.Context r1, java.lang.Class r2, android.os.Bundle r3) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r1, r2)
            boolean r1 = r1 instanceof android.app.Activity
            if (r1 != 0) goto Le
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
        Le:
            if (r3 == 0) goto L13
            r0.putExtras(r3)
        L13:
            return r0
    }

    public static void launchActionViewIntent(android.content.Context r2, android.net.Uri r3, java.lang.String r4) throws com.czhj.sdk.common.exceptions.IntentNotResolvableException {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r3)
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.intent.action.VIEW"
            r0.<init>(r1, r3)
            boolean r3 = r2 instanceof android.app.Activity
            if (r3 != 0) goto L16
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r3)
        L16:
            a(r2, r0, r4)
            return
    }

    public static boolean launchApplicationForPackageName(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r0 = r1.getPackageManager()     // Catch: java.lang.Throwable -> Lf
            android.content.Intent r2 = r0.getLaunchIntentForPackage(r2)     // Catch: java.lang.Throwable -> Lf
            if (r2 == 0) goto L17
            a(r1, r2)     // Catch: java.lang.Throwable -> Lf
            r1 = 1
            return r1
        Lf:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
        L17:
            r1 = 0
            return r1
    }

    public static void launchApplicationIntent(android.content.Context r2, android.content.Intent r3) throws com.czhj.sdk.common.exceptions.IntentNotResolvableException {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r3)
            boolean r0 = deviceCanHandleIntent(r2, r3)
            if (r0 == 0) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unable to open intent: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r3.addFlags(r1)
            a(r2, r3, r0)
        L25:
            return
    }

    public static void launchApplicationUrl(android.content.Context r2, android.net.Uri r3) throws com.czhj.sdk.common.exceptions.IntentNotResolvableException {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.intent.action.VIEW"
            r0.<init>(r1, r3)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r3)
            boolean r1 = deviceCanHandleIntent(r2, r0)
            if (r1 == 0) goto L17
            launchApplicationIntent(r2, r0)
            return
        L17:
            com.czhj.sdk.common.exceptions.IntentNotResolvableException r2 = new com.czhj.sdk.common.exceptions.IntentNotResolvableException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Could not handle application specific action: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "\n\tYou may be running in the emulator or another device which does not have the required application."
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            throw r2
    }
}
