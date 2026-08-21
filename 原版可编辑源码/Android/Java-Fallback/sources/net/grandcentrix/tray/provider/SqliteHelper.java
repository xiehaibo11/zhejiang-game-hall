package net.grandcentrix.tray.provider;

public class SqliteHelper {
    public SqliteHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String extendSelection(@android.support.annotation.Nullable java.lang.String r2, @android.support.annotation.Nullable java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L2d
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            return r2
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "("
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = ") AND ("
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r2 = r0.toString()
            goto L2e
        L2d:
            r2 = r3
        L2e:
            return r2
    }

    public static java.lang.String[] extendSelectionArgs(@android.support.annotation.Nullable java.lang.String r2, @android.support.annotation.Nullable java.lang.String[] r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return r3
        L7:
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String[] r0 = extendSelectionArgs(r0, r3)
            return r0
    }

    public static java.lang.String[] extendSelectionArgs(@android.support.annotation.Nullable java.lang.String[] r2, @android.support.annotation.Nullable java.util.List<java.lang.String> r3) {
            if (r3 != 0) goto L3
            return r2
        L3:
            if (r2 == 0) goto L1f
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List r1 = java.util.Arrays.asList(r2)
            r0.<init>(r1)
            r0.addAll(r3)
            int r1 = r0.size()
            java.lang.String[] r1 = new java.lang.String[r1]
            java.lang.Object[] r1 = r0.toArray(r1)
            r2 = r1
            java.lang.String[] r2 = (java.lang.String[]) r2
            goto L2c
        L1f:
            int r0 = r3.size()
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.Object[] r0 = r3.toArray(r0)
            r2 = r0
            java.lang.String[] r2 = (java.lang.String[]) r2
        L2c:
            return r2
    }

    public static java.lang.String[] extendSelectionArgs(@android.support.annotation.Nullable java.lang.String[] r1, @android.support.annotation.Nullable java.lang.String[] r2) {
            if (r2 != 0) goto L3
            return r1
        L3:
            java.util.List r0 = java.util.Arrays.asList(r2)
            java.lang.String[] r0 = extendSelectionArgs(r1, r0)
            return r0
    }

    public static int insertOrUpdate(@android.support.annotation.Nullable android.database.sqlite.SQLiteDatabase r8, java.lang.String r9, @android.support.annotation.Nullable java.lang.String r10, java.lang.String[] r11, @android.support.annotation.NonNull android.content.ContentValues r12, @android.support.annotation.Nullable java.lang.String[] r13) {
            r0 = -1
            if (r8 != 0) goto L4
            return r0
        L4:
            long r1 = android.database.DatabaseUtils.queryNumEntries(r8, r9, r10, r11)
            r3 = 0
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 != 0) goto L1c
            r3 = 0
            long r3 = r8.insert(r9, r3, r12)
            r5 = -1
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 != 0) goto L1a
            return r0
        L1a:
            r0 = 1
            return r0
        L1c:
            r0 = 0
            if (r13 == 0) goto L2b
            int r3 = r13.length
            r4 = 0
        L21:
            if (r4 >= r3) goto L2b
            r5 = r13[r4]
            r12.remove(r5)
            int r4 = r4 + 1
            goto L21
        L2b:
            r8.update(r9, r12, r10, r11)
            return r0
    }
}
