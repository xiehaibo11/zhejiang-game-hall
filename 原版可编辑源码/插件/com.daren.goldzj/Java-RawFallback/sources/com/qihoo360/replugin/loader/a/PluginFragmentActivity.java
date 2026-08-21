package com.qihoo360.replugin.loader.a;

public abstract class PluginFragmentActivity extends android.support.v4.app.FragmentActivity {
    private library.e a;

    public PluginFragmentActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void attachBaseContext(android.content.Context r2) {
            r1 = this;
            android.content.Context r2 = com.qihoo360.replugin.f.a(r1, r2)
            library.e r0 = new library.e
            r0.<init>(r2)
            r1.a = r0
            super.attachBaseContext(r2)
            return
    }

    @Override
    public android.content.Context getBaseContext() {
            r1 = this;
            android.content.Context r0 = super.getBaseContext()
            return r0
    }

    @Override
    public java.lang.String getPackageCodePath() {
            r1 = this;
            java.lang.String r0 = super.getPackageCodePath()
            return r0
    }

    @Override
    public android.content.res.Resources getResources() {
            r1 = this;
            library.e r0 = r1.a
            if (r0 == 0) goto L5
            return r0
        L5:
            android.content.res.Resources r0 = super.getResources()
            return r0
    }

    @Override
    protected void onCreate(android.os.Bundle r1) {
            r0 = this;
            com.qihoo360.replugin.f.a(r0, r1)
            super.onCreate(r1)
            com.qihoo360.replugin.f.b(r0, r1)
            return
    }

    @Override
    protected void onDestroy() {
            r0 = this;
            com.qihoo360.replugin.f.a(r0)
            super.onDestroy()
            return
    }

    @Override
    protected void onRestoreInstanceState(android.os.Bundle r3) {
            r2 = this;
            com.qihoo360.replugin.f.c(r2, r3)
            super.onRestoreInstanceState(r3)     // Catch: java.lang.Throwable -> L7
            goto L2e
        L7:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "o r i s: p="
            r0.append(r1)
            java.lang.String r1 = r2.getPackageCodePath()
            r0.append(r1)
            java.lang.String r1 = "; "
            r0.append(r1)
            java.lang.String r1 = r3.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PluginFragmentActivity"
            library.d.a(r1, r0, r3)
        L2e:
            return
    }

    @Override
    public void startActivity(android.content.Intent r2) {
            r1 = this;
            boolean r0 = com.qihoo360.replugin.f.a(r1, r2)
            if (r0 == 0) goto L7
            return
        L7:
            super.startActivity(r2)
            return
    }

    @Override
    public void startActivityForResult(android.content.Intent r2, int r3) {
            r1 = this;
            r0 = 0
            r1.startActivityForResult(r2, r3, r0)
            return
    }

    @Override
    public void startActivityForResult(android.content.Intent r3, int r4, android.os.Bundle r5) {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.f.a(r2, r3, r4, r5)
            if (r0 == 0) goto L7
            return
        L7:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L11
            super.startActivityForResult(r3, r4, r5)
            goto L14
        L11:
            super.startActivityForResult(r3, r4)
        L14:
            return
    }

    @Override
    public void startActivityFromFragment(android.support.v4.app.Fragment r5, android.content.Intent r6, int r7) {
            r4 = this;
            r0 = -1
            if (r7 != r0) goto L7
        L3:
            r4.startActivityForResult(r6, r0)
            goto L37
        L7:
            r1 = -65536(0xffffffffffff0000, float:NaN)
            r1 = r1 & r7
            if (r1 != 0) goto L38
            java.lang.Class<android.support.v4.app.Fragment> r1 = android.support.v4.app.Fragment.class
            java.lang.String r2 = "mIndex"
            java.lang.reflect.Field r1 = r1.getDeclaredField(r2)     // Catch: java.lang.Throwable -> L3
            boolean r2 = r1.isAccessible()     // Catch: java.lang.Throwable -> L3
            r3 = 1
            if (r2 != 0) goto L1e
            r1.setAccessible(r3)     // Catch: java.lang.Throwable -> L3
        L1e:
            java.lang.Object r5 = r1.get(r5)     // Catch: java.lang.Throwable -> L3
            if (r2 != 0) goto L27
            r1.setAccessible(r2)     // Catch: java.lang.Throwable -> L3
        L27:
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.Throwable -> L3
            int r5 = r5.intValue()     // Catch: java.lang.Throwable -> L3
            int r5 = r5 + r3
            int r5 = r5 << 16
            r0 = 65535(0xffff, float:9.1834E-41)
            r7 = r7 & r0
            int r0 = r5 + r7
            goto L3
        L37:
            return
        L38:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "Can only use lower 16 bits for requestCode"
            r5.<init>(r6)
            throw r5
    }
}
