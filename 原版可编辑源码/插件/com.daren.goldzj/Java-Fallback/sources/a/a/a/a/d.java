package a.a.a.a;

import android.app.Activity;
import android.content.res.Resources;
import android.graphics.Rect;
import android.os.Build;
import android.util.Log;
import android.view.DisplayCutout;
import android.view.View;
import android.view.WindowInsets;
import com.bianqi.wpll.BuildConfig;
import java.util.List;

public class d {
    public static d b;
    public int a;

    public class a implements View.OnApplyWindowInsetsListener {
        public final Activity a;
        public final d b;

        public a(d r1, Activity r2) {
            this.b = r1;
            this.a = r2;
        }

        @Override
        public WindowInsets onApplyWindowInsets(View r4, WindowInsets r5) {
            if (r5 != null) goto L6;
            Log.e("ymnsdk ", "setOnApplyWindowInsetsListener  windowInsets is null");
            d.a(this.b, 0);
            return r5;
        L6:
            DisplayCutout r1 = r5.getDisplayCutout();
            if (r1 != null) goto L9;
            d.a(this.b, 0);
            Log.e("ymnsdk ", "cutout==null, is not notch screen");
        L20:
            return r5;
        L9:
            List<Rect> r2 = r1.getBoundingRects();
            if (r2 != null) goto L12;
        L19:
            d.a(this.b, 0);
            Log.e("ymnsdk ", "rects==null || rects.size()==0, is not notch screen");
            goto L20
        L12:
            if (r2.size() == 0) goto L19;
            if (d.a(this.b, this.a) == false) goto L17;
            d.a(this.b, r1.getSafeInsetLeft());
        L18:
            Log.i("ymnsdk ", "当前异形屏：" + d.a(this.b));
            goto L20
        L17:
            d.a(this.b, r1.getSafeInsetTop());
            goto L18
        }
    }

    public d() {
        this.a = 0;
    }

    public static int a(d r0) {
        return r0.a;
    }

    public static d b() {
        if (b != null) goto L6;
        b = new d();
    L6:
        return b;
    }

    public final boolean c(Activity r2) {
        int r0 = a(r2);
        r2.getResources().getConfiguration();
        if (r0 != 2) goto L5;
        return true;
    L5:
        return false;
    }

    public void d(Activity r4) {
        if (e.f() == false) goto L6;
        this.a = 0;
        return;
    L6:
        int r0 = Build.VERSION.SDK_INT;
        if (r0 >= 26) goto L11;
        this.a = 0;
        return;
    L11:
        if (r0 >= 28) goto L14;
        this.a = b(r4);
        return;
    L14:
        r4.getWindow().getDecorView().setOnApplyWindowInsetsListener(new a(this, r4));
    }

    public static int a(d r0, int r1) {
        r0.a = r1;
        return r1;
    }

    public static boolean a(d r0, Activity r1) {
        return r0.c(r1);
    }

    public int a() {
        return this.a;
    }

    public final int a(Activity r3) {
        return r3.getPackageManager().getActivityInfo(r3.getComponentName(), 128).screenOrientation;
    L4:
        e = move-exception;
        e.printStackTrace();
        return 0;
    }

    public final int b(Activity r4) {
        if (e.c() == true) goto L5;
    L8:
        Resources r42 = r4.getResources();
        return r42.getDimensionPixelSize(r42.getIdentifier("status_bar_height", "dimen", BuildConfig.APPLICATION_ID));
    L5:
        if (a.a.a.a.a.b(r4) == false) goto L8;
        return a.a.a.a.a.a(r4);
    }
}
