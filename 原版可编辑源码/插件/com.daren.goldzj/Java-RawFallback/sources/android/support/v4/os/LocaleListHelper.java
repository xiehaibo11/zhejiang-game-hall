package android.support.v4.os;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
final class LocaleListHelper {
    private static final java.util.Locale EN_LATN = null;
    private static final java.util.Locale LOCALE_AR_XB = null;
    private static final java.util.Locale LOCALE_EN_XA = null;
    private static final int NUM_PSEUDO_LOCALES = 2;
    private static final java.lang.String STRING_AR_XB = "ar-XB";
    private static final java.lang.String STRING_EN_XA = "en-XA";

    @android.support.annotation.GuardedBy("sLock")
    private static android.support.v4.os.LocaleListHelper sDefaultAdjustedLocaleList;

    @android.support.annotation.GuardedBy("sLock")
    private static android.support.v4.os.LocaleListHelper sDefaultLocaleList;
    private static final java.util.Locale[] sEmptyList = null;
    private static final android.support.v4.os.LocaleListHelper sEmptyLocaleList = null;

    @android.support.annotation.GuardedBy("sLock")
    private static java.util.Locale sLastDefaultLocale;

    @android.support.annotation.GuardedBy("sLock")
    private static android.support.v4.os.LocaleListHelper sLastExplicitlySetLocaleList;
    private static final java.lang.Object sLock = null;
    private final java.util.Locale[] mList;

    @android.support.annotation.NonNull
    private final java.lang.String mStringRepresentation;

