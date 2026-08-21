package com.kwad.sdk.m;

import android.content.res.AssetFileDescriptor;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.graphics.Movie;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.DisplayMetrics;
import android.util.TypedValue;
import java.io.IOException;
import java.io.InputStream;
import org.xmlpull.v1.XmlPullParserException;

public final class h extends Resources {
    private final Resources aMz;

    public h(Resources resources, Resources resources2) {
        super(resources.getAssets(), resources.getDisplayMetrics(), resources.getConfiguration());
        this.aMz = resources2;
    }

    private static boolean ax(String str, String str2) {
        return TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || !str.startsWith("ksad_") || !"com.kwad.dy.sdk".equals(str2);
    }

    private static boolean dr(int i) {
        StringBuilder sb = new StringBuilder("0x");
        sb.append(Integer.toHexString(i));
        return !sb.toString().startsWith("0x60");
    }

    @Override
    public final XmlResourceParser getAnimation(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getAnimation id: 0x#" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getAnimation(i) : super.getAnimation(i);
    }

    @Override
    public final boolean getBoolean(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getBoolean id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getBoolean(i) : super.getBoolean(i);
    }

    @Override
    @Deprecated
    public final int getColor(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getColor id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getColor(i) : super.getColor(i);
    }

    @Override
    public final int getColor(int i, Resources.Theme theme) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getMovie id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getColor(i, theme) : super.getColor(i, theme);
    }

    @Override
    public final float getDimension(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getDimension id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getDimension(i) : super.getDimension(i);
    }

    @Override
    public final int getDimensionPixelOffset(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getDimensionPixelOffset id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getDimensionPixelOffset(i) : super.getDimensionPixelOffset(i);
    }

    @Override
    public final int getDimensionPixelSize(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getDimensionPixelSize id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getDimensionPixelSize(i) : super.getDimensionPixelSize(i);
    }

    @Override
    public final DisplayMetrics getDisplayMetrics() {
        return super.getDisplayMetrics();
    }

    @Override
    @Deprecated
    public final Drawable getDrawable(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getDrawable id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getDrawable(i) : super.getDrawable(i);
    }

    @Override
    public final Drawable getDrawable(int i, Resources.Theme theme) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getDrawable id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getDrawable(i) : super.getDrawable(i, theme);
    }

    @Override
    @Deprecated
    public final Drawable getDrawableForDensity(int i, int i2) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getDrawableForDensity id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getDrawableForDensity(i, i2) : super.getDrawableForDensity(i, i2);
    }

    @Override
    public final Drawable getDrawableForDensity(int i, int i2, Resources.Theme theme) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getDrawable id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getDrawableForDensity(i, i2, theme) : super.getDrawableForDensity(i, i2, theme);
    }

    @Override
    public final float getFloat(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getFloat id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getFloat(i) : super.getFloat(i);
    }

    @Override
    public final Typeface getFont(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getFont id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getFont(i) : super.getFont(i);
    }

    @Override
    public final float getFraction(int i, int i2, int i3) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getFraction id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getFraction(i, i2, i3) : super.getFraction(i, i2, i3);
    }

    @Override
    public final int getIdentifier(String str, String str2, String str3) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getIdentifier id: 0x# name:" + str + " :defPackage" + str3);
        return ax(str, str3) ? this.aMz.getIdentifier(str, str2, str3) : super.getIdentifier(str, str2, str3);
    }

    @Override
    public final int[] getIntArray(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getIntArray id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getIntArray(i) : super.getIntArray(i);
    }

    @Override
    public final int getInteger(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getInteger id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getInteger(i) : super.getInteger(i);
    }

    @Override
    public final XmlResourceParser getLayout(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getLayout id: 0x#" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getLayout(i) : super.getLayout(i);
    }

    @Override
    @Deprecated
    public final Movie getMovie(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getMovie id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getMovie(i) : super.getMovie(i);
    }

    @Override
    public final String getQuantityString(int i, int i2) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getQuantityString id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getQuantityString(i, i2) : super.getQuantityString(i, i2);
    }

    @Override
    public final String getQuantityString(int i, int i2, Object... objArr) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getQuantityString id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getQuantityString(i, i2, objArr) : super.getQuantityString(i, i2, objArr);
    }

    @Override
    public final CharSequence getQuantityText(int i, int i2) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getQuantityText id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getQuantityText(i, i2) : super.getQuantityText(i, i2);
    }

    @Override
    public final String getResourceEntryName(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getResourceEntryName id: 0x#" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getResourceEntryName(i) : super.getResourceEntryName(i);
    }

    @Override
    public final String getResourceName(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getResourceName id: 0x#" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getResourceName(i) : super.getResourceName(i);
    }

    @Override
    public final String getResourcePackageName(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getResourcePackageName id: 0x#" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getResourcePackageName(i) : super.getResourcePackageName(i);
    }

    @Override
    public final String getResourceTypeName(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getResourceTypeName id: 0x#" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getResourceTypeName(i) : super.getResourceTypeName(i);
    }

    @Override
    public final String getString(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getString id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getString(i) : super.getString(i);
    }

    @Override
    public final String getString(int i, Object... objArr) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getString id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getString(i, objArr) : super.getString(i, objArr);
    }

    @Override
    public final String[] getStringArray(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getStringArray id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getStringArray(i) : super.getStringArray(i);
    }

    @Override
    public final CharSequence getText(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getText id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getText(i) : super.getText(i);
    }

    @Override
    public final CharSequence getText(int i, CharSequence charSequence) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getText id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getText(i, charSequence) : super.getText(i, charSequence);
    }

    @Override
    public final CharSequence[] getTextArray(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getTextArray id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getTextArray(i) : super.getTextArray(i);
    }

    @Override
    public final void getValue(int i, TypedValue typedValue, boolean z) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getValue id: 0x#" + Integer.toHexString(i));
        if (dr(i)) {
            this.aMz.getValue(i, typedValue, z);
        } else {
            super.getValue(i, typedValue, z);
        }
    }

    @Override
    public final void getValue(String str, TypedValue typedValue, boolean z) {
        int identifier = getIdentifier(str, com.tkay.expressad.foundation.h.i.g, null);
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getValue id: 0x#" + Integer.toHexString(identifier));
        if (dr(identifier)) {
            this.aMz.getValue(str, typedValue, z);
        } else {
            super.getValue(str, typedValue, z);
        }
    }

    @Override
    public final void getValueForDensity(int i, int i2, TypedValue typedValue, boolean z) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getValueForDensity id: 0x#" + Integer.toHexString(i));
        if (dr(i)) {
            this.aMz.getValueForDensity(i, i2, typedValue, z);
        } else {
            super.getValueForDensity(i, i2, typedValue, z);
        }
    }

    @Override
    public final XmlResourceParser getXml(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "getXml id: 0x#" + Integer.toHexString(i));
        return dr(i) ? this.aMz.getXml(i) : super.getXml(i);
    }

    @Override
    public final TypedArray obtainAttributes(AttributeSet attributeSet, int[] iArr) {
        return super.obtainAttributes(attributeSet, iArr);
    }

    @Override
    public final TypedArray obtainTypedArray(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "obtainTypedArray id: #0x" + Integer.toHexString(i));
        return dr(i) ? this.aMz.obtainTypedArray(i) : super.obtainTypedArray(i);
    }

    @Override
    public final InputStream openRawResource(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "openRawResource id: 0x#" + Integer.toHexString(i));
        return dr(i) ? this.aMz.openRawResource(i) : super.openRawResource(i);
    }

    @Override
    public final InputStream openRawResource(int i, TypedValue typedValue) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "openRawResource id: 0x#" + Integer.toHexString(i));
        return dr(i) ? this.aMz.openRawResource(i, typedValue) : super.openRawResource(i, typedValue);
    }

    @Override
    public final AssetFileDescriptor openRawResourceFd(int i) {
        com.kwad.sdk.core.e.c.d("KSDY/KSResource", "openRawResourceFd id: 0x#" + Integer.toHexString(i));
        return dr(i) ? this.aMz.openRawResourceFd(i) : super.openRawResourceFd(i);
    }

    @Override
    public final void parseBundleExtra(String str, AttributeSet attributeSet, Bundle bundle) throws XmlPullParserException {
        super.parseBundleExtra(str, attributeSet, bundle);
    }

    @Override
    public final void parseBundleExtras(XmlResourceParser xmlResourceParser, Bundle bundle) throws XmlPullParserException, IOException {
        super.parseBundleExtras(xmlResourceParser, bundle);
    }

    @Override
    public final void updateConfiguration(Configuration configuration, DisplayMetrics displayMetrics) {
        super.updateConfiguration(configuration, displayMetrics);
    }
}
