package org.cocos2dx.javascript;

public class SDKWrapper {
    private static org.cocos2dx.javascript.SDKWrapper mInstace;
    private android.content.Context mainActive;
    private java.util.List<org.cocos2dx.javascript.service.SDKClass> sdkClasses;

    static {
            return
    }

    public SDKWrapper() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mainActive = r0
            return
    }

    public static org.cocos2dx.javascript.SDKWrapper getInstance() {
            org.cocos2dx.javascript.SDKWrapper r0 = org.cocos2dx.javascript.SDKWrapper.mInstace
            if (r0 != 0) goto Lb
            org.cocos2dx.javascript.SDKWrapper r0 = new org.cocos2dx.javascript.SDKWrapper
            r0.<init>()
            org.cocos2dx.javascript.SDKWrapper.mInstace = r0
        Lb:
            org.cocos2dx.javascript.SDKWrapper r0 = org.cocos2dx.javascript.SDKWrapper.mInstace
            return r0
    }

    private java.lang.String getJson(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.res.AssetManager r4 = r4.getAssets()
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.io.IOException -> L21
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.io.IOException -> L21
            java.io.InputStream r4 = r4.open(r5)     // Catch: java.io.IOException -> L21
            r2.<init>(r4)     // Catch: java.io.IOException -> L21
            r1.<init>(r2)     // Catch: java.io.IOException -> L21
        L17:
            java.lang.String r4 = r1.readLine()     // Catch: java.io.IOException -> L21
            if (r4 == 0) goto L2d
            r0.append(r4)     // Catch: java.io.IOException -> L21
            goto L17
        L21:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 0
            int r5 = r0.length()
            r0.delete(r4, r5)
        L2d:
            java.lang.String r4 = r0.toString()
            java.lang.String r4 = r4.trim()
            return r4
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.mainActive
            return r0
    }

    public void init(android.content.Context r3) {
            r2 = this;
            r2.mainActive = r3
            java.util.List<org.cocos2dx.javascript.service.SDKClass> r0 = r2.sdkClasses
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L18
            java.lang.Object r1 = r0.next()
            org.cocos2dx.javascript.service.SDKClass r1 = (org.cocos2dx.javascript.service.SDKClass) r1
            r1.init(r3)
            goto L8
        L18:
            return
    }

    public void loadSDKClass() {
            r0 = this;
            return
    }

    public void onActivityResult(int r3, int r4, android.content.Intent r5) {
            r2 = this;
            java.util.List<org.cocos2dx.javascript.service.SDKClass> r0 = r2.sdkClasses
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            org.cocos2dx.javascript.service.SDKClass r1 = (org.cocos2dx.javascript.service.SDKClass) r1
            r1.onActivityResult(r3, r4, r5)
            goto L6
        L16:
            return
    }

    public void onBackPressed() {
            r2 = this;
            java.util.List<org.cocos2dx.javascript.service.SDKClass> r0 = r2.sdkClasses
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            org.cocos2dx.javascript.service.SDKClass r1 = (org.cocos2dx.javascript.service.SDKClass) r1
            r1.onBackPressed()
            goto L6
        L16:
            return
    }

    public void onConfigurationChanged(android.content.res.Configuration r3) {
            r2 = this;
            java.util.List<org.cocos2dx.javascript.service.SDKClass> r0 = r2.sdkClasses
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            org.cocos2dx.javascript.service.SDKClass r1 = (org.cocos2dx.javascript.service.SDKClass) r1
            r1.onConfigurationChanged(r3)
            goto L6
        L16:
            return
    }

    public void onDestroy() {
            r2 = this;
            java.util.List<org.cocos2dx.javascript.service.SDKClass> r0 = r2.sdkClasses
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            org.cocos2dx.javascript.service.SDKClass r1 = (org.cocos2dx.javascript.service.SDKClass) r1
            r1.onDestroy()
            goto L6
        L16:
            return
    }

    public void onNewIntent(android.content.Intent r3) {
            r2 = this;
            java.util.List<org.cocos2dx.javascript.service.SDKClass> r0 = r2.sdkClasses
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            org.cocos2dx.javascript.service.SDKClass r1 = (org.cocos2dx.javascript.service.SDKClass) r1
            r1.onNewIntent(r3)
            goto L6
        L16:
            return
    }

    public void onPause() {
            r2 = this;
            java.util.List<org.cocos2dx.javascript.service.SDKClass> r0 = r2.sdkClasses
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            org.cocos2dx.javascript.service.SDKClass r1 = (org.cocos2dx.javascript.service.SDKClass) r1
            r1.onPause()
            goto L6
        L16:
            return
    }

    public void onRestart() {
            r2 = this;
            java.util.List<org.cocos2dx.javascript.service.SDKClass> r0 = r2.sdkClasses
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            org.cocos2dx.javascript.service.SDKClass r1 = (org.cocos2dx.javascript.service.SDKClass) r1
            r1.onRestart()
            goto L6
        L16:
            return
    }

    public void onRestoreInstanceState(android.os.Bundle r3) {
            r2 = this;
            java.util.List<org.cocos2dx.javascript.service.SDKClass> r0 = r2.sdkClasses
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            org.cocos2dx.javascript.service.SDKClass r1 = (org.cocos2dx.javascript.service.SDKClass) r1
            r1.onRestoreInstanceState(r3)
            goto L6
        L16:
            return
    }

    public void onResume() {
            r2 = this;
            java.util.List<org.cocos2dx.javascript.service.SDKClass> r0 = r2.sdkClasses
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            org.cocos2dx.javascript.service.SDKClass r1 = (org.cocos2dx.javascript.service.SDKClass) r1
            r1.onResume()
            goto L6
        L16:
            return
    }

    public void onSaveInstanceState(android.os.Bundle r3) {
            r2 = this;
            java.util.List<org.cocos2dx.javascript.service.SDKClass> r0 = r2.sdkClasses
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            org.cocos2dx.javascript.service.SDKClass r1 = (org.cocos2dx.javascript.service.SDKClass) r1
            r1.onSaveInstanceState(r3)
            goto L6
        L16:
            return
    }

    public void onStart() {
            r2 = this;
            java.util.List<org.cocos2dx.javascript.service.SDKClass> r0 = r2.sdkClasses
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            org.cocos2dx.javascript.service.SDKClass r1 = (org.cocos2dx.javascript.service.SDKClass) r1
            r1.onStart()
            goto L6
        L16:
            return
    }

    public void onStop() {
            r2 = this;
            java.util.List<org.cocos2dx.javascript.service.SDKClass> r0 = r2.sdkClasses
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            org.cocos2dx.javascript.service.SDKClass r1 = (org.cocos2dx.javascript.service.SDKClass) r1
            r1.onStop()
            goto L6
        L16:
            return
    }

    public void setGLSurfaceView(android.opengl.GLSurfaceView r1, android.content.Context r2) {
            r0 = this;
            return
    }
}
