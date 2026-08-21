package android.support.v4.text;

import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.text.TextUtils;
import java.util.Locale;

public final class TextUtilsCompat {
    private static final String ARAB_SCRIPT_SUBTAG = "Arab";
    private static final String HEBR_SCRIPT_SUBTAG = "Hebr";
    private static final Locale ROOT = null;

    static {
        ROOT = new Locale("", "");
    }

    @NonNull
    public static String htmlEncode(@NonNull String r4) {
        if (Build.VERSION.SDK_INT >= 17) goto L5;
        StringBuilder r0 = new StringBuilder();
        int r1 = 0;
    L8:
        if (r1 >= r4.length()) goto L27;
        char r2 = r4.charAt(r1);
        if (r2 != '\"') goto L12;
        r0.append("&quot;");
    L25:
        r1 = r1 + 1;
        goto L8
    L12:
        if (r2 != '<') goto L14;
        r0.append("&lt;");
        goto L25
    L14:
        if (r2 != '>') goto L16;
        r0.append("&gt;");
        goto L25
    L16:
        if (r2 != '&') goto L18;
        r0.append("&amp;");
        goto L25
    L18:
        if (r2 == '\'') goto L20;
        r0.append(r2);
        goto L25
    L20:
        r0.append("&#39;");
        goto L25
    L27:
        return r0.toString();
    L5:
        return TextUtils.htmlEncode(r4);
    }

    public static int getLayoutDirectionFromLocale(@Nullable Locale r2) {
        if (Build.VERSION.SDK_INT >= 17) goto L5;
        if (r2 != null) goto L8;
        return 0;
    L8:
        if (r2.equals(ROOT) == true) goto L22;
        String r0 = ICUCompat.maximizeAndGetScript(r2);
        if (r0 != null) goto L14;
        return getLayoutDirectionFromFirstChar(r2);
    L14:
        if (r0.equalsIgnoreCase(ARAB_SCRIPT_SUBTAG) == false) goto L16;
        return 1;
    L16:
        if (r0.equalsIgnoreCase(HEBR_SCRIPT_SUBTAG) == false) goto L23;
        return 1;
    L23:
        return 0;
    L22:
        return 0;
    L5:
        return TextUtils.getLayoutDirectionFromLocale(r2);
    }

    private static int getLayoutDirectionFromFirstChar(@NonNull Locale r3) {
        byte r32 = Character.getDirectionality(r3.getDisplayName(r3).charAt(0));
        if (r32 != 1) goto L5;
    L7:
        return 1;
    L5:
        if (r32 == 2) goto L7;
        return 0;
    }

    private TextUtilsCompat() {
    }
}
