package android.support.v4.os;

public final class LocaleListCompat {
    static final android.support.v4.os.LocaleListInterface IMPL = null;
    private static final android.support.v4.os.LocaleListCompat sEmptyLocaleList = null;

    @android.support.annotation.RequiresApi(24)
    static class LocaleListCompatApi24Impl implements android.support.v4.os.LocaleListInterface {
        private android.os.LocaleList mLocaleList;

        LocaleListCompatApi24Impl() {
                r2 = this;
                r2.<init>()
                android.os.LocaleList r0 = new android.os.LocaleList
                r1 = 0
                java.util.Locale[] r1 = new java.util.Locale[r1]
                r0.<init>(r1)
                r2.mLocaleList = r0
                return
        }

        @Override
        public boolean equals(java.lang.Object r2) {
                r1 = this;
                android.os.LocaleList r0 = r1.mLocaleList
                android.support.v4.os.LocaleListCompat r2 = (android.support.v4.os.LocaleListCompat) r2
                java.lang.Object r2 = r2.unwrap()
                boolean r2 = r0.equals(r2)
                return r2
        }

        @Override
        public java.util.Locale get(int r2) {
                r1 = this;
                android.os.LocaleList r0 = r1.mLocaleList
                java.util.Locale r2 = r0.get(r2)
                return r2
        }

        @Override
        @android.support.annotation.Nullable
        public java.util.Locale getFirstMatch(java.lang.String[] r2) {
                r1 = this;
                android.os.LocaleList r0 = r1.mLocaleList
                if (r0 == 0) goto L9
                java.util.Locale r2 = r0.getFirstMatch(r2)
                return r2
            L9:
                r2 = 0
                return r2
        }

        @Override
        public java.lang.Object getLocaleList() {
                r1 = this;
                android.os.LocaleList r0 = r1.mLocaleList
                return r0
        }

        @Override
        public int hashCode() {
                r1 = this;
                android.os.LocaleList r0 = r1.mLocaleList
                int r0 = r0.hashCode()
                return r0
        }

        @Override
        @android.support.annotation.IntRange(from = -1)
        public int indexOf(java.util.Locale r2) {
                r1 = this;
                android.os.LocaleList r0 = r1.mLocaleList
                int r2 = r0.indexOf(r2)
                return r2
        }

        @Override
        public boolean isEmpty() {
                r1 = this;
                android.os.LocaleList r0 = r1.mLocaleList
                boolean r0 = r0.isEmpty()
                return r0
        }

        @Override
        public void setLocaleList(@android.support.annotation.NonNull java.util.Locale... r2) {
                r1 = this;
                android.os.LocaleList r0 = new android.os.LocaleList
                r0.<init>(r2)
                r1.mLocaleList = r0
                return
        }

        @Override
        @android.support.annotation.IntRange(from = 0)
        public int size() {
                r1 = this;
                android.os.LocaleList r0 = r1.mLocaleList
                int r0 = r0.size()
                return r0
        }

        @Override
        public java.lang.String toLanguageTags() {
                r1 = this;
                android.os.LocaleList r0 = r1.mLocaleList
                java.lang.String r0 = r0.toLanguageTags()
                return r0
        }

