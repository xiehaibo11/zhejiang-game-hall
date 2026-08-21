package android.arch.lifecycle;

import android.app.Application;
import android.support.annotation.MainThread;
import android.support.annotation.NonNull;

public class ViewModelProvider {
    private static final String DEFAULT_KEY = "android.arch.lifecycle.ViewModelProvider.DefaultKey";
    private final Factory mFactory;
    private final ViewModelStore mViewModelStore;

    public static class AndroidViewModelFactory extends NewInstanceFactory {
        private static AndroidViewModelFactory sInstance;
        private Application mApplication;

        @NonNull
        public static AndroidViewModelFactory getInstance(@NonNull Application r1) {
            if (sInstance != null) goto L6;
            sInstance = new AndroidViewModelFactory(r1);
        L6:
            return sInstance;
        }

        public AndroidViewModelFactory(@NonNull Application r1) {
            this.mApplication = r1;
        }

        @Override
        @NonNull
        public <T extends ViewModel> T create(@NonNull Class<T> r6) {
            if (AndroidViewModel.class.isAssignableFrom(r6) == false) goto L20;
            return r6.getConstructor(new Class[]{Application.class}).newInstance(new Object[]{this.mApplication});
        L13:
            e = move-exception;
            throw new RuntimeException("Cannot create an instance of " + r6, e);
        L10:
            e = move-exception;
            throw new RuntimeException("Cannot create an instance of " + r6, e);
        L16:
            e = move-exception;
            throw new RuntimeException("Cannot create an instance of " + r6, e);
        L7:
            e = move-exception;
            throw new RuntimeException("Cannot create an instance of " + r6, e);
        L20:
            return (T) super.create(r6);
        }
    }

    public interface Factory {
        @NonNull
        <T extends ViewModel> T create(@NonNull Class<T> r1);
    }

    public static class NewInstanceFactory implements Factory {
        public NewInstanceFactory() {
        }

        @Override
        @NonNull
        public <T extends ViewModel> T create(@NonNull Class<T> r5) {
            return r5.newInstance();
        L5:
            e = move-exception;
            throw new RuntimeException("Cannot create an instance of " + r5, e);
        L8:
            e = move-exception;
            throw new RuntimeException("Cannot create an instance of " + r5, e);
        }
    }

    public ViewModelProvider(@NonNull ViewModelStoreOwner r1, @NonNull Factory r2) {
        this(r1.getViewModelStore(), r2);
    }

    public ViewModelProvider(@NonNull ViewModelStore r1, @NonNull Factory r2) {
        this.mFactory = r2;
        this.mViewModelStore = r1;
    }

    @NonNull
    @MainThread
    public <T extends ViewModel> T get(@NonNull Class<T> r4) {
        String r0 = r4.getCanonicalName();
        if (r0 == null) goto L7;
        return (T) get("android.arch.lifecycle.ViewModelProvider.DefaultKey:" + r0, r4);
    L7:
        throw new IllegalArgumentException("Local and anonymous classes can not be ViewModels");
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @NonNull
    @MainThread
    public <T extends ViewModel> T get(@NonNull String r3, @NonNull Class<T> r4) {
        T r0 = (T) this.mViewModelStore.get(r3);
        if (r4.isInstance(r0) == false) goto L5;
        return r0;
    L5:
        T r42 = (T) this.mFactory.create(r4);
        this.mViewModelStore.put(r3, r42);
        return r42;
    }
}
