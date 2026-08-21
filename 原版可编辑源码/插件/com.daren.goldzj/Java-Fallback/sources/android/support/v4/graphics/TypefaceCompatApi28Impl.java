package android.support.v4.graphics;

import android.graphics.Typeface;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import java.lang.reflect.Array;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

@RequiresApi(28)
@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class TypefaceCompatApi28Impl extends TypefaceCompatApi26Impl {
    private static final String CREATE_FROM_FAMILIES_WITH_DEFAULT_METHOD = "createFromFamiliesWithDefault";
    private static final String DEFAULT_FAMILY = "sans-serif";
    private static final int RESOLVE_BY_FONT_TABLE = -1;
    private static final String TAG = "TypefaceCompatApi28Impl";

    public TypefaceCompatApi28Impl() {
    }

    @Override
    protected Typeface createFromFamiliesWithDefault(Object r6) {
        Object r0 = Array.newInstance(this.mFontFamily, 1);     // Catch: InvocationTargetException -> L4 Throwable -> L6
        Array.set(r0, 0, r6);     // Catch: InvocationTargetException -> L4 Throwable -> L6
        return (Typeface) this.mCreateFromFamiliesWithDefault.invoke(null, new Object[]{r0, DEFAULT_FAMILY, -1, -1});
    L6:
        e = move-exception;
        throw new RuntimeException(e);
    }

    @Override
    protected Method obtainCreateFromFamiliesWithDefaultMethod(Class r5) throws NoSuchMethodException {
        Method r52 = Typeface.class.getDeclaredMethod(CREATE_FROM_FAMILIES_WITH_DEFAULT_METHOD, new Class[]{Array.newInstance(r5, 1).getClass(), String.class, Integer.TYPE, Integer.TYPE});
        r52.setAccessible(true);
        return r52;
    }
}
