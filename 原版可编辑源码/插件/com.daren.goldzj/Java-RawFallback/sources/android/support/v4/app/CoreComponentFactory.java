package android.support.v4.app;

@android.support.annotation.RequiresApi(api = 28)
@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class CoreComponentFactory extends android.app.AppComponentFactory {
    private static final java.lang.String TAG = "CoreComponentFactory";

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public interface CompatWrapped {
        java.lang.Object getWrapper();
    }

    public CoreComponentFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    static <T> T checkCompatWrapper(T r1) {
            boolean r0 = r1 instanceof android.support.v4.app.CoreComponentFactory.CompatWrapped
            if (r0 == 0) goto Le
            r0 = r1
            android.support.v4.app.CoreComponentFactory$CompatWrapped r0 = (android.support.v4.app.CoreComponentFactory.CompatWrapped) r0
            java.lang.Object r0 = r0.getWrapper()
            if (r0 == 0) goto Le
            return r0
        Le:
            return r1
    }

    @Override
    public android.app.Activity instantiateActivity(java.lang.ClassLoader r1, java.lang.String r2, android.content.Intent r3) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r0 = this;
            android.app.Activity r1 = super.instantiateActivity(r1, r2, r3)
            java.lang.Object r1 = checkCompatWrapper(r1)
            android.app.Activity r1 = (android.app.Activity) r1
            return r1
    }

    @Override
    public android.app.Application instantiateApplication(java.lang.ClassLoader r1, java.lang.String r2) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r0 = this;
            android.app.Application r1 = super.instantiateApplication(r1, r2)
            java.lang.Object r1 = checkCompatWrapper(r1)
            android.app.Application r1 = (android.app.Application) r1
            return r1
    }

    @Override
    public android.content.ContentProvider instantiateProvider(java.lang.ClassLoader r1, java.lang.String r2) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r0 = this;
            android.content.ContentProvider r1 = super.instantiateProvider(r1, r2)
            java.lang.Object r1 = checkCompatWrapper(r1)
            android.content.ContentProvider r1 = (android.content.ContentProvider) r1
            return r1
    }

    @Override
    public android.content.BroadcastReceiver instantiateReceiver(java.lang.ClassLoader r1, java.lang.String r2, android.content.Intent r3) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r0 = this;
            android.content.BroadcastReceiver r1 = super.instantiateReceiver(r1, r2, r3)
            java.lang.Object r1 = checkCompatWrapper(r1)
            android.content.BroadcastReceiver r1 = (android.content.BroadcastReceiver) r1
            return r1
    }

    @Override
    public android.app.Service instantiateService(java.lang.ClassLoader r1, java.lang.String r2, android.content.Intent r3) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r0 = this;
            android.app.Service r1 = super.instantiateService(r1, r2, r3)
            java.lang.Object r1 = checkCompatWrapper(r1)
            android.app.Service r1 = (android.app.Service) r1
            return r1
    }
}
