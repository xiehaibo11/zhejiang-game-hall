package android.support.v4.os;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
interface LocaleListInterface {
    boolean equals(java.lang.Object r1);

    java.util.Locale get(int r1);

    @android.support.annotation.Nullable
    java.util.Locale getFirstMatch(java.lang.String[] r1);

    java.lang.Object getLocaleList();

    int hashCode();

    @android.support.annotation.IntRange(from = -1)
    int indexOf(java.util.Locale r1);

    boolean isEmpty();

    void setLocaleList(@android.support.annotation.NonNull java.util.Locale... r1);

    @android.support.annotation.IntRange(from = 0)
    int size();

    java.lang.String toLanguageTags();

    java.lang.String toString();
}
