package com.tkay.expressad.atsignalcommon.webEnvCheck;

import android.content.Context;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.d.b.b;

public class WebEnvCheckEntry {
    public void check(Context context) {
        try {
            new WindVaneWebView(context).loadDataWithBaseURL(null, "<html><script>" + b.a().b() + "</script></html>", "text/html", "utf-8", null);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
