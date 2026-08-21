package net.grandcentrix.tray.core;

public abstract class TrayStorage implements net.grandcentrix.tray.core.PreferenceStorage<net.grandcentrix.tray.core.TrayItem> {
    private java.lang.String mModuleName;
    private net.grandcentrix.tray.core.TrayStorage.a mType;

    public enum a extends java.lang.Enum<net.grandcentrix.tray.core.TrayStorage.a> {
        public static final net.grandcentrix.tray.core.TrayStorage.a a = null;
        public static final net.grandcentrix.tray.core.TrayStorage.a b = null;
        public static final net.grandcentrix.tray.core.TrayStorage.a c = null;
        private static final net.grandcentrix.tray.core.TrayStorage.a[] d = null;

        static {
                net.grandcentrix.tray.core.TrayStorage$a r0 = new net.grandcentrix.tray.core.TrayStorage$a
                r1 = 0
                java.lang.String r2 = "UNDEFINED"
                r0.<init>(r2, r1)
                net.grandcentrix.tray.core.TrayStorage.a.a = r0
                net.grandcentrix.tray.core.TrayStorage$a r0 = new net.grandcentrix.tray.core.TrayStorage$a
                r2 = 1
                java.lang.String r3 = "USER"
                r0.<init>(r3, r2)
                net.grandcentrix.tray.core.TrayStorage.a.b = r0
                net.grandcentrix.tray.core.TrayStorage$a r0 = new net.grandcentrix.tray.core.TrayStorage$a
                r3 = 2
                java.lang.String r4 = "DEVICE"
                r0.<init>(r4, r3)
                net.grandcentrix.tray.core.TrayStorage.a.c = r0
                r0 = 3
                net.grandcentrix.tray.core.TrayStorage$a[] r0 = new net.grandcentrix.tray.core.TrayStorage.a[r0]
                net.grandcentrix.tray.core.TrayStorage$a r4 = net.grandcentrix.tray.core.TrayStorage.a.a
                r0[r1] = r4
                net.grandcentrix.tray.core.TrayStorage$a r1 = net.grandcentrix.tray.core.TrayStorage.a.b
                r0[r2] = r1
                net.grandcentrix.tray.core.TrayStorage$a r1 = net.grandcentrix.tray.core.TrayStorage.a.c
                r0[r3] = r1
                net.grandcentrix.tray.core.TrayStorage.a.d = r0
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static net.grandcentrix.tray.core.TrayStorage.a valueOf(java.lang.String r1) {
                java.lang.Class<net.grandcentrix.tray.core.TrayStorage$a> r0 = net.grandcentrix.tray.core.TrayStorage.a.class
                java.lang.Enum r0 = java.lang.Enum.valueOf(r0, r1)
                net.grandcentrix.tray.core.TrayStorage$a r0 = (net.grandcentrix.tray.core.TrayStorage.a) r0
                return r0
        }

        public static net.grandcentrix.tray.core.TrayStorage.a[] values() {
                net.grandcentrix.tray.core.TrayStorage$a[] r0 = net.grandcentrix.tray.core.TrayStorage.a.d
                java.lang.Object r0 = r0.clone()
                net.grandcentrix.tray.core.TrayStorage$a[] r0 = (net.grandcentrix.tray.core.TrayStorage.a[]) r0
                return r0
        }
    }

    public TrayStorage(java.lang.String r1, net.grandcentrix.tray.core.TrayStorage.a r2) {
            r0 = this;
            r0.<init>()
            r0.mModuleName = r1
            r0.mType = r2
            return
    }

    public abstract void annex(net.grandcentrix.tray.core.TrayStorage r1);

    public java.lang.String getModuleName() {
            r1 = this;
            java.lang.String r0 = r1.mModuleName
            return r0
    }

    public net.grandcentrix.tray.core.TrayStorage.a getType() {
            r1 = this;
            net.grandcentrix.tray.core.TrayStorage$a r0 = r1.mType
            return r0
    }

    public abstract void registerOnTrayPreferenceChangeListener(@android.support.annotation.NonNull net.grandcentrix.tray.core.OnTrayPreferenceChangeListener r1);

    public abstract void unregisterOnTrayPreferenceChangeListener(@android.support.annotation.NonNull net.grandcentrix.tray.core.OnTrayPreferenceChangeListener r1);
}
