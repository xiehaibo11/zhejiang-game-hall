package android.arch.lifecycle;

public class ViewModelProvider {
    private static final java.lang.String DEFAULT_KEY = "android.arch.lifecycle.ViewModelProvider.DefaultKey";
    private final android.arch.lifecycle.ViewModelProvider.Factory mFactory;
    private final android.arch.lifecycle.ViewModelStore mViewModelStore;

    public static class AndroidViewModelFactory extends android.arch.lifecycle.ViewModelProvider.NewInstanceFactory {
        private static android.arch.lifecycle.ViewModelProvider.AndroidViewModelFactory sInstance;
        private android.app.Application mApplication;

        public AndroidViewModelFactory(@android.support.annotation.NonNull android.app.Application r1) {
                r0 = this;
                r0.<init>()
                r0.mApplication = r1
                return
        }

        @android.support.annotation.NonNull
        public static android.arch.lifecycle.ViewModelProvider.AndroidViewModelFactory getInstance(@android.support.annotation.NonNull android.app.Application r1) {
                android.arch.lifecycle.ViewModelProvider$AndroidViewModelFactory r0 = android.arch.lifecycle.ViewModelProvider.AndroidViewModelFactory.sInstance
                if (r0 != 0) goto Lb
                android.arch.lifecycle.ViewModelProvider$AndroidViewModelFactory r0 = new android.arch.lifecycle.ViewModelProvider$AndroidViewModelFactory
                r0.<init>(r1)
                android.arch.lifecycle.ViewModelProvider.AndroidViewModelFactory.sInstance = r0
            Lb:
                android.arch.lifecycle.ViewModelProvider$AndroidViewModelFactory r1 = android.arch.lifecycle.ViewModelProvider.AndroidViewModelFactory.sInstance
                return r1
        }

