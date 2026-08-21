package android.support.v7.widget;

import android.content.res.AssetFileDescriptor;
import android.content.res.ColorStateList;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.graphics.Movie;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.support.annotation.RequiresApi;
import android.util.AttributeSet;
import android.util.DisplayMetrics;
import android.util.TypedValue;
import com.bianqi.wpll.BuildConfig;
import java.io.IOException;
import java.io.InputStream;
import org.xmlpull.v1.XmlPullParserException;

class ResourcesWrapper extends Resources {
    private final Resources mResources;

    public ResourcesWrapper(Resources r4) {
        super(r4.getAssets(), r4.getDisplayMetrics(), r4.getConfiguration());
        this.mResources = r4;
    }

    @Override
    public CharSequence getText(int r2) throws Resources.NotFoundException {
        return this.mResources.getText(r2);
    }

    @Override
    public CharSequence getQuantityText(int r2, int r3) throws Resources.NotFoundException {
        return this.mResources.getQuantityText(r2, r3);
    }

    @Override
    public String getString(int r2) throws Resources.NotFoundException {
        return this.mResources.getString(r2);
    }

    @Override
    public String getString(int r2, Object... r3) throws Resources.NotFoundException {
        return this.mResources.getString(r2, r3);
    }

    @Override
    public String getQuantityString(int r2, int r3, Object... r4) throws Resources.NotFoundException {
        return this.mResources.getQuantityString(r2, r3, r4);
    }

    @Override
    public String getQuantityString(int r2, int r3) throws Resources.NotFoundException {
        return this.mResources.getQuantityString(r2, r3);
    }

    @Override
    public CharSequence getText(int r2, CharSequence r3) {
        return this.mResources.getText(r2, r3);
    }

    @Override
    public CharSequence[] getTextArray(int r2) throws Resources.NotFoundException {
        return this.mResources.getTextArray(r2);
    }

    @Override
    public String[] getStringArray(int r2) throws Resources.NotFoundException {
        return this.mResources.getStringArray(r2);
    }

    @Override
    public int[] getIntArray(int r2) throws Resources.NotFoundException {
        return this.mResources.getIntArray(r2);
    }

    @Override
    public TypedArray obtainTypedArray(int r2) throws Resources.NotFoundException {
        return this.mResources.obtainTypedArray(r2);
    }

    @Override
    public float getDimension(int r2) throws Resources.NotFoundException {
        return this.mResources.getDimension(r2);
    }

    @Override
    public int getDimensionPixelOffset(int r2) throws Resources.NotFoundException {
        return this.mResources.getDimensionPixelOffset(r2);
    }

    @Override
    public int getDimensionPixelSize(int r2) throws Resources.NotFoundException {
        return this.mResources.getDimensionPixelSize(r2);
    }

    @Override
    public float getFraction(int r2, int r3, int r4) {
        return this.mResources.getFraction(r2, r3, r4);
    }

    @Override
    public Drawable getDrawable(int r2) throws Resources.NotFoundException {
        return this.mResources.getDrawable(r2);
    }

    @Override
    @RequiresApi(21)
    public Drawable getDrawable(int r2, Resources.Theme r3) throws Resources.NotFoundException {
        return this.mResources.getDrawable(r2, r3);
    }

    @Override
    @RequiresApi(15)
    public Drawable getDrawableForDensity(int r2, int r3) throws Resources.NotFoundException {
        return this.mResources.getDrawableForDensity(r2, r3);
    }

    @Override
    @RequiresApi(21)
    public Drawable getDrawableForDensity(int r2, int r3, Resources.Theme r4) {
        return this.mResources.getDrawableForDensity(r2, r3, r4);
    }

    @Override
    public Movie getMovie(int r2) throws Resources.NotFoundException {
        return this.mResources.getMovie(r2);
    }

    @Override
    public int getColor(int r2) throws Resources.NotFoundException {
        return this.mResources.getColor(r2);
    }

    @Override
    public ColorStateList getColorStateList(int r2) throws Resources.NotFoundException {
        return this.mResources.getColorStateList(r2);
    }

    @Override
    public boolean getBoolean(int r2) throws Resources.NotFoundException {
        return this.mResources.getBoolean(r2);
    }

    @Override
    public int getInteger(int r2) throws Resources.NotFoundException {
        return this.mResources.getInteger(r2);
    }

    @Override
    public XmlResourceParser getLayout(int r2) throws Resources.NotFoundException {
        return this.mResources.getLayout(r2);
    }

    @Override
    public XmlResourceParser getAnimation(int r2) throws Resources.NotFoundException {
        return this.mResources.getAnimation(r2);
    }

    @Override
    public XmlResourceParser getXml(int r2) throws Resources.NotFoundException {
        return this.mResources.getXml(r2);
    }

    @Override
    public InputStream openRawResource(int r2) throws Resources.NotFoundException {
        return this.mResources.openRawResource(r2);
    }

    @Override
    public InputStream openRawResource(int r2, TypedValue r3) throws Resources.NotFoundException {
        return this.mResources.openRawResource(r2, r3);
    }

    @Override
    public AssetFileDescriptor openRawResourceFd(int r2) throws Resources.NotFoundException {
        return this.mResources.openRawResourceFd(r2);
    }

    @Override
    public void getValue(int r2, TypedValue r3, boolean r4) throws Resources.NotFoundException {
        this.mResources.getValue(r2, r3, r4);
    }

    @Override
    @RequiresApi(15)
    public void getValueForDensity(int r2, int r3, TypedValue r4, boolean r5) throws Resources.NotFoundException {
        this.mResources.getValueForDensity(r2, r3, r4, r5);
    }

    @Override
    public void getValue(String r2, TypedValue r3, boolean r4) throws Resources.NotFoundException {
        this.mResources.getValue(r2, r3, r4);
    }

    @Override
    public TypedArray obtainAttributes(AttributeSet r2, int[] r3) {
        return this.mResources.obtainAttributes(r2, r3);
    }

    @Override
    public void updateConfiguration(Configuration r2, DisplayMetrics r3) {
        super.updateConfiguration(r2, r3);
        Resources r0 = this.mResources;
        if (r0 == null) goto L6;
        r0.updateConfiguration(r2, r3);
        return;
    }

    @Override
    public DisplayMetrics getDisplayMetrics() {
        return this.mResources.getDisplayMetrics();
    }

    @Override
    public Configuration getConfiguration() {
        return this.mResources.getConfiguration();
    }

    @Override
    public int getIdentifier(String r2, String r3, String r4) {
        return this.mResources.getIdentifier(r2, r3, BuildConfig.APPLICATION_ID);
    }

    @Override
    public String getResourceName(int r2) throws Resources.NotFoundException {
        return this.mResources.getResourceName(r2);
    }

    @Override
    public String getResourcePackageName(int r2) throws Resources.NotFoundException {
        return this.mResources.getResourcePackageName(r2);
    }

    @Override
    public String getResourceTypeName(int r2) throws Resources.NotFoundException {
        return this.mResources.getResourceTypeName(r2);
    }

    @Override
    public String getResourceEntryName(int r2) throws Resources.NotFoundException {
        return this.mResources.getResourceEntryName(r2);
    }

    @Override
    public void parseBundleExtras(XmlResourceParser r2, Bundle r3) throws XmlPullParserException, IOException {
        this.mResources.parseBundleExtras(r2, r3);
    }

    @Override
    public void parseBundleExtra(String r2, AttributeSet r3, Bundle r4) throws XmlPullParserException {
        this.mResources.parseBundleExtra(r2, r3, r4);
    }
}
