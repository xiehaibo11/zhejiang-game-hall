package net.grandcentrix.tray.core;

import android.support.annotation.Nullable;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;

public class TrayItem {
    private final Date mCreated;
    private final String mKey;
    private final String mMigratedKey;
    private final String mModule;
    private final Date mUpdated;
    private final String mValue;

    public TrayItem(String module, String key, String migratedKey, String value, Date created, Date updated) {
        this.mCreated = created;
        this.mKey = key;
        this.mModule = module;
        this.mUpdated = updated;
        this.mValue = value;
        this.mMigratedKey = migratedKey;
    }

    public Date created() {
        return this.mCreated;
    }

    public String key() {
        return this.mKey;
    }

    public String migratedKey() {
        return this.mMigratedKey;
    }

    public String module() {
        return this.mModule;
    }

    public String toString() {
        SimpleDateFormat sf = new SimpleDateFormat("HH:mm:ss dd.MM.yyyy", Locale.US);
        return "{key: " + this.mKey + ", value: " + this.mValue + ", module: " + this.mModule + ", created: " + sf.format(this.mCreated) + ", updated: " + sf.format(this.mUpdated) + ", migratedKey: " + this.mMigratedKey + "}";
    }

    public Date updateTime() {
        return this.mUpdated;
    }

    @Nullable
    public String value() {
        return this.mValue;
    }
}
