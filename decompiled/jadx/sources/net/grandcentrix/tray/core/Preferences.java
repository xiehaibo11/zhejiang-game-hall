package net.grandcentrix.tray.core;

import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import java.util.Collection;
import net.grandcentrix.tray.core.PreferenceStorage;

/* JADX INFO: loaded from: classes4.dex */
public abstract class Preferences<T, S extends PreferenceStorage<T>> implements PreferenceAccessor<T> {
    private boolean mChangeVersionSucceeded = false;

    @NonNull
    private S mStorage;
    private int mVersion;

    public Preferences(@NonNull S storage, int version) {
        this.mStorage = storage;
        this.mVersion = version;
        isVersionChangeChecked();
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public boolean clear() {
        boolean cleared = this.mStorage.clear();
        StringBuilder sb = new StringBuilder();
        sb.append("cleared ");
        sb.append(cleared ? "successful" : "failed");
        sb.append(" ");
        sb.append(this);
        TrayLog.v(sb.toString());
        return cleared;
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public boolean contains(String key) {
        return getPref(key) != null;
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public Collection<T> getAll() {
        return this.mStorage.getAll();
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    @Nullable
    public T getPref(@NonNull String str) {
        return (T) this.mStorage.get(str);
    }

    public int getVersion() throws TrayException {
        return this.mStorage.getVersion();
    }

    /* JADX WARN: Multi-variable type inference failed */
    @SafeVarargs
    public final void migrate(Migration<T>... migrationArr) {
        for (SharedPreferencesImport sharedPreferencesImport : migrationArr) {
            if (sharedPreferencesImport.shouldMigrate()) {
                Object data = sharedPreferencesImport.getData();
                boolean supportedDataType = isDataTypeSupported(data);
                if (!supportedDataType) {
                    TrayLog.w("could not migrate '" + sharedPreferencesImport.getPreviousKey() + "' into " + this + " because the data type " + data.getClass().getSimpleName() + " is invalid");
                    sharedPreferencesImport.onPostMigrate((Object) null);
                } else {
                    String key = sharedPreferencesImport.getTrayKey();
                    String migrationKey = sharedPreferencesImport.getPreviousKey();
                    getStorage().put(key, migrationKey, data);
                    TrayLog.v("migrated '" + migrationKey + "'='" + data + "' into " + this + " (now: '" + key + "'='" + data + "')");
                    sharedPreferencesImport.onPostMigrate(getStorage().get(key));
                }
            } else {
                TrayLog.v("not migrating " + sharedPreferencesImport + " into " + this);
            }
        }
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public boolean put(@NonNull String key, String value) {
        if (!isVersionChangeChecked()) {
            return false;
        }
        TrayLog.v("put '" + key + "=\"" + value + "\"' into " + this);
        return putData(key, value);
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public boolean put(@NonNull String key, int value) {
        if (!isVersionChangeChecked()) {
            return false;
        }
        TrayLog.v("put '" + key + ContainerUtils.KEY_VALUE_DELIMITER + value + "' into " + this);
        return putData(key, Integer.valueOf(value));
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public boolean put(@NonNull String key, float value) {
        if (!isVersionChangeChecked()) {
            return false;
        }
        TrayLog.v("put '" + key + ContainerUtils.KEY_VALUE_DELIMITER + value + "' into " + this);
        return putData(key, Float.valueOf(value));
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public boolean put(@NonNull String key, long value) {
        if (!isVersionChangeChecked()) {
            return false;
        }
        TrayLog.v("put '" + key + ContainerUtils.KEY_VALUE_DELIMITER + value + "' into " + this);
        return putData(key, Long.valueOf(value));
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public boolean put(@NonNull String key, boolean value) {
        if (!isVersionChangeChecked()) {
            return false;
        }
        TrayLog.v("put '" + key + ContainerUtils.KEY_VALUE_DELIMITER + value + "' into " + this);
        return putData(key, Boolean.valueOf(value));
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public boolean remove(@NonNull String key) {
        if (!isVersionChangeChecked()) {
            return false;
        }
        TrayLog.v("removed key '" + key + "' from " + this);
        return getStorage().remove(key);
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public boolean wipe() {
        boolean wiped = this.mStorage.wipe();
        StringBuilder sb = new StringBuilder();
        sb.append("wipe ");
        sb.append(wiped ? "successful" : "failed");
        sb.append(" ");
        sb.append(this);
        TrayLog.v(sb.toString());
        return wiped;
    }

    @NonNull
    protected S getStorage() {
        return this.mStorage;
    }

    protected void onCreate(int initialVersion) {
    }

    protected void onDowngrade(int oldVersion, int newVersion) {
        throw new IllegalStateException("Can't downgrade " + this + " from version " + oldVersion + " to " + newVersion);
    }

    protected void onUpgrade(int oldVersion, int newVersion) {
        throw new IllegalStateException("Can't upgrade database from version " + oldVersion + " to " + newVersion + ", not implemented.");
    }

    synchronized void changeVersion(int newVersion) {
        if (newVersion < 1) {
            throw new IllegalArgumentException("Version must be >= 1, was " + newVersion);
        }
        try {
            int version = getStorage().getVersion();
            if (version != newVersion) {
                if (version == 0) {
                    TrayLog.v("create " + this + " with initial version 0");
                    onCreate(newVersion);
                } else if (version > newVersion) {
                    TrayLog.v("downgrading " + this + "from " + version + " to " + newVersion);
                    onDowngrade(version, newVersion);
                } else {
                    TrayLog.v("upgrading " + this + " from " + version + " to " + newVersion);
                    onUpgrade(version, newVersion);
                }
                getStorage().setVersion(newVersion);
            }
            this.mChangeVersionSucceeded = true;
        } catch (TrayException e) {
            e.printStackTrace();
            TrayLog.v("could not change the version, retrying with the next interaction");
        }
    }

    boolean isVersionChangeChecked() {
        if (!this.mChangeVersionSucceeded) {
            changeVersion(this.mVersion);
        }
        return this.mChangeVersionSucceeded;
    }

    static boolean isDataTypeSupported(Object data) {
        return (data instanceof Integer) || (data instanceof String) || (data instanceof Long) || (data instanceof Float) || (data instanceof Boolean) || data == null;
    }

    private boolean putData(String key, Object value) {
        if (TextUtils.isEmpty(key)) {
            throw new IllegalArgumentException("Preference key value cannot be empty.");
        }
        return getStorage().put(key, value);
    }
}
