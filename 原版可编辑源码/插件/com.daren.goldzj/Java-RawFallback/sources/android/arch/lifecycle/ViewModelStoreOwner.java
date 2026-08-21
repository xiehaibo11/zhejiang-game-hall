package android.arch.lifecycle;

public interface ViewModelStoreOwner {
    @android.support.annotation.NonNull
    android.arch.lifecycle.ViewModelStore getViewModelStore();
}
