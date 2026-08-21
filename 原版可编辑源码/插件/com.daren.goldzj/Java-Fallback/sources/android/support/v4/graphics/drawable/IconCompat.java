package android.support.v4.graphics.drawable;

import android.app.ActivityManager;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.BitmapShader;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.Shader;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.Icon;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import android.support.annotation.ColorInt;
import android.support.annotation.DrawableRes;
import android.support.annotation.IdRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.annotation.VisibleForTesting;
import android.support.v4.content.ContextCompat;
import android.support.v4.content.res.ResourcesCompat;
import android.support.v4.util.Preconditions;
import android.support.v4.view.ViewCompat;
import android.text.TextUtils;
import android.util.Log;
import androidx.versionedparcelable.CustomVersionedParcelable;
import com.bianqi.wpll.BuildConfig;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.loader.p.PluginProviderClient;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStream;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.nio.charset.Charset;

public class IconCompat extends CustomVersionedParcelable {
    private static final float ADAPTIVE_ICON_INSET_FACTOR = 0.25f;
    private static final int AMBIENT_SHADOW_ALPHA = 30;
    private static final float BLUR_FACTOR = 0.010416667f;
    static final PorterDuff.Mode DEFAULT_TINT_MODE = null;
    private static final float DEFAULT_VIEW_PORT_SCALE = 0.6666667f;
    private static final String EXTRA_INT1 = "int1";
    private static final String EXTRA_INT2 = "int2";
    private static final String EXTRA_OBJ = "obj";
    private static final String EXTRA_TINT_LIST = "tint_list";
    private static final String EXTRA_TINT_MODE = "tint_mode";
    private static final String EXTRA_TYPE = "type";
    private static final float ICON_DIAMETER_FACTOR = 0.9166667f;
    private static final int KEY_SHADOW_ALPHA = 61;
    private static final float KEY_SHADOW_OFFSET_FACTOR = 0.020833334f;
    private static final String TAG = "IconCompat";
    public static final int TYPE_UNKNOWN = -1;

    @RestrictTo({RestrictTo.Scope.LIBRARY})
    public byte[] mData;

    @RestrictTo({RestrictTo.Scope.LIBRARY})
    public int mInt1;

    @RestrictTo({RestrictTo.Scope.LIBRARY})
    public int mInt2;
    Object mObj1;

    @RestrictTo({RestrictTo.Scope.LIBRARY})
    public Parcelable mParcelable;

    @RestrictTo({RestrictTo.Scope.LIBRARY})
    public ColorStateList mTintList;
    PorterDuff.Mode mTintMode;

    @RestrictTo({RestrictTo.Scope.LIBRARY})
    public String mTintModeStr;

