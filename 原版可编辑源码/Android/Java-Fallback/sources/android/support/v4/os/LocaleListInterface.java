package android.support.v4.os;

interface LocaleListInterface {
    boolean equals(java.lang.Object r1);

    java.util.Locale get(int r1);

    java.util.Locale getFirstMatch(java.lang.String[] r1);

    java.lang.Object getLocaleList();

    int hashCode();

    int indexOf(java.util.Locale r1);

    boolean isEmpty();

    void setLocaleList(java.util.Locale... r1);

    int size();

    java.lang.String toLanguageTags();

    java.lang.String toString();
}
