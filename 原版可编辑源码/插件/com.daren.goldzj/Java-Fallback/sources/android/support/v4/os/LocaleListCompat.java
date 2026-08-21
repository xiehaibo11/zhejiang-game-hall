package android.support.v4.os;

import android.os.Build;
import android.os.LocaleList;
import android.support.annotation.IntRange;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.Size;
import java.util.Locale;

public final class LocaleListCompat {
    static final LocaleListInterface IMPL = null;
    private static final LocaleListCompat sEmptyLocaleList = null;

    @RequiresApi(24)
    static class LocaleListCompatApi24Impl implements LocaleListInterface {
        private LocaleList mLocaleList;

        LocaleListCompatApi24Impl() {
            this.mLocaleList = new LocaleList(new Locale[0]);
        }

        @Override
        public void setLocaleList(@NonNull Locale... r2) {
            this.mLocaleList = new LocaleList(r2);
        }

        @Override
        public Object getLocaleList() {
            return this.mLocaleList;
        }

        @Override
        public Locale get(int r2) {
            return this.mLocaleList.get(r2);
        }

        @Override
        public boolean isEmpty() {
            return this.mLocaleList.isEmpty();
        }

        @Override
        @IntRange(from = 0)
        public int size() {
            return this.mLocaleList.size();
        }

        @Override
        @IntRange(from = -1)
        public int indexOf(Locale r2) {
            return this.mLocaleList.indexOf(r2);
        }

        @Override
        public boolean equals(Object r2) {
            return this.mLocaleList.equals(((LocaleListCompat) r2).unwrap());
        }

        @Override
        public int hashCode() {
            return this.mLocaleList.hashCode();
        }

        @Override
        public String toString() {
            return this.mLocaleList.toString();
        }

        @Override
        public String toLanguageTags() {
            return this.mLocaleList.toLanguageTags();
        }

        @Override
        @Nullable
        public Locale getFirstMatch(String[] r2) {
            LocaleList r0 = this.mLocaleList;
            if (r0 != null) goto L5;
            return null;
        L5:
            return r0.getFirstMatch(r2);
        }
    }

    static class LocaleListCompatBaseImpl implements LocaleListInterface {
        private LocaleListHelper mLocaleList;

        LocaleListCompatBaseImpl() {
            this.mLocaleList = new LocaleListHelper(new Locale[0]);
        }

        @Override
        public void setLocaleList(@NonNull Locale... r2) {
            this.mLocaleList = new LocaleListHelper(r2);
        }

        @Override
        public Object getLocaleList() {
            return this.mLocaleList;
        }

        @Override
        public Locale get(int r2) {
            return this.mLocaleList.get(r2);
        }

        @Override
        public boolean isEmpty() {
            return this.mLocaleList.isEmpty();
        }

        @Override
        @IntRange(from = 0)
        public int size() {
            return this.mLocaleList.size();
        }

        @Override
        @IntRange(from = -1)
        public int indexOf(Locale r2) {
            return this.mLocaleList.indexOf(r2);
        }

        @Override
        public boolean equals(Object r2) {
            return this.mLocaleList.equals(((LocaleListCompat) r2).unwrap());
        }

        @Override
        public int hashCode() {
            return this.mLocaleList.hashCode();
        }

        @Override
        public String toString() {
            return this.mLocaleList.toString();
        }

        @Override
        public String toLanguageTags() {
            return this.mLocaleList.toLanguageTags();
        }

        @Override
        @Nullable
        public Locale getFirstMatch(String[] r2) {
            LocaleListHelper r0 = this.mLocaleList;
            if (r0 != null) goto L5;
            return null;
        L5:
            return r0.getFirstMatch(r2);
        }
    }

    static {
        sEmptyLocaleList = new LocaleListCompat();
        if (Build.VERSION.SDK_INT < 24) goto L5;
        IMPL = new LocaleListCompatApi24Impl();
        return;
    L5:
        IMPL = new LocaleListCompatBaseImpl();
    }

    private LocaleListCompat() {
    }

    @RequiresApi(24)
    public static LocaleListCompat wrap(Object r2) {
        LocaleListCompat r0 = new LocaleListCompat();
        if ((r2 instanceof LocaleList) == false) goto L5;
        r0.setLocaleList((LocaleList) r2);
    L5:
        return r0;
    }

    @Nullable
    public Object unwrap() {
        return IMPL.getLocaleList();
    }

    public static LocaleListCompat create(@NonNull Locale... r1) {
        LocaleListCompat r0 = new LocaleListCompat();
        r0.setLocaleListArray(r1);
        return r0;
    }

    public Locale get(int r2) {
        return IMPL.get(r2);
    }

    public boolean isEmpty() {
        return IMPL.isEmpty();
    }

    @IntRange(from = 0)
    public int size() {
        return IMPL.size();
    }

    @IntRange(from = -1)
    public int indexOf(Locale r2) {
        return IMPL.indexOf(r2);
    }

    @NonNull
    public String toLanguageTags() {
        return IMPL.toLanguageTags();
    }

    public Locale getFirstMatch(String[] r2) {
        return IMPL.getFirstMatch(r2);
    }

    @NonNull
    public static LocaleListCompat getEmptyLocaleList() {
        return sEmptyLocaleList;
    }

    @NonNull
    public static LocaleListCompat forLanguageTags(@Nullable String r4) {
        if (r4 == null) goto L17;
        if (r4.isEmpty() == true) goto L17;
        String[] r42 = r4.split(",", -1);
        Locale[] r0 = new Locale[r42.length];
        int r1 = 0;
    L8:
        if (r1 >= r0.length) goto L14;
        if (Build.VERSION.SDK_INT < 21) goto L12;
        Locale r2 = Locale.forLanguageTag(r42[r1]);
    L13:
        r0[r1] = r2;
        r1 = r1 + 1;
        goto L8
    L12:
        r2 = LocaleHelper.forLanguageTag(r42[r1]);
        goto L13
    L14:
        LocaleListCompat r43 = new LocaleListCompat();
        r43.setLocaleListArray(r0);
        return r43;
    L17:
        return getEmptyLocaleList();
    }

    @Size(min = 1)
    @NonNull
    public static LocaleListCompat getAdjustedDefault() {
        if (Build.VERSION.SDK_INT < 24) goto L7;
        return wrap(LocaleList.getAdjustedDefault());
    L7:
        return create(new Locale[]{Locale.getDefault()});
    }

    @Size(min = 1)
    @NonNull
    public static LocaleListCompat getDefault() {
        if (Build.VERSION.SDK_INT < 24) goto L7;
        return wrap(LocaleList.getDefault());
    L7:
        return create(new Locale[]{Locale.getDefault()});
    }

    public boolean equals(Object r2) {
        return IMPL.equals(r2);
    }

    public int hashCode() {
        return IMPL.hashCode();
    }

    public String toString() {
        return IMPL.toString();
    }

    @RequiresApi(24)
    private void setLocaleList(LocaleList r5) {
        int r0 = r5.size();
        if (r0 <= 0) goto L10;
        Locale[] r1 = new Locale[r0];
        int r2 = 0;
    L5:
        if (r2 >= r0) goto L7;
        r1[r2] = r5.get(r2);
        r2 = r2 + 1;
        goto L5
    L7:
        IMPL.setLocaleList(r1);
        return;
    }

    private void setLocaleListArray(Locale... r2) {
        IMPL.setLocaleList(r2);
    }
}
