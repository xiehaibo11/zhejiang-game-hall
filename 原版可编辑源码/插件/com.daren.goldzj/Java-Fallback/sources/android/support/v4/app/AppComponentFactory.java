package android.support.v4.app;

import android.app.Activity;
import android.app.Application;
import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.ContentProvider;
import android.content.Intent;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;

@RequiresApi(28)
public class AppComponentFactory extends android.app.AppComponentFactory {
    public AppComponentFactory() {
    }

    @Override
    public final Activity instantiateActivity(ClassLoader r1, String r2, Intent r3) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (Activity) CoreComponentFactory.checkCompatWrapper(instantiateActivityCompat(r1, r2, r3));
    }

    @Override
    public final Application instantiateApplication(ClassLoader r1, String r2) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (Application) CoreComponentFactory.checkCompatWrapper(instantiateApplicationCompat(r1, r2));
    }

    @Override
    public final BroadcastReceiver instantiateReceiver(ClassLoader r1, String r2, Intent r3) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (BroadcastReceiver) CoreComponentFactory.checkCompatWrapper(instantiateReceiverCompat(r1, r2, r3));
    }

    @Override
    public final ContentProvider instantiateProvider(ClassLoader r1, String r2) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (ContentProvider) CoreComponentFactory.checkCompatWrapper(instantiateProviderCompat(r1, r2));
    }

    @Override
    public final Service instantiateService(ClassLoader r1, String r2, Intent r3) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (Service) CoreComponentFactory.checkCompatWrapper(instantiateServiceCompat(r1, r2, r3));
    }

    @NonNull
    public Application instantiateApplicationCompat(@NonNull ClassLoader r2, @NonNull String r3) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (Application) r2.loadClass(r3).getDeclaredConstructor(new Class[0]).newInstance(new Object[0]);
    L6:
        e = move-exception;
        throw new RuntimeException("Couldn't call constructor", e);
    }

    @NonNull
    public Activity instantiateActivityCompat(@NonNull ClassLoader r1, @NonNull String r2, @Nullable Intent r3) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (Activity) r1.loadClass(r2).getDeclaredConstructor(new Class[0]).newInstance(new Object[0]);
    L6:
        e = move-exception;
        throw new RuntimeException("Couldn't call constructor", e);
    }

    @NonNull
    public BroadcastReceiver instantiateReceiverCompat(@NonNull ClassLoader r1, @NonNull String r2, @Nullable Intent r3) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (BroadcastReceiver) r1.loadClass(r2).getDeclaredConstructor(new Class[0]).newInstance(new Object[0]);
    L6:
        e = move-exception;
        throw new RuntimeException("Couldn't call constructor", e);
    }

    @NonNull
    public Service instantiateServiceCompat(@NonNull ClassLoader r1, @NonNull String r2, @Nullable Intent r3) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (Service) r1.loadClass(r2).getDeclaredConstructor(new Class[0]).newInstance(new Object[0]);
    L6:
        e = move-exception;
        throw new RuntimeException("Couldn't call constructor", e);
    }

    @NonNull
    public ContentProvider instantiateProviderCompat(@NonNull ClassLoader r2, @NonNull String r3) throws InstantiationException, IllegalAccessException, ClassNotFoundException {
        return (ContentProvider) r2.loadClass(r3).getDeclaredConstructor(new Class[0]).newInstance(new Object[0]);
    L6:
        e = move-exception;
        throw new RuntimeException("Couldn't call constructor", e);
    }
}
