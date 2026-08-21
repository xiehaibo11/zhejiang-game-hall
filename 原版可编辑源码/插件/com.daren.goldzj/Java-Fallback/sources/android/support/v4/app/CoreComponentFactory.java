package android.support.v4.app;

import android.app.Activity;
import android.app.Application;
import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.ContentProvider;
import android.content.Intent;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;

@RequiresApi(api = 28)
@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class CoreComponentFactory extends android.app.AppComponentFactory {
    private static final String TAG = "CoreComponentFactory";

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public interface CompatWrapped {
        Object getWrapper();
    }

    public CoreComponentFactory() {
    }

    @Override
    public Activity instantiateActivity(ClassLoader r1, String r2, Intent r3) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (Activity) checkCompatWrapper(super.instantiateActivity(r1, r2, r3));
    }

    @Override
    public Application instantiateApplication(ClassLoader r1, String r2) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (Application) checkCompatWrapper(super.instantiateApplication(r1, r2));
    }

    @Override
    public BroadcastReceiver instantiateReceiver(ClassLoader r1, String r2, Intent r3) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (BroadcastReceiver) checkCompatWrapper(super.instantiateReceiver(r1, r2, r3));
    }

    @Override
    public ContentProvider instantiateProvider(ClassLoader r1, String r2) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (ContentProvider) checkCompatWrapper(super.instantiateProvider(r1, r2));
    }

    @Override
    public Service instantiateService(ClassLoader r1, String r2, Intent r3) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (Service) checkCompatWrapper(super.instantiateService(r1, r2, r3));
    }

    static <T> T checkCompatWrapper(T r1) {
        if ((r1 instanceof CompatWrapped) == false) goto L7;
        T r0 = (T) ((CompatWrapped) r1).getWrapper();
        if (r0 == null) goto L7;
        return r0;
    L7:
        return r1;
    }
}
