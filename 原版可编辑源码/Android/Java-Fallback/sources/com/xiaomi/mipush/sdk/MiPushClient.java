package com.xiaomi.mipush.sdk;

public abstract class MiPushClient {
    public static final java.lang.String COMMAND_REGISTER = "register";
    public static final java.lang.String COMMAND_SET_ACCEPT_TIME = "accept-time";
    public static final java.lang.String COMMAND_SET_ACCOUNT = "set-account";
    public static final java.lang.String COMMAND_SET_ALIAS = "set-alias";
    public static final java.lang.String COMMAND_SUBSCRIBE_TOPIC = "subscribe-topic";
    public static final java.lang.String COMMAND_UNREGISTER = "unregister";
    public static final java.lang.String COMMAND_UNSET_ACCOUNT = "unset-account";
    public static final java.lang.String COMMAND_UNSET_ALIAS = "unset-alias";
    public static final java.lang.String COMMAND_UNSUBSCRIBE_TOPIC = "unsubscibe-topic";
    public static final java.lang.String PREF_EXTRA = "mipush_extra";
    private static android.content.Context sContext;
    private static long sCurMsgId;







    public class CodeResult {
        private long resultCode;

        public CodeResult() {
                r2 = this;
                r2.<init>()
                r0 = -1
                r2.resultCode = r0
                return
        }

        public long getResultCode() {
                r2 = this;
                long r0 = r2.resultCode
                return r0
        }

        protected void setResultCode(long r1) {
                r0 = this;
                r0.resultCode = r1
                return
        }
    }

    public interface ICallbackResult<R> {
        void onResult(R r1);
    }

    @java.lang.Deprecated
    public abstract class MiPushClientCallback {
        private java.lang.String category;

        public MiPushClientCallback() {
                r0 = this;
                r0.<init>()
                return
        }

        protected java.lang.String getCategory() {
                r1 = this;
                java.lang.String r0 = r1.category
                return r0
        }

        public void onCommandResult(java.lang.String r1, long r2, java.lang.String r4, java.util.List<java.lang.String> r5) {
                r0 = this;
                return
        }

        public void onInitializeResult(long r1, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                return
        }

        public void onReceiveMessage(com.xiaomi.mipush.sdk.MiPushMessage r1) {
                r0 = this;
                return
        }

        public void onReceiveMessage(java.lang.String r1, java.lang.String r2, java.lang.String r3, boolean r4) {
                r0 = this;
                return
        }

        public void onSubscribeResult(long r1, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                return
        }

        public void onUnsubscribeResult(long r1, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                return
        }

        protected void setCategory(java.lang.String r1) {
                r0 = this;
                r0.category = r1
                return
        }
    }

    public class TokenResult {
        private long resultCode;
        private java.lang.String token;

        public TokenResult() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.token = r0
                r0 = -1
                r2.resultCode = r0
                return
        }

        public long getResultCode() {
                r2 = this;
                long r0 = r2.resultCode
                return r0
        }

        public java.lang.String getToken() {
                r1 = this;
                java.lang.String r0 = r1.token
                return r0
        }

        protected void setResultCode(long r1) {
                r0 = this;
                r0.resultCode = r1
                return
        }