    static {
            r0 = 0
            java.util.Locale[] r1 = new java.util.Locale[r0]
            android.support.v4.os.LocaleListHelper.sEmptyList = r1
            android.support.v4.os.LocaleListHelper r1 = new android.support.v4.os.LocaleListHelper
            java.util.Locale[] r0 = new java.util.Locale[r0]
            r1.<init>(r0)
            android.support.v4.os.LocaleListHelper.sEmptyLocaleList = r1
            java.util.Locale r0 = new java.util.Locale
            java.lang.String r1 = "en"
            java.lang.String r2 = "XA"
            r0.<init>(r1, r2)
            android.support.v4.os.LocaleListHelper.LOCALE_EN_XA = r0
            java.util.Locale r0 = new java.util.Locale
            java.lang.String r1 = "ar"
            java.lang.String r2 = "XB"
            r0.<init>(r1, r2)
            android.support.v4.os.LocaleListHelper.LOCALE_AR_XB = r0
            java.lang.String r0 = "en-Latn"
            java.util.Locale r0 = android.support.v4.os.LocaleHelper.forLanguageTag(r0)
            android.support.v4.os.LocaleListHelper.EN_LATN = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            android.support.v4.os.LocaleListHelper.sLock = r0
            r0 = 0
            android.support.v4.os.LocaleListHelper.sLastExplicitlySetLocaleList = r0
            android.support.v4.os.LocaleListHelper.sDefaultLocaleList = r0
            android.support.v4.os.LocaleListHelper.sDefaultAdjustedLocaleList = r0
            android.support.v4.os.LocaleListHelper.sLastDefaultLocale = r0
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    LocaleListHelper(@android.support.annotation.NonNull java.util.Locale r9, android.support.v4.os.LocaleListHelper r10) {
            r8 = this;
            r8.<init>()
            if (r9 == 0) goto L90
            r0 = 0
            if (r10 != 0) goto La
            r1 = 0
            goto Ld
        La:
            java.util.Locale[] r1 = r10.mList
            int r1 = r1.length
        Ld:
            r2 = 0
        Le:
            r3 = -1
            if (r2 >= r1) goto L1f
            java.util.Locale[] r4 = r10.mList
            r4 = r4[r2]
            boolean r4 = r9.equals(r4)
            if (r4 == 0) goto L1c
            goto L20
        L1c:
            int r2 = r2 + 1
            goto Le
        L1f:
            r2 = -1
        L20:
            r4 = 1
            if (r2 != r3) goto L25
            r5 = 1
            goto L26
        L25:
            r5 = 0
        L26:
            int r5 = r5 + r1
            java.util.Locale[] r6 = new java.util.Locale[r5]
            java.lang.Object r9 = r9.clone()
            java.util.Locale r9 = (java.util.Locale) r9
            r6[r0] = r9
            if (r2 != r3) goto L46
            r9 = 0
        L34:
            if (r9 >= r1) goto L6b
            int r2 = r9 + 1
            java.util.Locale[] r3 = r10.mList
            r9 = r3[r9]
            java.lang.Object r9 = r9.clone()
            java.util.Locale r9 = (java.util.Locale) r9
            r6[r2] = r9
            r9 = r2
            goto L34
        L46:
            r9 = 0
        L47:
            if (r9 >= r2) goto L59
            int r3 = r9 + 1
            java.util.Locale[] r7 = r10.mList
            r9 = r7[r9]
            java.lang.Object r9 = r9.clone()
            java.util.Locale r9 = (java.util.Locale) r9
            r6[r3] = r9
            r9 = r3
            goto L47
        L59:
            int r2 = r2 + r4
        L5a:
            if (r2 >= r1) goto L6b
            java.util.Locale[] r9 = r10.mList
            r9 = r9[r2]
            java.lang.Object r9 = r9.clone()
            java.util.Locale r9 = (java.util.Locale) r9
            r6[r2] = r9
            int r2 = r2 + 1
            goto L5a
        L6b:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
        L70:
            if (r0 >= r5) goto L87
            r10 = r6[r0]
            java.lang.String r10 = android.support.v4.os.LocaleHelper.toLanguageTag(r10)
            r9.append(r10)
            int r10 = r5 + (-1)
            if (r0 >= r10) goto L84
            r10 = 44
            r9.append(r10)
        L84:
            int r0 = r0 + 1
            goto L70
        L87:
            r8.mList = r6
            java.lang.String r9 = r9.toString()
            r8.mStringRepresentation = r9
            return
        L90:
            java.lang.NullPointerException r9 = new java.lang.NullPointerException
            java.lang.String r10 = "topLocale is null"
            r9.<init>(r10)
            throw r9
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    LocaleListHelper(@android.support.annotation.NonNull java.util.Locale... r8) {
            r7 = this;
            r7.<init>()
            int r0 = r8.length
            if (r0 != 0) goto L10
            java.util.Locale[] r8 = android.support.v4.os.LocaleListHelper.sEmptyList
            r7.mList = r8
            java.lang.String r8 = ""
            r7.mStringRepresentation = r8
            goto L88
        L10:
            int r0 = r8.length
            java.util.Locale[] r0 = new java.util.Locale[r0]
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r3 = 0
        L1e:
            int r4 = r8.length
            if (r3 >= r4) goto L80
            r4 = r8[r3]
            java.lang.String r5 = "list["
            if (r4 == 0) goto L66
            boolean r6 = r1.contains(r4)
            if (r6 != 0) goto L4c
            java.lang.Object r4 = r4.clone()
            java.util.Locale r4 = (java.util.Locale) r4
            r0[r3] = r4
            java.lang.String r5 = android.support.v4.os.LocaleHelper.toLanguageTag(r4)
            r2.append(r5)
            int r5 = r8.length
            int r5 = r5 + (-1)
            if (r3 >= r5) goto L46
            r5 = 44
            r2.append(r5)
        L46:
            r1.add(r4)
            int r3 = r3 + 1
            goto L1e
        L4c:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            r0.append(r3)
            java.lang.String r1 = "] is a repetition"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r8.<init>(r0)
            throw r8
        L66:
            java.lang.NullPointerException r8 = new java.lang.NullPointerException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            r0.append(r3)
            java.lang.String r1 = "] is null"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r8.<init>(r0)
            throw r8
        L80:
            r7.mList = r0
            java.lang.String r8 = r2.toString()
            r7.mStringRepresentation = r8
        L88:
            return
    }

    private java.util.Locale computeFirstMatch(java.util.Collection<java.lang.String> r1, boolean r2) {
            r0 = this;
            int r1 = r0.computeFirstMatchIndex(r1, r2)
            r2 = -1
            if (r1 != r2) goto L9
            r1 = 0
            goto Ld
        L9:
            java.util.Locale[] r2 = r0.mList
            r1 = r2[r1]
        Ld:
            return r1
    }

    private int computeFirstMatchIndex(java.util.Collection<java.lang.String> r5, boolean r6) {
            r4 = this;
            java.util.Locale[] r0 = r4.mList
            int r1 = r0.length
            r2 = 0
            r3 = 1
            if (r1 != r3) goto L8
            return r2
        L8:
            int r0 = r0.length
            if (r0 != 0) goto Ld
            r5 = -1
            return r5
        Ld:
            r0 = 2147483647(0x7fffffff, float:NaN)
            if (r6 == 0) goto L1e
            java.util.Locale r6 = android.support.v4.os.LocaleListHelper.EN_LATN
            int r6 = r4.findFirstMatchIndex(r6)
            if (r6 != 0) goto L1b
            return r2
        L1b:
            if (r6 >= r0) goto L1e
            goto L21
        L1e:
            r6 = 2147483647(0x7fffffff, float:NaN)
        L21:
            java.util.Iterator r5 = r5.iterator()
        L25:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L40
            java.lang.Object r1 = r5.next()
            java.lang.String r1 = (java.lang.String) r1
            java.util.Locale r1 = android.support.v4.os.LocaleHelper.forLanguageTag(r1)
            int r1 = r4.findFirstMatchIndex(r1)
            if (r1 != 0) goto L3c
            return r2
        L3c:
            if (r1 >= r6) goto L25
            r6 = r1
            goto L25
        L40:
            if (r6 != r0) goto L43
            return r2
        L43:
            return r6
    }

    private int findFirstMatchIndex(java.util.Locale r4) {
            r3 = this;
            r0 = 0
        L1:
            java.util.Locale[] r1 = r3.mList
            int r2 = r1.length
            if (r0 >= r2) goto L12
            r1 = r1[r0]
            int r1 = matchScore(r4, r1)
            if (r1 <= 0) goto Lf
            return r0
        Lf:
            int r0 = r0 + 1
            goto L1
        L12:
            r4 = 2147483647(0x7fffffff, float:NaN)
            return r4
    }

    @android.support.annotation.NonNull
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    static android.support.v4.os.LocaleListHelper forLanguageTags(@android.support.annotation.Nullable java.lang.String r3) {
            if (r3 == 0) goto L28
            boolean r0 = r3.isEmpty()
            if (r0 == 0) goto L9
            goto L28
        L9:
            r0 = -1
            java.lang.String r1 = ","
            java.lang.String[] r3 = r3.split(r1, r0)
            int r0 = r3.length
            java.util.Locale[] r0 = new java.util.Locale[r0]
            r1 = 0
        L14:
            int r2 = r0.length
            if (r1 >= r2) goto L22
            r2 = r3[r1]
            java.util.Locale r2 = android.support.v4.os.LocaleHelper.forLanguageTag(r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L14
        L22:
            android.support.v4.os.LocaleListHelper r3 = new android.support.v4.os.LocaleListHelper
            r3.<init>(r0)
            return r3
        L28:
            android.support.v4.os.LocaleListHelper r3 = getEmptyLocaleList()
            return r3
    }

    @android.support.annotation.Size(min = 1)
    @android.support.annotation.NonNull
    static android.support.v4.os.LocaleListHelper getAdjustedDefault() {
            getDefault()
            java.lang.Object r0 = android.support.v4.os.LocaleListHelper.sLock
            monitor-enter(r0)
            android.support.v4.os.LocaleListHelper r1 = android.support.v4.os.LocaleListHelper.sDefaultAdjustedLocaleList     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return r1
        La:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r1
    }

    @android.support.annotation.Size(min = 1)
    @android.support.annotation.NonNull
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    static android.support.v4.os.LocaleListHelper getDefault() {
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.Object r1 = android.support.v4.os.LocaleListHelper.sLock
            monitor-enter(r1)
            java.util.Locale r2 = android.support.v4.os.LocaleListHelper.sLastDefaultLocale     // Catch: java.lang.Throwable -> L37
            boolean r2 = r0.equals(r2)     // Catch: java.lang.Throwable -> L37
            if (r2 != 0) goto L33
            android.support.v4.os.LocaleListHelper.sLastDefaultLocale = r0     // Catch: java.lang.Throwable -> L37
            android.support.v4.os.LocaleListHelper r2 = android.support.v4.os.LocaleListHelper.sDefaultLocaleList     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L26
            android.support.v4.os.LocaleListHelper r2 = android.support.v4.os.LocaleListHelper.sDefaultLocaleList     // Catch: java.lang.Throwable -> L37
            r3 = 0
            java.util.Locale r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L37
            boolean r2 = r0.equals(r2)     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L26
            android.support.v4.os.LocaleListHelper r0 = android.support.v4.os.LocaleListHelper.sDefaultLocaleList     // Catch: java.lang.Throwable -> L37
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L37
            return r0
        L26:
            android.support.v4.os.LocaleListHelper r2 = new android.support.v4.os.LocaleListHelper     // Catch: java.lang.Throwable -> L37
            android.support.v4.os.LocaleListHelper r3 = android.support.v4.os.LocaleListHelper.sLastExplicitlySetLocaleList     // Catch: java.lang.Throwable -> L37
            r2.<init>(r0, r3)     // Catch: java.lang.Throwable -> L37
            android.support.v4.os.LocaleListHelper.sDefaultLocaleList = r2     // Catch: java.lang.Throwable -> L37
            android.support.v4.os.LocaleListHelper r0 = android.support.v4.os.LocaleListHelper.sDefaultLocaleList     // Catch: java.lang.Throwable -> L37
            android.support.v4.os.LocaleListHelper.sDefaultAdjustedLocaleList = r0     // Catch: java.lang.Throwable -> L37
        L33:
            android.support.v4.os.LocaleListHelper r0 = android.support.v4.os.LocaleListHelper.sDefaultLocaleList     // Catch: java.lang.Throwable -> L37
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L37
            return r0
        L37:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L37
            throw r0
    }

    @android.support.annotation.NonNull
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    static android.support.v4.os.LocaleListHelper getEmptyLocaleList() {
            android.support.v4.os.LocaleListHelper r0 = android.support.v4.os.LocaleListHelper.sEmptyLocaleList
            return r0
    }

    private static java.lang.String getLikelyScript(java.util.Locale r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            java.lang.String r1 = ""
            r2 = 21
            if (r0 < r2) goto L13
            java.lang.String r3 = r3.getScript()
            boolean r0 = r3.isEmpty()
            if (r0 != 0) goto L13
            return r3
        L13:
            return r1
    }

    private static boolean isPseudoLocale(java.lang.String r1) {
            java.lang.String r0 = "en-XA"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L13
            java.lang.String r0 = "ar-XB"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L11
            goto L13
        L11:
            r1 = 0
            goto L14
        L13:
            r1 = 1
        L14:
            return r1
    }

    private static boolean isPseudoLocale(java.util.Locale r1) {
            java.util.Locale r0 = android.support.v4.os.LocaleListHelper.LOCALE_EN_XA
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L13
            java.util.Locale r0 = android.support.v4.os.LocaleListHelper.LOCALE_AR_XB
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L11
            goto L13
        L11:
            r1 = 0
            goto L14
        L13:
            r1 = 1
        L14:
            return r1
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    static boolean isPseudoLocalesOnly(@android.support.annotation.Nullable java.lang.String[] r6) {
            r0 = 1
            if (r6 != 0) goto L4
            return r0
        L4:
            int r1 = r6.length
            r2 = 3
            r3 = 0
            if (r1 <= r2) goto La
            return r3
        La:
            int r1 = r6.length
            r2 = 0
        Lc:
            if (r2 >= r1) goto L20
            r4 = r6[r2]
            boolean r5 = r4.isEmpty()
            if (r5 != 0) goto L1d
            boolean r4 = isPseudoLocale(r4)
            if (r4 != 0) goto L1d
            return r3
        L1d:
            int r2 = r2 + 1
            goto Lc
        L20:
            return r0
    }

    @android.support.annotation.IntRange(from = 0, to = 1)
    private static int matchScore(java.util.Locale r4, java.util.Locale r5) {
            boolean r0 = r4.equals(r5)
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = r4.getLanguage()
            java.lang.String r2 = r5.getLanguage()
            boolean r0 = r0.equals(r2)
            r2 = 0
            if (r0 != 0) goto L18
            return r2
        L18:
            boolean r0 = isPseudoLocale(r4)
            if (r0 != 0) goto L4f
            boolean r0 = isPseudoLocale(r5)
            if (r0 == 0) goto L25
            goto L4f
        L25:
            java.lang.String r0 = getLikelyScript(r4)
            boolean r3 = r0.isEmpty()
            if (r3 == 0) goto L46
            java.lang.String r4 = r4.getCountry()
            boolean r0 = r4.isEmpty()
            if (r0 != 0) goto L45
            java.lang.String r5 = r5.getCountry()
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L44
            goto L45
        L44:
            r1 = 0
        L45:
            return r1
        L46:
            java.lang.String r4 = getLikelyScript(r5)
            boolean r4 = r0.equals(r4)
            return r4
        L4f:
            return r2
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    static void setDefault(@android.support.annotation.Size(min = 1) @android.support.annotation.NonNull android.support.v4.os.LocaleListHelper r1) {
            r0 = 0
            setDefault(r1, r0)
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    static void setDefault(@android.support.annotation.Size(min = 1) @android.support.annotation.NonNull android.support.v4.os.LocaleListHelper r2, int r3) {
            if (r2 == 0) goto L39
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L31
            java.lang.Object r0 = android.support.v4.os.LocaleListHelper.sLock
            monitor-enter(r0)
            java.util.Locale r1 = r2.get(r3)     // Catch: java.lang.Throwable -> L2e
            android.support.v4.os.LocaleListHelper.sLastDefaultLocale = r1     // Catch: java.lang.Throwable -> L2e
            java.util.Locale r1 = android.support.v4.os.LocaleListHelper.sLastDefaultLocale     // Catch: java.lang.Throwable -> L2e
            java.util.Locale.setDefault(r1)     // Catch: java.lang.Throwable -> L2e
            android.support.v4.os.LocaleListHelper.sLastExplicitlySetLocaleList = r2     // Catch: java.lang.Throwable -> L2e
            android.support.v4.os.LocaleListHelper.sDefaultLocaleList = r2     // Catch: java.lang.Throwable -> L2e
            if (r3 != 0) goto L21
            android.support.v4.os.LocaleListHelper r2 = android.support.v4.os.LocaleListHelper.sDefaultLocaleList     // Catch: java.lang.Throwable -> L2e
            android.support.v4.os.LocaleListHelper.sDefaultAdjustedLocaleList = r2     // Catch: java.lang.Throwable -> L2e
            goto L2c
        L21:
            android.support.v4.os.LocaleListHelper r2 = new android.support.v4.os.LocaleListHelper     // Catch: java.lang.Throwable -> L2e
            java.util.Locale r3 = android.support.v4.os.LocaleListHelper.sLastDefaultLocale     // Catch: java.lang.Throwable -> L2e
            android.support.v4.os.LocaleListHelper r1 = android.support.v4.os.LocaleListHelper.sDefaultLocaleList     // Catch: java.lang.Throwable -> L2e
            r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> L2e
            android.support.v4.os.LocaleListHelper.sDefaultAdjustedLocaleList = r2     // Catch: java.lang.Throwable -> L2e
        L2c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            return
        L2e:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            throw r2
        L31:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "locales is empty"
            r2.<init>(r3)
            throw r2
        L39:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "locales is null"
            r2.<init>(r3)
            throw r2
    }

    public boolean equals(java.lang.Object r6) {
            r5 = this;
            r0 = 1
            if (r6 != r5) goto L4
            return r0
        L4:
            boolean r1 = r6 instanceof android.support.v4.os.LocaleListHelper
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            android.support.v4.os.LocaleListHelper r6 = (android.support.v4.os.LocaleListHelper) r6
            java.util.Locale[] r6 = r6.mList
            java.util.Locale[] r1 = r5.mList
            int r1 = r1.length
            int r3 = r6.length
            if (r1 == r3) goto L15
            return r2
        L15:
            r1 = 0
        L16:
            java.util.Locale[] r3 = r5.mList
            int r4 = r3.length
            if (r1 >= r4) goto L29
            r3 = r3[r1]
            r4 = r6[r1]
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L26
            return r2
        L26:
            int r1 = r1 + 1
            goto L16
        L29:
            return r0
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    java.util.Locale get(int r3) {
            r2 = this;
            if (r3 < 0) goto La
            java.util.Locale[] r0 = r2.mList
            int r1 = r0.length
            if (r3 >= r1) goto La
            r3 = r0[r3]
            goto Lb
        La:
            r3 = 0
        Lb:
            return r3
    }

    @android.support.annotation.Nullable
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    java.util.Locale getFirstMatch(java.lang.String[] r2) {
            r1 = this;
            java.util.List r2 = java.util.Arrays.asList(r2)
            r0 = 0
            java.util.Locale r2 = r1.computeFirstMatch(r2, r0)
            return r2
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    int getFirstMatchIndex(java.lang.String[] r2) {
            r1 = this;
            java.util.List r2 = java.util.Arrays.asList(r2)
            r0 = 0
            int r2 = r1.computeFirstMatchIndex(r2, r0)
            return r2
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    int getFirstMatchIndexWithEnglishSupported(java.util.Collection<java.lang.String> r2) {
            r1 = this;
            r0 = 1
            int r2 = r1.computeFirstMatchIndex(r2, r0)
            return r2
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    int getFirstMatchIndexWithEnglishSupported(java.lang.String[] r1) {
            r0 = this;
            java.util.List r1 = java.util.Arrays.asList(r1)
            int r1 = r0.getFirstMatchIndexWithEnglishSupported(r1)
            return r1
    }

    @android.support.annotation.Nullable
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    java.util.Locale getFirstMatchWithEnglishSupported(java.lang.String[] r2) {
            r1 = this;
            java.util.List r2 = java.util.Arrays.asList(r2)
            r0 = 1
            java.util.Locale r2 = r1.computeFirstMatch(r2, r0)
            return r2
    }

    public int hashCode() {
            r4 = this;
            r0 = 1
            r1 = 0
        L2:
            java.util.Locale[] r2 = r4.mList
            int r3 = r2.length
            if (r1 >= r3) goto L13
            int r0 = r0 * 31
            r2 = r2[r1]
            int r2 = r2.hashCode()
            int r0 = r0 + r2
            int r1 = r1 + 1
            goto L2
        L13:
            return r0
    }

    @android.support.annotation.IntRange(from = -1)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    int indexOf(java.util.Locale r4) {
            r3 = this;
            r0 = 0
        L1:
            java.util.Locale[] r1 = r3.mList
            int r2 = r1.length
            if (r0 >= r2) goto L12
            r1 = r1[r0]
            boolean r1 = r1.equals(r4)
            if (r1 == 0) goto Lf
            return r0
        Lf:
            int r0 = r0 + 1
            goto L1
        L12:
            r4 = -1
            return r4
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    boolean isEmpty() {
            r1 = this;
            java.util.Locale[] r0 = r1.mList
            int r0 = r0.length
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    @android.support.annotation.IntRange(from = 0)
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    int size() {
            r1 = this;
            java.util.Locale[] r0 = r1.mList
            int r0 = r0.length
            return r0
    }

    @android.support.annotation.NonNull
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    java.lang.String toLanguageTags() {
            r1 = this;
            java.lang.String r0 = r1.mStringRepresentation
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "["
            r0.append(r1)
            r1 = 0
        Lb:
            java.util.Locale[] r2 = r4.mList
            int r3 = r2.length
            if (r1 >= r3) goto L24
            r2 = r2[r1]
            r0.append(r2)
            java.util.Locale[] r2 = r4.mList
            int r2 = r2.length
            int r2 = r2 + (-1)
            if (r1 >= r2) goto L21
            r2 = 44
            r0.append(r2)
        L21:
            int r1 = r1 + 1
            goto Lb
        L24:
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
