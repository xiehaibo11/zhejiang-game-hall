package android.support.v4.view;

import android.content.Context;
import android.os.Build;
import android.support.annotation.NonNull;
import android.util.AttributeSet;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import java.lang.reflect.Field;

public final class LayoutInflaterCompat {
    private static final String TAG = "LayoutInflaterCompatHC";
    private static boolean sCheckedField;
    private static Field sLayoutInflaterFactory2Field;

    static class Factory2Wrapper implements LayoutInflater.Factory2 {
        final LayoutInflaterFactory mDelegateFactory;

        Factory2Wrapper(LayoutInflaterFactory r1) {
            this.mDelegateFactory = r1;
        }

        @Override
        public View onCreateView(String r3, Context r4, AttributeSet r5) {
            return this.mDelegateFactory.onCreateView(null, r3, r4, r5);
        }

        @Override
        public View onCreateView(View r2, String r3, Context r4, AttributeSet r5) {
            return this.mDelegateFactory.onCreateView(r2, r3, r4, r5);
        }

        public String toString() {
            return getClass().getName() + "{" + this.mDelegateFactory + "}";
        }
    }

    private static void forceSetFactory2(LayoutInflater r6, LayoutInflater.Factory2 r7) {
        if (sCheckedField == false) goto L17;
    L10:
        Field r0 = sLayoutInflaterFactory2Field;
        if (r0 == null) goto L21;
        r0.set(r6, r7);     // Catch: IllegalAccessException -> L14
        return;
    L14:
        e = move-exception;
        Log.e(TAG, "forceSetFactory2 could not set the Factory2 on LayoutInflater " + r6 + "; inflation may have unexpected results.", e);
        return;
    L21:
        return;
    L17:
        sLayoutInflaterFactory2Field = LayoutInflater.class.getDeclaredField("mFactory2");     // Catch: NoSuchFieldException -> L7
        sLayoutInflaterFactory2Field.setAccessible(true);     // Catch: NoSuchFieldException -> L7
    L9:
        sCheckedField = true;
    L7:
        e = move-exception;
        Log.e(TAG, "forceSetFactory2 Could not find field 'mFactory2' on class " + LayoutInflater.class.getName() + "; inflation may have unexpected results.", e);
        goto L9
    }

    private LayoutInflaterCompat() {
    }

    @Deprecated
    public static void setFactory(@NonNull LayoutInflater r3, @NonNull LayoutInflaterFactory r4) {
        Factory2Wrapper r1 = null;
        if (Build.VERSION.SDK_INT < 21) goto L7;
        if (r4 == null) goto L6;
        r1 = new Factory2Wrapper(r4);
    L6:
        r3.setFactory2(r1);
        return;
    L7:
        if (r4 == null) goto L9;
        r1 = new Factory2Wrapper(r4);
    L9:
        r3.setFactory2(r1);
        LayoutInflater.Factory r42 = r3.getFactory();
        if ((r42 instanceof LayoutInflater.Factory2) == false) goto L12;
        forceSetFactory2(r3, (LayoutInflater.Factory2) r42);
        return;
    L12:
        forceSetFactory2(r3, r1);
    }

    public static void setFactory2(@NonNull LayoutInflater r2, @NonNull LayoutInflater.Factory2 r3) {
        r2.setFactory2(r3);
        if (Build.VERSION.SDK_INT >= 21) goto L9;
        LayoutInflater.Factory r0 = r2.getFactory();
        if ((r0 instanceof LayoutInflater.Factory2) == false) goto L7;
        forceSetFactory2(r2, (LayoutInflater.Factory2) r0);
        return;
    L7:
        forceSetFactory2(r2, r3);
        return;
    }

    @Deprecated
    public static LayoutInflaterFactory getFactory(LayoutInflater r1) {
        LayoutInflater.Factory r12 = r1.getFactory();
        if ((r12 instanceof Factory2Wrapper) == true) goto L5;
        return null;
    L5:
        return ((Factory2Wrapper) r12).mDelegateFactory;
    }
}
