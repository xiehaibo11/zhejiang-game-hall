package net.grandcentrix.tray.provider;

public class ContentProviderStorage extends net.grandcentrix.tray.core.TrayStorage {
    public static final java.lang.String VERSION = "version";
    private final android.content.Context mContext;

    @android.support.annotation.VisibleForTesting
    java.util.WeakHashMap<net.grandcentrix.tray.core.OnTrayPreferenceChangeListener, android.os.Handler> mListeners;

    @android.support.annotation.VisibleForTesting
    net.grandcentrix.tray.provider.ContentProviderStorage.b mObserver;

    @android.support.annotation.VisibleForTesting
    android.os.HandlerThread mObserverThread;
    private final net.grandcentrix.tray.provider.TrayProviderHelper mProviderHelper;
    private volatile boolean mRegisteredContentObserver;
    private final net.grandcentrix.tray.provider.TrayUri mTrayUri;

    class a extends android.os.HandlerThread {
        final net.grandcentrix.tray.provider.ContentProviderStorage a;

        a(net.grandcentrix.tray.provider.ContentProviderStorage r1, java.lang.String r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        @Override
        protected void onLooperPrepared() {
                r4 = this;
                super.onLooperPrepared()
                net.grandcentrix.tray.provider.ContentProviderStorage r0 = r4.a
                net.grandcentrix.tray.provider.ContentProviderStorage$b r1 = new net.grandcentrix.tray.provider.ContentProviderStorage$b
                android.os.Handler r2 = new android.os.Handler
                android.os.Looper r3 = r4.getLooper()
                r2.<init>(r3)
                r1.<init>(r0, r2)
                r0.mObserver = r1
                net.grandcentrix.tray.provider.ContentProviderStorage r0 = r4.a
                net.grandcentrix.tray.provider.TrayUri r0 = net.grandcentrix.tray.provider.ContentProviderStorage.access$000(r0)
                net.grandcentrix.tray.provider.TrayUri$a r0 = r0.builder()
                net.grandcentrix.tray.provider.ContentProviderStorage r1 = r4.a
                net.grandcentrix.tray.core.TrayStorage$a r1 = r1.getType()
                r0.a(r1)
                net.grandcentrix.tray.provider.ContentProviderStorage r1 = r4.a
                java.lang.String r1 = r1.getModuleName()
                r0.b(r1)
                android.net.Uri r0 = r0.a()
                net.grandcentrix.tray.provider.ContentProviderStorage r1 = r4.a
                android.content.Context r1 = net.grandcentrix.tray.provider.ContentProviderStorage.access$200(r1)
                android.content.ContentResolver r1 = r1.getContentResolver()
                net.grandcentrix.tray.provider.ContentProviderStorage r2 = r4.a
                net.grandcentrix.tray.provider.ContentProviderStorage$b r2 = r2.mObserver
                r3 = 1
                r1.registerContentObserver(r0, r3, r2)
                net.grandcentrix.tray.provider.ContentProviderStorage r1 = r4.a
                net.grandcentrix.tray.provider.ContentProviderStorage.access$302(r1, r3)
                return
        }
    }

    @android.support.annotation.VisibleForTesting
    class b extends android.database.ContentObserver {
        final net.grandcentrix.tray.provider.ContentProviderStorage a;

        class a implements java.lang.Runnable {
            final net.grandcentrix.tray.core.OnTrayPreferenceChangeListener a;
            final java.util.List b;

            a(net.grandcentrix.tray.provider.ContentProviderStorage.b r1, net.grandcentrix.tray.core.OnTrayPreferenceChangeListener r2, java.util.List r3) {
                    r0 = this;
                    r0.a = r2
                    r0.b = r3
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r2 = this;
                    net.grandcentrix.tray.core.OnTrayPreferenceChangeListener r0 = r2.a
                    java.util.List r1 = r2.b
                    r0.onTrayPreferenceChanged(r1)
                    return
            }
        }

