package com.kwad.sdk.utils;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import android.widget.Toast;
import com.kwad.sdk.R;

/* JADX INFO: loaded from: classes2.dex */
public final class v {
    private static Handler mHandler = new Handler(Looper.getMainLooper());
    private static volatile boolean GX = false;

    public static void L(Context context, String str) {
        c(context, str, R.layout.ksad_content_alliance_toast_2);
    }

    private static void a(Context context, String str, int i, long j) {
        if (com.kwad.framework.a.a.aaf.booleanValue() && !GX) {
            GX = true;
            View viewInflate = com.kwad.sdk.m.l.inflate(context, i, null);
            ((TextView) viewInflate.findViewById(R.id.ksad_message_toast_txt)).setText(str);
            Toast toast = new Toast(context.getApplicationContext());
            toast.setGravity(17, 0, 0);
            toast.setDuration(0);
            toast.setView(viewInflate);
            toast.show();
            mHandler.postDelayed(new Runnable() { // from class: com.kwad.sdk.utils.v.1
                @Override // java.lang.Runnable
                public final void run() {
                    v.access$002(false);
                }
            }, j);
        }
    }

    static /* synthetic */ boolean access$002(boolean z) {
        GX = false;
        return false;
    }

    private static void c(Context context, String str, int i) {
        a(context, str, i, 800L);
    }

    public static void c(Context context, String str, long j) {
        a(context, str, R.layout.ksad_content_alliance_toast_2, 0L);
    }

    public static void d(Context context, String str, int i) {
        if (com.kwad.framework.a.a.aaf.booleanValue()) {
            View viewInflate = LayoutInflater.from(context).inflate(R.layout.ksad_content_alliance_toast, (ViewGroup) null);
            ((TextView) viewInflate.findViewById(R.id.ksad_message_toast_txt)).setText(str);
            Toast toast = new Toast(context);
            toast.setGravity(17, 0, 0);
            toast.setDuration(0);
            toast.setView(viewInflate);
            toast.show();
        }
    }

    public static void d(Context context, String str, long j) {
        a(context, str, R.layout.ksad_toast_corner, 0L);
    }
}
