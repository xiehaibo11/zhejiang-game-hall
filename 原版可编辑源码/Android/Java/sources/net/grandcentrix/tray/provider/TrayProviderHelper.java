package net.grandcentrix.tray.provider;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import net.grandcentrix.tray.core.AbstractTrayPreference;
import net.grandcentrix.tray.core.TrayException;
import net.grandcentrix.tray.core.TrayItem;
import net.grandcentrix.tray.provider.TrayUri;

public class TrayProviderHelper {
    private final Context mContext;
    private final TrayUri mTrayUri;

    public TrayProviderHelper(@NonNull Context context) {
        this.mContext = context;
        this.mTrayUri = new TrayUri(context);
    }

    public boolean clear() {
        try {
            this.mContext.getContentResolver().delete(this.mTrayUri.get(), null, null);
            return true;
        } catch (Throwable e) {
            e.printStackTrace();
            return false;
        }
    }

    public boolean clearBut(AbstractTrayPreference... modules) {
        String[] selectionArgs = new String[0];
        String[] selectionArgs2 = selectionArgs;
        String selection = null;
        for (AbstractTrayPreference module : modules) {
            if (module != null) {
                String moduleName = module.getName();
                selection = SqliteHelper.extendSelection(selection, "MODULE != ?");
                selectionArgs2 = SqliteHelper.extendSelectionArgs(selectionArgs2, new String[]{moduleName});
            }
        }
        try {
            this.mContext.getContentResolver().delete(this.mTrayUri.get(), selection, selectionArgs2);
            return true;
        } catch (Throwable e) {
            e.printStackTrace();
            return false;
        }
    }

    @NonNull
    public List<TrayItem> getAll() {
        return queryProviderSafe(this.mTrayUri.get());
    }

    public boolean persist(@NonNull String module, @NonNull String key, @NonNull String value) {
        return persist(module, key, null, value);
    }

    public boolean persist(@NonNull String module, @NonNull String key, @Nullable String previousKey, @Nullable String value) {
        TrayUri.a aVarBuilder = this.mTrayUri.builder();
        aVarBuilder.b(module);
        aVarBuilder.a(key);
        Uri uri = aVarBuilder.a();
        return persist(uri, value, previousKey);
    }

    public boolean persist(@NonNull Uri uri, @Nullable String value) {
        return persist(uri, value, (String) null);
    }

    public boolean persist(@NonNull Uri uri, @Nullable String value, @Nullable String previousKey) {
        ContentValues values = new ContentValues();
        values.put(TrayDBHelper.VALUE, value);
        values.put(TrayDBHelper.MIGRATED_KEY, previousKey);
        try {
            return this.mContext.getContentResolver().insert(uri, values) != null;
        } catch (Throwable e) {
            e.printStackTrace();
            return false;
        }
    }

    @NonNull
    public List<TrayItem> queryProvider(@NonNull Uri uri) throws TrayException {
        try {
            Cursor cursor = this.mContext.getContentResolver().query(uri, null, null, null, null);
            if (cursor == null) {
                throw new TrayException("could not access stored data with uri " + uri);
            }
            ArrayList<TrayItem> list = new ArrayList<>();
            for (boolean hasItem = cursor.moveToFirst(); hasItem; hasItem = cursor.moveToNext()) {
                TrayItem trayItem = cursorToTrayItem(cursor);
                list.add(trayItem);
            }
            cursor.close();
            return list;
        } catch (Throwable e) {
            throw new TrayException("Hard error accessing the ContentProvider", e);
        }
    }

    @NonNull
    public List<TrayItem> queryProviderSafe(@NonNull Uri uri) {
        try {
            return queryProvider(uri);
        } catch (TrayException e) {
            return new ArrayList();
        }
    }

    public boolean remove(Uri uri) {
        try {
            this.mContext.getContentResolver().delete(uri, null, null);
            return true;
        } catch (Throwable e) {
            e.printStackTrace();
            return false;
        }
    }

    public int removeAndCount(Uri uri) {
        try {
            return this.mContext.getContentResolver().delete(uri, null, null);
        } catch (Throwable e) {
            e.printStackTrace();
            return 0;
        }
    }

    public boolean wipe() {
        if (!clear()) {
            return false;
        }
        try {
            return this.mContext.getContentResolver().delete(this.mTrayUri.getInternal(), null, null) > 0;
        } catch (Throwable e) {
            e.printStackTrace();
            return false;
        }
    }

    @NonNull
    static TrayItem cursorToTrayItem(Cursor cursor) {
        String module = cursor.getString(cursor.getColumnIndexOrThrow(TrayDBHelper.MODULE));
        String key = cursor.getString(cursor.getColumnIndexOrThrow(TrayDBHelper.KEY));
        String migratedKey = cursor.getString(cursor.getColumnIndexOrThrow(TrayDBHelper.MIGRATED_KEY));
        String value = cursor.getString(cursor.getColumnIndexOrThrow(TrayDBHelper.VALUE));
        Date created = new Date(cursor.getLong(cursor.getColumnIndexOrThrow(TrayDBHelper.CREATED)));
        Date updated = new Date(cursor.getLong(cursor.getColumnIndexOrThrow(TrayDBHelper.UPDATED)));
        return new TrayItem(module, key, migratedKey, value, created, updated);
    }
}
