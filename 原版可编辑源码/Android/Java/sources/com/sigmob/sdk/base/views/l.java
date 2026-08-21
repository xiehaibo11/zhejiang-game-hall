package com.sigmob.sdk.base.views;

import android.content.Context;
import android.text.TextUtils;
import android.util.Base64;
import android.view.MotionEvent;
import android.view.View;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.utils.Md5Util;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.common.utils.ReflectionUtil;
import com.czhj.sdk.logger.SigmobLog;
import java.io.File;

public class l extends e {
    private static float b = 10.0f;
    private static final float c = 1.0f;
    private final com.sigmob.sdk.base.views.b a;
    private a d;

    public interface a {
        void a(MotionEvent motionEvent, MotionEvent motionEvent2);
    }

    class b implements View.OnTouchListener {
        MotionEvent a;
        private boolean c;

        b() {
        }

        @Override
        public boolean onTouch(View view, MotionEvent motionEvent) {
            int action = motionEvent.getAction();
            if (action == 0) {
                this.c = true;
                this.a = MotionEvent.obtain(motionEvent);
            } else {
                if (action != 1 || !this.c) {
                    return false;
                }
                this.c = false;
                if (l.this.d != null) {
                    l.this.d.a(this.a, motionEvent);
                }
            }
            return false;
        }
    }

    private l(Context context, String str, boolean z, boolean z2) {
        super(context);
        h();
        try {
            ReflectionUtil.MethodBuilder methodBuilder = new ReflectionUtil.MethodBuilder(getSettings(), new String(Base64.decode(com.sigmob.sdk.base.h.C, 2)));
            methodBuilder.addParam(Boolean.TYPE, true);
            methodBuilder.execute();
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            ReflectionUtil.MethodBuilder methodBuilder2 = new ReflectionUtil.MethodBuilder(getSettings(), new String(Base64.decode(com.sigmob.sdk.base.h.D, 2)));
            methodBuilder2.addParam(Boolean.TYPE, true);
            methodBuilder2.execute();
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        a(true);
        setBackgroundColor(0);
        if (z) {
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -2);
            com.sigmob.sdk.base.views.b bVar = new com.sigmob.sdk.base.views.b(getContext(), 1);
            this.a = bVar;
            bVar.a(str);
            this.a.b(com.sigmob.sdk.base.d.g());
            addView(this.a, layoutParams);
        } else {
            this.a = null;
        }
        setOnTouchListener(new b());
    }

    public static l a(Context context, String str, boolean z, boolean z2) {
        Preconditions.NoThrow.checkNotNull(context);
        return new l(context, str, z, z2);
    }

    private void h() {
        setHorizontalScrollBarEnabled(false);
        setHorizontalScrollbarOverlay(false);
        setVerticalScrollBarEnabled(false);
        setVerticalScrollbarOverlay(false);
        getSettings().setSupportZoom(false);
        setScrollBarStyle(0);
    }

    void a(String str) {
        File fileA = com.sigmob.sdk.base.utils.b.a(str, Md5Util.md5(str) + ".html");
        if (fileA == null || TextUtils.isEmpty(fileA.getAbsolutePath())) {
            loadDataWithBaseURL(Networking.getBaseUrlScheme() + "://localhost/", str, "text/html", "utf-8", null);
            return;
        }
        loadUrl("file://" + fileA.getAbsolutePath());
    }

    @Override
    public void destroy() {
        SigmobLog.d("CreativeWebView destroy() callSigmobLog.d( \"CreativeWebView destroy() called\");ed");
        super.destroy();
    }

    public void setLogoClickListener(View.OnClickListener onClickListener) {
        com.sigmob.sdk.base.views.b bVar = this.a;
        if (bVar != null) {
            bVar.setOnClickListener(onClickListener);
        }
    }

    public void setWebViewClickListener(a aVar) {
        this.d = aVar;
    }
}
