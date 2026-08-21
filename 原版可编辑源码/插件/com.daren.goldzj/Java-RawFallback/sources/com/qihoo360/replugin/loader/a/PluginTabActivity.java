package com.qihoo360.replugin.loader.a;

public abstract class PluginTabActivity extends android.app.TabActivity {
    private library.e a;

    public PluginTabActivity() {
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
            java.lang.String r1 = "PluginTabActivity"
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
            boolean r0 = com.qihoo360.replugin.f.a(r1, r2, r3)
            if (r0 == 0) goto L7
            return
        L7:
            super.startActivityForResult(r2, r3)
            return
    }
}
