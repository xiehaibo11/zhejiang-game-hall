package android.support.v7.text;

import android.content.Context;
import android.graphics.Rect;
import android.support.annotation.RestrictTo;
import android.text.method.TransformationMethod;
import android.view.View;
import java.util.Locale;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class AllCapsTransformationMethod implements TransformationMethod {
    private Locale mLocale;

    @Override
    public void onFocusChanged(View r1, CharSequence r2, boolean r3, int r4, Rect r5) {
    }

    public AllCapsTransformationMethod(Context r1) {
        this.mLocale = r1.getResources().getConfiguration().locale;
    }

    @Override
    public CharSequence getTransformation(CharSequence r1, View r2) {
        if (r1 != null) goto L6;
        return null;
    L6:
        return r1.toString().toUpperCase(this.mLocale);
    }
}