    @RestrictTo({RestrictTo.Scope.LIBRARY})
    public int mType;

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY})
    public @interface IconType {
    }

    private static String typeToString(int r1) {
        if (r1 != 1) goto L5;
        return "BITMAP";
    L5:
        if (r1 != 2) goto L7;
        return "RESOURCE";
    L7:
        if (r1 != 3) goto L9;
        return "DATA";
    L9:
        if (r1 != 4) goto L11;
        return "URI";
    L11:
        if (r1 == 5) goto L14;
        return "UNKNOWN";
    L14:
        return "BITMAP_MASKABLE";
    }

    static {
        DEFAULT_TINT_MODE = PorterDuff.Mode.SRC_IN;
    }

    public static IconCompat createWithResource(Context r1, @DrawableRes int r2) {
        if (r1 == null) goto L6;
        return createWithResource(r1.getResources(), r1.getPackageName(), r2);
    L6:
        throw new IllegalArgumentException("Context must not be null.");
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY})
    public static IconCompat createWithResource(Resources r2, String r3, @DrawableRes int r4) {
        if (r3 == null) goto L15;
        if (r4 == 0) goto L13;
        IconCompat r0 = new IconCompat(2);
        r0.mInt1 = r4;
        if (r2 != null) goto L16;
        r0.mObj1 = r3;
    L11:
        return r0;
    L16:
        r0.mObj1 = r2.getResourceName(r4);     // Catch: Resources.NotFoundException -> L8
    L9:
        throw new IllegalArgumentException("Icon resource cannot be found");
    L13:
        throw new IllegalArgumentException("Drawable resource ID must not be 0");
    L15:
        throw new IllegalArgumentException("Package must not be null.");
    }

    public static IconCompat createWithBitmap(Bitmap r2) {
        if (r2 == null) goto L6;
        IconCompat r0 = new IconCompat(1);
        r0.mObj1 = r2;
        return r0;
    L6:
        throw new IllegalArgumentException("Bitmap must not be null.");
    }

    public static IconCompat createWithAdaptiveBitmap(Bitmap r2) {
        if (r2 == null) goto L6;
        IconCompat r0 = new IconCompat(5);
        r0.mObj1 = r2;
        return r0;
    L6:
        throw new IllegalArgumentException("Bitmap must not be null.");
    }

    public static IconCompat createWithData(byte[] r2, int r3, int r4) {
        if (r2 == null) goto L6;
        IconCompat r0 = new IconCompat(3);
        r0.mObj1 = r2;
        r0.mInt1 = r3;
        r0.mInt2 = r4;
        return r0;
    L6:
        throw new IllegalArgumentException("Data must not be null.");
    }

    public static IconCompat createWithContentUri(String r2) {
        if (r2 == null) goto L6;
        IconCompat r0 = new IconCompat(4);
        r0.mObj1 = r2;
        return r0;
    L6:
        throw new IllegalArgumentException("Uri must not be null.");
    }

    public static IconCompat createWithContentUri(Uri r1) {
        if (r1 == null) goto L6;
        return createWithContentUri(r1.toString());
    L6:
        throw new IllegalArgumentException("Uri must not be null.");
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY})
    public IconCompat() {
        this.mTintList = null;
        this.mTintMode = DEFAULT_TINT_MODE;
    }

    private IconCompat(int r2) {
        this.mTintList = null;
        this.mTintMode = DEFAULT_TINT_MODE;
        this.mType = r2;
    }

    public int getType() {
        if (this.mType != (-1)) goto L9;
        if (Build.VERSION.SDK_INT < 23) goto L9;
        return getType((Icon) this.mObj1);
    L9:
        return this.mType;
    }

    @NonNull
    public String getResPackage() {
        if (this.mType != (-1)) goto L9;
        if (Build.VERSION.SDK_INT < 23) goto L9;
        return getResPackage((Icon) this.mObj1);
    L9:
        if (this.mType != 2) goto L13;
        return ((String) this.mObj1).split(":", -1)[0];
    L13:
        throw new IllegalStateException("called getResPackage() on " + this);
    }

    @IdRes
    public int getResId() {
        if (this.mType != (-1)) goto L9;
        if (Build.VERSION.SDK_INT < 23) goto L9;
        return getResId((Icon) this.mObj1);
    L9:
        if (this.mType != 2) goto L13;
        return this.mInt1;
    L13:
        throw new IllegalStateException("called getResId() on " + this);
    }

    @NonNull
    public Uri getUri() {
        if (this.mType != (-1)) goto L9;
        if (Build.VERSION.SDK_INT < 23) goto L9;
        return getUri((Icon) this.mObj1);
    L9:
        return Uri.parse((String) this.mObj1);
    }

    public IconCompat setTint(@ColorInt int r1) {
        return setTintList(ColorStateList.valueOf(r1));
    }

    public IconCompat setTintList(ColorStateList r1) {
        this.mTintList = r1;
        return this;
    }

    public IconCompat setTintMode(PorterDuff.Mode r1) {
        this.mTintMode = r1;
        return this;
    }

    @RequiresApi(23)
    public Icon toIcon() {
        int r0 = this.mType;
        if (r0 == (-1)) goto L32;
        if (r0 != 1) goto L7;
        Icon r02 = Icon.createWithBitmap((Bitmap) this.mObj1);
    L24:
        ColorStateList r1 = this.mTintList;
        if (r1 == null) goto L27;
        r02.setTintList(r1);
    L27:
        PorterDuff.Mode r12 = this.mTintMode;
        if (r12 == DEFAULT_TINT_MODE) goto L30;
        r02.setTintMode(r12);
    L30:
        return r02;
    L7:
        if (r0 != 2) goto L9;
        r02 = Icon.createWithResource(getResPackage(), this.mInt1);
        goto L24
    L9:
        if (r0 != 3) goto L11;
        r02 = Icon.createWithData((byte[]) this.mObj1, this.mInt1, this.mInt2);
        goto L24
    L11:
        if (r0 != 4) goto L13;
        r02 = Icon.createWithContentUri((String) this.mObj1);
        goto L24
    L13:
        if (r0 != 5) goto L19;
        if (Build.VERSION.SDK_INT < 26) goto L17;
        r02 = Icon.createWithAdaptiveBitmap((Bitmap) this.mObj1);
        goto L24
    L17:
        r02 = Icon.createWithBitmap(createLegacyIconFromAdaptiveIcon((Bitmap) this.mObj1, false));
        goto L24
    L19:
        throw new IllegalArgumentException("Unknown type");
    L32:
        return (Icon) this.mObj1;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void checkResource(Context r9) {
        if (this.mType != 2) goto L11;
        String r0 = (String) this.mObj1;
        if (r0.contains(":") == true) goto L7;
        return;
    L7:
        String r3 = r0.split(":", -1)[1];
        String r6 = r3.split("/", -1)[0];
        String r32 = r3.split("/", -1)[1];
        String r02 = r0.split(":", -1)[0];
        int r92 = getResources(r9, r02).getIdentifier(r32, r6, BuildConfig.APPLICATION_ID);
        if (this.mInt1 == r92) goto L12;
        Log.i(TAG, "Id has changed for " + r02 + "/" + r32);
        this.mInt1 = r92;
        return;
    L12:
        return;
    }

    public Drawable loadDrawable(Context r3) {
        checkResource(r3);
        if (Build.VERSION.SDK_INT >= 23) goto L5;
        Drawable r32 = loadDrawableInner(r3);
        if (r32 != null) goto L9;
    L13:
        return r32;
    L9:
        if (this.mTintList == null) goto L11;
    L12:
        r32.mutate();
        DrawableCompat.setTintList(r32, this.mTintList);
        DrawableCompat.setTintMode(r32, this.mTintMode);
        goto L13
    L11:
        if (this.mTintMode == DEFAULT_TINT_MODE) goto L13;
    L5:
        return toIcon().loadDrawable(r3);
    }

    private Drawable loadDrawableInner(Context r8) {
        int r0 = this.mType;
        if (r0 == 1) goto L44;
        if (r0 != 2) goto L7;
        String r02 = getResPackage();
        if (TextUtils.isEmpty(r02) == false) goto L45;
        r02 = r8.getPackageName();
    L45:
        return ResourcesCompat.getDrawable(getResources(r8, r02), this.mInt1, r8.getTheme());
    L40:
        e = move-exception;
        Log.e(TAG, String.format("Unable to load resource 0x%08x from pkg=%s", new Object[]{Integer.valueOf(this.mInt1), this.mObj1}), e);
    L42:
        return null;
    L7:
        if (r0 == 3) goto L33;
        if (r0 != 4) goto L11;
        Uri r03 = Uri.parse((String) this.mObj1);
        String r1 = r03.getScheme();
        if ("content".equals(r1) == false) goto L18;
    L47:
        r8.getContentResolver();     // Catch: Exception -> L26
        InputStream r04 = PluginProviderClient.openInputStream(RePlugin.getPluginContext(), r03);     // Catch: Exception -> L26
    L29:
        if (r04 == null) goto L42;
        return new BitmapDrawable(r8.getResources(), BitmapFactory.decodeStream(r04));
    L26:
        e = move-exception;
        Log.w(TAG, "Unable to load image from URI: " + r03, e);
    L28:
        r04 = null;
        goto L29
    L18:
        if ("file".equals(r1) == true) goto L47;
        r04 = new FileInputStream(new File((String) this.mObj1));     // Catch: FileNotFoundException -> L22
    L22:
        e = move-exception;
        Log.w(TAG, "Unable to load image from path: " + r03, e);
        goto L28
    L11:
        if (r0 != 5) goto L42;
        return new BitmapDrawable(r8.getResources(), createLegacyIconFromAdaptiveIcon((Bitmap) this.mObj1, false));
    L33:
        return new BitmapDrawable(r8.getResources(), BitmapFactory.decodeByteArray((byte[]) this.mObj1, this.mInt1, this.mInt2));
    L44:
        return new BitmapDrawable(r8.getResources(), (Bitmap) this.mObj1);
    }

    private static Resources getResources(Context r3, String r4) {
        if ("android".equals(r4) == true) goto L5;
        PackageManager r32 = r3.getPackageManager();
        ApplicationInfo r0 = r32.getApplicationInfo(r4, 8192);     // Catch: PackageManager.NameNotFoundException -> L12
        if (r0 == null) goto L11;
        return r32.getResourcesForApplication(r0);
    L11:
        return null;
    L12:
        e = move-exception;
        Log.e(TAG, String.format("Unable to find pkg=%s for icon", new Object[]{r4}), e);
        return null;
    L5:
        return Resources.getSystem();
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void addToShortcutIntent(@NonNull Intent r5, @Nullable Drawable r6, @NonNull Context r7) {
        checkResource(r7);
        int r0 = this.mType;
        if (r0 != 1) goto L5;
        Bitmap r72 = (Bitmap) this.mObj1;
        if (r6 == null) goto L30;
        r72 = r72.copy(r72.getConfig(), true);
    L30:
        if (r6 == null) goto L32;
        int r02 = r72.getWidth();
        int r1 = r72.getHeight();
        r6.setBounds(r02 / 2, r1 / 2, r02, r1);
        r6.draw(new Canvas(r72));
    L32:
        r5.putExtra("android.intent.extra.shortcut.ICON", r72);
        return;
    L5:
        if (r0 != 2) goto L7;
        Context r73 = r7.createPackageContext(getResPackage(), 0);     // Catch: PackageManager.NameNotFoundException -> L24
        if (r6 != null) goto L15;
        r5.putExtra("android.intent.extra.shortcut.ICON_RESOURCE", Intent.ShortcutIconResource.fromContext(r73, this.mInt1));     // Catch: PackageManager.NameNotFoundException -> L24
        return;
    L15:
        Drawable r03 = ContextCompat.getDrawable(r73, this.mInt1);     // Catch: PackageManager.NameNotFoundException -> L24
        if (r03.getIntrinsicWidth() > 0) goto L18;
    L21:
        int r74 = ((ActivityManager) r73.getSystemService("activity")).getLauncherLargeIconSize();     // Catch: PackageManager.NameNotFoundException -> L24
        r72 = Bitmap.createBitmap(r74, r74, Bitmap.Config.ARGB_8888);     // Catch: PackageManager.NameNotFoundException -> L24
    L22:
        r03.setBounds(0, 0, r72.getWidth(), r72.getHeight());     // Catch: PackageManager.NameNotFoundException -> L24
        r03.draw(new Canvas(r72));     // Catch: PackageManager.NameNotFoundException -> L24
        goto L30
    L18:
        if (r03.getIntrinsicHeight() <= 0) goto L21;
        r72 = Bitmap.createBitmap(r03.getIntrinsicWidth(), r03.getIntrinsicHeight(), Bitmap.Config.ARGB_8888);     // Catch: PackageManager.NameNotFoundException -> L24
    L24:
        e = move-exception;
        throw new IllegalArgumentException("Can't find package " + this.mObj1, e);
    L7:
        if (r0 != 5) goto L10;
        r72 = createLegacyIconFromAdaptiveIcon((Bitmap) this.mObj1, true);
        goto L30
    L10:
        throw new IllegalArgumentException("Icon type not supported for intent shortcuts");
    }

    public Bundle toBundle() {
        Bundle r0 = new Bundle();
        int r1 = this.mType;
        if (r1 != (-1)) goto L5;
        r0.putParcelable(EXTRA_OBJ, (Parcelable) this.mObj1);
    L21:
        r0.putInt(EXTRA_TYPE, this.mType);
        r0.putInt(EXTRA_INT1, this.mInt1);
        r0.putInt(EXTRA_INT2, this.mInt2);
        ColorStateList r12 = this.mTintList;
        if (r12 == null) goto L24;
        r0.putParcelable(EXTRA_TINT_LIST, r12);
    L24:
        PorterDuff.Mode r13 = this.mTintMode;
        if (r13 == DEFAULT_TINT_MODE) goto L27;
        r0.putString(EXTRA_TINT_MODE, r13.name());
    L27:
        return r0;
    L5:
        if (r1 != 1) goto L7;
    L19:
        r0.putParcelable(EXTRA_OBJ, (Bitmap) this.mObj1);
        goto L21
    L7:
        if (r1 != 2) goto L9;
    L18:
        r0.putString(EXTRA_OBJ, (String) this.mObj1);
        goto L21
    L9:
        if (r1 != 3) goto L11;
        r0.putByteArray(EXTRA_OBJ, (byte[]) this.mObj1);
        goto L21
    L11:
        if (r1 == 4) goto L18;
        if (r1 == 5) goto L19;
        throw new IllegalArgumentException("Invalid icon");
    }

    public String toString() {
        if (this.mType == (-1)) goto L5;
        StringBuilder r0 = new StringBuilder("Icon(typ=");
        r0.append(typeToString(this.mType));
        int r1 = this.mType;
        if (r1 != 1) goto L9;
    L22:
        r0.append(" size=");
        r0.append(((Bitmap) this.mObj1).getWidth());
        r0.append("x");
        r0.append(((Bitmap) this.mObj1).getHeight());
    L24:
        if (this.mTintList == null) goto L27;
        r0.append(" tint=");
        r0.append(this.mTintList);
    L27:
        if (this.mTintMode == DEFAULT_TINT_MODE) goto L29;
        r0.append(" mode=");
        r0.append(this.mTintMode);
    L29:
        r0.append(")");
        return r0.toString();
    L9:
        if (r1 != 2) goto L11;
        r0.append(" pkg=");
        r0.append(getResPackage());
        r0.append(" id=");
        r0.append(String.format("0x%08x", new Object[]{Integer.valueOf(getResId())}));
        goto L24
    L11:
        if (r1 != 3) goto L13;
        r0.append(" len=");
        r0.append(this.mInt1);
        if (this.mInt2 == 0) goto L24;
        r0.append(" off=");
        r0.append(this.mInt2);
        goto L24
    L13:
        if (r1 != 4) goto L15;
        r0.append(" uri=");
        r0.append(this.mObj1);
        goto L24
    L15:
        if (r1 == 5) goto L22;
    L5:
        return String.valueOf(this.mObj1);
    }

    @Override
    public void onPreParceling(boolean r4) {
        this.mTintModeStr = this.mTintMode.name();
        int r0 = this.mType;
        if (r0 != (-1)) goto L5;
        if (r4 == true) goto L25;
        this.mParcelable = (Parcelable) this.mObj1;
        return;
    L25:
        throw new IllegalArgumentException("Can't serialize Icon created with IconCompat#createFromIcon");
    L5:
        if (r0 != 1) goto L7;
    L18:
        if (r4 == false) goto L20;
        Bitmap r42 = (Bitmap) this.mObj1;
        ByteArrayOutputStream r02 = new ByteArrayOutputStream();
        r42.compress(Bitmap.CompressFormat.PNG, 90, r02);
        this.mData = r02.toByteArray();
        return;
    L20:
        this.mParcelable = (Parcelable) this.mObj1;
        return;
    L7:
        if (r0 != 2) goto L9;
        this.mData = ((String) this.mObj1).getBytes(Charset.forName("UTF-16"));
        return;
    L9:
        if (r0 != 3) goto L11;
        this.mData = (byte[]) this.mObj1;
        return;
    L11:
        if (r0 != 4) goto L13;
        this.mData = this.mObj1.toString().getBytes(Charset.forName("UTF-16"));
        return;
    L13:
        if (r0 == 5) goto L18;
    }

    @Override
    public void onPostParceling() {
        this.mTintMode = PorterDuff.Mode.valueOf(this.mTintModeStr);
        int r0 = this.mType;
        if (r0 != (-1)) goto L5;
        Parcelable r02 = this.mParcelable;
        if (r02 == null) goto L25;
        this.mObj1 = r02;
        return;
    L25:
        throw new IllegalArgumentException("Invalid icon");
    L5:
        if (r0 != 1) goto L7;
    L16:
        Parcelable r03 = this.mParcelable;
        if (r03 == null) goto L19;
        this.mObj1 = r03;
        return;
    L19:
        byte[] r04 = this.mData;
        this.mObj1 = r04;
        this.mType = 3;
        this.mInt1 = 0;
        this.mInt2 = r04.length;
        return;
    L7:
        if (r0 == 2) goto L15;
        if (r0 != 3) goto L10;
        this.mObj1 = this.mData;
        return;
    L10:
        if (r0 == 4) goto L15;
        if (r0 == 5) goto L16;
        return;
    L15:
        this.mObj1 = new String(this.mData, Charset.forName("UTF-16"));
    }

    @Nullable
    public static IconCompat createFromBundle(@NonNull Bundle r4) {
        int r0 = r4.getInt(EXTRA_TYPE);
        IconCompat r1 = new IconCompat(r0);
        r1.mInt1 = r4.getInt(EXTRA_INT1);
        r1.mInt2 = r4.getInt(EXTRA_INT2);
        if (r4.containsKey(EXTRA_TINT_LIST) == false) goto L6;
        r1.mTintList = (ColorStateList) r4.getParcelable(EXTRA_TINT_LIST);
    L6:
        if (r4.containsKey(EXTRA_TINT_MODE) == false) goto L9;
        r1.mTintMode = PorterDuff.Mode.valueOf(r4.getString(EXTRA_TINT_MODE));
    L9:
        if (r0 != (-1)) goto L11;
    L24:
        r1.mObj1 = r4.getParcelable(EXTRA_OBJ);
    L25:
        return r1;
    L11:
        if (r0 == 1) goto L24;
        if (r0 != 2) goto L15;
    L23:
        r1.mObj1 = r4.getString(EXTRA_OBJ);
        goto L25
    L15:
        if (r0 != 3) goto L17;
        r1.mObj1 = r4.getByteArray(EXTRA_OBJ);
        goto L25
    L17:
        if (r0 == 4) goto L23;
        if (r0 == 5) goto L24;
        Log.w(TAG, "Unknown type " + r0);
        return null;
    }

    @RequiresApi(23)
    @Nullable
    public static IconCompat createFromIcon(@NonNull Context r2, @NonNull Icon r3) {
        Preconditions.checkNotNull(r3);
        int r0 = getType(r3);
        if (r0 != 2) goto L5;
        String r02 = getResPackage(r3);
        return createWithResource(getResources(r2, r02), r02, getResId(r3));
    L14:
        throw new IllegalArgumentException("Icon resource cannot be found");
    L5:
        if (r0 == 4) goto L9;
        IconCompat r22 = new IconCompat(-1);
        r22.mObj1 = r3;
        return r22;
    L9:
        return createWithContentUri(getUri(r3));
    }

    @RequiresApi(23)
    @Nullable
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static IconCompat createFromIcon(@NonNull Icon r2) {
        Preconditions.checkNotNull(r2);
        int r0 = getType(r2);
        if (r0 == 2) goto L11;
        if (r0 == 4) goto L9;
        IconCompat r02 = new IconCompat(-1);
        r02.mObj1 = r2;
        return r02;
    L9:
        return createWithContentUri(getUri(r2));
    L11:
        return createWithResource(null, getResPackage(r2), getResId(r2));
    }

    @RequiresApi(23)
    private static int getType(@NonNull Icon r7) {
        if (Build.VERSION.SDK_INT < 28) goto L18;
        return r7.getType();
    L18:
        return ((Integer) r7.getClass().getMethod("getType", new Class[0]).invoke(r7, new Object[0])).intValue();
    L15:
        e = move-exception;
        Log.e(TAG, "Unable to get icon type " + r7, e);
        return -1;
    L9:
        e = move-exception;
        Log.e(TAG, "Unable to get icon type " + r7, e);
        return -1;
    L12:
        e = move-exception;
        Log.e(TAG, "Unable to get icon type " + r7, e);
        return -1;
    }

    @RequiresApi(23)
    @Nullable
    private static String getResPackage(@NonNull Icon r7) {
        if (Build.VERSION.SDK_INT < 28) goto L18;
        return r7.getResPackage();
    L18:
        return (String) r7.getClass().getMethod("getResPackage", new Class[0]).invoke(r7, new Object[0]);
    L15:
        e = move-exception;
        Log.e(TAG, "Unable to get icon package", e);
        return null;
    L9:
        e = move-exception;
        Log.e(TAG, "Unable to get icon package", e);
        return null;
    L12:
        e = move-exception;
        Log.e(TAG, "Unable to get icon package", e);
        return null;
    }

    @DrawableRes
    @RequiresApi(23)
    @IdRes
    private static int getResId(@NonNull Icon r6) {
        if (Build.VERSION.SDK_INT < 28) goto L18;
        return r6.getResId();
    L18:
        return ((Integer) r6.getClass().getMethod("getResId", new Class[0]).invoke(r6, new Object[0])).intValue();
    L15:
        e = move-exception;
        Log.e(TAG, "Unable to get icon resource", e);
        return 0;
    L9:
        e = move-exception;
        Log.e(TAG, "Unable to get icon resource", e);
        return 0;
    L12:
        e = move-exception;
        Log.e(TAG, "Unable to get icon resource", e);
        return 0;
    }

    @RequiresApi(23)
    @Nullable
    private static Uri getUri(@NonNull Icon r7) {
        if (Build.VERSION.SDK_INT < 28) goto L18;
        return r7.getUri();
    L18:
        return (Uri) r7.getClass().getMethod("getUri", new Class[0]).invoke(r7, new Object[0]);
    L15:
        e = move-exception;
        Log.e(TAG, "Unable to get icon uri", e);
        return null;
    L9:
        e = move-exception;
        Log.e(TAG, "Unable to get icon uri", e);
        return null;
    L12:
        e = move-exception;
        Log.e(TAG, "Unable to get icon uri", e);
        return null;
    }

    @VisibleForTesting
    static Bitmap createLegacyIconFromAdaptiveIcon(Bitmap r9, boolean r10) {
        int r0 = (int) (Math.min(r9.getWidth(), r9.getHeight()) * DEFAULT_VIEW_PORT_SCALE);
        Bitmap r1 = Bitmap.createBitmap(r0, r0, Bitmap.Config.ARGB_8888);
        Canvas r2 = new Canvas(r1);
        Paint r3 = new Paint(3);
        float r4 = r0;
        float r5 = 0.5f * r4;
        float r6 = ICON_DIAMETER_FACTOR * r5;
        if (r10 == false) goto L5;
        float r102 = BLUR_FACTOR * r4;
        r3.setColor(0);
        r3.setShadowLayer(r102, 0.0f, r4 * KEY_SHADOW_OFFSET_FACTOR, 1023410176);
        r2.drawCircle(r5, r5, r6, r3);
        r3.setShadowLayer(r102, 0.0f, 0.0f, 503316480);
        r2.drawCircle(r5, r5, r6, r3);
        r3.clearShadowLayer();
    L5:
        r3.setColor(ViewCompat.MEASURED_STATE_MASK);
        BitmapShader r103 = new BitmapShader(r9, Shader.TileMode.CLAMP, Shader.TileMode.CLAMP);
        Matrix r42 = new Matrix();
        r42.setTranslate((-(r9.getWidth() - r0)) / 2, (-(r9.getHeight() - r0)) / 2);
        r103.setLocalMatrix(r42);
        r3.setShader(r103);
        r2.drawCircle(r5, r5, r6, r3);
        r2.setBitmap(null);
        return r1;
    }
}