        @Override
        @android.support.annotation.NonNull
        public <T extends android.arch.lifecycle.ViewModel> T create(@android.support.annotation.NonNull java.lang.Class<T> r6) {
                r5 = this;
                java.lang.String r0 = "Cannot create an instance of "
                java.lang.Class<android.arch.lifecycle.AndroidViewModel> r1 = android.arch.lifecycle.AndroidViewModel.class
                boolean r1 = r1.isAssignableFrom(r6)
                if (r1 == 0) goto L7b
                r1 = 1
                java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L23 java.lang.InstantiationException -> L39 java.lang.IllegalAccessException -> L4f java.lang.NoSuchMethodException -> L65
                java.lang.Class<android.app.Application> r3 = android.app.Application.class
                r4 = 0
                r2[r4] = r3     // Catch: java.lang.reflect.InvocationTargetException -> L23 java.lang.InstantiationException -> L39 java.lang.IllegalAccessException -> L4f java.lang.NoSuchMethodException -> L65
                java.lang.reflect.Constructor r2 = r6.getConstructor(r2)     // Catch: java.lang.reflect.InvocationTargetException -> L23 java.lang.InstantiationException -> L39 java.lang.IllegalAccessException -> L4f java.lang.NoSuchMethodException -> L65
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L23 java.lang.InstantiationException -> L39 java.lang.IllegalAccessException -> L4f java.lang.NoSuchMethodException -> L65
                android.app.Application r3 = r5.mApplication     // Catch: java.lang.reflect.InvocationTargetException -> L23 java.lang.InstantiationException -> L39 java.lang.IllegalAccessException -> L4f java.lang.NoSuchMethodException -> L65
                r1[r4] = r3     // Catch: java.lang.reflect.InvocationTargetException -> L23 java.lang.InstantiationException -> L39 java.lang.IllegalAccessException -> L4f java.lang.NoSuchMethodException -> L65
                java.lang.Object r1 = r2.newInstance(r1)     // Catch: java.lang.reflect.InvocationTargetException -> L23 java.lang.InstantiationException -> L39 java.lang.IllegalAccessException -> L4f java.lang.NoSuchMethodException -> L65
                android.arch.lifecycle.ViewModel r1 = (android.arch.lifecycle.ViewModel) r1     // Catch: java.lang.reflect.InvocationTargetException -> L23 java.lang.InstantiationException -> L39 java.lang.IllegalAccessException -> L4f java.lang.NoSuchMethodException -> L65
                return r1
            L23:
                r1 = move-exception
                java.lang.RuntimeException r2 = new java.lang.RuntimeException
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r0)
                r3.append(r6)
                java.lang.String r6 = r3.toString()
                r2.<init>(r6, r1)
                throw r2
            L39:
                r1 = move-exception
                java.lang.RuntimeException r2 = new java.lang.RuntimeException
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r0)
                r3.append(r6)
                java.lang.String r6 = r3.toString()
                r2.<init>(r6, r1)
                throw r2
            L4f:
                r1 = move-exception
                java.lang.RuntimeException r2 = new java.lang.RuntimeException
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r0)
                r3.append(r6)
                java.lang.String r6 = r3.toString()
                r2.<init>(r6, r1)
                throw r2
            L65:
                r1 = move-exception
                java.lang.RuntimeException r2 = new java.lang.RuntimeException
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r0)
                r3.append(r6)
                java.lang.String r6 = r3.toString()
                r2.<init>(r6, r1)
                throw r2
            L7b:
                android.arch.lifecycle.ViewModel r6 = super.create(r6)
                return r6
        }
    }

    public interface Factory {
        @android.support.annotation.NonNull
        <T extends android.arch.lifecycle.ViewModel> T create(@android.support.annotation.NonNull java.lang.Class<T> r1);
    }

    public static class NewInstanceFactory implements android.arch.lifecycle.ViewModelProvider.Factory {
        public NewInstanceFactory() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        @android.support.annotation.NonNull
        public <T extends android.arch.lifecycle.ViewModel> T create(@android.support.annotation.NonNull java.lang.Class<T> r5) {
                r4 = this;
                java.lang.String r0 = "Cannot create an instance of "
                java.lang.Object r1 = r5.newInstance()     // Catch: java.lang.IllegalAccessException -> L9 java.lang.InstantiationException -> L1f
                android.arch.lifecycle.ViewModel r1 = (android.arch.lifecycle.ViewModel) r1     // Catch: java.lang.IllegalAccessException -> L9 java.lang.InstantiationException -> L1f
                return r1
            L9:
                r1 = move-exception
                java.lang.RuntimeException r2 = new java.lang.RuntimeException
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r0)
                r3.append(r5)
                java.lang.String r5 = r3.toString()
                r2.<init>(r5, r1)
                throw r2
            L1f:
                r1 = move-exception
                java.lang.RuntimeException r2 = new java.lang.RuntimeException
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r0)
                r3.append(r5)
                java.lang.String r5 = r3.toString()
                r2.<init>(r5, r1)
                throw r2
        }
    }

    public ViewModelProvider(@android.support.annotation.NonNull android.arch.lifecycle.ViewModelStore r1, @android.support.annotation.NonNull android.arch.lifecycle.ViewModelProvider.Factory r2) {
            r0 = this;
            r0.<init>()
            r0.mFactory = r2
            r0.mViewModelStore = r1
            return
    }

    public ViewModelProvider(@android.support.annotation.NonNull android.arch.lifecycle.ViewModelStoreOwner r1, @android.support.annotation.NonNull android.arch.lifecycle.ViewModelProvider.Factory r2) {
            r0 = this;
            android.arch.lifecycle.ViewModelStore r1 = r1.getViewModelStore()
            r0.<init>(r1, r2)
            return
    }

    @android.support.annotation.NonNull
    @android.support.annotation.MainThread
    public <T extends android.arch.lifecycle.ViewModel> T get(@android.support.annotation.NonNull java.lang.Class<T> r4) {
            r3 = this;
            java.lang.String r0 = r4.getCanonicalName()
            if (r0 == 0) goto L1c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "android.arch.lifecycle.ViewModelProvider.DefaultKey:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            android.arch.lifecycle.ViewModel r4 = r3.get(r0, r4)
            return r4
        L1c:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Local and anonymous classes can not be ViewModels"
            r4.<init>(r0)
            throw r4
    }

    @android.support.annotation.NonNull
    @android.support.annotation.MainThread
    public <T extends android.arch.lifecycle.ViewModel> T get(@android.support.annotation.NonNull java.lang.String r3, @android.support.annotation.NonNull java.lang.Class<T> r4) {
            r2 = this;
            android.arch.lifecycle.ViewModelStore r0 = r2.mViewModelStore
            android.arch.lifecycle.ViewModel r0 = r0.get(r3)
            boolean r1 = r4.isInstance(r0)
            if (r1 == 0) goto Ld
            return r0
        Ld:
            android.arch.lifecycle.ViewModelProvider$Factory r0 = r2.mFactory
            android.arch.lifecycle.ViewModel r4 = r0.create(r4)
            android.arch.lifecycle.ViewModelStore r0 = r2.mViewModelStore
            r0.put(r3, r4)
            return r4
    }
}
