package net.grandcentrix.tray;

import android.content.Context;
import android.support.annotation.NonNull;

@Deprecated
public class TrayModulePreferences extends TrayPreferences {
    public TrayModulePreferences(@NonNull Context context, @NonNull String module, int version) {
        super(context, module, version);
    }
}
