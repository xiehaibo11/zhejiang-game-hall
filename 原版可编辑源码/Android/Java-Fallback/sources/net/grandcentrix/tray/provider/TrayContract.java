package net.grandcentrix.tray.provider;

class TrayContract {

    @android.support.annotation.VisibleForTesting
    static java.lang.String sAuthority;

    TrayContract() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void checkOldWayToSetAuthority(@android.support.annotation.NonNull android.content.Context r0) {
            return
    }

    @android.support.annotation.NonNull
    public static android.net.Uri generateContentUri(@android.support.annotation.NonNull android.content.Context r1) {
            java.lang.String r0 = "preferences"
            android.net.Uri r0 = generateContentUri(r1, r0)
            return r0
    }

    @android.support.annotation.NonNull
    private static android.net.Uri generateContentUri(@android.support.annotation.NonNull android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = getAuthority(r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "content://"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            android.net.Uri r1 = android.net.Uri.parse(r1)
            android.net.Uri r2 = android.net.Uri.withAppendedPath(r1, r4)
            return r2
    }

    @android.support.annotation.NonNull
    static android.net.Uri generateInternalContentUri(@android.support.annotation.NonNull android.content.Context r1) {
            java.lang.String r0 = "internal_preferences"
            android.net.Uri r0 = generateContentUri(r1, r0)
            return r0
    }

    @android.support.annotation.NonNull
    private static synchronized java.lang.String getAuthority(@android.support.annotation.NonNull android.content.Context r6) {
            java.lang.Class<net.grandcentrix.tray.provider.TrayContract> r0 = net.grandcentrix.tray.provider.TrayContract.class
            monitor-enter(r0)
            java.lang.String r1 = net.grandcentrix.tray.provider.TrayContract.sAuthority     // Catch: java.lang.Throwable -> L66
            if (r1 == 0) goto Lb
            java.lang.String r1 = net.grandcentrix.tray.provider.TrayContract.sAuthority     // Catch: java.lang.Throwable -> L66
            monitor-exit(r0)
            return r1
        Lb:
            checkOldWayToSetAuthority(r6)     // Catch: java.lang.Throwable -> L66
            android.content.pm.PackageManager r1 = r6.getPackageManager()     // Catch: java.lang.Throwable -> L66
            java.lang.String r2 = r6.getPackageName()     // Catch: java.lang.Throwable -> L66
            int r3 = android.os.Process.myUid()     // Catch: java.lang.Throwable -> L66
            r4 = 0
            java.util.List r1 = r1.queryContentProviders(r2, r3, r4)     // Catch: java.lang.Throwable -> L66
            if (r1 == 0) goto L5e
            java.util.Iterator r2 = r1.iterator()     // Catch: java.lang.Throwable -> L66
        L25:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L66
            if (r3 == 0) goto L5e
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L66
            android.content.pm.ProviderInfo r3 = (android.content.pm.ProviderInfo) r3     // Catch: java.lang.Throwable -> L66
            java.lang.String r4 = r3.name     // Catch: java.lang.Throwable -> L66
            java.lang.Class<net.grandcentrix.tray.provider.TrayContentProvider> r5 = net.grandcentrix.tray.provider.TrayContentProvider.class
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> L66
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> L66
            if (r4 == 0) goto L5d
            java.lang.String r2 = r3.authority     // Catch: java.lang.Throwable -> L66
            net.grandcentrix.tray.provider.TrayContract.sAuthority = r2     // Catch: java.lang.Throwable -> L66
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L66
            r2.<init>()     // Catch: java.lang.Throwable -> L66
            java.lang.String r4 = "found authority: "
            r2.append(r4)     // Catch: java.lang.Throwable -> L66
            java.lang.String r4 = net.grandcentrix.tray.provider.TrayContract.sAuthority     // Catch: java.lang.Throwable -> L66
            r2.append(r4)     // Catch: java.lang.Throwable -> L66
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L66
            net.grandcentrix.tray.core.TrayLog.v(r2)     // Catch: java.lang.Throwable -> L66
            java.lang.String r2 = net.grandcentrix.tray.provider.TrayContract.sAuthority     // Catch: java.lang.Throwable -> L66
            monitor-exit(r0)
            return r2
        L5d:
            goto L25
        L5e:
            net.grandcentrix.tray.core.TrayRuntimeException r2 = new net.grandcentrix.tray.core.TrayRuntimeException     // Catch: java.lang.Throwable -> L66
            java.lang.String r3 = "Internal tray error. Could not find the provider authority. Please fill an issue at https://github.com/grandcentrix/tray/issues"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L66
            throw r2     // Catch: java.lang.Throwable -> L66
        L66:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }
}
