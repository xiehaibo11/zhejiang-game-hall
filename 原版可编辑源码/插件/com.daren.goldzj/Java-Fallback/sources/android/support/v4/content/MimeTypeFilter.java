package android.support.v4.content;

import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import java.util.ArrayList;

public final class MimeTypeFilter {
    private MimeTypeFilter() {
    }

    private static boolean mimeTypeAgainstFilter(@NonNull String[] r5, @NonNull String[] r6) {
        if (r6.length != 2) goto L25;
        if (r6[0].isEmpty() == true) goto L23;
        if (r6[1].isEmpty() == true) goto L23;
        if (r5.length == 2) goto L12;
        return false;
    L12:
        if ("*".equals(r6[0]) == true) goto L17;
        if (r6[0].equals(r5[0]) == true) goto L17;
        return false;
    L17:
        if ("*".equals(r6[1]) == false) goto L19;
    L21:
        return true;
    L19:
        if (r6[1].equals(r5[1]) == true) goto L21;
        return false;
    L23:
        throw new IllegalArgumentException("Ill-formatted MIME type filter. Type or subtype empty.");
    L25:
        throw new IllegalArgumentException("Ill-formatted MIME type filter. Must be type/subtype.");
    }

    public static boolean matches(@Nullable String r1, @NonNull String r2) {
        if (r1 != null) goto L6;
        return false;
    L6:
        return mimeTypeAgainstFilter(r1.split("/"), r2.split("/"));
    }

    @Nullable
    public static String matches(@Nullable String r6, @NonNull String[] r7) {
        if (r6 != null) goto L5;
        return null;
    L5:
        String[] r62 = r6.split("/");
        int r2 = r7.length;
        int r3 = 0;
    L6:
        if (r3 >= r2) goto L11;
        String r4 = r7[r3];
        if (mimeTypeAgainstFilter(r62, r4.split("/")) == true) goto L9;
        r3 = r3 + 1;
        goto L6
    L9:
        return r4;
    L11:
        return null;
    }

    @Nullable
    public static String matches(@Nullable String[] r6, @NonNull String r7) {
        if (r6 != null) goto L5;
        return null;
    L5:
        String[] r72 = r7.split("/");
        int r2 = r6.length;
        int r3 = 0;
    L6:
        if (r3 >= r2) goto L11;
        String r4 = r6[r3];
        if (mimeTypeAgainstFilter(r4.split("/"), r72) == true) goto L9;
        r3 = r3 + 1;
        goto L6
    L9:
        return r4;
    L11:
        return null;
    }

    @NonNull
    public static String[] matchesMany(@Nullable String[] r6, @NonNull String r7) {
        int r0 = 0;
        if (r6 == null) goto L5;
        ArrayList r1 = new ArrayList();
        String[] r72 = r7.split("/");
        int r3 = r6.length;
    L7:
        if (r0 >= r3) goto L13;
        String r4 = r6[r0];
        if (mimeTypeAgainstFilter(r4.split("/"), r72) == false) goto L11;
        r1.add(r4);
    L11:
        r0 = r0 + 1;
        goto L7
    L13:
        return (String[]) r1.toArray(new String[r1.size()]);
    L5:
        return new String[0];
    }
}
