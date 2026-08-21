package a.a.a.a;

import android.app.Activity;
import android.content.Context;
import android.content.res.Resources;
import android.view.WindowManager;
import android.widget.ImageView;
import com.bianqi.wpll.BuildConfig;

public class f {
    public static f b;
    public ImageView a;

    public class a implements Runnable {
        public final f a;

        public a(f r1) {
            this.a = r1;
        }

        @Override
        public void run() {
            if (f.a(this.a) == null) goto L6;
            f.a(this.a).setVisibility(8);
            return;
        }
    }

    public f() {
    }

    public static ImageView a(f r0) {
        return r0.a;
    }

    public static f a() {
        if (b != null) goto L15;
        monitor-enter(f.class);
    L11:
        th = move-exception;
        throw th;
    L7:
        if (b != null) goto L9;
        b = new f();     // Catch: Throwable -> L11
    L9:
        monitor-exit(f.class);     // Catch: Throwable -> L11
    L15:
        return b;
    }

    public void a(Activity r3, String r4) {
        this.a = new ImageView(r3);     // Catch: Exception -> L4
        this.a.setImageResource(a(r3, r4));     // Catch: Exception -> L4
        this.a.setScaleType(ImageView.ScaleType.FIT_XY);     // Catch: Exception -> L4
        r3.addContentView(this.a, new WindowManager.LayoutParams(-1, -1));     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void a(Activity r2) {
        r2.runOnUiThread(new a(this));     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public final int a(Context r3, String r4) {
        String[] r42 = r4.split("\\.");
        return a(r3, r42[2], r42[1]);
    }

    public final int a(Context r2, String r3, String r4) {
        Resources r0 = r2.getResources();     // Catch: Exception -> L4
        r2.getPackageName();     // Catch: Exception -> L4
        return r0.getIdentifier(r3, r4, BuildConfig.APPLICATION_ID);
    L4:
        e = move-exception;
        e.printStackTrace();
        return 0;
    }
}
