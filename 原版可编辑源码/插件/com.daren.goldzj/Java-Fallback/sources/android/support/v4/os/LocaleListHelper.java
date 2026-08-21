package android.support.v4.os;

import android.os.Build;
import android.support.annotation.GuardedBy;
import android.support.annotation.IntRange;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.annotation.Size;
import android.support.v7.widget.ActivityChooserView;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Locale;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
final class LocaleListHelper {
    private static final Locale EN_LATN = null;
    private static final Locale LOCALE_AR_XB = null;
    private static final Locale LOCALE_EN_XA = null;
    private static final int NUM_PSEUDO_LOCALES = 2;
    private static final String STRING_AR_XB = "ar-XB";
    private static final String STRING_EN_XA = "en-XA";

    @GuardedBy("sLock")
    private static LocaleListHelper sDefaultAdjustedLocaleList;

    @GuardedBy("sLock")
    private static LocaleListHelper sDefaultLocaleList;
    private static final Locale[] sEmptyList = null;
    private static final LocaleListHelper sEmptyLocaleList = null;

    @GuardedBy("sLock")
    private static Locale sLastDefaultLocale;

    @GuardedBy("sLock")
    private static LocaleListHelper sLastExplicitlySetLocaleList;
    private static final Object sLock = null;
    private final Locale[] mList;

    @NonNull
    private final String mStringRepresentation;

