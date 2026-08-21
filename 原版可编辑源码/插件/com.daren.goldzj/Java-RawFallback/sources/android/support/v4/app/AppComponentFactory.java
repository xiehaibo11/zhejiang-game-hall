package android.support.v4.app;

@android.support.annotation.RequiresApi(28)
public class AppComponentFactory extends android.app.AppComponentFactory {
    public AppComponentFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final android.app.Activity instantiateActivity(java.lang.ClassLoader r1, java.lang.String r2, android.content.Intent r3) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r0 = this;
            android.app.Activity r1 = r0.instantiateActivityCompat(r1, r2, r3)
            java.lang.Object r1 = android.support.v4.app.CoreComponentFactory.checkCompatWrapper(r1)
            android.app.Activity r1 = (android.app.Activity) r1
            return r1
    }

    @android.support.annotation.NonNull
    public android.app.Activity instantiateActivityCompat(@android.support.annotation.NonNull java.lang.ClassLoader r1, @android.support.annotation.NonNull java.lang.String r2, @android.support.annotation.Nullable android.content.Intent r3) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r0 = this;
            java.lang.Class r1 = r1.loadClass(r2)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.reflect.Constructor r1 = r1.getDeclaredConstructor(r3)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.Object r1 = r1.newInstance(r2)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            android.app.Activity r1 = (android.app.Activity) r1     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            return r1
        L14:
            r1 = move-exception
            goto L17
        L16:
            r1 = move-exception
        L17:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r3 = "Couldn't call constructor"
            r2.<init>(r3, r1)
            throw r2
    }

    @Override
    public final android.app.Application instantiateApplication(java.lang.ClassLoader r1, java.lang.String r2) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r0 = this;
            android.app.Application r1 = r0.instantiateApplicationCompat(r1, r2)
            java.lang.Object r1 = android.support.v4.app.CoreComponentFactory.checkCompatWrapper(r1)
            android.app.Application r1 = (android.app.Application) r1
            return r1
    }

    @android.support.annotation.NonNull
    public android.app.Application instantiateApplicationCompat(@android.support.annotation.NonNull java.lang.ClassLoader r2, @android.support.annotation.NonNull java.lang.String r3) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r1 = this;
            java.lang.Class r2 = r2.loadClass(r3)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            r3 = 0
            java.lang.Class[] r0 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.reflect.Constructor r2 = r2.getDeclaredConstructor(r0)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.Object r2 = r2.newInstance(r3)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            android.app.Application r2 = (android.app.Application) r2     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            return r2
        L14:
            r2 = move-exception
            goto L17
        L16:
            r2 = move-exception
        L17:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.String r0 = "Couldn't call constructor"
            r3.<init>(r0, r2)
            throw r3
    }

    @Override
    public final android.content.ContentProvider instantiateProvider(java.lang.ClassLoader r1, java.lang.String r2) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r0 = this;
            android.content.ContentProvider r1 = r0.instantiateProviderCompat(r1, r2)
            java.lang.Object r1 = android.support.v4.app.CoreComponentFactory.checkCompatWrapper(r1)
            android.content.ContentProvider r1 = (android.content.ContentProvider) r1
            return r1
    }

    @android.support.annotation.NonNull
    public android.content.ContentProvider instantiateProviderCompat(@android.support.annotation.NonNull java.lang.ClassLoader r2, @android.support.annotation.NonNull java.lang.String r3) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r1 = this;
            java.lang.Class r2 = r2.loadClass(r3)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            r3 = 0
            java.lang.Class[] r0 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.reflect.Constructor r2 = r2.getDeclaredConstructor(r0)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.Object r2 = r2.newInstance(r3)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            android.content.ContentProvider r2 = (android.content.ContentProvider) r2     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            return r2
        L14:
            r2 = move-exception
            goto L17
        L16:
            r2 = move-exception
        L17:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.String r0 = "Couldn't call constructor"
            r3.<init>(r0, r2)
            throw r3
    }

    @Override
    public final android.content.BroadcastReceiver instantiateReceiver(java.lang.ClassLoader r1, java.lang.String r2, android.content.Intent r3) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r0 = this;
            android.content.BroadcastReceiver r1 = r0.instantiateReceiverCompat(r1, r2, r3)
            java.lang.Object r1 = android.support.v4.app.CoreComponentFactory.checkCompatWrapper(r1)
            android.content.BroadcastReceiver r1 = (android.content.BroadcastReceiver) r1
            return r1
    }

    @android.support.annotation.NonNull
    public android.content.BroadcastReceiver instantiateReceiverCompat(@android.support.annotation.NonNull java.lang.ClassLoader r1, @android.support.annotation.NonNull java.lang.String r2, @android.support.annotation.Nullable android.content.Intent r3) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r0 = this;
            java.lang.Class r1 = r1.loadClass(r2)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.reflect.Constructor r1 = r1.getDeclaredConstructor(r3)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.Object r1 = r1.newInstance(r2)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            android.content.BroadcastReceiver r1 = (android.content.BroadcastReceiver) r1     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            return r1
        L14:
            r1 = move-exception
            goto L17
        L16:
            r1 = move-exception
        L17:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r3 = "Couldn't call constructor"
            r2.<init>(r3, r1)
            throw r2
    }

    @Override
    public final android.app.Service instantiateService(java.lang.ClassLoader r1, java.lang.String r2, android.content.Intent r3) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r0 = this;
            android.app.Service r1 = r0.instantiateServiceCompat(r1, r2, r3)
            java.lang.Object r1 = android.support.v4.app.CoreComponentFactory.checkCompatWrapper(r1)
            android.app.Service r1 = (android.app.Service) r1
            return r1
    }

    @android.support.annotation.NonNull
    public android.app.Service instantiateServiceCompat(@android.support.annotation.NonNull java.lang.ClassLoader r1, @android.support.annotation.NonNull java.lang.String r2, @android.support.annotation.Nullable android.content.Intent r3) throws java.lang.InstantiationException, java.lang.IllegalAccessException, java.lang.ClassNotFoundException {
            r0 = this;
            java.lang.Class r1 = r1.loadClass(r2)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.reflect.Constructor r1 = r1.getDeclaredConstructor(r3)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            java.lang.Object r1 = r1.newInstance(r2)     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            android.app.Service r1 = (android.app.Service) r1     // Catch: java.lang.NoSuchMethodException -> L14 java.lang.reflect.InvocationTargetException -> L16
            return r1
        L14:
            r1 = move-exception
            goto L17
        L16:
            r1 = move-exception
        L17:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r3 = "Couldn't call constructor"
            r2.<init>(r3, r1)
            throw r2
    }
}
