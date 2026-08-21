package com.bytedance.pangle.download;

import android.app.Activity;
import com.bytedance.pangle.Zeus;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public class a {
    private static volatile a b;
    public final List<String> a = new CopyOnWriteArrayList();

    public a() {
        Zeus.getAppApplication().registerActivityLifecycleCallbacks(new com.bytedance.pangle.a() {
            @Override
            public final void onActivityResumed(Activity activity) {
                Iterator it = a.this.a.iterator();
                while (it.hasNext()) {
                    it.next();
                    b.a();
                }
            }
        });
    }

    public static a a() {
        if (b == null) {
            synchronized (a.class) {
                if (b == null) {
                    b = new a();
                }
            }
        }
        return b;
    }
}
