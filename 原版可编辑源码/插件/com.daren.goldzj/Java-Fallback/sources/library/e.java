package library;

import android.annotation.TargetApi;
import android.content.Context;
import android.content.res.AssetFileDescriptor;
import android.content.res.ColorStateList;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.graphics.Movie;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.util.TypedValue;
import com.bianqi.wpll.BuildConfig;
import com.qihoo360.replugin.RePlugin;
import java.io.InputStream;

public class e extends Resources {
    private Context a;
    private Resources b;
    private Resources c;

    public e(Context r4) {
        super(r4.getResources().getAssets(), r4.getResources().getDisplayMetrics(), r4.getResources().getConfiguration());
        this.a = r4;
        this.b = r4.getResources();
        if (RePlugin.isHostInitialized() == false) goto L5;
        r4 = RePlugin.getHostContext();
    L5:
        this.c = r4.getResources();
    }

    @Override
    public XmlResourceParser getAnimation(int r2) {
        return this.b.getAnimation(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getAnimation(r2);
    }

    @Override
    @TargetApi(3)
    public boolean getBoolean(int r2) {
        return this.b.getBoolean(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getBoolean(r2);
    }

    @Override
    public int getColor(int r2) {
        return this.b.getColor(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getColor(r2);
    }

    @Override
    public ColorStateList getColorStateList(int r2) {
        return this.b.getColorStateList(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getColorStateList(r2);
    }

    @Override
    public Configuration getConfiguration() {
        return this.b.getConfiguration();
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getConfiguration();
    }

    @Override
    public float getDimension(int r2) {
        return this.b.getDimension(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getDimension(r2);
    }

    @Override
    public int getDimensionPixelOffset(int r2) {
        return this.b.getDimensionPixelOffset(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getDimensionPixelOffset(r2);
    }

    @Override
    public int getDimensionPixelSize(int r2) {
        return this.b.getDimensionPixelSize(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getDimensionPixelSize(r2);
    L8:
        return 0;
    }

    @Override
    public Drawable getDrawable(int r2) {
        return this.b.getDrawable(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getDrawable(r2);
    }

    @Override
    @TargetApi(21)
    public Drawable getDrawable(int r2, Resources.Theme r3) {
        return this.b.getDrawable(r2, r3);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getDrawable(r2, r3);
    }

    @Override
    @TargetApi(15)
    public Drawable getDrawableForDensity(int r2, int r3) {
        return this.b.getDrawableForDensity(r2, r3);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getDrawableForDensity(r2, r3);
    }

    @Override
    @TargetApi(15)
    public Drawable getDrawableForDensity(int r1, int r2, Resources.Theme r3) {
        return this.b.getDrawableForDensity(r1, r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getDrawableForDensity(r1, r2);
    }

    @Override
    @TargetApi(3)
    public float getFraction(int r2, int r3, int r4) {
        return this.b.getFraction(r2, r3, r4);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getFraction(r2, r3, r4);
    }

    @Override
    public int getIdentifier(String r12, String r13, String r14) {
    L17:
        e = move-exception;
        e.printStackTrace();
        return 0;
    L4:
        if (RePlugin.isHostInitialized() == false) goto L12;
        if (TextUtils.equals(RePlugin.getPluginContext().getPackageName(), r14) == true) goto L16;
        if (TextUtils.equals(RePlugin.getHostContext().getPackageName(), r14) == true) goto L16;
        return Integer.parseInt(String.valueOf(h.a(this.c.getClass().getClassLoader(), "android.content.res.Resources", "getIdentifier", this.c, new Class[]{String.class, String.class, String.class}, new Object[]{r12, r13, r14})));
    L16:
        return this.b.getIdentifier(r12, r13, BuildConfig.APPLICATION_ID);
    L12:
        if (TextUtils.equals(this.a.getPackageName(), r14) == true) goto L16;
        return Integer.parseInt(String.valueOf(h.a(this.c.getClass().getClassLoader(), "android.content.res.Resources", "getIdentifier", this.c, new Class[]{String.class, String.class, String.class}, new Object[]{r12, r13, r14})));
    }

    @Override
    public int[] getIntArray(int r2) {
        return this.b.getIntArray(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getIntArray(r2);
    }

    @Override
    public int getInteger(int r2) {
        return this.b.getInteger(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getInteger(r2);
    }

    @Override
    public XmlResourceParser getLayout(int r2) {
        return this.b.getLayout(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getLayout(r2);
    }

    @Override
    public Movie getMovie(int r2) {
        return this.b.getMovie(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getMovie(r2);
    }

    @Override
    public String getQuantityString(int r2, int r3) {
        return this.b.getQuantityString(r2, r3);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getQuantityString(r2, r3);
    }

    @Override
    public String getQuantityString(int r2, int r3, Object... r4) {
        return this.b.getQuantityString(r2, r3, r4);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getQuantityString(r2, r3, r4);
    }

    @Override
    public CharSequence getQuantityText(int r2, int r3) {
        return this.b.getQuantityText(r2, r3);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getQuantityText(r2, r3);
    }

    @Override
    public String getResourceEntryName(int r2) {
        return this.b.getResourceEntryName(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getResourceEntryName(r2);
    }

    @Override
    public String getResourceName(int r2) {
        return this.b.getResourceName(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getResourceName(r2);
    }

    @Override
    public String getResourcePackageName(int r2) {
        return this.b.getResourcePackageName(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getResourcePackageName(r2);
    }

    @Override
    public String getResourceTypeName(int r2) {
        return this.b.getResourceTypeName(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getResourceTypeName(r2);
    }

    @Override
    public String getString(int r2) {
        return this.b.getString(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getString(r2);
    }

    @Override
    public String getString(int r2, Object... r3) {
        return this.b.getString(r2, r3);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getString(r2, r3);
    }

    @Override
    public String[] getStringArray(int r2) {
        return this.b.getStringArray(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getStringArray(r2);
    }

    @Override
    public CharSequence getText(int r2) {
        return this.b.getText(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getText(r2);
    }

    @Override
    public CharSequence getText(int r2, CharSequence r3) {
        return this.b.getText(r2, r3);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getText(r2, r3);
    }

    @Override
    public CharSequence[] getTextArray(int r2) {
        return this.b.getTextArray(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getTextArray(r2);
    }

    @Override
    public void getValue(int r2, TypedValue r3, boolean r4) {
        this.b.getValue(r2, r3, r4);     // Catch: Resources.NotFoundException -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
        this.c.getValue(r2, r3, r4);
    }

    @Override
    @TargetApi(15)
    public void getValueForDensity(int r2, int r3, TypedValue r4, boolean r5) {
        this.b.getValueForDensity(r2, r3, r4, r5);     // Catch: Resources.NotFoundException -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
        this.c.getValueForDensity(r2, r3, r4, r5);
    }

    @Override
    public XmlResourceParser getXml(int r2) {
        return this.b.getXml(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.getXml(r2);
    }

    @Override
    public TypedArray obtainTypedArray(int r2) {
        return this.b.obtainTypedArray(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.obtainTypedArray(r2);
    }

    @Override
    public InputStream openRawResource(int r2) {
        return this.b.openRawResource(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.openRawResource(r2);
    }

    @Override
    @TargetApi(3)
    public InputStream openRawResource(int r2, TypedValue r3) {
        return this.b.openRawResource(r2, r3);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.openRawResource(r2, r3);
    }

    @Override
    public AssetFileDescriptor openRawResourceFd(int r2) {
        return this.b.openRawResourceFd(r2);
    L4:
        e = move-exception;
        e.printStackTrace();
        return this.c.openRawResourceFd(r2);
    }
}
