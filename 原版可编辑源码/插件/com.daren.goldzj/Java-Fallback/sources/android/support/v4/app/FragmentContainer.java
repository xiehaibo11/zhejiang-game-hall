package android.support.v4.app;

import android.content.Context;
import android.os.Bundle;
import android.support.annotation.IdRes;
import android.support.annotation.Nullable;
import android.view.View;

public abstract class FragmentContainer {
    @Nullable
    public abstract View onFindViewById(@IdRes int r1);

    public abstract boolean onHasView();

    public FragmentContainer() {
    }

    public Fragment instantiate(Context r1, String r2, Bundle r3) {
        return Fragment.instantiate(r1, r2, r3);
    }
}
