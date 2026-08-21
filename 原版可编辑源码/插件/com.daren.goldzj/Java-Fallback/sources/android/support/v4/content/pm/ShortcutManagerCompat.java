package android.support.v4.content.pm;

import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.content.pm.ResolveInfo;
import android.content.pm.ShortcutManager;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.VisibleForTesting;
import android.support.v4.content.ContextCompat;
import android.text.TextUtils;
import java.util.Iterator;

public class ShortcutManagerCompat {

    @VisibleForTesting
    static final String ACTION_INSTALL_SHORTCUT = "com.android.launcher.action.INSTALL_SHORTCUT";

    @VisibleForTesting
    static final String INSTALL_SHORTCUT_PERMISSION = "com.android.launcher.permission.INSTALL_SHORTCUT";

    private ShortcutManagerCompat() {
    }

    public static boolean isRequestPinShortcutSupported(@NonNull Context r4) {
        if (Build.VERSION.SDK_INT < 26) goto L7;
        return ((ShortcutManager) r4.getSystemService(ShortcutManager.class)).isRequestPinShortcutSupported();
    L7:
        if (ContextCompat.checkSelfPermission(r4, INSTALL_SHORTCUT_PERMISSION) == 0) goto L9;
        return false;
    L9:
        Iterator<ResolveInfo> r42 = r4.getPackageManager().queryBroadcastReceivers(new Intent(ACTION_INSTALL_SHORTCUT), 0).iterator();
    L11:
        if (r42.hasNext() == false) goto L18;
        String r1 = r42.next().activityInfo.permission;
        if (TextUtils.isEmpty(r1) == true) goto L16;
        if (INSTALL_SHORTCUT_PERMISSION.equals(r1) == false) goto L11;
        return true;
    L16:
        return true;
    L18:
        return false;
    }

    public static boolean requestPinShortcut(@NonNull Context r10, @NonNull ShortcutInfoCompat r11, @Nullable final IntentSender r12) {
        if (Build.VERSION.SDK_INT < 26) goto L7;
        return ((ShortcutManager) r10.getSystemService(ShortcutManager.class)).requestPinShortcut(r11.toShortcutInfo(), r12);
    L7:
        if (isRequestPinShortcutSupported(r10) == true) goto L10;
        return false;
    L10:
        Intent r3 = r11.addToIntent(new Intent(ACTION_INSTALL_SHORTCUT));
        if (r12 != null) goto L14;
        r10.sendBroadcast(r3);
        return true;
    L14:
        r10.sendOrderedBroadcast(r3, null, new 1(r12), null, -1, null, null);
        return true;
    }

    @NonNull
    public static Intent createShortcutResultIntent(@NonNull Context r2, @NonNull ShortcutInfoCompat r3) {
        if (Build.VERSION.SDK_INT < 26) goto L5;
        Intent r22 = ((ShortcutManager) r2.getSystemService(ShortcutManager.class)).createShortcutResultIntent(r3.toShortcutInfo());
    L6:
        if (r22 != null) goto L9;
        r22 = new Intent();
    L9:
        return r3.addToIntent(r22);
    L5:
        r22 = null;
        goto L6
    }
}
