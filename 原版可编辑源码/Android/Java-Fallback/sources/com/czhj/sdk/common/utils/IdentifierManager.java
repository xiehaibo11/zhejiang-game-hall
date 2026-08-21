package com.czhj.sdk.common.utils;

public class IdentifierManager {
    private static final java.lang.String b = "com.Sigmob.settings.identifier";
    private static final java.lang.String c = "privacy.identifier.ifa";
    private static final java.lang.String d = "privacy.identifier.ifa_aes";
    private static final java.lang.String e = "privacy.identifier.Sigmob";
    private static final java.lang.String f = "privacy.identifier.time";
    private static final java.lang.String g = "privacy.limit.ad.tracking";
    private static final int h = -1;
    private long a;
    private com.czhj.sdk.common.utils.AdvertisingId i;
    private final android.content.Context j;
    private com.czhj.sdk.common.utils.IdentifierManager.AdvertisingIdChangeListener k;
    private boolean l;
    private boolean m;
    private com.czhj.sdk.common.utils.IdentifierManager.SdkInitializationListener n;

    static class 1 {
    }

    public interface AdvertisingIdChangeListener {
        void onIdChanged(com.czhj.sdk.common.utils.AdvertisingId r1, com.czhj.sdk.common.utils.AdvertisingId r2);
    }

    private class RefreshAdvertisingInfoAsyncTask extends android.os.AsyncTask<java.lang.Void, java.lang.Void, java.lang.Void> {
        final com.czhj.sdk.common.utils.IdentifierManager a;

        private RefreshAdvertisingInfoAsyncTask(com.czhj.sdk.common.utils.IdentifierManager r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        RefreshAdvertisingInfoAsyncTask(com.czhj.sdk.common.utils.IdentifierManager r1, com.czhj.sdk.common.utils.IdentifierManager.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        protected java.lang.Void doInBackground(java.lang.Void[] r1) {
                r0 = this;
                java.lang.Void[] r1 = (java.lang.Void[]) r1
                java.lang.Void r1 = r0.doInBackground(r1)
                return r1
        }

        protected java.lang.Void doInBackground(java.lang.Void... r2) {
                r1 = this;
                com.czhj.sdk.common.utils.IdentifierManager r2 = r1.a
                com.czhj.sdk.common.utils.IdentifierManager.a(r2)
                com.czhj.sdk.common.utils.IdentifierManager r2 = r1.a
                r0 = 0
                com.czhj.sdk.common.utils.IdentifierManager.a(r2, r0)
                r2 = 0
                return r2
        }
    }

    interface SdkInitializationListener {
        void onInitializationFinished();
    }

    public IdentifierManager(android.content.Context r1, com.czhj.sdk.common.utils.IdentifierManager.AdvertisingIdChangeListener r2) {
            r0 = this;
            r0.<init>()
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1)
            r0.j = r1
            r0.k = r2
            com.czhj.sdk.common.utils.AdvertisingId r1 = a(r1)
            r0.i = r1
            if (r1 != 0) goto L18
            com.czhj.sdk.common.utils.AdvertisingId r1 = com.czhj.sdk.common.utils.AdvertisingId.generateExpiredAdvertisingId()
            r0.i = r1
        L18:
            r0.a()
            return
    }

