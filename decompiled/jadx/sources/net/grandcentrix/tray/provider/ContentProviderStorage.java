package net.grandcentrix.tray.provider;

import android.annotation.TargetApi;
import android.content.Context;
import android.database.ContentObserver;
import android.net.Uri;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.VisibleForTesting;
import java.util.Collection;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.WeakHashMap;
import net.grandcentrix.tray.core.OnTrayPreferenceChangeListener;
import net.grandcentrix.tray.core.TrayException;
import net.grandcentrix.tray.core.TrayItem;
import net.grandcentrix.tray.core.TrayLog;
import net.grandcentrix.tray.core.TrayRuntimeException;
import net.grandcentrix.tray.core.TrayStorage;
import net.grandcentrix.tray.provider.TrayUri;

/* JADX INFO: loaded from: classes4.dex */
public class ContentProviderStorage extends TrayStorage {
    public static final String VERSION = "version";
    private final Context mContext;

    @VisibleForTesting
    WeakHashMap<OnTrayPreferenceChangeListener, Handler> mListeners;

    @VisibleForTesting
    b mObserver;

    @VisibleForTesting
    HandlerThread mObserverThread;
    private final TrayProviderHelper mProviderHelper;
    private volatile boolean mRegisteredContentObserver;
    private final TrayUri mTrayUri;

    @VisibleForTesting
    class b extends ContentObserver {
        public b(@NonNull Handler handler) {
            super(handler);
        }

        @Override // android.database.ContentObserver
        public void onChange(boolean selfChange) {
            onChange(selfChange, null);
        }

        @Override // android.database.ContentObserver
        public void onChange(boolean selfChange, Uri uri) {
            if (uri == null) {
                TrayUri.a aVarBuilder = ContentProviderStorage.this.mTrayUri.builder();
                aVarBuilder.b(ContentProviderStorage.this.getModuleName());
                uri = aVarBuilder.a();
            }
            List<TrayItem> trayItems = ContentProviderStorage.this.mProviderHelper.queryProviderSafe(uri);
            Set<Map.Entry<OnTrayPreferenceChangeListener, Handler>> entries = new HashSet<>(ContentProviderStorage.this.mListeners.entrySet());
            for (Map.Entry<OnTrayPreferenceChangeListener, Handler> entry : entries) {
                OnTrayPreferenceChangeListener listener = entry.getKey();
                Handler handler = entry.getValue();
                if (handler != null) {
                    handler.post(new a(this, listener, trayItems));
                } else {
                    listener.onTrayPreferenceChanged(trayItems);
                }
            }
        }

        class a implements Runnable {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            final /* synthetic */ OnTrayPreferenceChangeListener f8415a;
            final /* synthetic */ List b;

            a(b this$1, OnTrayPreferenceChangeListener onTrayPreferenceChangeListener, List list) {
                this.f8415a = onTrayPreferenceChangeListener;
                this.b = list;
            }

            @Override // java.lang.Runnable
            public void run() {
                this.f8415a.onTrayPreferenceChanged(this.b);
            }
        }
    }

    public ContentProviderStorage(@NonNull Context context, @NonNull String module, @NonNull TrayStorage.a type) {
        super(module, type);
        this.mListeners = new WeakHashMap<>();
        this.mRegisteredContentObserver = false;
        this.mContext = context.getApplicationContext();
        this.mTrayUri = new TrayUri(this.mContext);
        this.mProviderHelper = new TrayProviderHelper(this.mContext);
    }

    @Override // net.grandcentrix.tray.core.TrayStorage
    public void annex(TrayStorage oldStorage) {
        for (TrayItem trayItem : oldStorage.getAll()) {
            put(trayItem);
        }
        oldStorage.wipe();
    }

    @Override // net.grandcentrix.tray.core.PreferenceStorage
    public boolean clear() {
        TrayUri.a aVarBuilder = this.mTrayUri.builder();
        aVarBuilder.b(getModuleName());
        aVarBuilder.a(getType());
        Uri uri = aVarBuilder.a();
        return this.mProviderHelper.remove(uri);
    }

    @Override // net.grandcentrix.tray.core.PreferenceStorage
    @Nullable
    public TrayItem get(@NonNull String key) {
        TrayUri.a aVarBuilder = this.mTrayUri.builder();
        aVarBuilder.a(getType());
        aVarBuilder.b(getModuleName());
        aVarBuilder.a(key);
        Uri uri = aVarBuilder.a();
        List<TrayItem> prefs = this.mProviderHelper.queryProviderSafe(uri);
        int size = prefs.size();
        if (size > 1) {
            TrayLog.w("found more than one item for key '" + key + "' in module " + getModuleName() + ". This can be caused by using the same name for a device and user specific preference.");
            for (int i = 0; i < prefs.size(); i++) {
                TrayItem pref = prefs.get(i);
                TrayLog.d("item #" + i + " " + pref);
            }
        }
        if (size > 0) {
            return prefs.get(0);
        }
        return null;
    }

    @Override // net.grandcentrix.tray.core.PreferenceStorage
    @NonNull
    public Collection<TrayItem> getAll() {
        TrayUri.a aVarBuilder = this.mTrayUri.builder();
        aVarBuilder.a(getType());
        aVarBuilder.b(getModuleName());
        Uri uri = aVarBuilder.a();
        return this.mProviderHelper.queryProviderSafe(uri);
    }

    public Context getContext() {
        return this.mContext;
    }

