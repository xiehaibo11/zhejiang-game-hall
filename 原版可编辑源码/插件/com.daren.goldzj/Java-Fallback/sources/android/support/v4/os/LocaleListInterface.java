package android.support.v4.os;

import android.support.annotation.IntRange;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import java.util.Locale;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
interface LocaleListInterface {
    boolean equals(Object r1);

    Locale get(int r1);

    @Nullable
    Locale getFirstMatch(String[] r1);

    Object getLocaleList();

    int hashCode();

    @IntRange(from = -1)
    int indexOf(Locale r1);

    boolean isEmpty();

    void setLocaleList(@NonNull Locale... r1);

    @IntRange(from = 0)
    int size();

    String toLanguageTags();

    String toString();
}
