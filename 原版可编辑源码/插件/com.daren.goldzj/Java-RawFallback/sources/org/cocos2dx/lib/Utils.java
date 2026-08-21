package org.cocos2dx.lib;

public class Utils {
    private static android.app.Activity sActivity;

    static {
            return
    }

    public Utils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.app.Activity getActivity() {
            android.app.Activity r0 = org.cocos2dx.lib.Utils.sActivity
            return r0
    }

    public static void hideVirtualButton() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L78
            android.app.Activity r0 = org.cocos2dx.lib.Utils.sActivity
            if (r0 == 0) goto L78
            java.lang.Class<android.view.View> r0 = android.view.View.class
            java.lang.String r1 = "SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION"
            java.lang.Object r1 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r0, r1)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            java.lang.String r2 = "SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN"
            java.lang.Object r2 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r0, r2)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            java.lang.String r3 = "SYSTEM_UI_FLAG_HIDE_NAVIGATION"
            java.lang.Object r3 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r0, r3)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            java.lang.String r4 = "SYSTEM_UI_FLAG_FULLSCREEN"
            java.lang.Object r4 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r0, r4)
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r4 = r4.intValue()
            java.lang.String r5 = "SYSTEM_UI_FLAG_IMMERSIVE_STICKY"
            java.lang.Object r5 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r0, r5)
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            java.lang.String r6 = "SYSTEM_UI_FLAG_LAYOUT_STABLE"
            java.lang.Object r0 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r0, r6)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            r6 = 1
            java.lang.Object[] r7 = new java.lang.Object[r6]
            r0 = r0 | r1
            r0 = r0 | r2
            r0 = r0 | r3
            r0 = r0 | r4
            r0 = r0 | r5
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r1 = 0
            r7[r1] = r0
            android.app.Activity r0 = org.cocos2dx.lib.Utils.sActivity
            android.view.Window r0 = r0.getWindow()
            android.view.View r0 = r0.getDecorView()
            java.lang.Class[] r2 = new java.lang.Class[r6]
            java.lang.Class r3 = java.lang.Integer.TYPE
            r2[r1] = r3
            java.lang.String r1 = "setSystemUiVisibility"
            org.cocos2dx.lib.Cocos2dxReflectionHelper.invokeInstanceMethod(r0, r1, r2, r7)
        L78:
            return
    }

    public static void setActivity(android.app.Activity r0) {
            org.cocos2dx.lib.Utils.sActivity = r0
            return
    }
}