        public b(@android.support.annotation.NonNull net.grandcentrix.tray.provider.ContentProviderStorage r1, android.os.Handler r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        @Override
        public void onChange(boolean r2) {
                r1 = this;
                r0 = 0
                r1.onChange(r2, r0)
                return
        }

        @Override
        public void onChange(boolean r8, android.net.Uri r9) {
                r7 = this;
                if (r9 != 0) goto L19
                net.grandcentrix.tray.provider.ContentProviderStorage r0 = r7.a
                net.grandcentrix.tray.provider.TrayUri r0 = net.grandcentrix.tray.provider.ContentProviderStorage.access$000(r0)
                net.grandcentrix.tray.provider.TrayUri$a r0 = r0.builder()
                net.grandcentrix.tray.provider.ContentProviderStorage r1 = r7.a
                java.lang.String r1 = r1.getModuleName()
                r0.b(r1)
                android.net.Uri r9 = r0.a()
            L19:
                net.grandcentrix.tray.provider.ContentProviderStorage r0 = r7.a
                net.grandcentrix.tray.provider.TrayProviderHelper r0 = net.grandcentrix.tray.provider.ContentProviderStorage.access$100(r0)
                java.util.List r0 = r0.queryProviderSafe(r9)
                java.util.HashSet r1 = new java.util.HashSet
                net.grandcentrix.tray.provider.ContentProviderStorage r2 = r7.a
                java.util.WeakHashMap<net.grandcentrix.tray.core.OnTrayPreferenceChangeListener, android.os.Handler> r2 = r2.mListeners
                java.util.Set r2 = r2.entrySet()
                r1.<init>(r2)
                java.util.Iterator r2 = r1.iterator()
            L34:
                boolean r3 = r2.hasNext()
                if (r3 == 0) goto L5b
                java.lang.Object r3 = r2.next()
                java.util.Map$Entry r3 = (java.util.Map.Entry) r3
                java.lang.Object r4 = r3.getKey()
                net.grandcentrix.tray.core.OnTrayPreferenceChangeListener r4 = (net.grandcentrix.tray.core.OnTrayPreferenceChangeListener) r4
                java.lang.Object r5 = r3.getValue()
                android.os.Handler r5 = (android.os.Handler) r5
                if (r5 == 0) goto L57
                net.grandcentrix.tray.provider.ContentProviderStorage$b$a r6 = new net.grandcentrix.tray.provider.ContentProviderStorage$b$a
                r6.<init>(r7, r4, r0)
                r5.post(r6)
                goto L5a
            L57:
                r4.onTrayPreferenceChanged(r0)
            L5a:
                goto L34
            L5b:
                return
        }
    }

    public ContentProviderStorage(@android.support.annotation.NonNull android.content.Context r3, @android.support.annotation.NonNull java.lang.String r4, @android.support.annotation.NonNull net.grandcentrix.tray.core.TrayStorage.a r5) {
            r2 = this;
            r2.<init>(r4, r5)
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            r2.mListeners = r0
            r0 = 0
            r2.mRegisteredContentObserver = r0
            android.content.Context r0 = r3.getApplicationContext()
            r2.mContext = r0
            net.grandcentrix.tray.provider.TrayUri r0 = new net.grandcentrix.tray.provider.TrayUri
            android.content.Context r1 = r2.mContext
            r0.<init>(r1)
            r2.mTrayUri = r0
            net.grandcentrix.tray.provider.TrayProviderHelper r0 = new net.grandcentrix.tray.provider.TrayProviderHelper
            android.content.Context r1 = r2.mContext
            r0.<init>(r1)
            r2.mProviderHelper = r0
            return
    }

    static net.grandcentrix.tray.provider.TrayUri access$000(net.grandcentrix.tray.provider.ContentProviderStorage r1) {
            net.grandcentrix.tray.provider.TrayUri r0 = r1.mTrayUri
            return r0
    }

    static net.grandcentrix.tray.provider.TrayProviderHelper access$100(net.grandcentrix.tray.provider.ContentProviderStorage r1) {
            net.grandcentrix.tray.provider.TrayProviderHelper r0 = r1.mProviderHelper
            return r0
    }

    static android.content.Context access$200(net.grandcentrix.tray.provider.ContentProviderStorage r1) {
            android.content.Context r0 = r1.mContext
            return r0
    }

    static boolean access$302(net.grandcentrix.tray.provider.ContentProviderStorage r0, boolean r1) {
            r0.mRegisteredContentObserver = r1
            return r1
    }

    @Override
    public void annex(net.grandcentrix.tray.core.TrayStorage r3) {
            r2 = this;
            java.util.Collection r0 = r3.getAll()
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L18
            java.lang.Object r1 = r0.next()
            net.grandcentrix.tray.core.TrayItem r1 = (net.grandcentrix.tray.core.TrayItem) r1
            r2.put(r1)
            goto L8
        L18:
            r3.wipe()
            return
    }

