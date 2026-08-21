package android.support.graphics.drawable;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.XmlResourceParser;
import android.os.Build;
import android.support.annotation.RestrictTo;
import android.support.v4.view.animation.FastOutLinearInInterpolator;
import android.support.v4.view.animation.FastOutSlowInInterpolator;
import android.support.v4.view.animation.LinearOutSlowInInterpolator;
import android.util.AttributeSet;
import android.util.Xml;
import android.view.animation.AccelerateDecelerateInterpolator;
import android.view.animation.AccelerateInterpolator;
import android.view.animation.AnimationUtils;
import android.view.animation.AnticipateInterpolator;
import android.view.animation.AnticipateOvershootInterpolator;
import android.view.animation.BounceInterpolator;
import android.view.animation.CycleInterpolator;
import android.view.animation.DecelerateInterpolator;
import android.view.animation.Interpolator;
import android.view.animation.LinearInterpolator;
import android.view.animation.OvershootInterpolator;
import java.io.IOException;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class AnimationUtilsCompat {
    public static Interpolator loadInterpolator(Context r4, int r5) throws Resources.NotFoundException {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        XmlResourceParser r0 = null;
        if (r5 != 17563663) goto L17;
        return new FastOutLinearInInterpolator();
    L17:
        if (r5 != 17563661) goto L21;
        return new FastOutSlowInInterpolator();
    L21:
        if (r5 == 17563662) goto L23;
        XmlResourceParser r02 = r4.getResources().getAnimation(r5);     // Catch: Throwable -> L10 IOException -> L12 XmlPullParserException -> L14
        Interpolator r42 = createInterpolatorFromXml(r4, r4.getResources(), r4.getTheme(), r02);     // Catch: Throwable -> L10 IOException -> L12 XmlPullParserException -> L14
        if (r02 == null) goto L27;
        r02.close();
    L27:
        return r42;
    L23:
        return new LinearOutSlowInInterpolator();
    L10:
        th = move-exception;
        if (0 == 0) goto L34;
        r0.close();
    L34:
        throw th;
    L12:
        e = move-exception;
        Resources.NotFoundException r1 = new Resources.NotFoundException("Can't load animation resource ID #0x" + Integer.toHexString(r5));     // Catch: Throwable -> L10
        r1.initCause(e);     // Catch: Throwable -> L10
        throw r1;     // Catch: Throwable -> L10
    L14:
        e = move-exception;
        Resources.NotFoundException r12 = new Resources.NotFoundException("Can't load animation resource ID #0x" + Integer.toHexString(r5));     // Catch: Throwable -> L10
        r12.initCause(e);     // Catch: Throwable -> L10
        throw r12;     // Catch: Throwable -> L10
    L5:
        return AnimationUtils.loadInterpolator(r4, r5);
    }

    private static Interpolator createInterpolatorFromXml(Context r2, Resources r3, Resources.Theme r4, XmlPullParser r5) throws XmlPullParserException, IOException {
        int r32 = r5.getDepth();
        Interpolator r42 = null;
    L3:
        int r0 = r5.next();
        if (r0 != 3) goto L8;
        if (r5.getDepth() > r32) goto L8;
    L45:
        return r42;
    L8:
        if (r0 == 1) goto L45;
        if (r0 != 2) goto L3;
        AttributeSet r43 = Xml.asAttributeSet(r5);
        String r02 = r5.getName();
        if (r02.equals("linearInterpolator") == true) goto L14;
        if (r02.equals("accelerateInterpolator") == true) goto L17;
        if (r02.equals("decelerateInterpolator") == true) goto L21;
        if (r02.equals("accelerateDecelerateInterpolator") == false) goto L26;
        r42 = new AccelerateDecelerateInterpolator();
        goto L3
    L26:
        if (r02.equals("cycleInterpolator") == true) goto L27;
        if (r02.equals("anticipateInterpolator") == true) goto L30;
        if (r02.equals("overshootInterpolator") == true) goto L33;
        if (r02.equals("anticipateOvershootInterpolator") == true) goto L36;
        if (r02.equals("bounceInterpolator") == false) goto L41;
        r42 = new BounceInterpolator();
        goto L3
    L41:
        if (r02.equals("pathInterpolator") == false) goto L44;
        Interpolator r03 = new PathInterpolatorCompat(r2, r43, r5);
    L18:
        r42 = r03;
        goto L3
    L44:
        throw new RuntimeException("Unknown interpolator name: " + r5.getName());
    L36:
        r03 = new AnticipateOvershootInterpolator(r2, r43);
        goto L18
    L33:
        r03 = new OvershootInterpolator(r2, r43);
        goto L18
    L30:
        r03 = new AnticipateInterpolator(r2, r43);
        goto L18
    L27:
        r03 = new CycleInterpolator(r2, r43);
        goto L18
    L21:
        r03 = new DecelerateInterpolator(r2, r43);
        goto L18
    L17:
        r03 = new AccelerateInterpolator(r2, r43);
        goto L18
    L14:
        r42 = new LinearInterpolator();
        goto L3
    }

    private AnimationUtilsCompat() {
    }
}
