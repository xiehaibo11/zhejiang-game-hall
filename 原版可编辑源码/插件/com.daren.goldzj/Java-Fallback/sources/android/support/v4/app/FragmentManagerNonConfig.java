package android.support.v4.app;

import android.arch.lifecycle.ViewModelStore;
import java.util.List;

public class FragmentManagerNonConfig {
    private final List<FragmentManagerNonConfig> mChildNonConfigs;
    private final List<Fragment> mFragments;
    private final List<ViewModelStore> mViewModelStores;

    FragmentManagerNonConfig(List<Fragment> r1, List<FragmentManagerNonConfig> r2, List<ViewModelStore> r3) {
        this.mFragments = r1;
        this.mChildNonConfigs = r2;
        this.mViewModelStores = r3;
    }

    List<Fragment> getFragments() {
        return this.mFragments;
    }

    List<FragmentManagerNonConfig> getChildNonConfigs() {
        return this.mChildNonConfigs;
    }

    List<ViewModelStore> getViewModelStores() {
        return this.mViewModelStores;
    }
}
