package android.support.v4.graphics;

import android.graphics.Path;
import android.graphics.PointF;
import android.support.annotation.FloatRange;
import android.support.annotation.NonNull;
import android.support.annotation.RequiresApi;
import java.util.ArrayList;
import java.util.Collection;

public final class PathUtils {
    @NonNull
    @RequiresApi(26)
    public static Collection<PathSegment> flatten(@NonNull Path r1) {
        return flatten(r1, 0.5f);
    }

    @NonNull
    @RequiresApi(26)
    public static Collection<PathSegment> flatten(@NonNull Path r10, @FloatRange(from = 0.0d) float r11) {
        float[] r102 = r10.approximate(r11);
        int r112 = r102.length / 3;
        ArrayList r0 = new ArrayList(r112);
        int r1 = 1;
    L3:
        if (r1 >= r112) goto L12;
        int r2 = r1 * 3;
        int r3 = (r1 - 1) * 3;
        float r4 = r102[r2];
        float r5 = r102[r2 + 1];
        float r22 = r102[r2 + 2];
        float r6 = r102[r3];
        float r7 = r102[r3 + 1];
        float r32 = r102[r3 + 2];
        if (r4 == r6) goto L11;
        if (r5 == r7) goto L9;
    L10:
        r0.add(new PathSegment(new PointF(r7, r32), r6, new PointF(r5, r22), r4));
        goto L11
    L9:
        if (r22 != r32) goto L10;
    L11:
        r1 = r1 + 1;
        goto L3
    L12:
        return r0;
    }

    private PathUtils() {
    }
}
