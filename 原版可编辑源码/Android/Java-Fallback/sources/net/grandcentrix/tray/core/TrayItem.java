package net.grandcentrix.tray.core;

public class TrayItem {
    private final java.util.Date mCreated;
    private final java.lang.String mKey;
    private final java.lang.String mMigratedKey;
    private final java.lang.String mModule;
    private final java.util.Date mUpdated;
    private final java.lang.String mValue;

    public TrayItem(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.util.Date r5, java.util.Date r6) {
            r0 = this;
            r0.<init>()
            r0.mCreated = r5
            r0.mKey = r2
            r0.mModule = r1
            r0.mUpdated = r6
            r0.mValue = r4
            r0.mMigratedKey = r3
            return
    }

    public java.util.Date created() {
            r1 = this;
            java.util.Date r0 = r1.mCreated
            return r0
    }

    public java.lang.String key() {
            r1 = this;
            java.lang.String r0 = r1.mKey
            return r0
    }

    public java.lang.String migratedKey() {
            r1 = this;
            java.lang.String r0 = r1.mMigratedKey
            return r0
    }

    public java.lang.String module() {
            r1 = this;
            java.lang.String r0 = r1.mModule
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "HH:mm:ss dd.MM.yyyy"
            r0.<init>(r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "{"
            r1.append(r2)
            java.lang.String r2 = "key: "
            r1.append(r2)
            java.lang.String r2 = r3.mKey
            r1.append(r2)
            java.lang.String r2 = ", value: "
            r1.append(r2)
            java.lang.String r2 = r3.mValue
            r1.append(r2)
            java.lang.String r2 = ", module: "
            r1.append(r2)
            java.lang.String r2 = r3.mModule
            r1.append(r2)
            java.lang.String r2 = ", created: "
            r1.append(r2)
            java.util.Date r2 = r3.mCreated
            java.lang.String r2 = r0.format(r2)
            r1.append(r2)
            java.lang.String r2 = ", updated: "
            r1.append(r2)
            java.util.Date r2 = r3.mUpdated
            java.lang.String r2 = r0.format(r2)
            r1.append(r2)
            java.lang.String r2 = ", migratedKey: "
            r1.append(r2)
            java.lang.String r2 = r3.mMigratedKey
            r1.append(r2)
            java.lang.String r2 = "}"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            return r1
    }

    public java.util.Date updateTime() {
            r1 = this;
            java.util.Date r0 = r1.mUpdated
            return r0
    }

    @android.support.annotation.Nullable
    public java.lang.String value() {
            r1 = this;
            java.lang.String r0 = r1.mValue
            return r0
    }
}
