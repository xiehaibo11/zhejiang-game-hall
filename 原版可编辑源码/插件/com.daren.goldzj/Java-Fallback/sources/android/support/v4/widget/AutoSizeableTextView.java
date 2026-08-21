package android.support.v4.widget;

import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.RestrictTo;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public interface AutoSizeableTextView {

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static final boolean PLATFORM_SUPPORTS_AUTOSIZE = false;

    int getAutoSizeMaxTextSize();

    int getAutoSizeMinTextSize();

    int getAutoSizeStepGranularity();

    int[] getAutoSizeTextAvailableSizes();

    int getAutoSizeTextType();

    void setAutoSizeTextTypeUniformWithConfiguration(int r1, int r2, int r3, int r4) throws IllegalArgumentException;

    void setAutoSizeTextTypeUniformWithPresetSizes(@NonNull int[] r1, int r2) throws IllegalArgumentException;

    void setAutoSizeTextTypeWithDefaults(int r1);

    static {
        if (Build.VERSION.SDK_INT < 27) goto L5;
        boolean r0 = true;
    L6:
        PLATFORM_SUPPORTS_AUTOSIZE = r0;
        return;
    L5:
        r0 = false;
        goto L6
    }
}
