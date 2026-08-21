package android.support.multidex;

public class MultiDexApplication extends android.app.Application {
    public MultiDexApplication() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void attachBaseContext(android.content.Context r1) {
            r0 = this;
            super.attachBaseContext(r1)
            android.support.multidex.MultiDex.install(r0)
            return
    }
}