        protected void setToken(java.lang.String r1) {
                r0 = this;
                r0.token = r1
                return
        }
    }

    public interface UPSRegisterCallBack extends com.xiaomi.mipush.sdk.MiPushClient.ICallbackResult<com.xiaomi.mipush.sdk.MiPushClient.TokenResult> {
    }

    public interface UPSTurnCallBack extends com.xiaomi.mipush.sdk.MiPushClient.ICallbackResult<com.xiaomi.mipush.sdk.MiPushClient.CodeResult> {
    }

    public interface UPSUnRegisterCallBack extends com.xiaomi.mipush.sdk.MiPushClient.ICallbackResult<com.xiaomi.mipush.sdk.MiPushClient.TokenResult> {
    }

    static {
            long r0 = java.lang.System.currentTimeMillis()
            com.xiaomi.mipush.sdk.MiPushClient.sCurMsgId = r0
            return
    }

    public MiPushClient() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean acceptTimeSet(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r1 = getAcceptTime(r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ","
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            boolean r1 = android.text.TextUtils.equals(r1, r2)
            return r1
    }

    static android.content.Context access$000() {
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            return r0
    }

    static void access$100(android.content.Context r0, java.lang.String r1, java.lang.String r2, com.xiaomi.mipush.sdk.MiPushClient.MiPushClientCallback r3, java.lang.String r4, com.xiaomi.mipush.sdk.MiPushClient.ICallbackResult r5) {
            initialize(r0, r1, r2, r3, r4, r5)
            return
    }

    static void access$200(android.content.Context r0, android.content.pm.PackageInfo r1) {
            awakePushServiceByPackageInfo(r0, r1)
            return
    }

    public static long accountSetTime(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "mipush_extra"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "account_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = -1
            long r2 = r2.getLong(r3, r0)
            return r2
    }

    static synchronized void addAcceptTime(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            java.lang.Class<com.xiaomi.mipush.sdk.MiPushClient> r0 = com.xiaomi.mipush.sdk.MiPushClient.class
            monitor-enter(r0)
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L2c
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r1 = "accept_time"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c
            r2.<init>()     // Catch: java.lang.Throwable -> L2c
            r2.append(r4)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r4 = ","
            r2.append(r4)     // Catch: java.lang.Throwable -> L2c
            r2.append(r5)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L2c
            r3.putString(r1, r4)     // Catch: java.lang.Throwable -> L2c
            com.xiaomi.push.t.a(r3)     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r0)
            return
        L2c:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static synchronized void addAccount(android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.xiaomi.mipush.sdk.MiPushClient> r0 = com.xiaomi.mipush.sdk.MiPushClient.class
            monitor-enter(r0)
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L2c
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L2c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c
            r1.<init>()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r2 = "account_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L2c
            r1.append(r4)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L2c
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2c
            android.content.SharedPreferences$Editor r3 = r3.putLong(r4, r1)     // Catch: java.lang.Throwable -> L2c
            r3.commit()     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r0)
            return
        L2c:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static synchronized void addAlias(android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.xiaomi.mipush.sdk.MiPushClient> r0 = com.xiaomi.mipush.sdk.MiPushClient.class
            monitor-enter(r0)
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L2c
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L2c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c
            r1.<init>()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r2 = "alias_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L2c
            r1.append(r4)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L2c
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2c
            android.content.SharedPreferences$Editor r3 = r3.putLong(r4, r1)     // Catch: java.lang.Throwable -> L2c
            r3.commit()     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r0)
            return
        L2c:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    private static void addPullNotificationTime(android.content.Context r3) {
            java.lang.String r0 = "mipush_extra"
            r1 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r3 = r3.edit()
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = "last_pull_notification"
            r3.putLong(r2, r0)
            com.xiaomi.push.t.a(r3)
            return
    }

    private static void addRegRequestTime(android.content.Context r3) {
            java.lang.String r0 = "mipush_extra"
            r1 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r3 = r3.edit()
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = "last_reg_request"
            r3.putLong(r2, r0)
            com.xiaomi.push.t.a(r3)
            return
    }

    static synchronized void addTopic(android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.xiaomi.mipush.sdk.MiPushClient> r0 = com.xiaomi.mipush.sdk.MiPushClient.class
            monitor-enter(r0)
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L2c
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L2c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c
            r1.<init>()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r2 = "topic_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L2c
            r1.append(r4)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L2c
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2c
            android.content.SharedPreferences$Editor r3 = r3.putLong(r4, r1)     // Catch: java.lang.Throwable -> L2c
            r3.commit()     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r0)
            return
        L2c:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static long aliasSetTime(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "mipush_extra"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "alias_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = -1
            long r2 = r2.getLong(r3, r0)
            return r2
    }

    public static void awakeApps(android.content.Context r2, java.lang.String[] r3) {
            com.xiaomi.push.al r0 = com.xiaomi.push.al.a(r2)
            com.xiaomi.mipush.sdk.MiPushClient$4 r1 = new com.xiaomi.mipush.sdk.MiPushClient$4
            r1.<init>(r3, r2)
            r0.a(r1)
            return
    }

    private static void awakePushServiceByPackageInfo(android.content.Context r5, android.content.pm.PackageInfo r6) {
            android.content.pm.ServiceInfo[] r6 = r6.services
            if (r6 == 0) goto L5a
            int r0 = r6.length
            r1 = 0
        L6:
            if (r1 >= r0) goto L5a
            r2 = r6[r1]
            boolean r3 = r2.exported
            if (r3 == 0) goto L57
            boolean r3 = r2.enabled
            if (r3 == 0) goto L57
            java.lang.String r3 = r2.name
            java.lang.String r4 = "com.xiaomi.mipush.sdk.PushMessageHandler"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L57
            java.lang.String r3 = r5.getPackageName()
            java.lang.String r4 = r2.packageName
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L57
            double r0 = java.lang.Math.random()     // Catch: java.lang.Throwable -> L5a
            r3 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r0 = r0 * r3
            r3 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r0 = r0 + r3
            long r0 = (long) r0     // Catch: java.lang.Throwable -> L5a
            r3 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r3
            java.lang.Thread.sleep(r0)     // Catch: java.lang.Throwable -> L5a
            android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.Throwable -> L5a
            r6.<init>()     // Catch: java.lang.Throwable -> L5a
            java.lang.String r0 = r2.packageName     // Catch: java.lang.Throwable -> L5a
            java.lang.String r1 = r2.name     // Catch: java.lang.Throwable -> L5a
            r6.setClassName(r0, r1)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r0 = "com.xiaomi.mipush.sdk.WAKEUP"
            r6.setAction(r0)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r0 = "waker_pkgname"
            java.lang.String r1 = r5.getPackageName()     // Catch: java.lang.Throwable -> L5a
            r6.putExtra(r0, r1)     // Catch: java.lang.Throwable -> L5a
            com.xiaomi.mipush.sdk.PushMessageHandler.a(r5, r6)     // Catch: java.lang.Throwable -> L5a
            goto L5a
        L57:
            int r1 = r1 + 1
            goto L6
        L5a:
            return
    }

    private static void checkNotNull(java.lang.Object r2, java.lang.String r3) {
            if (r2 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "param "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = " is not nullable"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            throw r2
    }

    protected static void clearExtras(android.content.Context r2) {
            java.lang.String r0 = "mipush_extra"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            r2.clear()
            r2.commit()
            return
    }

    private static void clearExtrasForInitialize(android.content.Context r5) {
            java.lang.String r0 = "mipush_extra"
            r1 = 0
            android.content.SharedPreferences r0 = r5.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.util.List r1 = getAllAlias(r5)
            java.util.Iterator r1 = r1.iterator()
        L13:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L34
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "alias_"
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r0.remove(r2)
            goto L13
        L34:
            java.util.List r1 = getAllUserAccount(r5)
            java.util.Iterator r1 = r1.iterator()
        L3c:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L5d
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "account_"
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r0.remove(r2)
            goto L3c
        L5d:
            java.util.List r5 = getAllTopic(r5)
            java.util.Iterator r5 = r5.iterator()
        L65:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L86
            java.lang.Object r1 = r5.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "topic_"
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.remove(r1)
            goto L65
        L86:
            java.lang.String r5 = "accept_time"
            r0.remove(r5)
            r0.commit()
            return
    }

    public static void clearLocalNotificationType(android.content.Context r0) {
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r0)
            r0.f()
            return
    }

    public static void clearNotification(android.content.Context r1) {
            com.xiaomi.mipush.sdk.ao r1 = com.xiaomi.mipush.sdk.ao.a(r1)
            r0 = -1
            r1.a(r0)
            return
    }

    public static void clearNotification(android.content.Context r0, int r1) {
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r0)
            r0.a(r1)
            return
    }

    public static void clearNotification(android.content.Context r0, java.lang.String r1, java.lang.String r2) {
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r0)
            r0.a(r1, r2)
            return
    }

    public static void disablePush(android.content.Context r1) {
            com.xiaomi.mipush.sdk.ao r1 = com.xiaomi.mipush.sdk.ao.a(r1)
            r0 = 1
            r1.a(r0)
            return
    }

    public static void enablePush(android.content.Context r1) {
            com.xiaomi.mipush.sdk.ao r1 = com.xiaomi.mipush.sdk.ao.a(r1)
            r0 = 0
            r1.a(r0)
            return
    }

    protected static java.lang.String getAcceptTime(android.content.Context r2) {
            java.lang.String r0 = "mipush_extra"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            java.lang.String r0 = "accept_time"
            java.lang.String r1 = "00:00-23:59"
            java.lang.String r2 = r2.getString(r0, r1)
            return r2
    }

    public static java.util.List<java.lang.String> getAllAlias(android.content.Context r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)
            java.util.Map r3 = r3.getAll()
            java.util.Set r3 = r3.keySet()
            java.util.Iterator r3 = r3.iterator()
        L18:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L35
            java.lang.Object r1 = r3.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "alias_"
            boolean r2 = r1.startsWith(r2)
            if (r2 == 0) goto L18
            r2 = 6
            java.lang.String r1 = r1.substring(r2)
            r0.add(r1)
            goto L18
        L35:
            return r0
    }

    public static java.util.List<java.lang.String> getAllTopic(android.content.Context r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)
            java.util.Map r3 = r3.getAll()
            java.util.Set r3 = r3.keySet()
            java.util.Iterator r3 = r3.iterator()
        L18:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L3d
            java.lang.Object r1 = r3.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "topic_"
            boolean r2 = r1.startsWith(r2)
            if (r2 == 0) goto L18
            java.lang.String r2 = "**ALL**"
            boolean r2 = r1.contains(r2)
            if (r2 != 0) goto L18
            r2 = 6
            java.lang.String r1 = r1.substring(r2)
            r0.add(r1)
            goto L18
        L3d:
            return r0
    }

    public static java.util.List<java.lang.String> getAllUserAccount(android.content.Context r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)
            java.util.Map r3 = r3.getAll()
            java.util.Set r3 = r3.keySet()
            java.util.Iterator r3 = r3.iterator()
        L18:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L36
            java.lang.Object r1 = r3.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "account_"
            boolean r2 = r1.startsWith(r2)
            if (r2 == 0) goto L18
            r2 = 8
            java.lang.String r1 = r1.substring(r2)
            r0.add(r1)
            goto L18
        L36:
            return r0
    }

    public static java.lang.String getAppRegion(android.content.Context r1) {
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r1)
            boolean r0 = r0.c()
            if (r0 == 0) goto L13
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r1)
            java.lang.String r1 = r1.f()
            return r1
        L13:
            r1 = 0
            return r1
    }

    private static boolean getDefaultSwitch() {
            boolean r0 = com.xiaomi.push.m.b()
            return r0
    }

    protected static boolean getOpenFCMPush(android.content.Context r1) {
            java.lang.String r0 = "context"
            checkNotNull(r1, r0)
            com.xiaomi.mipush.sdk.f r1 = com.xiaomi.mipush.sdk.f.a(r1)
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.b
            boolean r1 = r1.b(r0)
            return r1
    }

    protected static boolean getOpenHmsPush(android.content.Context r1) {
            java.lang.String r0 = "context"
            checkNotNull(r1, r0)
            com.xiaomi.mipush.sdk.f r1 = com.xiaomi.mipush.sdk.f.a(r1)
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.a
            boolean r1 = r1.b(r0)
            return r1
    }

    protected static boolean getOpenOPPOPush(android.content.Context r1) {
            java.lang.String r0 = "context"
            checkNotNull(r1, r0)
            com.xiaomi.mipush.sdk.f r1 = com.xiaomi.mipush.sdk.f.a(r1)
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.c
            boolean r1 = r1.b(r0)
            return r1
    }

    protected static boolean getOpenVIVOPush(android.content.Context r1) {
            com.xiaomi.mipush.sdk.f r1 = com.xiaomi.mipush.sdk.f.a(r1)
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.d
            boolean r1 = r1.b(r0)
            return r1
    }

    public static java.lang.String getRegId(android.content.Context r1) {
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r1)
            boolean r0 = r0.c()
            if (r0 == 0) goto L13
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r1)
            java.lang.String r1 = r1.c()
            return r1
        L13:
            r1 = 0
            return r1
    }

    private static void initEventPerfLogic(android.content.Context r4) {
            com.xiaomi.mipush.sdk.MiPushClient$5 r0 = new com.xiaomi.mipush.sdk.MiPushClient$5
            r0.<init>()
            com.xiaomi.push.en.a(r0)
            com.xiaomi.clientreport.data.Config r0 = com.xiaomi.push.en.a(r4)
            com.xiaomi.clientreport.manager.a r1 = com.xiaomi.clientreport.manager.a.a(r4)
            java.lang.String r2 = "4_9_0"
            r1.a(r2)
            com.xiaomi.push.el r1 = new com.xiaomi.push.el
            r1.<init>(r4)
            com.xiaomi.push.em r2 = new com.xiaomi.push.em
            r2.<init>(r4)
            com.xiaomi.clientreport.manager.ClientReportClient.init(r4, r0, r1, r2)
            com.xiaomi.mipush.sdk.a.a(r4)
            com.xiaomi.mipush.sdk.t.a(r4, r0)
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r4)
            com.xiaomi.mipush.sdk.MiPushClient$6 r1 = new com.xiaomi.mipush.sdk.MiPushClient$6
            r2 = 100
            java.lang.String r3 = "perf event job update"
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            return
    }

    @java.lang.Deprecated
    public static void initialize(android.content.Context r6, java.lang.String r7, java.lang.String r8, com.xiaomi.mipush.sdk.MiPushClient.MiPushClientCallback r9) {
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            initialize(r0, r1, r2, r3, r4, r5)
            return
    }

    private static void initialize(android.content.Context r18, java.lang.String r19, java.lang.String r20, com.xiaomi.mipush.sdk.MiPushClient.MiPushClientCallback r21, java.lang.String r22, com.xiaomi.mipush.sdk.MiPushClient.ICallbackResult r23) {
            r0 = r19
            r1 = r20
            r2 = r21
            java.lang.String r3 = "update_devId"
            android.content.Context r4 = r18.getApplicationContext()     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.channel.commonutils.logger.b.a(r4)     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r4 = "sdk_version = 4_9_0"
            com.xiaomi.channel.commonutils.logger.b.e(r4)     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.push.ba r4 = com.xiaomi.push.ba.a(r18)     // Catch: java.lang.Throwable -> L2ce
            r4.a()     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.push.dd.a(r18)     // Catch: java.lang.Throwable -> L2ce
            if (r2 == 0) goto L23
            com.xiaomi.mipush.sdk.PushMessageHandler.a(r21)     // Catch: java.lang.Throwable -> L2ce
        L23:
            if (r23 == 0) goto L28
            com.xiaomi.mipush.sdk.PushMessageHandler.a(r23)     // Catch: java.lang.Throwable -> L2ce
        L28:
            android.content.Context r4 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            boolean r4 = com.xiaomi.push.v.a(r4)     // Catch: java.lang.Throwable -> L2ce
            if (r4 == 0) goto L35
            android.content.Context r4 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.v.a(r4)     // Catch: java.lang.Throwable -> L2ce
        L35:
            android.content.Context r4 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.b r4 = com.xiaomi.mipush.sdk.b.a(r4)     // Catch: java.lang.Throwable -> L2ce
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L2ce
            int r5 = com.xiaomi.mipush.sdk.Constants.a()     // Catch: java.lang.Throwable -> L2ce
            r6 = 1
            r7 = 0
            if (r4 == r5) goto L49
            r4 = r6
            goto L4a
        L49:
            r4 = r7
        L4a:
            if (r4 != 0) goto L63
            android.content.Context r5 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            boolean r5 = shouldSendRegRequest(r5)     // Catch: java.lang.Throwable -> L2ce
            if (r5 != 0) goto L63
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r0)     // Catch: java.lang.Throwable -> L2ce
            r0.a()     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r0 = "Could not send  register message within 5s repeatly ."
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L2ce
            return
        L63:
            r5 = 40090(0x9c9a, float:5.6178E-41)
            java.lang.String r8 = "4_9_0"
            if (r4 != 0) goto L1b8
            android.content.Context r9 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.b r9 = com.xiaomi.mipush.sdk.b.a(r9)     // Catch: java.lang.Throwable -> L2ce
            boolean r9 = r9.a(r0, r1)     // Catch: java.lang.Throwable -> L2ce
            if (r9 == 0) goto L1b8
            android.content.Context r9 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.b r9 = com.xiaomi.mipush.sdk.b.a(r9)     // Catch: java.lang.Throwable -> L2ce
            boolean r9 = r9.f()     // Catch: java.lang.Throwable -> L2ce
            if (r9 != 0) goto L1b8
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            int r0 = com.xiaomi.mipush.sdk.PushMessageHelper.getPushMode(r0)     // Catch: java.lang.Throwable -> L2ce
            r1 = 0
            if (r6 != r0) goto La0
            java.lang.String r0 = "callback"
            checkNotNull(r2, r0)     // Catch: java.lang.Throwable -> L2ce
            r9 = 0
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r0)     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r0 = r0.c()     // Catch: java.lang.Throwable -> L2ce
            r2.onInitializeResult(r9, r1, r0)     // Catch: java.lang.Throwable -> L2ce
            goto Lc6
        La0:
            java.util.ArrayList r12 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L2ce
            r12.<init>()     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r0)     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r0 = r0.c()     // Catch: java.lang.Throwable -> L2ce
            r12.add(r0)     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.a     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r11 = r0.a     // Catch: java.lang.Throwable -> L2ce
            r13 = 0
            r15 = 0
            r16 = 0
            r17 = 0
            com.xiaomi.mipush.sdk.MiPushCommandMessage r0 = com.xiaomi.mipush.sdk.PushMessageHelper.generateCommandMessage(r11, r12, r13, r15, r16, r17)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r2 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.PushMessageHelper.sendCommandMessageBroadcast(r2, r0)     // Catch: java.lang.Throwable -> L2ce
        Lc6:
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r0)     // Catch: java.lang.Throwable -> L2ce
            r0.a()     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r0)     // Catch: java.lang.Throwable -> L2ce
            boolean r0 = r0.a()     // Catch: java.lang.Throwable -> L2ce
            if (r0 == 0) goto L160
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii     // Catch: java.lang.Throwable -> L2ce
            r0.<init>()     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r2 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r2)     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r2 = r2.a()     // Catch: java.lang.Throwable -> L2ce
            r0.b(r2)     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.push.ht r2 = com.xiaomi.push.ht.g     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r2 = r2.a     // Catch: java.lang.Throwable -> L2ce
            r0.c(r2)     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r2 = com.xiaomi.push.service.bd.a()     // Catch: java.lang.Throwable -> L2ce
            r0.a(r2)     // Catch: java.lang.Throwable -> L2ce
            java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Throwable -> L2ce
            r2.<init>()     // Catch: java.lang.Throwable -> L2ce
            r0.a = r2     // Catch: java.lang.Throwable -> L2ce
            java.util.Map<java.lang.String, java.lang.String> r2 = r0.a     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r4 = "app_version"
            android.content.Context r9 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r10 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r10 = r10.getPackageName()     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r9 = com.xiaomi.push.h.a(r9, r10)     // Catch: java.lang.Throwable -> L2ce
            r2.put(r4, r9)     // Catch: java.lang.Throwable -> L2ce
            java.util.Map<java.lang.String, java.lang.String> r2 = r0.a     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r4 = "app_version_code"
            android.content.Context r9 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r10 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r10 = r10.getPackageName()     // Catch: java.lang.Throwable -> L2ce
            int r9 = com.xiaomi.push.h.a(r9, r10)     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r9 = java.lang.Integer.toString(r9)     // Catch: java.lang.Throwable -> L2ce
            r2.put(r4, r9)     // Catch: java.lang.Throwable -> L2ce
            java.util.Map<java.lang.String, java.lang.String> r2 = r0.a     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r4 = "push_sdk_vn"
            r2.put(r4, r8)     // Catch: java.lang.Throwable -> L2ce
            java.util.Map<java.lang.String, java.lang.String> r2 = r0.a     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r4 = "push_sdk_vc"
            java.lang.String r5 = java.lang.Integer.toString(r5)     // Catch: java.lang.Throwable -> L2ce
            r2.put(r4, r5)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r2 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r2)     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r2 = r2.e()     // Catch: java.lang.Throwable -> L2ce
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L2ce
            if (r4 != 0) goto L155
            java.util.Map<java.lang.String, java.lang.String> r4 = r0.a     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r5 = "deviceid"
            r4.put(r5, r2)     // Catch: java.lang.Throwable -> L2ce
        L155:
            android.content.Context r2 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.ao r2 = com.xiaomi.mipush.sdk.ao.a(r2)     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.push.hj r4 = com.xiaomi.push.hj.i     // Catch: java.lang.Throwable -> L2ce
            r2.a(r0, r4, r7, r1)     // Catch: java.lang.Throwable -> L2ce
        L160:
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            boolean r0 = com.xiaomi.push.n.a(r0, r3, r7)     // Catch: java.lang.Throwable -> L2ce
            if (r0 != 0) goto L170
            updateImeiOrOaid()     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.push.n.a(r0, r3, r6)     // Catch: java.lang.Throwable -> L2ce
        L170:
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            boolean r0 = shouldUseMIUIPush(r0)     // Catch: java.lang.Throwable -> L2ce
            if (r0 == 0) goto L292
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            boolean r0 = shouldPullNotification(r0)     // Catch: java.lang.Throwable -> L2ce
            if (r0 == 0) goto L292
            com.xiaomi.push.ii r2 = new com.xiaomi.push.ii     // Catch: java.lang.Throwable -> L2ce
            r2.<init>()     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r0)     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r0 = r0.a()     // Catch: java.lang.Throwable -> L2ce
            r2.b(r0)     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.j     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r0 = r0.a     // Catch: java.lang.Throwable -> L2ce
            r2.c(r0)     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r0 = com.xiaomi.push.service.bd.a()     // Catch: java.lang.Throwable -> L2ce
            r2.a(r0)     // Catch: java.lang.Throwable -> L2ce
            r2.a(r7)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.ao r1 = com.xiaomi.mipush.sdk.ao.a(r0)     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.push.hj r3 = com.xiaomi.push.hj.i     // Catch: java.lang.Throwable -> L2ce
            r4 = 0
            r5 = 0
            r6 = 0
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            addPullNotificationTime(r0)     // Catch: java.lang.Throwable -> L2ce
            goto L292
        L1b8:
            r2 = 6
            java.lang.String r2 = com.xiaomi.push.bp.a(r2)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r3 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.b r3 = com.xiaomi.mipush.sdk.b.a(r3)     // Catch: java.lang.Throwable -> L2ce
            r3.a()     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r3 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.b r3 = com.xiaomi.mipush.sdk.b.a(r3)     // Catch: java.lang.Throwable -> L2ce
            int r7 = com.xiaomi.mipush.sdk.Constants.a()     // Catch: java.lang.Throwable -> L2ce
            r3.a(r7)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r3 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.b r3 = com.xiaomi.mipush.sdk.b.a(r3)     // Catch: java.lang.Throwable -> L2ce
            r3.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.MiTinyDataClient$a r3 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a()     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r7 = "com.xiaomi.xmpushsdk.tinydataPending.appId"
            r3.b(r7)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r3 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            clearExtras(r3)     // Catch: java.lang.Throwable -> L2ce
            clearNotification(r18)     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.push.ij r3 = new com.xiaomi.push.ij     // Catch: java.lang.Throwable -> L2ce
            r3.<init>()     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r7 = com.xiaomi.push.service.bd.a()     // Catch: java.lang.Throwable -> L2ce
            r3.a(r7)     // Catch: java.lang.Throwable -> L2ce
            r3.b(r0)     // Catch: java.lang.Throwable -> L2ce
            r3.e(r1)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Throwable -> L2ce
            r3.d(r0)     // Catch: java.lang.Throwable -> L2ce
            r3.f(r2)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r1 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r0 = com.xiaomi.push.h.a(r0, r1)     // Catch: java.lang.Throwable -> L2ce
            r3.c(r0)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r1 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Throwable -> L2ce
            int r0 = com.xiaomi.push.h.a(r0, r1)     // Catch: java.lang.Throwable -> L2ce
            r3.b(r0)     // Catch: java.lang.Throwable -> L2ce
            r3.h(r8)     // Catch: java.lang.Throwable -> L2ce
            r3.a(r5)     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.push.hx r0 = com.xiaomi.push.hx.c     // Catch: java.lang.Throwable -> L2ce
            r3.a(r0)     // Catch: java.lang.Throwable -> L2ce
            boolean r0 = android.text.TextUtils.isEmpty(r22)     // Catch: java.lang.Throwable -> L2ce
            if (r0 != 0) goto L23f
            r0 = r22
            r3.g(r0)     // Catch: java.lang.Throwable -> L2ce
        L23f:
            boolean r0 = com.xiaomi.push.m.d()     // Catch: java.lang.Throwable -> L2ce
            if (r0 != 0) goto L272
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r0 = com.xiaomi.push.j.e(r0)     // Catch: java.lang.Throwable -> L2ce
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L2ce
            if (r1 != 0) goto L272
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2ce
            r1.<init>()     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r0 = com.xiaomi.push.bp.a(r0)     // Catch: java.lang.Throwable -> L2ce
            r1.append(r0)     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r0 = ","
            r1.append(r0)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r0 = com.xiaomi.push.j.h(r0)     // Catch: java.lang.Throwable -> L2ce
            r1.append(r0)     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L2ce
            r3.i(r0)     // Catch: java.lang.Throwable -> L2ce
        L272:
            int r0 = com.xiaomi.push.j.a()     // Catch: java.lang.Throwable -> L2ce
            if (r0 < 0) goto L27b
            r3.c(r0)     // Catch: java.lang.Throwable -> L2ce
        L27b:
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r0)     // Catch: java.lang.Throwable -> L2ce
            r0.a(r3, r4)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r1 = "mipush_extra"
            r2 = 4
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r1 = "mipush_registed"
            r0.getBoolean(r1, r6)     // Catch: java.lang.Throwable -> L2ce
        L292:
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            addRegRequestTime(r0)     // Catch: java.lang.Throwable -> L2ce
            scheduleOcVersionCheckJob()     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            scheduleDataCollectionJobs(r0)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            initEventPerfLogic(r0)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.av.a(r0)     // Catch: java.lang.Throwable -> L2ce
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Throwable -> L2ce
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L2ce
            if (r0 != 0) goto L2ca
            com.xiaomi.channel.commonutils.logger.LoggerInterface r0 = com.xiaomi.mipush.sdk.Logger.getUserLogger()     // Catch: java.lang.Throwable -> L2ce
            if (r0 == 0) goto L2c6
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.channel.commonutils.logger.LoggerInterface r1 = com.xiaomi.mipush.sdk.Logger.getUserLogger()     // Catch: java.lang.Throwable -> L2ce
            com.xiaomi.mipush.sdk.Logger.setLogger(r0, r1)     // Catch: java.lang.Throwable -> L2ce
        L2c6:
            r0 = 2
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L2ce
        L2ca:
            operateSyncAction(r18)     // Catch: java.lang.Throwable -> L2ce
            goto L2d2
        L2ce:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L2d2:
            return
    }

    private static void operateSyncAction(android.content.Context r3) {
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r0)
            com.xiaomi.mipush.sdk.au r1 = com.xiaomi.mipush.sdk.au.a
            java.lang.String r0 = r0.a(r1)
            java.lang.String r1 = "syncing"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L19
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            disablePush(r0)
        L19:
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r0)
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.b
            java.lang.String r0 = r0.a(r2)
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L30
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            enablePush(r0)
        L30:
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r0)
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.c
            java.lang.String r0 = r0.a(r2)
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L47
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            syncAssemblePushToken(r0)
        L47:
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r0)
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.d
            java.lang.String r0 = r0.a(r2)
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L5e
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            syncAssembleFCMPushToken(r0)
        L5e:
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r0)
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.e
            java.lang.String r0 = r0.a(r2)
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L73
            syncAssembleCOSPushToken(r3)
        L73:
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r0)
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.f
            java.lang.String r0 = r0.a(r2)
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L88
            syncAssembleFTOSPushToken(r3)
        L88:
            return
    }

    public static void pausePush(android.content.Context r6, java.lang.String r7) {
            r1 = 0
            r2 = 0
            r3 = 0
            r4 = 0
            r0 = r6
            r5 = r7
            setAcceptTime(r0, r1, r2, r3, r4, r5)
            return
    }

    static void reInitialize(android.content.Context r5, com.xiaomi.push.hx r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "re-register reason: "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.e(r0)
            r0 = 6
            java.lang.String r0 = com.xiaomi.push.bp.a(r0)
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r5)
            java.lang.String r1 = r1.a()
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r5)
            java.lang.String r2 = r2.b()
            com.xiaomi.mipush.sdk.b r3 = com.xiaomi.mipush.sdk.b.a(r5)
            r3.a()
            clearExtrasForInitialize(r5)
            clearNotification(r5)
            com.xiaomi.mipush.sdk.b r3 = com.xiaomi.mipush.sdk.b.a(r5)
            int r4 = com.xiaomi.mipush.sdk.Constants.a()
            r3.a(r4)
            com.xiaomi.mipush.sdk.b r3 = com.xiaomi.mipush.sdk.b.a(r5)
            r3.a(r1, r2, r0)
            com.xiaomi.push.ij r3 = new com.xiaomi.push.ij
            r3.<init>()
            java.lang.String r4 = com.xiaomi.push.service.bd.a()
            r3.a(r4)
            r3.b(r1)
            r3.e(r2)
            r3.f(r0)
            java.lang.String r0 = r5.getPackageName()
            r3.d(r0)
            java.lang.String r0 = r5.getPackageName()
            java.lang.String r0 = com.xiaomi.push.h.a(r5, r0)
            r3.c(r0)
            java.lang.String r0 = r5.getPackageName()
            int r0 = com.xiaomi.push.h.a(r5, r0)
            r3.b(r0)
            java.lang.String r0 = "4_9_0"
            r3.h(r0)
            r0 = 40090(0x9c9a, float:5.6178E-41)
            r3.a(r0)
            r3.a(r6)
            int r6 = com.xiaomi.push.j.a()
            if (r6 < 0) goto L91
            r3.c(r6)
        L91:
            com.xiaomi.mipush.sdk.ao r5 = com.xiaomi.mipush.sdk.ao.a(r5)
            r6 = 0
            r5.a(r3, r6)
            return
    }

    @java.lang.Deprecated
    public static void registerCrashHandler(java.lang.Thread.UncaughtExceptionHandler r0) {
            java.lang.Thread.setDefaultUncaughtExceptionHandler(r0)
            return
    }

    private static void registerNetworkReceiver(android.content.Context r4) {
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L22
            r0.<init>()     // Catch: java.lang.Throwable -> L22
            java.lang.String r1 = "android.net.conn.CONNECTIVITY_CHANGE"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L22
            java.lang.String r1 = "android.intent.category.DEFAULT"
            r0.addCategory(r1)     // Catch: java.lang.Throwable -> L22
            android.content.Context r1 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L22
            com.xiaomi.push.service.receivers.NetworkStatusReceiver r2 = new com.xiaomi.push.service.receivers.NetworkStatusReceiver     // Catch: java.lang.Throwable -> L22
            r3 = 0
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L22
            com.xiaomi.push.o.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L22
            java.lang.Class<com.xiaomi.push.service.receivers.NetworkStatusReceiver> r0 = com.xiaomi.push.service.receivers.NetworkStatusReceiver.class
            com.xiaomi.push.o.a(r4, r0)     // Catch: java.lang.Throwable -> L22
            goto L37
        L22:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "dynamic register network status receiver failed:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r4)
        L37:
            return
    }

    public static void registerPush(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            com.xiaomi.mipush.sdk.PushConfiguration r0 = new com.xiaomi.mipush.sdk.PushConfiguration
            r0.<init>()
            registerPush(r1, r2, r3, r0)
            return
    }

    public static void registerPush(android.content.Context r6, java.lang.String r7, java.lang.String r8, com.xiaomi.mipush.sdk.PushConfiguration r9) {
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            registerPush(r0, r1, r2, r3, r4, r5)
            return
    }

    private static void registerPush(android.content.Context r1, java.lang.String r2, java.lang.String r3, com.xiaomi.mipush.sdk.PushConfiguration r4, java.lang.String r5, com.xiaomi.mipush.sdk.MiPushClient.ICallbackResult r6) {
            java.lang.String r0 = "context"
            checkNotNull(r1, r0)
            java.lang.String r0 = "appID"
            checkNotNull(r2, r0)
            java.lang.String r0 = "appToken"
            checkNotNull(r3, r0)
            android.content.Context r0 = r1.getApplicationContext()
            com.xiaomi.mipush.sdk.MiPushClient.sContext = r0
            if (r0 != 0) goto L19
            com.xiaomi.mipush.sdk.MiPushClient.sContext = r1
        L19:
            android.content.Context r1 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            com.xiaomi.push.v.a(r1)
            boolean r0 = com.xiaomi.push.service.receivers.NetworkStatusReceiver.a()
            if (r0 != 0) goto L29
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            registerNetworkReceiver(r0)
        L29:
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            com.xiaomi.mipush.sdk.f r0 = com.xiaomi.mipush.sdk.f.a(r0)
            r0.a(r4)
            com.xiaomi.push.al r1 = com.xiaomi.push.al.a(r1)
            com.xiaomi.mipush.sdk.MiPushClient$1 r4 = new com.xiaomi.mipush.sdk.MiPushClient$1
            r4.<init>(r2, r3, r5, r6)
            r1.a(r4)
            return
    }

    public static void registerPush(android.content.Context r6, java.lang.String r7, java.lang.String r8, java.lang.String r9) {
            com.xiaomi.mipush.sdk.PushConfiguration r3 = new com.xiaomi.mipush.sdk.PushConfiguration
            r3.<init>()
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r9
            registerPush(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void registerToken(android.content.Context r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, com.xiaomi.mipush.sdk.MiPushClient.UPSRegisterCallBack r10) {
            com.xiaomi.mipush.sdk.PushConfiguration r3 = new com.xiaomi.mipush.sdk.PushConfiguration
            r3.<init>()
            r4 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r5 = r10
            registerPush(r0, r1, r2, r3, r4, r5)
            return
    }

    static synchronized void removeAcceptTime(android.content.Context r3) {
            java.lang.Class<com.xiaomi.mipush.sdk.MiPushClient> r0 = com.xiaomi.mipush.sdk.MiPushClient.class
            monitor-enter(r0)
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L18
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L18
            java.lang.String r1 = "accept_time"
            r3.remove(r1)     // Catch: java.lang.Throwable -> L18
            com.xiaomi.push.t.a(r3)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)
            return
        L18:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static synchronized void removeAccount(android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.xiaomi.mipush.sdk.MiPushClient> r0 = com.xiaomi.mipush.sdk.MiPushClient.class
            monitor-enter(r0)
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L28
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L28
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L28
            r1.<init>()     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = "account_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L28
            r1.append(r4)     // Catch: java.lang.Throwable -> L28
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L28
            android.content.SharedPreferences$Editor r3 = r3.remove(r4)     // Catch: java.lang.Throwable -> L28
            r3.commit()     // Catch: java.lang.Throwable -> L28
            monitor-exit(r0)
            return
        L28:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static synchronized void removeAlias(android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.xiaomi.mipush.sdk.MiPushClient> r0 = com.xiaomi.mipush.sdk.MiPushClient.class
            monitor-enter(r0)
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L28
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L28
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L28
            r1.<init>()     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = "alias_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L28
            r1.append(r4)     // Catch: java.lang.Throwable -> L28
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L28
            android.content.SharedPreferences$Editor r3 = r3.remove(r4)     // Catch: java.lang.Throwable -> L28
            r3.commit()     // Catch: java.lang.Throwable -> L28
            monitor-exit(r0)
            return
        L28:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static synchronized void removeAllAccounts(android.content.Context r3) {
            java.lang.Class<com.xiaomi.mipush.sdk.MiPushClient> r0 = com.xiaomi.mipush.sdk.MiPushClient.class
            monitor-enter(r0)
            java.util.List r1 = getAllUserAccount(r3)     // Catch: java.lang.Throwable -> L1d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L1d
        Lb:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L1d
            removeAccount(r3, r2)     // Catch: java.lang.Throwable -> L1d
            goto Lb
        L1b:
            monitor-exit(r0)
            return
        L1d:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static synchronized void removeAllAliases(android.content.Context r3) {
            java.lang.Class<com.xiaomi.mipush.sdk.MiPushClient> r0 = com.xiaomi.mipush.sdk.MiPushClient.class
            monitor-enter(r0)
            java.util.List r1 = getAllAlias(r3)     // Catch: java.lang.Throwable -> L1d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L1d
        Lb:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L1d
            removeAlias(r3, r2)     // Catch: java.lang.Throwable -> L1d
            goto Lb
        L1b:
            monitor-exit(r0)
            return
        L1d:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static synchronized void removeAllTopics(android.content.Context r3) {
            java.lang.Class<com.xiaomi.mipush.sdk.MiPushClient> r0 = com.xiaomi.mipush.sdk.MiPushClient.class
            monitor-enter(r0)
            java.util.List r1 = getAllTopic(r3)     // Catch: java.lang.Throwable -> L1d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L1d
        Lb:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L1d
            removeTopic(r3, r2)     // Catch: java.lang.Throwable -> L1d
            goto Lb
        L1b:
            monitor-exit(r0)
            return
        L1d:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static synchronized void removeTopic(android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.xiaomi.mipush.sdk.MiPushClient> r0 = com.xiaomi.mipush.sdk.MiPushClient.class
            monitor-enter(r0)
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L28
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L28
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L28
            r1.<init>()     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = "topic_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L28
            r1.append(r4)     // Catch: java.lang.Throwable -> L28
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L28
            android.content.SharedPreferences$Editor r3 = r3.remove(r4)     // Catch: java.lang.Throwable -> L28
            r3.commit()     // Catch: java.lang.Throwable -> L28
            monitor-exit(r0)
            return
        L28:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static void removeWindow(android.content.Context r0) {
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r0)
            r0.e()
            return
    }

    public static void reportAppRunInBackground(android.content.Context r6, boolean r7) {
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r6)
            boolean r0 = r0.b()
            if (r0 != 0) goto Lb
            return
        Lb:
            if (r7 == 0) goto L10
            com.xiaomi.push.ht r7 = com.xiaomi.push.ht.R
            goto L12
        L10:
            com.xiaomi.push.ht r7 = com.xiaomi.push.ht.Q
        L12:
            com.xiaomi.push.ii r1 = new com.xiaomi.push.ii
            r1.<init>()
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r6)
            java.lang.String r0 = r0.a()
            r1.b(r0)
            java.lang.String r7 = r7.a
            r1.c(r7)
            java.lang.String r7 = r6.getPackageName()
            r1.d(r7)
            java.lang.String r7 = com.xiaomi.push.service.bd.a()
            r1.a(r7)
            r7 = 0
            r1.a(r7)
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r6)
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.i
            r3 = 0
            r4 = 0
            r5 = 0
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    static void reportIgnoreRegMessageClicked(android.content.Context r9, java.lang.String r10, com.xiaomi.push.hw r11, java.lang.String r12, java.lang.String r13) {
            com.xiaomi.push.ii r1 = new com.xiaomi.push.ii
            r1.<init>()
            boolean r0 = android.text.TextUtils.isEmpty(r13)
            if (r0 == 0) goto L11
            java.lang.String r9 = "do not report clicked message"
            com.xiaomi.channel.commonutils.logger.b.d(r9)
            return
        L11:
            r1.b(r13)
            java.lang.String r0 = "bar:click"
            r1.c(r0)
            r1.a(r10)
            r10 = 0
            r1.a(r10)
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r9)
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.i
            r3 = 0
            r4 = 1
            r6 = 1
            r5 = r11
            r7 = r12
            r8 = r13
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public static void reportMessageClicked(android.content.Context r2, com.xiaomi.mipush.sdk.MiPushMessage r3) {
            com.xiaomi.push.hw r0 = new com.xiaomi.push.hw
            r0.<init>()
            java.lang.String r1 = r3.getMessageId()
            r0.a(r1)
            java.lang.String r1 = r3.getTopic()
            r0.b(r1)
            java.lang.String r1 = r3.getDescription()
            r0.d(r1)
            java.lang.String r1 = r3.getTitle()
            r0.c(r1)
            int r1 = r3.getNotifyId()
            r0.c(r1)
            int r1 = r3.getNotifyType()
            r0.a(r1)
            int r1 = r3.getPassThrough()
            r0.b(r1)
            java.util.Map r1 = r3.getExtra()
            r0.a(r1)
            java.lang.String r3 = r3.getMessageId()
            r1 = 0
            reportMessageClicked(r2, r3, r0, r1)
            return
    }

    @java.lang.Deprecated
    public static void reportMessageClicked(android.content.Context r1, java.lang.String r2) {
            r0 = 0
            reportMessageClicked(r1, r2, r0, r0)
            return
    }

    static void reportMessageClicked(android.content.Context r2, java.lang.String r3, com.xiaomi.push.hw r4, java.lang.String r5) {
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto L24
            com.xiaomi.mipush.sdk.b r5 = com.xiaomi.mipush.sdk.b.a(r2)
            boolean r5 = r5.b()
            if (r5 == 0) goto L1e
            com.xiaomi.mipush.sdk.b r5 = com.xiaomi.mipush.sdk.b.a(r2)
            java.lang.String r5 = r5.a()
            goto L24
        L1e:
            java.lang.String r2 = "do not report clicked message"
            com.xiaomi.channel.commonutils.logger.b.d(r2)
            return
        L24:
            r0.b(r5)
            java.lang.String r5 = "bar:click"
            r0.c(r5)
            r0.a(r3)
            r3 = 0
            r0.a(r3)
            com.xiaomi.mipush.sdk.ao r2 = com.xiaomi.mipush.sdk.ao.a(r2)
            com.xiaomi.push.hj r5 = com.xiaomi.push.hj.i
            r2.a(r0, r5, r3, r4)
            return
    }

    public static void resumePush(android.content.Context r6, java.lang.String r7) {
            r1 = 0
            r2 = 0
            r3 = 23
            r4 = 59
            r0 = r6
            r5 = r7
            setAcceptTime(r0, r1, r2, r3, r4, r5)
            return
    }

    private static void scheduleDataCollectionJobs(android.content.Context r3) {
            com.xiaomi.push.ho r0 = com.xiaomi.push.ho.z
            int r0 = r0.a()
            android.content.Context r1 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            com.xiaomi.push.service.ba r1 = com.xiaomi.push.service.ba.a(r1)
            boolean r2 = getDefaultSwitch()
            boolean r0 = r1.a(r0, r2)
            if (r0 == 0) goto L32
            com.xiaomi.push.dn r0 = com.xiaomi.push.dn.a()
            com.xiaomi.mipush.sdk.r r1 = new com.xiaomi.mipush.sdk.r
            r1.<init>(r3)
            r0.a(r1)
            android.content.Context r3 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            com.xiaomi.push.al r3 = com.xiaomi.push.al.a(r3)
            com.xiaomi.mipush.sdk.MiPushClient$2 r0 = new com.xiaomi.mipush.sdk.MiPushClient$2
            r0.<init>()
            r1 = 10
            r3.a(r0, r1)
        L32:
            return
    }

    private static void scheduleOcVersionCheckJob() {
            android.content.Context r0 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r0)
            com.xiaomi.push.ho r1 = com.xiaomi.push.ho.A
            int r1 = r1.a()
            r2 = 86400(0x15180, float:1.21072E-40)
            int r0 = r0.a(r1, r2)
            android.content.Context r1 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            com.xiaomi.push.al r1 = com.xiaomi.push.al.a(r1)
            com.xiaomi.mipush.sdk.ae r2 = new com.xiaomi.mipush.sdk.ae
            android.content.Context r3 = com.xiaomi.mipush.sdk.MiPushClient.sContext
            r2.<init>(r3)
            r3 = 5
            r1.a(r2, r0, r3)
            return
    }

    public static void setAcceptTime(android.content.Context r23, int r24, int r25, int r26, int r27, java.lang.String r28) {
            r0 = r23
            r1 = r24
            r2 = r25
            r3 = r26
            r4 = r27
            if (r1 < 0) goto Lfa
            r5 = 24
            if (r1 >= r5) goto Lfa
            if (r3 < 0) goto Lfa
            if (r3 >= r5) goto Lfa
            if (r2 < 0) goto Lfa
            r5 = 60
            if (r2 >= r5) goto Lfa
            if (r4 < 0) goto Lfa
            if (r4 >= r5) goto Lfa
            java.lang.String r6 = "GMT+08"
            java.util.TimeZone r6 = java.util.TimeZone.getTimeZone(r6)
            java.util.TimeZone r7 = java.util.TimeZone.getDefault()
            r8 = 1440(0x5a0, double:7.115E-321)
            int r6 = r6.getRawOffset()
            int r7 = r7.getRawOffset()
            int r6 = r6 - r7
            int r6 = r6 / 1000
            int r6 = r6 / r5
            long r5 = (long) r6
            int r7 = r1 * 60
            int r7 = r7 + r2
            long r10 = (long) r7
            long r10 = r10 + r5
            long r10 = r10 + r8
            long r10 = r10 % r8
            int r7 = r3 * 60
            int r7 = r7 + r4
            long r12 = (long) r7
            long r12 = r12 + r5
            long r12 = r12 + r8
            long r12 = r12 % r8
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r6 = 2
            java.lang.Object[] r7 = new java.lang.Object[r6]
            r8 = 60
            long r14 = r10 / r8
            java.lang.Long r14 = java.lang.Long.valueOf(r14)
            r15 = 0
            r7[r15] = r14
            long r10 = r10 % r8
            java.lang.Long r10 = java.lang.Long.valueOf(r10)
            r11 = 1
            r7[r11] = r10
            java.lang.String r10 = "%1$02d:%2$02d"
            java.lang.String r7 = java.lang.String.format(r10, r7)
            r5.add(r7)
            java.lang.Object[] r7 = new java.lang.Object[r6]
            long r16 = r12 / r8
            java.lang.Long r14 = java.lang.Long.valueOf(r16)
            r7[r15] = r14
            long r12 = r12 % r8
            java.lang.Long r8 = java.lang.Long.valueOf(r12)
            r7[r11] = r8
            java.lang.String r7 = java.lang.String.format(r10, r7)
            r5.add(r7)
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            java.lang.Object[] r8 = new java.lang.Object[r6]
            java.lang.Integer r1 = java.lang.Integer.valueOf(r24)
            r8[r15] = r1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r25)
            r8[r11] = r1
            java.lang.String r1 = java.lang.String.format(r10, r8)
            r7.add(r1)
            java.lang.Object[] r1 = new java.lang.Object[r6]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r26)
            r1[r15] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r27)
            r1[r11] = r2
            java.lang.String r1 = java.lang.String.format(r10, r1)
            r7.add(r1)
            java.lang.Object r1 = r5.get(r15)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r2 = r5.get(r11)
            java.lang.String r2 = (java.lang.String) r2
            boolean r1 = acceptTimeSet(r0, r1, r2)
            if (r1 == 0) goto Lf0
            int r1 = com.xiaomi.mipush.sdk.PushMessageHelper.getPushMode(r23)
            if (r11 != r1) goto Ld8
            com.xiaomi.push.ey r1 = com.xiaomi.push.ey.i
            java.lang.String r2 = r1.a
            r3 = 0
            r5 = 0
            r0 = r23
            r1 = r28
            r6 = r7
            com.xiaomi.mipush.sdk.PushMessageHandler.a(r0, r1, r2, r3, r5, r6)
            goto Lf9
        Ld8:
            com.xiaomi.push.ey r1 = com.xiaomi.push.ey.i
            java.lang.String r1 = r1.a
            r18 = 0
            r20 = 0
            r21 = 0
            r22 = 0
            r16 = r1
            r17 = r7
            com.xiaomi.mipush.sdk.MiPushCommandMessage r1 = com.xiaomi.mipush.sdk.PushMessageHelper.generateCommandMessage(r16, r17, r18, r20, r21, r22)
            com.xiaomi.mipush.sdk.PushMessageHelper.sendCommandMessageBroadcast(r0, r1)
            goto Lf9
        Lf0:
            com.xiaomi.push.ey r1 = com.xiaomi.push.ey.i
            java.lang.String r1 = r1.a
            r2 = r28
            setCommand(r0, r1, r5, r2)
        Lf9:
            return
        Lfa:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "the input parameter is not valid."
            r0.<init>(r1)
            throw r0
    }

    public static void setAlias(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Ld
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.c
            java.lang.String r0 = r0.a
            setCommand(r1, r0, r2, r3)
        Ld:
            return
    }

    protected static void setCommand(android.content.Context r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) {
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            boolean r0 = android.text.TextUtils.isEmpty(r13)
            if (r0 != 0) goto Le
            r6.add(r13)
        Le:
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.c
            java.lang.String r0 = r0.a
            boolean r0 = r0.equalsIgnoreCase(r12)
            r1 = 1
            if (r0 == 0) goto L52
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = aliasSetTime(r11, r13)
            long r2 = r2 - r4
            long r2 = java.lang.Math.abs(r2)
            r4 = 86400000(0x5265c00, double:4.2687272E-316)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 >= 0) goto L52
            int r13 = com.xiaomi.mipush.sdk.PushMessageHelper.getPushMode(r11)
            if (r1 != r13) goto L3e
        L33:
            r3 = 0
            r5 = 0
            r0 = r11
            r1 = r14
            r2 = r12
            com.xiaomi.mipush.sdk.PushMessageHandler.a(r0, r1, r2, r3, r5, r6)
            goto Lce
        L3e:
            com.xiaomi.push.ey r12 = com.xiaomi.push.ey.c
        L40:
            java.lang.String r0 = r12.a
            r2 = 0
            r4 = 0
            r12 = 0
            r1 = r6
            r5 = r14
            r6 = r12
            com.xiaomi.mipush.sdk.MiPushCommandMessage r12 = com.xiaomi.mipush.sdk.PushMessageHelper.generateCommandMessage(r0, r1, r2, r4, r5, r6)
            com.xiaomi.mipush.sdk.PushMessageHelper.sendCommandMessageBroadcast(r11, r12)
            goto Lce
        L52:
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.d
            java.lang.String r0 = r0.a
            boolean r0 = r0.equalsIgnoreCase(r12)
            java.lang.String r2 = " is unseted"
            r3 = 3
            r4 = 0
            if (r0 == 0) goto L89
            long r7 = aliasSetTime(r11, r13)
            int r0 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r0 >= 0) goto L89
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "Don't cancel alias for "
        L70:
            r11.append(r12)
            java.lang.String r12 = r6.toString()
            java.lang.String r12 = com.xiaomi.push.bp.a(r12, r3)
            r11.append(r12)
            r11.append(r2)
            java.lang.String r11 = r11.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r11)
            goto Lce
        L89:
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.e
            java.lang.String r0 = r0.a
            boolean r0 = r0.equalsIgnoreCase(r12)
            if (r0 == 0) goto Lb1
            long r7 = java.lang.System.currentTimeMillis()
            long r9 = accountSetTime(r11, r13)
            long r7 = r7 - r9
            long r7 = java.lang.Math.abs(r7)
            r9 = 3600000(0x36ee80, double:1.7786363E-317)
            int r0 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r0 >= 0) goto Lb1
            int r13 = com.xiaomi.mipush.sdk.PushMessageHelper.getPushMode(r11)
            if (r1 != r13) goto Lae
            goto L33
        Lae:
            com.xiaomi.push.ey r12 = com.xiaomi.push.ey.e
            goto L40
        Lb1:
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.f
            java.lang.String r0 = r0.a
            boolean r0 = r0.equalsIgnoreCase(r12)
            if (r0 == 0) goto Lcb
            long r0 = accountSetTime(r11, r13)
            int r13 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r13 >= 0) goto Lcb
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "Don't cancel account for "
            goto L70
        Lcb:
            setCommand(r11, r12, r6, r14)
        Lce:
            return
    }

    protected static void setCommand(android.content.Context r3, java.lang.String r4, java.util.ArrayList<java.lang.String> r5, java.lang.String r6) {
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r3)
            java.lang.String r0 = r0.a()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lf
            return
        Lf:
            com.xiaomi.push.id r0 = new com.xiaomi.push.id
            r0.<init>()
            java.lang.String r1 = com.xiaomi.push.service.bd.a()
            r0.a(r1)
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r3)
            java.lang.String r2 = r2.a()
            r0.b(r2)
            r0.c(r4)
            java.util.Iterator r5 = r5.iterator()
        L2d:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L3d
            java.lang.Object r2 = r5.next()
            java.lang.String r2 = (java.lang.String) r2
            r0.a(r2)
            goto L2d
        L3d:
            r0.e(r6)
            java.lang.String r5 = r3.getPackageName()
            r0.d(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "cmd:"
            r5.append(r6)
            r5.append(r4)
            java.lang.String r4 = ", "
            r5.append(r4)
            r5.append(r1)
            java.lang.String r4 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.e(r4)
            com.xiaomi.mipush.sdk.ao r3 = com.xiaomi.mipush.sdk.ao.a(r3)
            com.xiaomi.push.hj r4 = com.xiaomi.push.hj.j
            r5 = 0
            r3.a(r0, r4, r5)
            return
    }

    public static void setLocalNotificationType(android.content.Context r0, int r1) {
            r1 = r1 & (-1)
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r0)
            r0.b(r1)
            return
    }

    public static void setUserAccount(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Ld
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.e
            java.lang.String r0 = r0.a
            setCommand(r1, r0, r2, r3)
        Ld:
            return
    }

    private static boolean shouldPullNotification(android.content.Context r6) {
            r0 = 0
            java.lang.String r1 = "mipush_extra"
            android.content.SharedPreferences r6 = r6.getSharedPreferences(r1, r0)
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r3 = "last_pull_notification"
            r4 = -1
            long r3 = r6.getLong(r3, r4)
            long r1 = r1 - r3
            long r1 = java.lang.Math.abs(r1)
            r3 = 300000(0x493e0, double:1.482197E-318)
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 <= 0) goto L20
            r0 = 1
        L20:
            return r0
    }

    private static boolean shouldSendRegRequest(android.content.Context r6) {
            r0 = 0
            java.lang.String r1 = "mipush_extra"
            android.content.SharedPreferences r6 = r6.getSharedPreferences(r1, r0)
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r3 = "last_reg_request"
            r4 = -1
            long r3 = r6.getLong(r3, r4)
            long r1 = r1 - r3
            long r1 = java.lang.Math.abs(r1)
            r3 = 5000(0x1388, double:2.4703E-320)
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 <= 0) goto L1f
            r0 = 1
        L1f:
            return r0
    }

    public static boolean shouldUseMIUIPush(android.content.Context r0) {
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r0)
            boolean r0 = r0.a()
            return r0
    }

    public static void subscribe(android.content.Context r14, java.lang.String r15, java.lang.String r16) {
            r5 = r15
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r14)
            java.lang.String r0 = r0.a()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto La9
            boolean r0 = android.text.TextUtils.isEmpty(r15)
            if (r0 == 0) goto L17
            goto La9
        L17:
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = topicSubscribedTime(r14, r15)
            long r0 = r0 - r2
            long r0 = java.lang.Math.abs(r0)
            r2 = 86400000(0x5265c00, double:4.2687272E-316)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L7a
            com.xiaomi.push.in r0 = new com.xiaomi.push.in
            r0.<init>()
            java.lang.String r1 = com.xiaomi.push.service.bd.a()
            r0.a(r1)
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r14)
            java.lang.String r2 = r2.a()
            r0.b(r2)
            r0.c(r15)
            java.lang.String r2 = r14.getPackageName()
            r0.d(r2)
            r2 = r16
            r0.e(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "cmd:"
            r2.append(r3)
            com.xiaomi.push.ey r3 = com.xiaomi.push.ey.g
            r2.append(r3)
            java.lang.String r3 = ", "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.e(r1)
            com.xiaomi.mipush.sdk.ao r1 = com.xiaomi.mipush.sdk.ao.a(r14)
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.c
            r3 = 0
            r1.a(r0, r2, r3)
            goto La9
        L7a:
            r2 = r16
            r0 = 1
            int r1 = com.xiaomi.mipush.sdk.PushMessageHelper.getPushMode(r14)
            if (r0 != r1) goto L90
            r3 = 0
            r6 = 0
            r0 = r14
            r1 = r16
            r2 = r3
            r4 = r6
            r5 = r15
            com.xiaomi.mipush.sdk.PushMessageHandler.a(r0, r1, r2, r4, r5)
            goto La9
        L90:
            java.util.ArrayList r8 = new java.util.ArrayList
            r8.<init>()
            r8.add(r15)
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.g
            java.lang.String r7 = r0.a
            r9 = 0
            r11 = 0
            r12 = 0
            r13 = 0
            com.xiaomi.mipush.sdk.MiPushCommandMessage r0 = com.xiaomi.mipush.sdk.PushMessageHelper.generateCommandMessage(r7, r8, r9, r11, r12, r13)
            r1 = r14
            com.xiaomi.mipush.sdk.PushMessageHelper.sendCommandMessageBroadcast(r14, r0)
        La9:
            return
    }

    public static void syncAssembleCOSPushToken(android.content.Context r3) {
            com.xiaomi.mipush.sdk.ao r3 = com.xiaomi.mipush.sdk.ao.a(r3)
            com.xiaomi.mipush.sdk.au r0 = com.xiaomi.mipush.sdk.au.e
            com.xiaomi.mipush.sdk.e r1 = com.xiaomi.mipush.sdk.e.c
            r2 = 0
            r3.a(r2, r0, r1)
            return
    }

    public static void syncAssembleFCMPushToken(android.content.Context r3) {
            com.xiaomi.mipush.sdk.ao r3 = com.xiaomi.mipush.sdk.ao.a(r3)
            com.xiaomi.mipush.sdk.au r0 = com.xiaomi.mipush.sdk.au.d
            com.xiaomi.mipush.sdk.e r1 = com.xiaomi.mipush.sdk.e.b
            r2 = 0
            r3.a(r2, r0, r1)
            return
    }

    public static void syncAssembleFTOSPushToken(android.content.Context r3) {
            com.xiaomi.mipush.sdk.ao r3 = com.xiaomi.mipush.sdk.ao.a(r3)
            com.xiaomi.mipush.sdk.au r0 = com.xiaomi.mipush.sdk.au.f
            com.xiaomi.mipush.sdk.e r1 = com.xiaomi.mipush.sdk.e.d
            r2 = 0
            r3.a(r2, r0, r1)
            return
    }

    public static void syncAssemblePushToken(android.content.Context r3) {
            com.xiaomi.mipush.sdk.ao r3 = com.xiaomi.mipush.sdk.ao.a(r3)
            com.xiaomi.mipush.sdk.au r0 = com.xiaomi.mipush.sdk.au.c
            com.xiaomi.mipush.sdk.e r1 = com.xiaomi.mipush.sdk.e.a
            r2 = 0
            r3.a(r2, r0, r1)
            return
    }

    public static long topicSubscribedTime(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "mipush_extra"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "topic_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = -1
            long r2 = r2.getLong(r3, r0)
            return r2
    }

    public static void turnOffPush(android.content.Context r2, com.xiaomi.mipush.sdk.MiPushClient.UPSTurnCallBack r3) {
            disablePush(r2)
            if (r3 == 0) goto L15
            com.xiaomi.mipush.sdk.MiPushClient$CodeResult r2 = new com.xiaomi.mipush.sdk.MiPushClient$CodeResult
            r2.<init>()
            r0 = 0
            r2.setResultCode(r0)
            r2.getResultCode()
            r3.onResult(r2)
        L15:
            return
    }

    public static void turnOnPush(android.content.Context r2, com.xiaomi.mipush.sdk.MiPushClient.UPSTurnCallBack r3) {
            enablePush(r2)
            if (r3 == 0) goto L15
            com.xiaomi.mipush.sdk.MiPushClient$CodeResult r2 = new com.xiaomi.mipush.sdk.MiPushClient$CodeResult
            r2.<init>()
            r0 = 0
            r2.setResultCode(r0)
            r2.getResultCode()
            r3.onResult(r2)
        L15:
            return
    }

    public static void unRegisterToken(android.content.Context r2, com.xiaomi.mipush.sdk.MiPushClient.UPSUnRegisterCallBack r3) {
            unregisterPush(r2)
            if (r3 == 0) goto L1c
            com.xiaomi.mipush.sdk.MiPushClient$TokenResult r2 = new com.xiaomi.mipush.sdk.MiPushClient$TokenResult
            r2.<init>()
            r0 = 0
            r2.setToken(r0)
            r2.getToken()
            r0 = 0
            r2.setResultCode(r0)
            r2.getResultCode()
            r3.onResult(r2)
        L1c:
            return
    }

    public static void unregisterPush(android.content.Context r2) {
            com.xiaomi.mipush.sdk.i.c(r2)
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r2)
            r0.a()
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r2)
            boolean r0 = r0.b()
            if (r0 != 0) goto L15
            return
        L15:
            com.xiaomi.push.ip r0 = new com.xiaomi.push.ip
            r0.<init>()
            java.lang.String r1 = com.xiaomi.push.service.bd.a()
            r0.a(r1)
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r2)
            java.lang.String r1 = r1.a()
            r0.b(r1)
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r2)
            java.lang.String r1 = r1.c()
            r0.c(r1)
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r2)
            java.lang.String r1 = r1.b()
            r0.e(r1)
            java.lang.String r1 = r2.getPackageName()
            r0.d(r1)
            com.xiaomi.mipush.sdk.ao r1 = com.xiaomi.mipush.sdk.ao.a(r2)
            r1.a(r0)
            com.xiaomi.mipush.sdk.PushMessageHandler.a()
            com.xiaomi.mipush.sdk.PushMessageHandler.b()
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r2)
            r0.b()
            clearLocalNotificationType(r2)
            clearNotification(r2)
            clearExtras(r2)
            return
    }

    public static void unsetAlias(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.d
            java.lang.String r0 = r0.a
            setCommand(r1, r0, r2, r3)
            return
    }

    public static void unsetUserAccount(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.f
            java.lang.String r0 = r0.a
            setCommand(r1, r0, r2, r3)
            return
    }

    public static void unsubscribe(android.content.Context r4, java.lang.String r5, java.lang.String r6) {
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r4)
            boolean r0 = r0.b()
            if (r0 != 0) goto Lb
            return
        Lb:
            long r0 = topicSubscribedTime(r4, r5)
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L2f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "Don't cancel subscribe for "
            r4.append(r6)
            r4.append(r5)
            java.lang.String r5 = " is unsubscribed"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            return
        L2f:
            com.xiaomi.push.ir r0 = new com.xiaomi.push.ir
            r0.<init>()
            java.lang.String r1 = com.xiaomi.push.service.bd.a()
            r0.a(r1)
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r4)
            java.lang.String r2 = r2.a()
            r0.b(r2)
            r0.c(r5)
            java.lang.String r5 = r4.getPackageName()
            r0.d(r5)
            r0.e(r6)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "cmd:"
            r5.append(r6)
            com.xiaomi.push.ey r6 = com.xiaomi.push.ey.h
            r5.append(r6)
            java.lang.String r6 = ", "
            r5.append(r6)
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.e(r5)
            com.xiaomi.mipush.sdk.ao r4 = com.xiaomi.mipush.sdk.ao.a(r4)
            com.xiaomi.push.hj r5 = com.xiaomi.push.hj.d
            r6 = 0
            r4.a(r0, r5, r6)
            return
    }

    private static void updateImeiOrOaid() {
            java.lang.Thread r0 = new java.lang.Thread
            com.xiaomi.mipush.sdk.MiPushClient$3 r1 = new com.xiaomi.mipush.sdk.MiPushClient$3
            r1.<init>()
            r0.<init>(r1)
            r0.start()
            return
    }
}