    @Override // net.grandcentrix.tray.core.PreferenceStorage
    public int getVersion() throws TrayException {
        TrayUri.a aVarBuilder = this.mTrayUri.builder();
        aVarBuilder.a(true);
        aVarBuilder.a(getType());
        aVarBuilder.b(getModuleName());
        aVarBuilder.a("version");
        Uri internalUri = aVarBuilder.a();
        List<TrayItem> trayItems = this.mProviderHelper.queryProvider(internalUri);
        if (trayItems.size() == 0) {
            return 0;
        }
        return Integer.valueOf(trayItems.get(0).value()).intValue();
    }

    @Override // net.grandcentrix.tray.core.PreferenceStorage
    public boolean put(TrayItem item) {
        return put(item.key(), item.migratedKey(), item.value());
    }

    @Override // net.grandcentrix.tray.core.PreferenceStorage
    public boolean put(@NonNull String key, @Nullable Object data) {
        return put(key, null, data);
    }

    @Override // net.grandcentrix.tray.core.PreferenceStorage
    public boolean put(@NonNull String key, @Nullable String migrationKey, @Nullable Object data) {
        if (getType() == TrayStorage.a.UNDEFINED) {
            throw new TrayRuntimeException("writing data into a storage with type UNDEFINED is forbidden. Only Read and delete is allowed.");
        }
        String value = data == null ? null : String.valueOf(data);
        TrayUri.a aVarBuilder = this.mTrayUri.builder();
        aVarBuilder.a(getType());
        aVarBuilder.b(getModuleName());
        aVarBuilder.a(key);
        Uri uri = aVarBuilder.a();
        return this.mProviderHelper.persist(uri, value, migrationKey);
    }

    @Override // net.grandcentrix.tray.core.TrayStorage
    @TargetApi(16)
    public synchronized void registerOnTrayPreferenceChangeListener(@NonNull OnTrayPreferenceChangeListener listener) {
        if (listener == null) {
            return;
        }
        Handler handler = null;
        Looper looper = Looper.myLooper();
        if (looper != null) {
            handler = new Handler(looper);
        }
        this.mListeners.put(listener, handler);
        Collection<OnTrayPreferenceChangeListener> listeners = this.mListeners.keySet();
        if (listeners.size() == 1) {
            this.mObserverThread = new a("observer");
            this.mObserverThread.start();
            while (!this.mRegisteredContentObserver) {
            }
            this.mRegisteredContentObserver = false;
        }
    }

    class a extends HandlerThread {
        a(String arg0) {
            super(arg0);
        }

        @Override // android.os.HandlerThread
        protected void onLooperPrepared() {
            super.onLooperPrepared();
            ContentProviderStorage contentProviderStorage = ContentProviderStorage.this;
            contentProviderStorage.mObserver = contentProviderStorage.new b(new Handler(getLooper()));
            TrayUri.a aVarBuilder = ContentProviderStorage.this.mTrayUri.builder();
            aVarBuilder.a(ContentProviderStorage.this.getType());
            aVarBuilder.b(ContentProviderStorage.this.getModuleName());
            Uri observingUri = aVarBuilder.a();
            ContentProviderStorage.this.mContext.getContentResolver().registerContentObserver(observingUri, true, ContentProviderStorage.this.mObserver);
            ContentProviderStorage.this.mRegisteredContentObserver = true;
        }
    }

    @Override // net.grandcentrix.tray.core.PreferenceStorage
    public boolean remove(@NonNull String key) {
        if (key == null) {
            throw new IllegalArgumentException("null is not valid. use clear or wipe to delete all preferences");
        }
        TrayUri.a aVarBuilder = this.mTrayUri.builder();
        aVarBuilder.a(getType());
        aVarBuilder.b(getModuleName());
        aVarBuilder.a(key);
        Uri uri = aVarBuilder.a();
        return this.mProviderHelper.removeAndCount(uri) > 0;
    }

    @Override // net.grandcentrix.tray.core.PreferenceStorage
    public boolean setVersion(int version) {
        if (getType() == TrayStorage.a.UNDEFINED) {
            throw new TrayRuntimeException("writing data into a storage with type UNDEFINED is forbidden. Only Read and delete is allowed.");
        }
        TrayUri.a aVarBuilder = this.mTrayUri.builder();
        aVarBuilder.a(true);
        aVarBuilder.a(getType());
        aVarBuilder.b(getModuleName());
        aVarBuilder.a("version");
        Uri uri = aVarBuilder.a();
        return this.mProviderHelper.persist(uri, String.valueOf(version));
    }

    @Override // net.grandcentrix.tray.core.TrayStorage
    public void unregisterOnTrayPreferenceChangeListener(@NonNull OnTrayPreferenceChangeListener listener) {
        if (listener == null) {
            return;
        }
        this.mListeners.remove(listener);
        if (this.mListeners.size() == 0) {
            this.mContext.getContentResolver().unregisterContentObserver(this.mObserver);
            this.mObserver = null;
            this.mObserverThread.quit();
            this.mObserverThread = null;
        }
    }

    @Override // net.grandcentrix.tray.core.PreferenceStorage
    public boolean wipe() {
        boolean cleared = clear();
        if (!cleared) {
            return false;
        }
        TrayUri.a aVarBuilder = this.mTrayUri.builder();
        aVarBuilder.a(true);
        aVarBuilder.a(getType());
        aVarBuilder.b(getModuleName());
        Uri uri = aVarBuilder.a();
        return this.mProviderHelper.remove(uri);
    }
}
