package net.grandcentrix.tray;

public class TrayPreferences extends net.grandcentrix.tray.core.AbstractTrayPreference<net.grandcentrix.tray.provider.ContentProviderStorage> {
    public TrayPreferences(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.NonNull java.lang.String r3, int r4) {
            r1 = this;
            net.grandcentrix.tray.core.TrayStorage$a r0 = net.grandcentrix.tray.core.TrayStorage.a.b
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public TrayPreferences(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.NonNull java.lang.String r3, int r4, net.grandcentrix.tray.core.TrayStorage.a r5) {
            r1 = this;
            net.grandcentrix.tray.provider.ContentProviderStorage r0 = new net.grandcentrix.tray.provider.ContentProviderStorage
            r0.<init>(r2, r3, r5)
            r1.<init>(r0, r4)
            return
    }

    public void annexModule(java.lang.String r2) {
            r1 = this;
            net.grandcentrix.tray.core.TrayStorage$a r0 = net.grandcentrix.tray.core.TrayStorage.a.a
            r1.annexModule(r2, r0)
            return
    }

    public void annexModule(java.lang.String r3, net.grandcentrix.tray.core.TrayStorage.a r4) {
            r2 = this;
            net.grandcentrix.tray.provider.ContentProviderStorage r0 = new net.grandcentrix.tray.provider.ContentProviderStorage
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1, r3, r4)
            super.annex(r0)
            return
    }

    protected android.content.Context getContext() {
            r1 = this;
            net.grandcentrix.tray.core.PreferenceStorage r0 = r1.getStorage()
            net.grandcentrix.tray.provider.ContentProviderStorage r0 = (net.grandcentrix.tray.provider.ContentProviderStorage) r0
            android.content.Context r0 = r0.getContext()
            return r0
    }
}