    static {
        sEmptyList = new Locale[0];
        sEmptyLocaleList = new LocaleListHelper(new Locale[0]);
        LOCALE_EN_XA = new Locale("en", "XA");
        LOCALE_AR_XB = new Locale("ar", "XB");
        EN_LATN = LocaleHelper.forLanguageTag("en-Latn");
        sLock = new Object();
        sLastExplicitlySetLocaleList = null;
        sDefaultLocaleList = null;
        sDefaultAdjustedLocaleList = null;
        sLastDefaultLocale = null;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    Locale get(int r3) {
        if (r3 < 0) goto L6;
        Locale[] r0 = this.mList;
        if (r3 >= r0.length) goto L6;
        return r0[r3];
    L6:
        return null;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    boolean isEmpty() {
        if (this.mList.length != 0) goto L5;
        return true;
    L5:
        return false;
    }

    @IntRange(from = 0)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    int size() {
        return this.mList.length;
    }

    @IntRange(from = -1)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    int indexOf(Locale r4) {
        int r0 = 0;
    L3:
        Locale[] r1 = this.mList;
        if (r0 >= r1.length) goto L9;
        if (r1[r0].equals(r4) == true) goto L7;
        r0 = r0 + 1;
        goto L3
    L7:
        return r0;
    L9:
        return -1;
    }

    public boolean equals(Object r6) {
        if (r6 != this) goto L6;
        return true;
    L6:
        if ((r6 instanceof LocaleListHelper) == true) goto L8;
        return false;
    L8:
        Locale[] r62 = ((LocaleListHelper) r6).mList;
        if (this.mList.length == r62.length) goto L11;
        return false;
    L11:
        int r1 = 0;
    L12:
        Locale[] r3 = this.mList;
        if (r1 >= r3.length) goto L18;
        if (r3[r1].equals(r62[r1]) == false) goto L16;
        r1 = r1 + 1;
        goto L12
    L16:
        return false;
    L18:
        return true;
    }

    public int hashCode() {
        int r0 = 1;
        int r1 = 0;
    L3:
        Locale[] r2 = this.mList;
        if (r1 >= r2.length) goto L6;
        r0 = (r0 * 31) + r2[r1].hashCode();
        r1 = r1 + 1;
        goto L3
    L6:
        return r0;
    }

    public String toString() {
        StringBuilder r0 = new StringBuilder();
        r0.append("[");
        int r1 = 0;
    L3:
        Locale[] r2 = this.mList;
        if (r1 >= r2.length) goto L9;
        r0.append(r2[r1]);
        if (r1 >= (this.mList.length - 1)) goto L8;
        r0.append(',');
    L8:
        r1 = r1 + 1;
        goto L3
    L9:
        r0.append("]");
        return r0.toString();
    }

    @NonNull
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    String toLanguageTags() {
        return this.mStringRepresentation;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    LocaleListHelper(@NonNull Locale... r8) {
        if (r8.length != 0) goto L5;
        this.mList = sEmptyList;
        this.mStringRepresentation = "";
        return;
    L5:
        Locale[] r0 = new Locale[r8.length];
        HashSet r1 = new HashSet();
        StringBuilder r2 = new StringBuilder();
        int r3 = 0;
    L7:
        if (r3 >= r8.length) goto L20;
        Locale r4 = r8[r3];
        if (r4 == null) goto L19;
        if (r1.contains(r4) == true) goto L17;
        Locale r42 = (Locale) r4.clone();
        r0[r3] = r42;
        r2.append(LocaleHelper.toLanguageTag(r42));
        if (r3 >= (r8.length - 1)) goto L15;
        r2.append(',');
    L15:
        r1.add(r42);
        r3 = r3 + 1;
        goto L7
    L17:
        throw new IllegalArgumentException("list[" + r3 + "] is a repetition");
    L19:
        throw new NullPointerException("list[" + r3 + "] is null");
    L20:
        this.mList = r0;
        this.mStringRepresentation = r2.toString();
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    LocaleListHelper(@NonNull Locale r9, LocaleListHelper r10) {
        if (r9 == null) goto L40;
        int r0 = 0;
        if (r10 != null) goto L7;
        int r1 = 0;
    L8:
        int r2 = 0;
    L10:
        if (r2 >= r1) goto L15;
        if (r9.equals(r10.mList[r2]) == true) goto L17;
        r2 = r2 + 1;
    L17:
        if (r2 != (-1)) goto L19;
        int r5 = 1;
    L20:
        int r52 = r5 + r1;
        Locale[] r6 = new Locale[r52];
        r6[0] = (Locale) r9.clone();
        if (r2 != (-1)) goto L25;
        int r92 = 0;
    L23:
        if (r92 >= r1) goto L31;
        int r22 = r92 + 1;
        r6[r22] = (Locale) r10.mList[r92].clone();
        r92 = r22;
    L31:
        StringBuilder r93 = new StringBuilder();
    L32:
        if (r0 >= r52) goto L37;
        r93.append(LocaleHelper.toLanguageTag(r6[r0]));
        if (r0 >= (r52 - 1)) goto L36;
        r93.append(',');
    L36:
        r0 = r0 + 1;
        goto L32
    L37:
        this.mList = r6;
        this.mStringRepresentation = r93.toString();
        return;
    L25:
        int r94 = 0;
    L26:
        if (r94 >= r2) goto L28;
        int r3 = r94 + 1;
        r6[r3] = (Locale) r10.mList[r94].clone();
        r94 = r3;
        goto L26
    L28:
        int r23 = r2 + 1;
    L29:
        if (r23 >= r1) goto L31;
        r6[r23] = (Locale) r10.mList[r23].clone();
        r23 = r23 + 1;
        goto L29
    L19:
        r5 = 0;
        goto L20
    L15:
        r2 = -1;
        goto L17
    L7:
        r1 = r10.mList.length;
        goto L8
    L40:
        throw new NullPointerException("topLocale is null");
    }

    @NonNull
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    static LocaleListHelper getEmptyLocaleList() {
        return sEmptyLocaleList;
    }

    @NonNull
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    static LocaleListHelper forLanguageTags(@Nullable String r3) {
        if (r3 == null) goto L13;
        if (r3.isEmpty() == true) goto L13;
        String[] r32 = r3.split(",", -1);
        Locale[] r0 = new Locale[r32.length];
        int r1 = 0;
    L8:
        if (r1 >= r0.length) goto L11;
        r0[r1] = LocaleHelper.forLanguageTag(r32[r1]);
        r1 = r1 + 1;
        goto L8
    L11:
        return new LocaleListHelper(r0);
    L13:
        return getEmptyLocaleList();
    }

    private static String getLikelyScript(Locale r3) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        String r32 = r3.getScript();
        if (r32.isEmpty() == true) goto L7;
        return r32;
    L7:
        return "";
    }

    private static boolean isPseudoLocale(String r1) {
        if (STRING_EN_XA.equals(r1) == false) goto L5;
    L8:
        return true;
    L5:
        if (STRING_AR_XB.equals(r1) == true) goto L8;
        return false;
    }

    private static boolean isPseudoLocale(Locale r1) {
        if (LOCALE_EN_XA.equals(r1) == false) goto L5;
    L8:
        return true;
    L5:
        if (LOCALE_AR_XB.equals(r1) == true) goto L8;
        return false;
    }

    @IntRange(from = 0, to = 1)
    private static int matchScore(Locale r4, Locale r5) {
        if (r4.equals(r5) == false) goto L6;
        return 1;
    L6:
        if (r4.getLanguage().equals(r5.getLanguage()) == true) goto L9;
        return 0;
    L9:
        if (isPseudoLocale(r4) == false) goto L11;
    L24:
        return 0;
    L11:
        if (isPseudoLocale(r5) == true) goto L24;
        String r0 = getLikelyScript(r4);
        if (r0.isEmpty() == false) goto L23;
        String r42 = r4.getCountry();
        if (r42.isEmpty() == false) goto L18;
        return 1;
    L18:
        if (r42.equals(r5.getCountry()) == true) goto L26;
        return 0;
    L26:
        return 1;
    L23:
        return r0.equals(getLikelyScript(r5)) ? 1 : 0;
    }

    private int findFirstMatchIndex(Locale r4) {
        int r0 = 0;
    L3:
        Locale[] r1 = this.mList;
        if (r0 >= r1.length) goto L9;
        if (matchScore(r4, r1[r0]) > 0) goto L7;
        r0 = r0 + 1;
        goto L3
    L7:
        return r0;
    L9:
        return ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED;
    }

    private int computeFirstMatchIndex(Collection<String> r5, boolean r6) {
        Locale[] r0 = this.mList;
        if (r0.length != 1) goto L6;
        return 0;
    L6:
        if (r0.length != 0) goto L10;
        return -1;
    L10:
        if (r6 == false) goto L16;
        int r62 = findFirstMatchIndex(EN_LATN);
        if (r62 != 0) goto L14;
        return 0;
    L14:
        if (r62 >= Integer.MAX_VALUE) goto L16;
    L17:
        Iterator<String> r52 = r5.iterator();
    L19:
        if (r52.hasNext() == false) goto L25;
        int r1 = findFirstMatchIndex(LocaleHelper.forLanguageTag(r52.next()));
        if (r1 == 0) goto L22;
        if (r1 >= r62) goto L19;
        r62 = r1;
        goto L19
    L22:
        return 0;
    L25:
        if (r62 != Integer.MAX_VALUE) goto L27;
        return 0;
    L27:
        return r62;
    L16:
        r62 = ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED;
        goto L17
    }

    private Locale computeFirstMatch(Collection<String> r1, boolean r2) {
        int r12 = computeFirstMatchIndex(r1, r2);
        if (r12 != (-1)) goto L6;
        return null;
    L6:
        return this.mList[r12];
    }

    @Nullable
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    Locale getFirstMatch(String[] r2) {
        return computeFirstMatch(Arrays.asList(r2), false);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    int getFirstMatchIndex(String[] r2) {
        return computeFirstMatchIndex(Arrays.asList(r2), false);
    }

    @Nullable
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    Locale getFirstMatchWithEnglishSupported(String[] r2) {
        return computeFirstMatch(Arrays.asList(r2), true);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    int getFirstMatchIndexWithEnglishSupported(Collection<String> r2) {
        return computeFirstMatchIndex(r2, true);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    int getFirstMatchIndexWithEnglishSupported(String[] r1) {
        return getFirstMatchIndexWithEnglishSupported(Arrays.asList(r1));
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    static boolean isPseudoLocalesOnly(@Nullable String[] r6) {
        if (r6 != null) goto L6;
        return true;
    L6:
        if (r6.length <= 3) goto L8;
        return false;
    L8:
        int r1 = r6.length;
        int r2 = 0;
    L9:
        if (r2 >= r1) goto L16;
        String r4 = r6[r2];
        if (r4.isEmpty() == true) goto L15;
        if (isPseudoLocale(r4) == true) goto L15;
        return false;
    L15:
        r2 = r2 + 1;
        goto L9
    L16:
        return true;
    }

    @Size(min = 1)
    @NonNull
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    static LocaleListHelper getDefault() {
        Locale r0 = Locale.getDefault();
        Object r1 = sLock;
        monitor-enter(r1);
    L17:
        th = move-exception;
        throw th;
    L5:
        if (r0.equals(sLastDefaultLocale) == true) goto L14;
        sLastDefaultLocale = r0;     // Catch: Throwable -> L17
        if (sDefaultLocaleList != null) goto L9;
    L13:
        sDefaultLocaleList = new LocaleListHelper(r0, sLastExplicitlySetLocaleList);     // Catch: Throwable -> L17
        sDefaultAdjustedLocaleList = sDefaultLocaleList;     // Catch: Throwable -> L17
        goto L14
    L9:
        if (r0.equals(sDefaultLocaleList.get(0)) == false) goto L13;
        LocaleListHelper r02 = sDefaultLocaleList;     // Catch: Throwable -> L17
        monitor-exit(r1);     // Catch: Throwable -> L17
        return r02;
    L14:
        LocaleListHelper r03 = sDefaultLocaleList;     // Catch: Throwable -> L17
        monitor-exit(r1);     // Catch: Throwable -> L17
        return r03;
    }

    @Size(min = 1)
    @NonNull
    static LocaleListHelper getAdjustedDefault() {
        getDefault();
        Object r0 = sLock;
        monitor-enter(r0);
        LocaleListHelper r1 = sDefaultAdjustedLocaleList;     // Catch: Throwable -> L7
        monitor-exit(r0);     // Catch: Throwable -> L7
        return r1;
    L7:
        th = move-exception;
        throw th;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    static void setDefault(@Size(min = 1) @NonNull LocaleListHelper r1) {
        setDefault(r1, 0);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    static void setDefault(@Size(min = 1) @NonNull LocaleListHelper r2, int r3) {
        if (r2 == null) goto L19;
        if (r2.isEmpty() == true) goto L17;
        Object r0 = sLock;
        monitor-enter(r0);
        sLastDefaultLocale = r2.get(r3);     // Catch: Throwable -> L13
        Locale.setDefault(sLastDefaultLocale);     // Catch: Throwable -> L13
        sLastExplicitlySetLocaleList = r2;     // Catch: Throwable -> L13
        sDefaultLocaleList = r2;     // Catch: Throwable -> L13
        if (r3 != 0) goto L10;
        sDefaultAdjustedLocaleList = sDefaultLocaleList;     // Catch: Throwable -> L13
    L11:
        monitor-exit(r0);     // Catch: Throwable -> L13
        return;
    L10:
        sDefaultAdjustedLocaleList = new LocaleListHelper(sLastDefaultLocale, sDefaultLocaleList);     // Catch: Throwable -> L13
    L13:
        th = move-exception;
        throw th;
    L17:
        throw new IllegalArgumentException("locales is empty");
    L19:
        throw new NullPointerException("locales is null");
    }
}
