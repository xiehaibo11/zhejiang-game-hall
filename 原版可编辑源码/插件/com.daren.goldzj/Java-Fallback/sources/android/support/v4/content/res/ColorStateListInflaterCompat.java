package android.support.v4.content.res;

import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Color;
import android.support.annotation.ColorInt;
import android.support.annotation.FloatRange;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.compat.R;
import android.support.v4.view.ViewCompat;
import android.util.AttributeSet;
import android.util.StateSet;
import android.util.Xml;
import java.io.IOException;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public final class ColorStateListInflaterCompat {
    private static final int DEFAULT_COLOR = -65536;

    private ColorStateListInflaterCompat() {
    }

    @NonNull
    public static ColorStateList createFromXml(@NonNull Resources r4, @NonNull XmlPullParser r5, @Nullable Resources.Theme r6) throws XmlPullParserException, IOException {
        AttributeSet r0 = Xml.asAttributeSet(r5);
    L3:
        int r1 = r5.next();
        if (r1 == 2) goto L8;
        if (r1 != 1) goto L3;
    L8:
        if (r1 != 2) goto L12;
        return createFromXmlInner(r4, r5, r0, r6);
    L12:
        throw new XmlPullParserException("No start tag found");
    }

    @NonNull
    public static ColorStateList createFromXmlInner(@NonNull Resources r2, @NonNull XmlPullParser r3, @NonNull AttributeSet r4, @Nullable Resources.Theme r5) throws XmlPullParserException, IOException {
        String r0 = r3.getName();
        if (r0.equals("selector") == false) goto L7;
        return inflate(r2, r3, r4, r5);
    L7:
        throw new XmlPullParserException(r3.getPositionDescription() + ": invalid color state list tag " + r0);
    }

    private static ColorStateList inflate(@NonNull Resources r17, @NonNull XmlPullParser r18, @NonNull AttributeSet r19, @Nullable Resources.Theme r20) throws XmlPullParserException, IOException {
        int r2 = 1;
        int r1 = r18.getDepth() + 1;
        int[][] r3 = new int[20][];
        int[] r4 = new int[r3.length];
        int r6 = 0;
    L3:
        int r7 = r18.next();
        if (r7 == r2) goto L41;
        int r8 = r18.getDepth();
        if (r8 >= r1) goto L10;
        if (r7 == 3) goto L41;
    L10:
        if (r7 != 2) goto L40;
        if (r8 > r1) goto L40;
        if (r18.getName().equals("item") == false) goto L40;
        TypedArray r72 = obtainAttributes(r17, r20, r19, R.styleable.ColorStateListItem);
        int r10 = r72.getColor(R.styleable.ColorStateListItem_android_color, -65281);
        float r11 = 1.0f;
        if (r72.hasValue(R.styleable.ColorStateListItem_android_alpha) == false) goto L19;
        r11 = r72.getFloat(R.styleable.ColorStateListItem_android_alpha, 1.0f);
    L21:
        r72.recycle();
        int r73 = r19.getAttributeCount();
        int[] r12 = new int[r73];
        int r13 = 0;
        int r14 = 0;
    L22:
        if (r13 >= r73) goto L35;
        int r15 = r19.getAttributeNameResource(r13);
        if (r15 == 16843173) goto L34;
        if (r15 == 16843551) goto L34;
        if (r15 == R.attr.alpha) goto L34;
        int r22 = r14 + 1;
        if (r19.getAttributeBooleanValue(r13, false) == true) goto L33;
        r15 = -r15;
    L33:
        r12[r14] = r15;
        r14 = r22;
    L34:
        r13 = r13 + 1;
        goto L22
    L35:
        int[] r23 = StateSet.trimStateSet(r12, r14);
        int r74 = modulateColorAlpha(r10, r11);
        if (r6 == 0) goto L38;
        int r102 = r23.length;
    L38:
        r4 = GrowingArrayUtils.append(r4, r6, r74);
        r3 = (int[][]) GrowingArrayUtils.append(r3, r6, r23);
        r6 = r6 + 1;
        goto L40
    L19:
        if (r72.hasValue(R.styleable.ColorStateListItem_alpha) == false) goto L21;
        r11 = r72.getFloat(R.styleable.ColorStateListItem_alpha, 1.0f);
    L40:
        r2 = 1;
    L41:
        int[] r0 = new int[r6];
        int[][] r16 = new int[r6][];
        System.arraycopy(r4, 0, r0, 0, r6);
        System.arraycopy(r3, 0, r16, 0, r6);
        return new ColorStateList(r16, r0);
    }

    private static TypedArray obtainAttributes(Resources r0, Resources.Theme r1, AttributeSet r2, int[] r3) {
        if (r1 != null) goto L5;
        return r0.obtainAttributes(r2, r3);
    L5:
        return r1.obtainStyledAttributes(r2, r3, 0, 0);
    }

    @ColorInt
    private static int modulateColorAlpha(@ColorInt int r1, @FloatRange(from = 0.0d, to = 1.0d) float r2) {
        return (r1 & ViewCompat.MEASURED_SIZE_MASK) | (Math.round(Color.alpha(r1) * r2) << 24);
    }
}