    private static synchronized com.czhj.sdk.common.utils.AdvertisingId a(android.content.Context r9) {
            java.lang.Class<com.czhj.sdk.common.utils.IdentifierManager> r0 = com.czhj.sdk.common.utils.IdentifierManager.class
            monitor-enter(r0)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r9)     // Catch: java.lang.Throwable -> L64
            java.util.Calendar r1 = java.util.Calendar.getInstance()     // Catch: java.lang.Throwable -> L64
            java.lang.String r2 = "com.Sigmob.settings.identifier"
            android.content.SharedPreferences r9 = com.czhj.sdk.common.utils.SharedPreferencesUtil.getSharedPreferences(r9, r2)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r2 = "privacy.identifier.ifa_aes"
            java.lang.String r3 = ""
            java.lang.String r2 = r9.getString(r2, r3)     // Catch: java.lang.Throwable -> L5c
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L5c
            if (r3 != 0) goto L26
            java.lang.String r3 = "sigandroid_mtadb"
            java.lang.String r2 = com.czhj.sdk.common.utils.AESUtil.DecryptString(r2, r3)     // Catch: java.lang.Throwable -> L5c
        L24:
            r4 = r2
            goto L2f
        L26:
            java.lang.String r2 = "privacy.identifier.ifa"
            java.lang.String r3 = ""
            java.lang.String r2 = r9.getString(r2, r3)     // Catch: java.lang.Throwable -> L5c
            goto L24
        L2f:
            java.lang.String r2 = "privacy.identifier.Sigmob"
            java.lang.String r3 = ""
            java.lang.String r5 = r9.getString(r2, r3)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r2 = "privacy.identifier.time"
            long r6 = r1.getTimeInMillis()     // Catch: java.lang.Throwable -> L5c
            long r7 = r9.getLong(r2, r6)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r1 = "privacy.limit.ad.tracking"
            r2 = 0
            boolean r6 = r9.getBoolean(r1, r2)     // Catch: java.lang.Throwable -> L5c
            boolean r9 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L5c
            if (r9 != 0) goto L61
            boolean r9 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L5c
            if (r9 != 0) goto L61
            com.czhj.sdk.common.utils.AdvertisingId r9 = new com.czhj.sdk.common.utils.AdvertisingId     // Catch: java.lang.Throwable -> L5c
            r3 = r9
            r3.<init>(r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L5c
            monitor-exit(r0)
            return r9
        L5c:
            java.lang.String r9 = "Cannot read identifier from shared preferences"
            com.czhj.sdk.logger.SigmobLog.e(r9)     // Catch: java.lang.Throwable -> L64
        L61:
            r9 = 0
            monitor-exit(r0)
            return r9
        L64:
            r9 = move-exception
            monitor-exit(r0)
            throw r9
    }

    private void a() {
            r2 = this;
            boolean r0 = r2.l
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r2.l = r0
            com.czhj.sdk.common.utils.IdentifierManager$RefreshAdvertisingInfoAsyncTask r0 = new com.czhj.sdk.common.utils.IdentifierManager$RefreshAdvertisingInfoAsyncTask
            r1 = 0
            r0.<init>(r2, r1)
            r1 = 0
            java.lang.Void[] r1 = new java.lang.Void[r1]
            r0.execute(r1)
            return
    }

    private static synchronized void a(android.content.Context r4, com.czhj.sdk.common.utils.AdvertisingId r5) {
            java.lang.Class<com.czhj.sdk.common.utils.IdentifierManager> r0 = com.czhj.sdk.common.utils.IdentifierManager.class
            monitor-enter(r0)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r4)     // Catch: java.lang.Throwable -> L43
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r5)     // Catch: java.lang.Throwable -> L43
            java.lang.String r1 = "com.Sigmob.settings.identifier"
            android.content.SharedPreferences r4 = com.czhj.sdk.common.utils.SharedPreferencesUtil.getSharedPreferences(r4, r1)     // Catch: java.lang.Throwable -> L43
            android.content.SharedPreferences$Editor r4 = r4.edit()     // Catch: java.lang.Throwable -> L43
            java.lang.String r1 = "privacy.limit.ad.tracking"
            boolean r2 = r5.mDoNotTrack     // Catch: java.lang.Throwable -> L43
            r4.putBoolean(r1, r2)     // Catch: java.lang.Throwable -> L43
            java.lang.String r1 = "privacy.identifier.ifa"
            r4.remove(r1)     // Catch: java.lang.Throwable -> L43
            java.lang.String r1 = "privacy.identifier.ifa_aes"
            java.lang.String r2 = r5.mAdvertisingId     // Catch: java.lang.Throwable -> L43
            java.lang.String r3 = "sigandroid_mtadb"
            java.lang.String r2 = com.czhj.sdk.common.utils.AESUtil.EncryptString(r2, r3)     // Catch: java.lang.Throwable -> L43
            r4.putString(r1, r2)     // Catch: java.lang.Throwable -> L43
            java.lang.String r1 = "privacy.identifier.Sigmob"
            java.lang.String r2 = r5.b     // Catch: java.lang.Throwable -> L43
            r4.putString(r1, r2)     // Catch: java.lang.Throwable -> L43
            java.lang.String r1 = "privacy.identifier.time"
            java.util.Calendar r5 = r5.a     // Catch: java.lang.Throwable -> L43
            long r2 = r5.getTimeInMillis()     // Catch: java.lang.Throwable -> L43
            r4.putLong(r1, r2)     // Catch: java.lang.Throwable -> L43
            r4.apply()     // Catch: java.lang.Throwable -> L43
            monitor-exit(r0)
            return
        L43:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    private void a(com.czhj.sdk.common.utils.AdvertisingId r3) {
            r2 = this;
            com.czhj.sdk.common.utils.AdvertisingId r0 = r2.i
            r2.i = r3
            android.content.Context r1 = r2.j
            a(r1, r3)
            com.czhj.sdk.common.utils.AdvertisingId r3 = r2.i
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L15
            boolean r3 = r2.m
            if (r3 != 0) goto L1a
        L15:
            com.czhj.sdk.common.utils.AdvertisingId r3 = r2.i
            r2.a(r0, r3)
        L1a:
            boolean r3 = r2.m
            if (r3 != 0) goto L21
            r2.c()
        L21:
            return
    }