    @Override
    public boolean clear() {
            r2 = this;
            net.grandcentrix.tray.provider.TrayUri r0 = r2.mTrayUri
            net.grandcentrix.tray.provider.TrayUri$a r0 = r0.builder()
            java.lang.String r1 = r2.getModuleName()
            r0.b(r1)
            net.grandcentrix.tray.core.TrayStorage$a r1 = r2.getType()
            r0.a(r1)
            android.net.Uri r0 = r0.a()
            net.grandcentrix.tray.provider.TrayProviderHelper r1 = r2.mProviderHelper
            boolean r1 = r1.remove(r0)
            return r1
    }

    @Override
    @android.support.annotation.Nullable
    public net.grandcentrix.tray.core.TrayItem get(@android.support.annotation.NonNull java.lang.String r1) {
            r0 = this;
            net.grandcentrix.tray.core.TrayItem r1 = r0.get(r1)
            return r1
    }

    @Override
    @android.support.annotation.Nullable
    public net.grandcentrix.tray.core.TrayItem get(@android.support.annotation.NonNull java.lang.String r8) {
            r7 = this;
            net.grandcentrix.tray.provider.TrayUri r0 = r7.mTrayUri
            net.grandcentrix.tray.provider.TrayUri$a r0 = r0.builder()
            net.grandcentrix.tray.core.TrayStorage$a r1 = r7.getType()
            r0.a(r1)
            java.lang.String r1 = r7.getModuleName()
            r0.b(r1)
            r0.a(r8)
            android.net.Uri r0 = r0.a()
            net.grandcentrix.tray.provider.TrayProviderHelper r1 = r7.mProviderHelper
            java.util.List r1 = r1.queryProviderSafe(r0)
            int r2 = r1.size()
            r3 = 1
            if (r2 <= r3) goto L79
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "found more than one item for key '"
            r3.append(r4)
            r3.append(r8)
            java.lang.String r4 = "' in module "
            r3.append(r4)
            java.lang.String r4 = r7.getModuleName()
            r3.append(r4)
            java.lang.String r4 = ". This can be caused by using the same name for a device and user specific preference."
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            net.grandcentrix.tray.core.TrayLog.w(r3)
            r3 = 0
        L4e:
            int r4 = r1.size()
            if (r3 >= r4) goto L79
            java.lang.Object r4 = r1.get(r3)
            net.grandcentrix.tray.core.TrayItem r4 = (net.grandcentrix.tray.core.TrayItem) r4
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "item #"
            r5.append(r6)
            r5.append(r3)
            java.lang.String r6 = " "
            r5.append(r6)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            net.grandcentrix.tray.core.TrayLog.d(r5)
            int r3 = r3 + 1
            goto L4e
        L79:
            if (r2 <= 0) goto L83
            r3 = 0
            java.lang.Object r3 = r1.get(r3)
            net.grandcentrix.tray.core.TrayItem r3 = (net.grandcentrix.tray.core.TrayItem) r3
            goto L84
        L83:
            r3 = 0
        L84:
            return r3
    }

    @Override
    @android.support.annotation.NonNull
    public java.util.Collection<net.grandcentrix.tray.core.TrayItem> getAll() {
            r2 = this;
            net.grandcentrix.tray.provider.TrayUri r0 = r2.mTrayUri
            net.grandcentrix.tray.provider.TrayUri$a r0 = r0.builder()
            net.grandcentrix.tray.core.TrayStorage$a r1 = r2.getType()
            r0.a(r1)
            java.lang.String r1 = r2.getModuleName()
            r0.b(r1)
            android.net.Uri r0 = r0.a()
            net.grandcentrix.tray.provider.TrayProviderHelper r1 = r2.mProviderHelper
            java.util.List r1 = r1.queryProviderSafe(r0)
            return r1
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.mContext
            return r0
    }

    @Override
    public int getVersion() throws net.grandcentrix.tray.core.TrayException {
            r4 = this;
            net.grandcentrix.tray.provider.TrayUri r0 = r4.mTrayUri
            net.grandcentrix.tray.provider.TrayUri$a r0 = r0.builder()
            r1 = 1
            r0.a(r1)
            net.grandcentrix.tray.core.TrayStorage$a r1 = r4.getType()
            r0.a(r1)
            java.lang.String r1 = r4.getModuleName()
            r0.b(r1)
            java.lang.String r1 = "version"
            r0.a(r1)
            android.net.Uri r0 = r0.a()
            net.grandcentrix.tray.provider.TrayProviderHelper r1 = r4.mProviderHelper
            java.util.List r1 = r1.queryProvider(r0)
            int r2 = r1.size()
            r3 = 0
            if (r2 != 0) goto L2f
            return r3
        L2f:
            java.lang.Object r2 = r1.get(r3)
            net.grandcentrix.tray.core.TrayItem r2 = (net.grandcentrix.tray.core.TrayItem) r2
            java.lang.String r2 = r2.value()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            int r2 = r2.intValue()
            return r2
    }

