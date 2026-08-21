package com.meizu.cloud.pushsdk.notification.c;

public class c {
    public static int a(android.content.Context r3) {
            com.meizu.cloud.pushsdk.notification.c.d r0 = com.meizu.cloud.pushsdk.notification.c.d.a(r3)
            java.lang.String r1 = "push_expandable_big_image_notification"
            java.lang.String r2 = "layout"
            int r3 = r0.a(r3, r1, r2)
            return r3
    }

    public static int b(android.content.Context r3) {
            com.meizu.cloud.pushsdk.notification.c.d r0 = com.meizu.cloud.pushsdk.notification.c.d.a(r3)
            java.lang.String r1 = "push_expandable_big_text_notification"
            java.lang.String r2 = "layout"
            int r3 = r0.a(r3, r1, r2)
            return r3
    }

    public static int c(android.content.Context r5) {
            com.meizu.cloud.pushsdk.notification.c.d r0 = com.meizu.cloud.pushsdk.notification.c.d.a(r5)
            int r1 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getFlymeVersion()
            java.lang.String r2 = "layout"
            if (r1 <= 0) goto L16
            r3 = 6
            if (r1 > r3) goto L16
            java.lang.String r1 = "push_pure_pic_notification_f6"
        L11:
            int r5 = r0.a(r5, r1, r2)
            return r5
        L16:
            r3 = 7
            if (r1 != r3) goto L1c
            java.lang.String r1 = "push_pure_pic_notification_f7"
            goto L11
        L1c:
            r3 = 8
            if (r1 != r3) goto L23
            java.lang.String r1 = "push_pure_pic_notification_f8"
            goto L11
        L23:
            android.content.res.Resources r1 = r5.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            float r1 = r1.density
            java.lang.String r1 = java.lang.String.valueOf(r1)
            int r3 = r1.length()
            r4 = 3
            if (r3 <= r4) goto L3d
            r3 = 0
            java.lang.String r1 = r1.substring(r3, r4)
        L3d:
            java.lang.String r3 = "2.0"
            boolean r3 = r3.equals(r1)
            if (r3 != 0) goto L6c
            java.lang.String r3 = "3.0"
            boolean r3 = r3.equals(r1)
            if (r3 != 0) goto L6c
            java.lang.String r3 = "4.0"
            boolean r3 = r3.equals(r1)
            if (r3 != 0) goto L6c
            java.lang.String r3 = "6.0"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L5e
            goto L6c
        L5e:
            java.lang.String r3 = "3.3"
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L69
            java.lang.String r1 = "push_pure_pic_notification_f9_337"
            goto L11
        L69:
            java.lang.String r1 = "push_pure_pic_notification_f9_275"
            goto L11
        L6c:
            java.lang.String r1 = "push_pure_pic_notification_f9"
            goto L11
    }

    public static int d(android.content.Context r3) {
            com.meizu.cloud.pushsdk.notification.c.d r0 = com.meizu.cloud.pushsdk.notification.c.d.a(r3)
            java.lang.String r1 = "push_big_notification_title"
            java.lang.String r2 = "id"
            int r3 = r0.a(r3, r1, r2)
            return r3
    }

    public static int e(android.content.Context r3) {
            com.meizu.cloud.pushsdk.notification.c.d r0 = com.meizu.cloud.pushsdk.notification.c.d.a(r3)
            java.lang.String r1 = "push_big_notification_content"
            java.lang.String r2 = "id"
            int r3 = r0.a(r3, r1, r2)
            return r3
    }

    public static int f(android.content.Context r3) {
            com.meizu.cloud.pushsdk.notification.c.d r0 = com.meizu.cloud.pushsdk.notification.c.d.a(r3)
            java.lang.String r1 = "push_big_notification_date"
            java.lang.String r2 = "id"
            int r3 = r0.a(r3, r1, r2)
            return r3
    }

    public static int g(android.content.Context r3) {
            com.meizu.cloud.pushsdk.notification.c.d r0 = com.meizu.cloud.pushsdk.notification.c.d.a(r3)
            java.lang.String r1 = "push_big_bigview_defaultView"
            java.lang.String r2 = "id"
            int r3 = r0.a(r3, r1, r2)
            return r3
    }

    public static int h(android.content.Context r3) {
            com.meizu.cloud.pushsdk.notification.c.d r0 = com.meizu.cloud.pushsdk.notification.c.d.a(r3)
            java.lang.String r1 = "push_big_bigtext_defaultView"
            java.lang.String r2 = "id"
            int r3 = r0.a(r3, r1, r2)
            return r3
    }

    public static int i(android.content.Context r3) {
            com.meizu.cloud.pushsdk.notification.c.d r0 = com.meizu.cloud.pushsdk.notification.c.d.a(r3)
            java.lang.String r1 = "push_pure_bigview_banner"
            java.lang.String r2 = "id"
            int r3 = r0.a(r3, r1, r2)
            return r3
    }

    public static int j(android.content.Context r3) {
            com.meizu.cloud.pushsdk.notification.c.d r0 = com.meizu.cloud.pushsdk.notification.c.d.a(r3)
            java.lang.String r1 = "push_pure_bigview_expanded"
            java.lang.String r2 = "id"
            int r3 = r0.a(r3, r1, r2)
            return r3
    }

    public static int k(android.content.Context r3) {
            com.meizu.cloud.pushsdk.notification.c.d r0 = com.meizu.cloud.pushsdk.notification.c.d.a(r3)
            java.lang.String r1 = "push_big_notification_icon"
            java.lang.String r2 = "id"
            int r3 = r0.a(r3, r1, r2)
            return r3
    }

    public static int l(android.content.Context r3) {
            com.meizu.cloud.pushsdk.notification.c.d r0 = com.meizu.cloud.pushsdk.notification.c.d.a(r3)
            java.lang.String r1 = "stat_sys_third_app_notify"
            java.lang.String r2 = "drawable"
            int r3 = r0.a(r3, r1, r2)
            return r3
    }

    public static int m(android.content.Context r3) {
            com.meizu.cloud.pushsdk.notification.c.d r0 = com.meizu.cloud.pushsdk.notification.c.d.a(r3)
            java.lang.String r1 = "push_pure_close"
            java.lang.String r2 = "id"
            int r3 = r0.a(r3, r1, r2)
            return r3
    }
}
