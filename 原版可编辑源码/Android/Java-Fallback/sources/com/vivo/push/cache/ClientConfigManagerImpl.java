package com.vivo.push.cache;

public class ClientConfigManagerImpl implements com.vivo.push.cache.d {
    private static final java.lang.String TAG = "ClientConfigManager";
    private static volatile com.vivo.push.cache.ClientConfigManagerImpl sClientConfigManagerImpl;
    private com.vivo.push.cache.a mAppConfigSettings;
    private android.content.Context mContext;
    private com.vivo.push.cache.e mPushConfigSettings;

    private ClientConfigManagerImpl(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            android.content.Context r2 = com.vivo.push.util.ContextDelegate.getContext(r2)
            r1.mContext = r2
            com.vivo.push.cache.a r2 = new com.vivo.push.cache.a
            android.content.Context r0 = r1.mContext
            r2.<init>(r0)
            r1.mAppConfigSettings = r2
            com.vivo.push.cache.e r2 = new com.vivo.push.cache.e
            android.content.Context r0 = r1.mContext
            r2.<init>(r0)
            r1.mPushConfigSettings = r2
            return
    }

    public static synchronized com.vivo.push.cache.ClientConfigManagerImpl getInstance(android.content.Context r2) {
            java.lang.Class<com.vivo.push.cache.ClientConfigManagerImpl> r0 = com.vivo.push.cache.ClientConfigManagerImpl.class
            monitor-enter(r0)
            com.vivo.push.cache.ClientConfigManagerImpl r1 = com.vivo.push.cache.ClientConfigManagerImpl.sClientConfigManagerImpl     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.vivo.push.cache.ClientConfigManagerImpl r1 = new com.vivo.push.cache.ClientConfigManagerImpl     // Catch: java.lang.Throwable -> L12
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L12
            com.vivo.push.cache.ClientConfigManagerImpl.sClientConfigManagerImpl = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.vivo.push.cache.ClientConfigManagerImpl r2 = com.vivo.push.cache.ClientConfigManagerImpl.sClientConfigManagerImpl     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r2
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private void prepareAppConfig() {
            r2 = this;
            com.vivo.push.cache.a r0 = r2.mAppConfigSettings
            if (r0 != 0) goto Le
            com.vivo.push.cache.a r0 = new com.vivo.push.cache.a
            android.content.Context r1 = r2.mContext
            r0.<init>(r1)
            r2.mAppConfigSettings = r0
            return
        Le:
            r0.c()
            return
    }

    private com.vivo.push.cache.e preparePushConfigSettings() {
            r2 = this;
            com.vivo.push.cache.e r0 = r2.mPushConfigSettings
            if (r0 != 0) goto Le
            com.vivo.push.cache.e r0 = new com.vivo.push.cache.e
            android.content.Context r1 = r2.mContext
            r0.<init>(r1)
            r2.mPushConfigSettings = r0
            goto L11
        Le:
            r0.c()
        L11:
            com.vivo.push.cache.e r0 = r2.mPushConfigSettings
            return r0
    }

    public void clearPush() {
            r1 = this;
            com.vivo.push.cache.a r0 = r1.mAppConfigSettings
            r0.d()
            return
    }

    public java.util.Set<java.lang.String> getBlackEventList() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getSuitTag() {
            r2 = this;
            com.vivo.push.cache.e r0 = r2.preparePushConfigSettings()
            java.lang.String r1 = "CSPT"
            java.lang.String r0 = r0.c(r1)
            return r0
    }

    public java.lang.String getValueByKey(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            r2 = 0
            return r2
        L8:
            com.vivo.push.cache.e r0 = r1.mPushConfigSettings
            r0.c()
            com.vivo.push.cache.e r0 = r1.mPushConfigSettings
            java.lang.String r2 = r0.c(r2)
            return r2
    }

    public java.util.Set<java.lang.Long> getWhiteLogList() {
            r6 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.lang.String r1 = "WLL"
            java.lang.String r1 = r6.getValueByKey(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L2b
            java.lang.String r2 = ","
            java.lang.String[] r1 = r1.split(r2)
            int r2 = r1.length
            r3 = 0
        L19:
            if (r3 >= r2) goto L2b
            r4 = r1[r3]
            long r4 = java.lang.Long.parseLong(r4)     // Catch: java.lang.Exception -> L28
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Exception -> L28
            r0.add(r4)     // Catch: java.lang.Exception -> L28
        L28:
            int r3 = r3 + 1
            goto L19
        L2b:
            java.lang.String r1 = java.lang.String.valueOf(r0)
            java.lang.String r2 = " initWhiteLogList "
            java.lang.String r1 = r2.concat(r1)
            java.lang.String r2 = "ClientConfigManager"
            com.vivo.push.util.p.d(r2, r1)
            return r0
    }

    public boolean isCancleBroadcastReceiver() {
            r3 = this;
            com.vivo.push.cache.e r0 = r3.preparePushConfigSettings()
            java.lang.String r1 = "PSM"
            java.lang.String r0 = r0.c(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 != 0) goto L1a
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> L16
            goto L1b
        L16:
            r0 = move-exception
            r0.printStackTrace()
        L1a:
            r0 = r2
        L1b:
            r0 = r0 & 4
            if (r0 == 0) goto L21
            r0 = 1
            return r0
        L21:
            return r2
    }

    public boolean isDebug() {
            r1 = this;
            com.vivo.push.cache.a r0 = r1.mAppConfigSettings
            r0.c()
            com.vivo.push.cache.a r0 = r1.mAppConfigSettings
            int r0 = r0.b()
            boolean r0 = com.vivo.push.cache.a.a(r0)
            return r0
    }

    public boolean isDebug(int r1) {
            r0 = this;
            boolean r1 = com.vivo.push.cache.a.a(r1)
            return r1
    }

    public boolean isEnablePush() {
            r2 = this;
            r2.prepareAppConfig()
            com.vivo.push.cache.a r0 = r2.mAppConfigSettings
            android.content.Context r1 = r2.mContext
            java.lang.String r1 = r1.getPackageName()
            com.vivo.push.model.a r0 = r0.c(r1)
            if (r0 == 0) goto L1c
            java.lang.String r0 = r0.b()
            java.lang.String r1 = "1"
            boolean r0 = r1.equals(r0)
            return r0
        L1c:
            r0 = 1
            return r0
    }

    @Override
    public boolean isInBlackList(long r7) {
            r6 = this;
            com.vivo.push.cache.e r0 = r6.preparePushConfigSettings()
            java.lang.String r1 = "BL"
            java.lang.String r0 = r0.c(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 != 0) goto L34
            java.lang.String r1 = ","
            java.lang.String[] r0 = r0.split(r1)
            int r1 = r0.length
            r3 = r2
        L19:
            if (r3 >= r1) goto L34
            r4 = r0[r3]
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.NumberFormatException -> L2d
            if (r5 != 0) goto L31
            long r4 = java.lang.Long.parseLong(r4)     // Catch: java.lang.NumberFormatException -> L2d
            int r4 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r4 != 0) goto L31
            r7 = 1
            return r7
        L2d:
            r4 = move-exception
            r4.printStackTrace()
        L31:
            int r3 = r3 + 1
            goto L19
        L34:
            return r2
    }
}