        @Override
        public java.lang.String toString() {
                r1 = this;
                android.os.LocaleList r0 = r1.mLocaleList
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static class LocaleListCompatBaseImpl implements android.support.v4.os.LocaleListInterface {
        private android.support.v4.os.LocaleListHelper mLocaleList;

        LocaleListCompatBaseImpl() {
                r2 = this;
                r2.<init>()
                android.support.v4.os.LocaleListHelper r0 = new android.support.v4.os.LocaleListHelper
                r1 = 0
                java.util.Locale[] r1 = new java.util.Locale[r1]
                r0.<init>(r1)
                r2.mLocaleList = r0
                return
        }

        @Override
        public boolean equals(java.lang.Object r2) {
                r1 = this;
                android.support.v4.os.LocaleListHelper r0 = r1.mLocaleList
                android.support.v4.os.LocaleListCompat r2 = (android.support.v4.os.LocaleListCompat) r2
                java.lang.Object r2 = r2.unwrap()
                boolean r2 = r0.equals(r2)
                return r2
        }

        @Override
        public java.util.Locale get(int r2) {
                r1 = this;
                android.support.v4.os.LocaleListHelper r0 = r1.mLocaleList
                java.util.Locale r2 = r0.get(r2)
                return r2
        }

        @Override
        @android.support.annotation.Nullable
        public java.util.Locale getFirstMatch(java.lang.String[] r2) {
                r1 = this;
                android.support.v4.os.LocaleListHelper r0 = r1.mLocaleList
                if (r0 == 0) goto L9
                java.util.Locale r2 = r0.getFirstMatch(r2)
                return r2
            L9:
                r2 = 0
                return r2
        }

        @Override
        public java.lang.Object getLocaleList() {
                r1 = this;
                android.support.v4.os.LocaleListHelper r0 = r1.mLocaleList
                return r0
        }

        @Override
        public int hashCode() {
                r1 = this;
                android.support.v4.os.LocaleListHelper r0 = r1.mLocaleList
                int r0 = r0.hashCode()
                return r0
        }

        @Override
        @android.support.annotation.IntRange(from = -1)
        public int indexOf(java.util.Locale r2) {
                r1 = this;
                android.support.v4.os.LocaleListHelper r0 = r1.mLocaleList
                int r2 = r0.indexOf(r2)
                return r2
        }

        @Override
        public boolean isEmpty() {
                r1 = this;
                android.support.v4.os.LocaleListHelper r0 = r1.mLocaleList
                boolean r0 = r0.isEmpty()
                return r0
        }

        @Override
        public void setLocaleList(@android.support.annotation.NonNull java.util.Locale... r2) {
                r1 = this;
                android.support.v4.os.LocaleListHelper r0 = new android.support.v4.os.LocaleListHelper
                r0.<init>(r2)
                r1.mLocaleList = r0
                return
        }

        @Override
        @android.support.annotation.IntRange(from = 0)
        public int size() {
                r1 = this;
                android.support.v4.os.LocaleListHelper r0 = r1.mLocaleList
                int r0 = r0.size()
                return r0
        }

        @Override
        public java.lang.String toLanguageTags() {
                r1 = this;
                android.support.v4.os.LocaleListHelper r0 = r1.mLocaleList
                java.lang.String r0 = r0.toLanguageTags()
                return r0
        }

        @Override
        public java.lang.String toString() {
                r1 = this;
                android.support.v4.os.LocaleListHelper r0 = r1.mLocaleList
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static {
            android.support.v4.os.LocaleListCompat r0 = new android.support.v4.os.LocaleListCompat
            r0.<init>()
            android.support.v4.os.LocaleListCompat.sEmptyLocaleList = r0
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L15
            android.support.v4.os.LocaleListCompat$LocaleListCompatApi24Impl r0 = new android.support.v4.os.LocaleListCompat$LocaleListCompatApi24Impl
            r0.<init>()
            android.support.v4.os.LocaleListCompat.IMPL = r0
            goto L1c
        L15:
            android.support.v4.os.LocaleListCompat$LocaleListCompatBaseImpl r0 = new android.support.v4.os.LocaleListCompat$LocaleListCompatBaseImpl
            r0.<init>()
            android.support.v4.os.LocaleListCompat.IMPL = r0
        L1c:
            return
    }

    private LocaleListCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.support.v4.os.LocaleListCompat create(@android.support.annotation.NonNull java.util.Locale... r1) {
            android.support.v4.os.LocaleListCompat r0 = new android.support.v4.os.LocaleListCompat
            r0.<init>()
            r0.setLocaleListArray(r1)
            return r0
    }

    @android.support.annotation.NonNull
    public static android.support.v4.os.LocaleListCompat forLanguageTags(@android.support.annotation.Nullable java.lang.String r4) {
            if (r4 == 0) goto L38
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto L9
            goto L38
        L9:
            r0 = -1
            java.lang.String r1 = ","
            java.lang.String[] r4 = r4.split(r1, r0)
            int r0 = r4.length
            java.util.Locale[] r0 = new java.util.Locale[r0]
            r1 = 0
        L14:
            int r2 = r0.length
            if (r1 >= r2) goto L2f
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 21
            if (r2 < r3) goto L24
            r2 = r4[r1]
            java.util.Locale r2 = java.util.Locale.forLanguageTag(r2)
            goto L2a
        L24:
            r2 = r4[r1]
            java.util.Locale r2 = android.support.v4.os.LocaleHelper.forLanguageTag(r2)
        L2a:
            r0[r1] = r2
            int r1 = r1 + 1
            goto L14
        L2f:
            android.support.v4.os.LocaleListCompat r4 = new android.support.v4.os.LocaleListCompat
            r4.<init>()
            r4.setLocaleListArray(r0)
            return r4
        L38:
            android.support.v4.os.LocaleListCompat r4 = getEmptyLocaleList()
            return r4
    }

    @android.support.annotation.Size(min = 1)
    @android.support.annotation.NonNull
    public static android.support.v4.os.LocaleListCompat getAdjustedDefault() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lf
            android.os.LocaleList r0 = android.os.LocaleList.getAdjustedDefault()
            android.support.v4.os.LocaleListCompat r0 = wrap(r0)
            return r0
        Lf:
            r0 = 1
            java.util.Locale[] r0 = new java.util.Locale[r0]
            r1 = 0
            java.util.Locale r2 = java.util.Locale.getDefault()
            r0[r1] = r2
            android.support.v4.os.LocaleListCompat r0 = create(r0)
            return r0
    }

    @android.support.annotation.Size(min = 1)
    @android.support.annotation.NonNull
    public static android.support.v4.os.LocaleListCompat getDefault() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lf
            android.os.LocaleList r0 = android.os.LocaleList.getDefault()
            android.support.v4.os.LocaleListCompat r0 = wrap(r0)
            return r0
        Lf:
            r0 = 1
            java.util.Locale[] r0 = new java.util.Locale[r0]
            r1 = 0
            java.util.Locale r2 = java.util.Locale.getDefault()
            r0[r1] = r2
            android.support.v4.os.LocaleListCompat r0 = create(r0)
            return r0
    }

    @android.support.annotation.NonNull
    public static android.support.v4.os.LocaleListCompat getEmptyLocaleList() {
            android.support.v4.os.LocaleListCompat r0 = android.support.v4.os.LocaleListCompat.sEmptyLocaleList
            return r0
    }

    @android.support.annotation.RequiresApi(24)
    private void setLocaleList(android.os.LocaleList r5) {
            r4 = this;
            int r0 = r5.size()
            if (r0 <= 0) goto L19
            java.util.Locale[] r1 = new java.util.Locale[r0]
            r2 = 0
        L9:
            if (r2 >= r0) goto L14
            java.util.Locale r3 = r5.get(r2)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L9
        L14:
            android.support.v4.os.LocaleListInterface r5 = android.support.v4.os.LocaleListCompat.IMPL
            r5.setLocaleList(r1)
        L19:
            return
    }

    private void setLocaleListArray(java.util.Locale... r2) {
            r1 = this;
            android.support.v4.os.LocaleListInterface r0 = android.support.v4.os.LocaleListCompat.IMPL
            r0.setLocaleList(r2)
            return
    }

    @android.support.annotation.RequiresApi(24)
    public static android.support.v4.os.LocaleListCompat wrap(java.lang.Object r2) {
            android.support.v4.os.LocaleListCompat r0 = new android.support.v4.os.LocaleListCompat
            r0.<init>()
            boolean r1 = r2 instanceof android.os.LocaleList
            if (r1 == 0) goto Le
            android.os.LocaleList r2 = (android.os.LocaleList) r2
            r0.setLocaleList(r2)
        Le:
            return r0
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            android.support.v4.os.LocaleListInterface r0 = android.support.v4.os.LocaleListCompat.IMPL
            boolean r2 = r0.equals(r2)
            return r2
    }

    public java.util.Locale get(int r2) {
            r1 = this;
            android.support.v4.os.LocaleListInterface r0 = android.support.v4.os.LocaleListCompat.IMPL
            java.util.Locale r2 = r0.get(r2)
            return r2
    }

    public java.util.Locale getFirstMatch(java.lang.String[] r2) {
            r1 = this;
            android.support.v4.os.LocaleListInterface r0 = android.support.v4.os.LocaleListCompat.IMPL
            java.util.Locale r2 = r0.getFirstMatch(r2)
            return r2
    }

    public int hashCode() {
            r1 = this;
            android.support.v4.os.LocaleListInterface r0 = android.support.v4.os.LocaleListCompat.IMPL
            int r0 = r0.hashCode()
            return r0
    }

    @android.support.annotation.IntRange(from = -1)
    public int indexOf(java.util.Locale r2) {
            r1 = this;
            android.support.v4.os.LocaleListInterface r0 = android.support.v4.os.LocaleListCompat.IMPL
            int r2 = r0.indexOf(r2)
            return r2
    }

    public boolean isEmpty() {
            r1 = this;
            android.support.v4.os.LocaleListInterface r0 = android.support.v4.os.LocaleListCompat.IMPL
            boolean r0 = r0.isEmpty()
            return r0
    }

    @android.support.annotation.IntRange(from = 0)
    public int size() {
            r1 = this;
            android.support.v4.os.LocaleListInterface r0 = android.support.v4.os.LocaleListCompat.IMPL
            int r0 = r0.size()
            return r0
    }

    @android.support.annotation.NonNull
    public java.lang.String toLanguageTags() {
            r1 = this;
            android.support.v4.os.LocaleListInterface r0 = android.support.v4.os.LocaleListCompat.IMPL
            java.lang.String r0 = r0.toLanguageTags()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            android.support.v4.os.LocaleListInterface r0 = android.support.v4.os.LocaleListCompat.IMPL
            java.lang.String r0 = r0.toString()
            return r0
    }

    @android.support.annotation.Nullable
    public java.lang.Object unwrap() {
            r1 = this;
            android.support.v4.os.LocaleListInterface r0 = android.support.v4.os.LocaleListCompat.IMPL
            java.lang.Object r0 = r0.getLocaleList()
            return r0
    }
}
