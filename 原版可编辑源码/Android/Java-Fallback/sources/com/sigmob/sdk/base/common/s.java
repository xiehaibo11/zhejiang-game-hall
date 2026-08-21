package com.sigmob.sdk.base.common;

public class s {
    private s() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.Intent a(android.content.Context r1, java.lang.Class r2, android.os.Bundle r3) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r1, r2)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            if (r3 == 0) goto Lf
            r0.putExtras(r3)
        Lf:
            return r0
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

    private static void a(android.content.Context r1, android.content.Intent r2, java.lang.String r3) throws com.czhj.sdk.common.exceptions.IntentNotResolvableException {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            c(r1, r2)     // Catch: java.lang.Throwable -> La
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

    public static void a(android.content.Context r2, android.net.Uri r3) throws com.czhj.sdk.common.exceptions.IntentNotResolvableException {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.intent.action.VIEW"
            r0.<init>(r1, r3)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r3)
            boolean r1 = a(r2, r0)
            if (r1 == 0) goto L28
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "Unable to open intent: "
            r3.append(r1)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            a(r2, r0, r3)
            return
        L28:
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

    public static void a(android.content.Context r2, android.net.Uri r3, java.lang.String r4) throws com.czhj.sdk.common.exceptions.IntentNotResolvableException {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r3)
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.intent.action.VIEW"
            r0.<init>(r1, r3)
            a(r2, r0, r4)
            return
    }

    public static boolean a(android.content.Context r1, android.content.Intent r2) {
            r0 = 0
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.NullPointerException -> L10
            java.util.List r1 = r1.queryIntentActivities(r2, r0)     // Catch: java.lang.NullPointerException -> L10
            boolean r1 = r1.isEmpty()     // Catch: java.lang.NullPointerException -> L10
            r1 = r1 ^ 1
            return r1
        L10:
            return r0
    }

    public static boolean a(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r0 = r1.getPackageManager()     // Catch: java.lang.Throwable -> Lf
            android.content.Intent r2 = r0.getLaunchIntentForPackage(r2)     // Catch: java.lang.Throwable -> Lf
            if (r2 == 0) goto L17
            c(r1, r2)     // Catch: java.lang.Throwable -> Lf
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

    public static void b(android.content.Context r2, android.content.Intent r3) throws com.czhj.sdk.common.exceptions.IntentNotResolvableException {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r3)
            boolean r0 = a(r2, r3)
            if (r0 == 0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unable to open intent: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            a(r2, r3, r0)
            return
        L21:
            com.czhj.sdk.common.exceptions.IntentNotResolvableException r2 = new com.czhj.sdk.common.exceptions.IntentNotResolvableException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Could not handle application specific action: "
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = "\n\tYou may be running in the emulator or another device which does not have the required application."
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            throw r2
    }

    private static void c(android.content.Context r1, android.content.Intent r2) throws com.czhj.sdk.common.exceptions.IntentNotResolvableException {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r2.addFlags(r0)     // Catch: java.lang.Throwable -> Lf
            r1.startActivity(r2)     // Catch: java.lang.Throwable -> Lf
            return
        Lf:
            r1 = move-exception
            com.czhj.sdk.common.exceptions.IntentNotResolvableException r2 = new com.czhj.sdk.common.exceptions.IntentNotResolvableException
            r2.<init>(r1)
            throw r2
    }
}
