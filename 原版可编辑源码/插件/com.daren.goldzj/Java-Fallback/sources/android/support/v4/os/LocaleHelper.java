package android.support.v4.os;

import android.support.annotation.RestrictTo;
import java.util.Locale;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
final class LocaleHelper {
    static Locale forLanguageTag(String r6) {
        if (r6.contains("-") == false) goto L17;
        String[] r0 = r6.split("-", -1);
        if (r0.length <= 2) goto L9;
        return new Locale(r0[0], r0[1], r0[2]);
    L9:
        if (r0.length <= 1) goto L13;
        return new Locale(r0[0], r0[1]);
    L13:
        if (r0.length != 1) goto L31;
        return new Locale(r0[0]);
    L31:
        throw new IllegalArgumentException("Can not parse language tag: [" + r6 + "]");
    L17:
        if (r6.contains("_") == false) goto L33;
        String[] r02 = r6.split("_", -1);
        if (r02.length <= 2) goto L23;
        return new Locale(r02[0], r02[1], r02[2]);
    L23:
        if (r02.length <= 1) goto L27;
        return new Locale(r02[0], r02[1]);
    L27:
        if (r02.length != 1) goto L31;
        return new Locale(r02[0]);
    L33:
        return new Locale(r6);
    }

    static String toLanguageTag(Locale r2) {
        StringBuilder r0 = new StringBuilder();
        r0.append(r2.getLanguage());
        String r1 = r2.getCountry();
        if (r1 == null) goto L8;
        if (r1.isEmpty() == true) goto L8;
        r0.append("-");
        r0.append(r2.getCountry());
    L8:
        return r0.toString();
    }

    private LocaleHelper() {
    }
}
