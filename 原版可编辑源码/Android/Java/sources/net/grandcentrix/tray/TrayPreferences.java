package net.grandcentrix.tray;

import android.content.Context;
import android.support.annotation.NonNull;
import net.grandcentrix.tray.core.AbstractTrayPreference;
import net.grandcentrix.tray.core.TrayStorage;
import net.grandcentrix.tray.provider.ContentProviderStorage;

public class TrayPreferences extends AbstractTrayPreference<ContentProviderStorage> {
    public TrayPreferences(@NonNull Context context, @NonNull String module, int version, TrayStorage.a type) {
        super(new ContentProviderStorage(context, module, type), version);
    }

    public TrayPreferences(@NonNull Context context, @NonNull String module, int version) {
        this(context, module, version, TrayStorage.a.b);
    }

    public void annexModule(String oldStorageName, TrayStorage.a type) {
        super.annex(new ContentProviderStorage(getContext(), oldStorageName, type));
    }

    public void annexModule(String oldStorageName) {
        annexModule(oldStorageName, TrayStorage.a.a);
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected Context getContext() {
        return ((ContentProviderStorage) getStorage()).getContext();
    }
}
