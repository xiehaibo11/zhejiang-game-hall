package net.grandcentrix.tray;

public class Tray {
    private final net.grandcentrix.tray.provider.TrayProviderHelper mProviderHelper;

    public Tray(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            net.grandcentrix.tray.provider.TrayProviderHelper r0 = new net.grandcentrix.tray.provider.TrayProviderHelper
            r0.<init>(r2)
            r1.mProviderHelper = r0
            return
    }

    public static void clear(net.grandcentrix.tray.TrayPreferences... r3) {
            int r0 = r3.length
            r1 = 0
        L2:
            if (r1 >= r0) goto Lf
            r2 = r3[r1]
            if (r2 != 0) goto L9
            goto Lc
        L9:
            r2.clear()
        Lc:
            int r1 = r1 + 1
            goto L2
        Lf:
            return
    }

    public boolean clear() {
            r1 = this;
            net.grandcentrix.tray.provider.TrayProviderHelper r0 = r1.mProviderHelper
            boolean r0 = r0.clear()
            return r0
    }

    public boolean clearBut(net.grandcentrix.tray.core.AbstractTrayPreference... r2) {
            r1 = this;
            net.grandcentrix.tray.provider.TrayProviderHelper r0 = r1.mProviderHelper
            boolean r0 = r0.clearBut(r2)
            return r0
    }

    public java.util.List<net.grandcentrix.tray.core.TrayItem> getAll() {
            r1 = this;
            net.grandcentrix.tray.provider.TrayProviderHelper r0 = r1.mProviderHelper
            java.util.List r0 = r0.getAll()
            return r0
    }

    public boolean wipe() {
            r1 = this;
            net.grandcentrix.tray.provider.TrayProviderHelper r0 = r1.mProviderHelper
            boolean r0 = r0.wipe()
            return r0
    }
}
