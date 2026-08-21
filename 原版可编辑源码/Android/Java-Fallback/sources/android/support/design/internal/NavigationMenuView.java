package android.support.design.internal;

public class NavigationMenuView extends android.support.v7.widget.RecyclerView implements android.support.v7.view.menu.MenuView {
    public NavigationMenuView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public NavigationMenuView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public NavigationMenuView(android.content.Context r2, android.util.AttributeSet r3, int r4) {
            r1 = this;
            r1.<init>(r2, r3, r4)
            android.support.v7.widget.LinearLayoutManager r3 = new android.support.v7.widget.LinearLayoutManager
            r4 = 1
            r0 = 0
            r3.<init>(r2, r4, r0)
            r1.setLayoutManager(r3)
            return
    }

    @Override
    public int getWindowAnimations() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void initialize(android.support.v7.view.menu.MenuBuilder r1) {
            r0 = this;
            return
    }
}
