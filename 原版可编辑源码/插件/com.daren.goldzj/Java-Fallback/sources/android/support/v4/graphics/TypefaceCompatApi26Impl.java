package android.support.v4.graphics;

import android.content.Context;
import android.content.res.AssetManager;
import android.content.res.Resources;
import android.graphics.Typeface;
import android.graphics.fonts.FontVariationAxis;
import android.net.Uri;
import android.os.CancellationSignal;
import android.os.ParcelFileDescriptor;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.v4.content.res.FontResourcesParserCompat;
import android.support.v4.provider.FontsContractCompat;
import android.util.Log;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.loader.p.PluginProviderClient;
import java.io.IOException;
import java.lang.reflect.Array;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.nio.ByteBuffer;
import java.util.Map;

@RequiresApi(26)
@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class TypefaceCompatApi26Impl extends TypefaceCompatApi21Impl {
    private static final String ABORT_CREATION_METHOD = "abortCreation";
    private static final String ADD_FONT_FROM_ASSET_MANAGER_METHOD = "addFontFromAssetManager";
    private static final String ADD_FONT_FROM_BUFFER_METHOD = "addFontFromBuffer";
    private static final String CREATE_FROM_FAMILIES_WITH_DEFAULT_METHOD = "createFromFamiliesWithDefault";
    private static final String DEFAULT_FAMILY = "sans-serif";
    private static final String FONT_FAMILY_CLASS = "android.graphics.FontFamily";
    private static final String FREEZE_METHOD = "freeze";
    private static final int RESOLVE_BY_FONT_TABLE = -1;
    private static final String TAG = "TypefaceCompatApi26Impl";
    protected final Method mAbortCreation;
    protected final Method mAddFontFromAssetManager;
    protected final Method mAddFontFromBuffer;
    protected final Method mCreateFromFamiliesWithDefault;
    protected final Class mFontFamily;
    protected final Constructor mFontFamilyCtor;
    protected final Method mFreeze;

    public TypefaceCompatApi26Impl() {
        Class r0 = null;
        Class r1 = obtainFontFamily();     // Catch: NoSuchMethodException -> L5 Throwable -> L7
        Constructor r2 = obtainFontFamilyCtor(r1);     // Catch: NoSuchMethodException -> L5 Throwable -> L7
        Method r3 = obtainAddFontFromAssetManagerMethod(r1);     // Catch: NoSuchMethodException -> L5 Throwable -> L7
        Method r4 = obtainAddFontFromBufferMethod(r1);     // Catch: NoSuchMethodException -> L5 Throwable -> L7
        Method r5 = obtainFreezeMethod(r1);     // Catch: NoSuchMethodException -> L5 Throwable -> L7
        Method r6 = obtainAbortCreationMethod(r1);     // Catch: NoSuchMethodException -> L5 Throwable -> L7
        Method r12 = obtainCreateFromFamiliesWithDefaultMethod(r1);     // Catch: NoSuchMethodException -> L5 Throwable -> L7
        r0 = r1;
    L9:
        this.mFontFamily = r0;
        this.mFontFamilyCtor = r2;
        this.mAddFontFromAssetManager = r3;
        this.mAddFontFromBuffer = r4;
        this.mFreeze = r5;
        this.mAbortCreation = r6;
        this.mCreateFromFamiliesWithDefault = r12;
        return;
    L7:
        e = move-exception;
        Log.e(TAG, "Unable to collect necessary methods for class " + e.getClass().getName(), e);
        r12 = null;
        r2 = null;
        r3 = null;
        r4 = null;
        r5 = null;
        r6 = null;
        goto L9
    }

    private boolean isFontFamilyPrivateAPIAvailable() {
        if (this.mAddFontFromAssetManager != null) goto L6;
        Log.w(TAG, "Unable to collect necessary private methods. Fallback to legacy implementation.");
    L6:
        if (this.mAddFontFromAssetManager == null) goto L8;
        return true;
    L8:
        return false;
    }

    private Object newFamily() {
        return this.mFontFamilyCtor.newInstance(new Object[0]);
    L4:
        e = move-exception;
        throw new RuntimeException(e);
    }

    private boolean addFontFromAssetManager(Context r4, Object r5, String r6, int r7, int r8, int r9, @Nullable FontVariationAxis[] r10) {
        return ((Boolean) this.mAddFontFromAssetManager.invoke(r5, new Object[]{r4.getAssets(), r6, 0, false, Integer.valueOf(r7), Integer.valueOf(r8), Integer.valueOf(r9), r10})).booleanValue();
    L6:
        e = move-exception;
        throw new RuntimeException(e);
    }

    private boolean addFontFromBuffer(Object r4, ByteBuffer r5, int r6, int r7, int r8) {
        return ((Boolean) this.mAddFontFromBuffer.invoke(r4, new Object[]{r5, Integer.valueOf(r6), null, Integer.valueOf(r7), Integer.valueOf(r8)})).booleanValue();
    L4:
        e = move-exception;
        throw new RuntimeException(e);
    }

    protected Typeface createFromFamiliesWithDefault(Object r6) {
        Object r0 = Array.newInstance(this.mFontFamily, 1);     // Catch: Throwable -> L4 IllegalAccessException -> L6
        Array.set(r0, 0, r6);     // Catch: Throwable -> L4 IllegalAccessException -> L6
        return (Typeface) this.mCreateFromFamiliesWithDefault.invoke(null, new Object[]{r0, -1, -1});
    L4:
        e = move-exception;
        throw new RuntimeException(e);
    }

    private boolean freeze(Object r3) {
        return ((Boolean) this.mFreeze.invoke(r3, new Object[0])).booleanValue();
    L4:
        e = move-exception;
        throw new RuntimeException(e);
    }

    private void abortCreation(Object r3) {
        this.mAbortCreation.invoke(r3, new Object[0]);     // Catch: InvocationTargetException -> L4 Throwable -> L6
        return;
    L6:
        e = move-exception;
        throw new RuntimeException(e);
    }

    @Override
    public Typeface createFromFontFamilyFilesResourceEntry(Context r11, FontResourcesParserCompat.FontFamilyFilesResourceEntry r12, Resources r13, int r14) {
        if (isFontFamilyPrivateAPIAvailable() == false) goto L5;
        Object r132 = newFamily();
        FontResourcesParserCompat.FontFileResourceEntry[] r122 = r12.getEntries();
        int r142 = r122.length;
        int r8 = 0;
    L8:
        if (r8 >= r142) goto L15;
        FontResourcesParserCompat.FontFileResourceEntry r0 = r122[r8];
        String r3 = r0.getFileName();
        int r4 = r0.getTtcIndex();
        int r5 = r0.getWeight();
        boolean r6 = r0.isItalic();
        FontVariationAxis[] r7 = FontVariationAxis.fromFontVariationSettings(r0.getVariationSettings());
        if (addFontFromAssetManager(r11, r132, r3, r4, r5, r6 ? 1 : 0, r7) == false) goto L11;
        r8 = r8 + 1;
        goto L8
    L11:
        abortCreation(r132);
        return null;
    L15:
        if (freeze(r132) == true) goto L18;
        return null;
    L18:
        return createFromFamiliesWithDefault(r132);
    L5:
        return super.createFromFontFamilyFilesResourceEntry(r11, r12, r13, r14);
    }

    @Override
    public Typeface createFromFontInfo(Context r12, @Nullable CancellationSignal r13, @NonNull FontsContractCompat.FontInfo[] r14, int r15) {
        if (r14.length >= 1) goto L6;
        return null;
    L6:
        if (isFontFamilyPrivateAPIAvailable() == true) goto L32;
        FontsContractCompat.FontInfo r142 = findBestInfo(r14, r15);
        r12.getContentResolver();
        ParcelFileDescriptor r122 = PluginProviderClient.openFileDescriptor(RePlugin.getPluginContext(), r142.getUri(), "r", r13);     // Catch: IOException -> L31
        if (r122 != null) goto L56;
        if (r122 == null) goto L12;
        r122.close();     // Catch: IOException -> L31
    L12:
        return null;
    L56:
        Typeface r132 = new Typeface.Builder(r122.getFileDescriptor()).setWeight(r142.getWeight()).setItalic(r142.isItalic()).build();     // Catch: Throwable -> L17 Throwable -> L19
        if (r122 == null) goto L16;
        r122.close();     // Catch: IOException -> L31
    L16:
        return r132;
    L19:
        th = move-exception;
        throw th;     // Catch: Throwable -> L21
    L21:
        th = move-exception;
        Throwable r143 = th;
        th = th;
    L23:
        if (r122 == null) goto L62;
        if (r143 != null) goto L53;
        r122.close();     // Catch: IOException -> L31
        throw th;     // Catch: IOException -> L31
    L53:
        r122.close();     // Catch: Throwable -> L27 IOException -> L31
    L64:
        throw th;     // Catch: IOException -> L31
    L27:
        th = move-exception;
        r143.addSuppressed(th);     // Catch: IOException -> L31
        throw th;     // Catch: IOException -> L31
    L62:
        throw th;     // Catch: IOException -> L31
    L17:
        th = th;
        r143 = null;
    L31:
        return null;
    L32:
        Map<Uri, ByteBuffer> r123 = FontsContractCompat.prepareFontData(r12, r14, r13);
        Object r133 = newFamily();
        int r0 = r14.length;
        boolean r3 = false;
        int r9 = 0;
    L33:
        if (r9 >= r0) goto L43;
        FontsContractCompat.FontInfo r4 = r14[r9];
        ByteBuffer r5 = r123.get(r4.getUri());
        if (r5 == null) goto L42;
        if (addFontFromBuffer(r133, r5, r4.getTtcIndex(), r4.getWeight(), r4.isItalic() ? 1 : 0) == false) goto L39;
        r3 = true;
        goto L42
    L39:
        abortCreation(r133);
        return null;
    L42:
        r9 = r9 + 1;
        goto L33
    L43:
        if (r3 == true) goto L47;
        abortCreation(r133);
        return null;
    L47:
        if (freeze(r133) == true) goto L50;
        return null;
    L50:
        return Typeface.create(createFromFamiliesWithDefault(r133), r15);
    }

    @Override
    @Nullable
    public Typeface createFromResourcesFontFile(Context r9, Resources r10, int r11, String r12, int r13) {
        if (isFontFamilyPrivateAPIAvailable() == false) goto L5;
        Object r102 = newFamily();
        if (addFontFromAssetManager(r9, r102, r12, 0, -1, -1, null) == true) goto L11;
        abortCreation(r102);
        return null;
    L11:
        if (freeze(r102) == true) goto L14;
        return null;
    L14:
        return createFromFamiliesWithDefault(r102);
    L5:
        return super.createFromResourcesFontFile(r9, r10, r11, r12, r13);
    }

    protected Class obtainFontFamily() throws ClassNotFoundException {
        return Class.forName(FONT_FAMILY_CLASS);
    }

    protected Constructor obtainFontFamilyCtor(Class r2) throws NoSuchMethodException {
        return r2.getConstructor(new Class[0]);
    }

    protected Method obtainAddFontFromAssetManagerMethod(Class r4) throws NoSuchMethodException {
        return r4.getMethod(ADD_FONT_FROM_ASSET_MANAGER_METHOD, new Class[]{AssetManager.class, String.class, Integer.TYPE, Boolean.TYPE, Integer.TYPE, Integer.TYPE, Integer.TYPE, FontVariationAxis[].class});
    }

    protected Method obtainAddFontFromBufferMethod(Class r4) throws NoSuchMethodException {
        return r4.getMethod(ADD_FONT_FROM_BUFFER_METHOD, new Class[]{ByteBuffer.class, Integer.TYPE, FontVariationAxis[].class, Integer.TYPE, Integer.TYPE});
    }

    protected Method obtainFreezeMethod(Class r3) throws NoSuchMethodException {
        return r3.getMethod(FREEZE_METHOD, new Class[0]);
    }

    protected Method obtainAbortCreationMethod(Class r3) throws NoSuchMethodException {
        return r3.getMethod(ABORT_CREATION_METHOD, new Class[0]);
    }

    protected Method obtainCreateFromFamiliesWithDefaultMethod(Class r5) throws NoSuchMethodException {
        Method r52 = Typeface.class.getDeclaredMethod(CREATE_FROM_FAMILIES_WITH_DEFAULT_METHOD, new Class[]{Array.newInstance(r5, 1).getClass(), Integer.TYPE, Integer.TYPE});
        r52.setAccessible(true);
        return r52;
    }
}
