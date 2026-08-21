package android.support.v4.app;

public class FragmentManagerNonConfig {
    private final java.util.List<android.support.v4.app.FragmentManagerNonConfig> mChildNonConfigs;
    private final java.util.List<android.support.v4.app.Fragment> mFragments;
    private final java.util.List<android.arch.lifecycle.ViewModelStore> mViewModelStores;

    FragmentManagerNonConfig(java.util.List<android.support.v4.app.Fragment> r1, java.util.List<android.support.v4.app.FragmentManagerNonConfig> r2, java.util.List<android.arch.lifecycle.ViewModelStore> r3) {
            r0 = this;
            r0.<init>()
            r0.mFragments = r1
            r0.mChildNonConfigs = r2
            r0.mViewModelStores = r3
            return
    }

    java.util.List<android.support.v4.app.FragmentManagerNonConfig> getChildNonConfigs() {
            r1 = this;
            java.util.List<android.support.v4.app.FragmentManagerNonConfig> r0 = r1.mChildNonConfigs
            return r0
    }

    java.util.List<android.support.v4.app.Fragment> getFragments() {
            r1 = this;
            java.util.List<android.support.v4.app.Fragment> r0 = r1.mFragments
            return r0
    }

    java.util.List<android.arch.lifecycle.ViewModelStore> getViewModelStores() {
            r1 = this;
            java.util.List<android.arch.lifecycle.ViewModelStore> r0 = r1.mViewModelStores
            return r0
    }
}
