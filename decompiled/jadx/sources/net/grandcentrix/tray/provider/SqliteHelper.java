package net.grandcentrix.tray.provider;

import android.content.ContentValues;
import android.database.DatabaseUtils;
import android.database.sqlite.SQLiteDatabase;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class SqliteHelper {
    public static String extendSelection(@Nullable String selection, @Nullable String selectionToAdd) {
        if (!TextUtils.isEmpty(selection)) {
            if (TextUtils.isEmpty(selectionToAdd)) {
                return selection;
            }
            return "(" + selection + ") AND (" + selectionToAdd + ")";
        }
        return selectionToAdd;
    }

    public static String[] extendSelectionArgs(@Nullable String[] selectionArgs, @Nullable String[] newSelectionArgs) {
        if (newSelectionArgs == null) {
            return selectionArgs;
        }
        return extendSelectionArgs(selectionArgs, (List<String>) Arrays.asList(newSelectionArgs));
    }

    public static String[] extendSelectionArgs(@Nullable String[] selectionArgs, @Nullable List<String> newSelectionArgs) {
        if (newSelectionArgs == null) {
            return selectionArgs;
        }
        if (selectionArgs != null) {
            List<String> selectionArgList = new ArrayList<>(Arrays.asList(selectionArgs));
            selectionArgList.addAll(newSelectionArgs);
            return (String[]) selectionArgList.toArray(new String[selectionArgList.size()]);
        }
        return (String[]) newSelectionArgs.toArray(new String[newSelectionArgs.size()]);
    }

    public static String[] extendSelectionArgs(@Nullable String selectionArg, @Nullable String[] newSelectionArgs) {
        return TextUtils.isEmpty(selectionArg) ? newSelectionArgs : extendSelectionArgs(new String[]{selectionArg}, newSelectionArgs);
    }

    public static int insertOrUpdate(@Nullable SQLiteDatabase sqlDb, String table, @Nullable String selection, String[] selectionArgs, @NonNull ContentValues values, @Nullable String[] excludeFieldsForUpdate) {
        if (sqlDb == null) {
            return -1;
        }
        long items = DatabaseUtils.queryNumEntries(sqlDb, table, selection, selectionArgs);
        if (items == 0) {
            long row = sqlDb.insert(table, null, values);
            if (row == -1) {
                return -1;
            }
            return 1;
        }
        if (excludeFieldsForUpdate != null) {
            for (String excludeField : excludeFieldsForUpdate) {
                values.remove(excludeField);
            }
        }
        sqlDb.update(table, values, selection, selectionArgs);
        return 0;
    }
}
