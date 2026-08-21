package com.sigmob.sdk.mraid;

public class o extends com.sigmob.sdk.base.views.e {
    private static final int a = 1;
    private com.sigmob.sdk.mraid.o.a b;
    private boolean c;

    public interface a {
        void a(boolean r1);
    }

    public o(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            int r2 = android.os.Build.VERSION.SDK_INT
            r0 = 22
            if (r2 > r0) goto L14
            int r2 = r1.getVisibility()
            if (r2 != 0) goto L11
            r2 = 1
            goto L12
        L11:
            r2 = 0
        L12:
            r1.c = r2
        L14:
            return
    }

    private void setMraidViewable(boolean r2) {
            r1 = this;
            boolean r0 = r1.c
            if (r0 != r2) goto L5
            return
        L5:
            r1.c = r2
            com.sigmob.sdk.mraid.o$a r0 = r1.b
            if (r0 == 0) goto Le
            r0.a(r2)
        Le:
            return
    }

    @Override
    public void destroy() {
            r1 = this;
            super.destroy()
            r0 = 0
            r1.b = r0
            return
    }

    public boolean h() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    @Override
    protected void onVisibilityChanged(android.view.View r1, int r2) {
            r0 = this;
            super.onVisibilityChanged(r1, r2)
            if (r2 != 0) goto L6
            goto La
        L6:
            r1 = 0
            r0.setMraidViewable(r1)
        La:
            return
    }

    public void setVisibilityChangedListener(com.sigmob.sdk.mraid.o.a r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