    @Override
    public boolean put(net.grandcentrix.tray.core.TrayItem r1) {
            r0 = this;
            net.grandcentrix.tray.core.TrayItem r1 = (net.grandcentrix.tray.core.TrayItem) r1
            boolean r1 = r0.put(r1)
            return r1
    }

    @Override
    public boolean put(@android.support.annotation.NonNull java.lang.String r2, @android.support.annotation.Nullable java.lang.Object r3) {
            r1 = this;
            r0 = 0
            boolean r0 = r1.put(r2, r0, r3)
            return r0
    }

    @Override
    public boolean put(@android.support.annotation.NonNull java.lang.String r4, @android.support.annotation.Nullable java.lang.String r5, @android.support.annotation.Nullable java.lang.Object r6) {
            r3 = this;
            net.grandcentrix.tray.core.TrayStorage$a r0 = r3.getType()
            net.grandcentrix.tray.core.TrayStorage$a r1 = net.grandcentrix.tray.core.TrayStorage.a.a
            if (r0 == r1) goto L32
            if (r6 != 0) goto Lc
            r0 = 0
            goto L10
        Lc:
            java.lang.String r0 = java.lang.String.valueOf(r6)
        L10:
            net.grandcentrix.tray.provider.TrayUri r1 = r3.mTrayUri
            net.grandcentrix.tray.provider.TrayUri$a r1 = r1.builder()
            net.grandcentrix.tray.core.TrayStorage$a r2 = r3.getType()
            r1.a(r2)
            java.lang.String r2 = r3.getModuleName()
            r1.b(r2)
            r1.a(r4)
            android.net.Uri r1 = r1.a()
            net.grandcentrix.tray.provider.TrayProviderHelper r2 = r3.mProviderHelper
            boolean r2 = r2.persist(r1, r0, r5)
            return r2
        L32:
            net.grandcentrix.tray.core.TrayRuntimeException r0 = new net.grandcentrix.tray.core.TrayRuntimeException
            java.lang.String r1 = "writing data into a storage with type UNDEFINED is forbidden. Only Read and delete is allowed."
            r0.<init>(r1)
            throw r0
    }

    public boolean put(net.grandcentrix.tray.core.TrayItem r4) {
            r3 = this;
            java.lang.String r0 = r4.key()
            java.lang.String r1 = r4.migratedKey()
            java.lang.String r2 = r4.value()
            boolean r0 = r3.put(r0, r1, r2)
            return r0
    }

