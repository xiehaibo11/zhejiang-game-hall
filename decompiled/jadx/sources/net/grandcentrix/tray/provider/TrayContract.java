package net.grandcentrix.tray.provider;

import android.content.Context;
import android.content.pm.ProviderInfo;
import android.net.Uri;
import android.os.Process;
import android.support.annotation.NonNull;
import android.support.annotation.VisibleForTesting;
import java.util.List;
import net.grandcentrix.tray.core.TrayLog;
import net.grandcentrix.tray.core.TrayRuntimeException;

/* JADX INFO: loaded from: classes4.dex */
class TrayContract {

    @VisibleForTesting
    static String sAuthority;

    TrayContract() {
    }

    @NonNull
    public static Uri generateContentUri(@NonNull Context context) {
        return generateContentUri(context, "preferences");
    }

    @NonNull
    static Uri generateInternalContentUri(@NonNull Context context) {
        return generateContentUri(context, "internal_preferences");
    }

    private static void checkOldWayToSetAuthority(@NonNull Context context) {
    }

    @NonNull
    private static Uri generateContentUri(@NonNull Context context, String basepath) {
        String authority = getAuthority(context);
        Uri authorityUri = Uri.parse("content://" + authority);
        Uri contentUri = Uri.withAppendedPath(authorityUri, basepath);
        return contentUri;
    }

    @NonNull
    private static synchronized String getAuthority(@NonNull Context context) {
        if (sAuthority != null) {
            return sAuthority;
        }
        checkOldWayToSetAuthority(context);
        List<ProviderInfo> providers = context.getPackageManager().queryContentProviders(context.getPackageName(), Process.myUid(), 0);
        if (providers != null) {
            for (ProviderInfo provider : providers) {
                if (provider.name.equals(TrayContentProvider.class.getName())) {
                    sAuthority = provider.authority;
                    TrayLog.v("found authority: " + sAuthority);
                    return sAuthority;
                }
            }
        }
        throw new TrayRuntimeException("Internal tray error. Could not find the provider authority. Please fill an issue at https://github.com/grandcentrix/tray/issues");
    }
}
