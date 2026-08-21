package net.grandcentrix.tray;

import android.content.Context;
import java.util.List;
import net.grandcentrix.tray.core.AbstractTrayPreference;
import net.grandcentrix.tray.core.TrayItem;
import net.grandcentrix.tray.provider.TrayProviderHelper;

/* JADX INFO: loaded from: classes4.dex */
public class Tray {
    private final TrayProviderHelper mProviderHelper;

    public static void clear(TrayPreferences... modules) {
        for (TrayPreferences trayPreferences : modules) {
            if (trayPreferences != null) {
                trayPreferences.clear();
            }
        }
    }

    public Tray(Context context) {
        this.mProviderHelper = new TrayProviderHelper(context);
    }

    public boolean clear() {
        return this.mProviderHelper.clear();
    }

    public boolean clearBut(AbstractTrayPreference... modules) {
        return this.mProviderHelper.clearBut(modules);
    }

    public List<TrayItem> getAll() {
        return this.mProviderHelper.getAll();
    }

    public boolean wipe() {
        return this.mProviderHelper.wipe();
    }
}