    @Override
    @android.annotation.TargetApi(16)
    public synchronized void registerOnTrayPreferenceChangeListener(@android.support.annotation.NonNull net.grandcentrix.tray.core.OnTrayPreferenceChangeListener r6) {
            r5 = this;
            monitor-enter(r5)
            if (r6 != 0) goto L5
            monitor-exit(r5)
            return
        L5:
            r0 = 0
            android.os.Looper r1 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L12
            android.os.Handler r2 = new android.os.Handler     // Catch: java.lang.Throwable -> L3b
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L3b
            r0 = r2
        L12:
            java.util.WeakHashMap<net.grandcentrix.tray.core.OnTrayPreferenceChangeListener, android.os.Handler> r2 = r5.mListeners     // Catch: java.lang.Throwable -> L3b
            r2.put(r6, r0)     // Catch: java.lang.Throwable -> L3b
            java.util.WeakHashMap<net.grandcentrix.tray.core.OnTrayPreferenceChangeListener, android.os.Handler> r2 = r5.mListeners     // Catch: java.lang.Throwable -> L3b
            java.util.Set r2 = r2.keySet()     // Catch: java.lang.Throwable -> L3b
            int r3 = r2.size()     // Catch: java.lang.Throwable -> L3b
            r4 = 1
            if (r3 != r4) goto L39
            net.grandcentrix.tray.provider.ContentProviderStorage$a r3 = new net.grandcentrix.tray.provider.ContentProviderStorage$a     // Catch: java.lang.Throwable -> L3b
            java.lang.String r4 = "observer"
            r3.<init>(r5, r4)     // Catch: java.lang.Throwable -> L3b
            r5.mObserverThread = r3     // Catch: java.lang.Throwable -> L3b
            android.os.HandlerThread r3 = r5.mObserverThread     // Catch: java.lang.Throwable -> L3b
            r3.start()     // Catch: java.lang.Throwable -> L3b
        L32:
            boolean r3 = r5.mRegisteredContentObserver     // Catch: java.lang.Throwable -> L3b
            if (r3 == 0) goto L32
            r3 = 0
            r5.mRegisteredContentObserver = r3     // Catch: java.lang.Throwable -> L3b
        L39:
            monitor-exit(r5)
            return
        L3b:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    @Override
    public boolean remove(@android.support.annotation.NonNull java.lang.String r3) {
            r2 = this;
            if (r3 == 0) goto L29
            net.grandcentrix.tray.provider.TrayUri r0 = r2.mTrayUri
            net.grandcentrix.tray.provider.TrayUri$a r0 = r0.builder()
            net.grandcentrix.tray.core.TrayStorage$a r1 = r2.getType()
            r0.a(r1)
            java.lang.String r1 = r2.getModuleName()
            r0.b(r1)
            r0.a(r3)
            android.net.Uri r0 = r0.a()
            net.grandcentrix.tray.provider.TrayProviderHelper r1 = r2.mProviderHelper
            int r1 = r1.removeAndCount(r0)
            if (r1 <= 0) goto L27
            r1 = 1
            goto L28
        L27:
            r1 = 0
        L28:
            return r1
        L29:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "null is not valid. use clear or wipe to delete all preferences"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public boolean setVersion(int r4) {
            r3 = this;
            net.grandcentrix.tray.core.TrayStorage$a r0 = r3.getType()
            net.grandcentrix.tray.core.TrayStorage$a r1 = net.grandcentrix.tray.core.TrayStorage.a.a
            if (r0 == r1) goto L34
            net.grandcentrix.tray.provider.TrayUri r0 = r3.mTrayUri
            net.grandcentrix.tray.provider.TrayUri$a r0 = r0.builder()
            r1 = 1
            r0.a(r1)
            net.grandcentrix.tray.core.TrayStorage$a r1 = r3.getType()
            r0.a(r1)
            java.lang.String r1 = r3.getModuleName()
            r0.b(r1)
            java.lang.String r1 = "version"
            r0.a(r1)
            android.net.Uri r0 = r0.a()
            net.grandcentrix.tray.provider.TrayProviderHelper r1 = r3.mProviderHelper
            java.lang.String r2 = java.lang.String.valueOf(r4)
            boolean r1 = r1.persist(r0, r2)
            return r1
        L34:
            net.grandcentrix.tray.core.TrayRuntimeException r0 = new net.grandcentrix.tray.core.TrayRuntimeException
            java.lang.String r1 = "writing data into a storage with type UNDEFINED is forbidden. Only Read and delete is allowed."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void unregisterOnTrayPreferenceChangeListener(@android.support.annotation.NonNull net.grandcentrix.tray.core.OnTrayPreferenceChangeListener r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.util.WeakHashMap<net.grandcentrix.tray.core.OnTrayPreferenceChangeListener, android.os.Handler> r0 = r2.mListeners
            r0.remove(r3)
            java.util.WeakHashMap<net.grandcentrix.tray.core.OnTrayPreferenceChangeListener, android.os.Handler> r0 = r2.mListeners
            int r0 = r0.size()
            if (r0 != 0) goto L25
            android.content.Context r0 = r2.mContext
            android.content.ContentResolver r0 = r0.getContentResolver()
            net.grandcentrix.tray.provider.ContentProviderStorage$b r1 = r2.mObserver
            r0.unregisterContentObserver(r1)
            r0 = 0
            r2.mObserver = r0
            android.os.HandlerThread r1 = r2.mObserverThread
            r1.quit()
            r2.mObserverThread = r0
        L25:
            return
    }

    @Override
    public boolean wipe() {
            r3 = this;
            boolean r0 = r3.clear()
            if (r0 != 0) goto L8
            r1 = 0
            return r1
        L8:
            net.grandcentrix.tray.provider.TrayUri r1 = r3.mTrayUri
            net.grandcentrix.tray.provider.TrayUri$a r1 = r1.builder()
            r2 = 1
            r1.a(r2)
            net.grandcentrix.tray.core.TrayStorage$a r2 = r3.getType()
            r1.a(r2)
            java.lang.String r2 = r3.getModuleName()
            r1.b(r2)
            android.net.Uri r1 = r1.a()
            net.grandcentrix.tray.provider.TrayProviderHelper r2 = r3.mProviderHelper
            boolean r2 = r2.remove(r1)
            return r2
    }
}
