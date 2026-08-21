package com.kwad.sdk.api.loader;

public class DynamicInstallReceiver extends android.content.BroadcastReceiver {
    private static final java.util.concurrent.atomic.AtomicBoolean HAS_REGISTER = null;
    private static final java.lang.String TAG = "DynamicInstallReceiver";


    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.kwad.sdk.api.loader.DynamicInstallReceiver.HAS_REGISTER = r0
            return
    }

    public DynamicInstallReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void registerToApp(android.content.Context r3) {
            if (r3 == 0) goto L51
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.api.loader.DynamicInstallReceiver.HAS_REGISTER
            boolean r0 = r0.get()
            if (r0 == 0) goto Lb
            goto L51
        Lb:
            android.content.Context r0 = r3.getApplicationContext()
            if (r0 != 0) goto L12
            return
        L12:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.getPackageName()
            r0.append(r1)
            java.lang.String r1 = ".loader.install.DynamicApk"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "registerToApp action:"
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "DynamicInstallReceiver"
            android.util.Log.i(r2, r1)
            android.content.IntentFilter r1 = new android.content.IntentFilter
            r1.<init>(r0)
            android.content.Context r3 = r3.getApplicationContext()
            com.kwad.sdk.api.loader.DynamicInstallReceiver r0 = new com.kwad.sdk.api.loader.DynamicInstallReceiver
            r0.<init>()
            r3.registerReceiver(r0, r1)
            java.util.concurrent.atomic.AtomicBoolean r3 = com.kwad.sdk.api.loader.DynamicInstallReceiver.HAS_REGISTER
            r0 = 1
            r3.set(r0)
        L51:
            return
    }

    @Override
    public void onReceive(android.content.Context r6, android.content.Intent r7) {
            r5 = this;
            java.lang.String r0 = "DynamicInstallReceiver"
            java.lang.String r1 = "onReceive success"
            android.util.Log.i(r0, r1)
            if (r7 != 0) goto Lf
            java.lang.String r6 = "intent is null"
            android.util.Log.i(r0, r6)
            return
        Lf:
            java.lang.String r1 = "apkPath"
            java.lang.String r1 = r7.getStringExtra(r1)
            java.lang.String r2 = "sdkVersion"
            java.lang.String r7 = r7.getStringExtra(r2)
            java.io.File r2 = new java.io.File
            r2.<init>(r1)
            boolean r3 = r2.exists()
            if (r3 != 0) goto L38
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r7 = "downloadFile not exists: "
            r6.<init>(r7)
            r6.append(r2)
            java.lang.String r6 = r6.toString()
            android.util.Log.i(r0, r6)
            return
        L38:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "downloadFile is exists, apkPath :"
            r3.<init>(r4)
            r3.append(r1)
            java.lang.String r1 = " sdkVersion:"
            r3.append(r1)
            r3.append(r7)
            java.lang.String r1 = r3.toString()
            android.util.Log.i(r0, r1)
            com.kwad.sdk.api.loader.DynamicInstallReceiver$1 r0 = new com.kwad.sdk.api.loader.DynamicInstallReceiver$1
            r0.<init>(r5, r6, r2, r7)
            android.os.AsyncTask.execute(r0)
            return
    }
}
