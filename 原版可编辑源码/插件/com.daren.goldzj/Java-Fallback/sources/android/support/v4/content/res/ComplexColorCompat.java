package android.support.v4.content.res;

import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.XmlResourceParser;
import android.graphics.Shader;
import android.support.annotation.ColorInt;
import android.support.annotation.ColorRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.util.AttributeSet;
import android.util.Log;
import android.util.Xml;
import java.io.IOException;
import org.xmlpull.v1.XmlPullParserException;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public final class ComplexColorCompat {
    private static final String LOG_TAG = "ComplexColorCompat";
    private int mColor;
    private final ColorStateList mColorStateList;
    private final Shader mShader;

    private ComplexColorCompat(Shader r1, ColorStateList r2, @ColorInt int r3) {
        this.mShader = r1;
        this.mColorStateList = r2;
        this.mColor = r3;
    }

    static ComplexColorCompat from(@NonNull Shader r3) {
        return new ComplexColorCompat(r3, null, 0);
    }

    static ComplexColorCompat from(@NonNull ColorStateList r3) {
        return new ComplexColorCompat(null, r3, r3.getDefaultColor());
    }

    static ComplexColorCompat from(@ColorInt int r2) {
        return new ComplexColorCompat(null, null, r2);
    }

    @Nullable
    public Shader getShader() {
        return this.mShader;
    }

    @ColorInt
    public int getColor() {
        return this.mColor;
    }

    public void setColor(@ColorInt int r1) {
        this.mColor = r1;
    }

    public boolean isGradient() {
        if (this.mShader == null) goto L5;
        return true;
    L5:
        return false;
    }

    public boolean isStateful() {
        if (this.mShader != null) goto L9;
        ColorStateList r0 = this.mColorStateList;
        if (r0 == null) goto L9;
        if (r0.isStateful() == false) goto L9;
        return true;
    L9:
        return false;
    }

    public boolean onStateChanged(int[] r3) {
        if (isStateful() == false) goto L7;
        ColorStateList r0 = this.mColorStateList;
        int r32 = r0.getColorForState(r3, r0.getDefaultColor());
        if (r32 == this.mColor) goto L7;
        this.mColor = r32;
        return true;
    L7:
        return false;
    }

    public boolean willDraw() {
        if (isGradient() == false) goto L5;
    L8:
        return true;
    L5:
        if (this.mColor != 0) goto L8;
        return false;
    }

    @Nullable
    public static ComplexColorCompat inflate(@NonNull Resources r0, @ColorRes int r1, @Nullable Resources.Theme r2) {
        return createFromXml(r0, r1, r2);
    L4:
        e = move-exception;
        Log.e(LOG_TAG, "Failed to inflate ComplexColor.", e);
        return null;
    }

    @NonNull
    private static ComplexColorCompat createFromXml(@NonNull Resources r6, @ColorRes int r7, @Nullable Resources.Theme r8) throws IOException, XmlPullParserException {
        XmlResourceParser r72 = r6.getXml(r7);
        AttributeSet r0 = Xml.asAttributeSet(r72);
    L3:
        int r1 = r72.next();
        if (r1 == 2) goto L7;
        if (r1 != 1) goto L3;
    L7:
        if (r1 != 2) goto L28;
        String r12 = r72.getName();
        byte r2 = -1;
        int r4 = r12.hashCode();
        if (r4 == 89650992) goto L17;
        if (r4 == 1191572447) goto L14;
    L19:
        if (r2 == 0) goto L26;
        if (r2 != 1) goto L24;
        return from(GradientColorInflaterCompat.createFromXmlInner(r6, r72, r0, r8));
    L24:
        throw new XmlPullParserException(r72.getPositionDescription() + ": unsupported complex color tag " + r12);
    L26:
        return from(ColorStateListInflaterCompat.createFromXmlInner(r6, r72, r0, r8));
    L14:
        if (r12.equals("selector") == false) goto L19;
        r2 = 0;
        goto L19
    L17:
        if (r12.equals("gradient") == false) goto L19;
        r2 = 1;
        goto L19
    L28:
        throw new XmlPullParserException("No start tag found");
    }
}
