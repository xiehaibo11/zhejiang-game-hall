package com.kwad.sdk.utils;

public final class v {
    private static volatile boolean GX;
    private static android.os.Handler mHandler;


    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.kwad.sdk.utils.v.mHandler = r0
            r0 = 0
            com.kwad.sdk.utils.v.GX = r0
            return
    }

    public static void L(android.content.Context r1, java.lang.String r2) {
            int r0 = com.kwad.sdk.R.layout.ksad_content_alliance_toast_2
            c(r1, r2, r0)
            return
    }

    private static void a(android.content.Context r1, java.lang.String r2, int r3, long r4) {
            java.lang.Boolean r0 = com.kwad.framework.a.a.aaf
            boolean r0 = r0.booleanValue()
            if (r0 != 0) goto L9
            return
        L9:
            boolean r0 = com.kwad.sdk.utils.v.GX
            if (r0 == 0) goto Le
            return
        Le:
            r0 = 1
            com.kwad.sdk.utils.v.GX = r0
            r0 = 0
            android.view.View r3 = com.kwad.sdk.m.l.inflate(r1, r3, r0)
            int r0 = com.kwad.sdk.R.id.ksad_message_toast_txt
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r0.setText(r2)
            android.widget.Toast r2 = new android.widget.Toast
            android.content.Context r1 = r1.getApplicationContext()
            r2.<init>(r1)
            r1 = 17
            r0 = 0
            r2.setGravity(r1, r0, r0)
            r2.setDuration(r0)
            r2.setView(r3)
            r2.show()
            android.os.Handler r1 = com.kwad.sdk.utils.v.mHandler
            com.kwad.sdk.utils.v$1 r2 = new com.kwad.sdk.utils.v$1
            r2.<init>()
            r1.postDelayed(r2, r4)
            return
    }

    static boolean access$002(boolean r0) {
            r0 = 0
            com.kwad.sdk.utils.v.GX = r0
            return r0
    }

    private static void c(android.content.Context r2, java.lang.String r3, int r4) {
            r0 = 800(0x320, double:3.953E-321)
            a(r2, r3, r4, r0)
            return
    }

    public static void c(android.content.Context r2, java.lang.String r3, long r4) {
            int r4 = com.kwad.sdk.R.layout.ksad_content_alliance_toast_2
            r0 = 0
            a(r2, r3, r4, r0)
            return
    }

    public static void d(android.content.Context r2, java.lang.String r3, int r4) {
            java.lang.Boolean r4 = com.kwad.framework.a.a.aaf
            boolean r4 = r4.booleanValue()
            if (r4 != 0) goto L9
            return
        L9:
            android.view.LayoutInflater r4 = android.view.LayoutInflater.from(r2)
            int r0 = com.kwad.sdk.R.layout.ksad_content_alliance_toast
            r1 = 0
            android.view.View r4 = r4.inflate(r0, r1)
            int r0 = com.kwad.sdk.R.id.ksad_message_toast_txt
            android.view.View r0 = r4.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r0.setText(r3)
            android.widget.Toast r3 = new android.widget.Toast
            r3.<init>(r2)
            r2 = 17
            r0 = 0
            r3.setGravity(r2, r0, r0)
            r3.setDuration(r0)
            r3.setView(r4)
            r3.show()
            return
    }

    public static void d(android.content.Context r2, java.lang.String r3, long r4) {
            int r4 = com.kwad.sdk.R.layout.ksad_toast_corner
            r0 = 0
            a(r2, r3, r4, r0)
            return
    }
}