    private void a(com.czhj.sdk.common.utils.AdvertisingId r2, com.czhj.sdk.common.utils.AdvertisingId r3) {
            r1 = this;
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r3)
            com.czhj.sdk.common.utils.IdentifierManager$AdvertisingIdChangeListener r0 = r1.k
            if (r0 == 0) goto La
            r0.onIdChanged(r2, r3)
        La:
            return
    }

    static void a(com.czhj.sdk.common.utils.IdentifierManager r0) {
            r0.b()
            return
    }

    private void a(java.lang.String r8, java.lang.String r9, boolean r10, long r11) {
            r7 = this;
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r8)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r9)
            com.czhj.sdk.common.utils.AdvertisingId r6 = new com.czhj.sdk.common.utils.AdvertisingId
            r0 = r6
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4)
            r7.a(r6)
            return
    }

    static boolean a(com.czhj.sdk.common.utils.IdentifierManager r0, boolean r1) {
            r0.l = r1
            return r1
    }

    private void b() {
            r13 = this;
            java.util.Calendar r0 = java.util.Calendar.getInstance()
            long r5 = r0.getTimeInMillis()
            boolean r0 = r13.d()
            if (r0 == 0) goto L41
            android.content.Context r0 = r13.j     // Catch: java.lang.Throwable -> L15
            com.czhj.sdk.common.utils.PlayServicesUtil$AdvertisingInfo r0 = com.czhj.sdk.common.utils.PlayServicesUtil.getAdvertisingIdInfo(r0)     // Catch: java.lang.Throwable -> L15
            goto L16
        L15:
            r0 = 0
        L16:
            if (r0 == 0) goto L41
            com.czhj.sdk.common.utils.AdvertisingId r1 = r13.i
            boolean r2 = r0.limitAdTracking
            if (r2 == 0) goto L31
            boolean r2 = r1.b()
            if (r2 == 0) goto L31
            java.lang.String r2 = r0.advertisingId
            java.lang.String r3 = com.czhj.sdk.common.utils.AdvertisingId.a()
            boolean r4 = r0.limitAdTracking
            r1 = r13
            r1.a(r2, r3, r4, r5)
            goto L41
        L31:
            java.lang.String r8 = r0.advertisingId
            java.lang.String r9 = r1.b
            boolean r10 = r0.limitAdTracking
            java.util.Calendar r0 = r1.a
            long r11 = r0.getTimeInMillis()
            r7 = r13
            r7.a(r8, r9, r10, r11)
        L41:
            return
    }

    private void c() {
            r1 = this;
            com.czhj.sdk.common.utils.IdentifierManager$SdkInitializationListener r0 = r1.n
            if (r0 == 0) goto La
            r0.onInitializationFinished()
            r0 = 0
            r1.n = r0
        La:
            r0 = 1
            r1.m = r0
            return
    }

    private boolean d() {
            r1 = this;
            r0 = 1
            return r0
    }

    public com.czhj.sdk.common.utils.AdvertisingId getAdvertisingInfo() {
            r3 = this;
            com.czhj.sdk.common.utils.AdvertisingId r0 = r3.i
            long r1 = java.lang.System.currentTimeMillis()
            r3.a = r1
            r3.a()
            return r0
    }
}
