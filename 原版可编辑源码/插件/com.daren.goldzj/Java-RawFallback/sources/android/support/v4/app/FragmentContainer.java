package android.support.v4.app;

public abstract class FragmentContainer {
    public FragmentContainer() {
            r0 = this;
            r0.<init>()
            return
    }

    public android.support.v4.app.Fragment instantiate(android.content.Context r1, java.lang.String r2, android.os.Bundle r3) {
            r0 = this;
            android.support.v4.app.Fragment r1 = android.support.v4.app.Fragment.instantiate(r1, r2, r3)
            return r1
    }

    @android.support.annotation.Nullable
    public abstract android.view.View onFindViewById(@android.support.annotation.IdRes int r1);

    public abstract boolean onHasView();
}
