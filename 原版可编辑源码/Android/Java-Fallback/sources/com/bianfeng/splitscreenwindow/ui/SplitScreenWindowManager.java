package com.bianfeng.splitscreenwindow.ui;

public class SplitScreenWindowManager {
    private android.app.Activity activity;
    private com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener.OnSoftKeyBoardChangeListener changeListener;
    private volatile boolean isPause;
    private volatile boolean isPaying;
    private volatile boolean isPlaying;
    private volatile boolean isResume;
    private volatile boolean isShowing;
    private com.bianfeng.splitscreenwindow.ShowType showType;
    private com.bianfeng.splitscreenwindow.ui.SplitScreenWindow splitScreenWindow;
    private com.bianfeng.splitscreenwindow.ui.ViewWebGroup webGroup;
    private com.bianfeng.splitscreenwindow.ui.ViewWebGroup.ViewWebInterface webInterface;



    static class 3 {
        static final int[] $SwitchMap$com$bianfeng$splitscreenwindow$ShowType = null;

        static {
                com.bianfeng.splitscreenwindow.ShowType[] r0 = com.bianfeng.splitscreenwindow.ShowType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager.3.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType = r0
                com.bianfeng.splitscreenwindow.ShowType r1 = com.bianfeng.splitscreenwindow.ShowType.FENPING_LAND     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager.3.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType     // Catch: java.lang.NoSuchFieldError -> L1d
                com.bianfeng.splitscreenwindow.ShowType r1 = com.bianfeng.splitscreenwindow.ShowType.FENPING_PORTRAIT     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager.3.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType     // Catch: java.lang.NoSuchFieldError -> L28
                com.bianfeng.splitscreenwindow.ShowType r1 = com.bianfeng.splitscreenwindow.ShowType.QUANPING_PORTRAIT     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager.3.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType     // Catch: java.lang.NoSuchFieldError -> L33
                com.bianfeng.splitscreenwindow.ShowType r1 = com.bianfeng.splitscreenwindow.ShowType.QUANPING_LAND     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                return
        }
    }

    public SplitScreenWindowManager(android.app.Activity r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isPause = r0
            r1.isResume = r0
            r1.isPaying = r0
            r1.isPlaying = r0
            r1.isShowing = r0
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager$1 r0 = new com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager$1
            r0.<init>(r1)
            r1.webInterface = r0
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager$2 r0 = new com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager$2
            r0.<init>(r1)
            r1.changeListener = r0
            r1.activity = r2
            r1.init(r2)
            return
    }

    static com.bianfeng.splitscreenwindow.ui.SplitScreenWindow access$000(com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0) {
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindow r0 = r0.splitScreenWindow
            return r0
    }

    static com.bianfeng.splitscreenwindow.ShowType access$102(com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0, com.bianfeng.splitscreenwindow.ShowType r1) {
            r0.showType = r1
            return r1
    }

    static void access$200(com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0) {
            r0.showQuanping()
            return
    }

    static void access$300(com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0) {
            r0.showFenping()
            return
    }

    static boolean access$402(com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0, boolean r1) {
            r0.isPaying = r1
            return r1
    }

    static boolean access$502(com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0, boolean r1) {
            r0.isPlaying = r1
            return r1
    }

    static void access$600(com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0) {
            r0.showDailog()
            return
    }

    static boolean access$700(com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0) {
            boolean r0 = r0.isPause
            return r0
    }

    static boolean access$702(com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0, boolean r1) {
            r0.isPause = r1
            return r1
    }

    static android.app.Activity access$800(com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager r0) {
            android.app.Activity r0 = r0.activity
            return r0
    }

    private void init(android.app.Activity r2) {
            r1 = this;
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindow r0 = r1.splitScreenWindow
            if (r0 != 0) goto L10
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindow r0 = new com.bianfeng.splitscreenwindow.ui.SplitScreenWindow
            r0.<init>(r2)
            r1.splitScreenWindow = r0
            com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener$OnSoftKeyBoardChangeListener r0 = r1.changeListener
            com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener.setListener(r2, r0)
        L10:
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0 = r1.webGroup
            if (r0 != 0) goto L20
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0 = new com.bianfeng.splitscreenwindow.ui.ViewWebGroup
            r0.<init>(r2)
            r1.webGroup = r0
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup$ViewWebInterface r2 = r1.webInterface
            r0.setWebInterface(r2)
        L20:
            return
    }

    private void show() {
            r2 = this;
            int[] r0 = com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager.3.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType
            com.bianfeng.splitscreenwindow.ShowType r1 = r2.showType
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L1b
            r1 = 2
            if (r0 == r1) goto L1b
            r1 = 3
            if (r0 == r1) goto L17
            r1 = 4
            if (r0 == r1) goto L17
            goto L1e
        L17:
            r2.showQuanping()
            goto L1e
        L1b:
            r2.showFenping()
        L1e:
            return
    }

    private void showDailog() {
            r2 = this;
            com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog$Builder r0 = new com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog$Builder     // Catch: java.lang.Exception -> Le
            android.app.Activity r1 = r2.activity     // Catch: java.lang.Exception -> Le
            r0.<init>(r1)     // Catch: java.lang.Exception -> Le
            com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog r0 = r0.create()     // Catch: java.lang.Exception -> Le
            r0.show()     // Catch: java.lang.Exception -> Le
        Le:
            return
    }

    private void showFenping() {
            r2 = this;
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindow r0 = r2.splitScreenWindow
            if (r0 == 0) goto L31
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0 = r2.webGroup
            r0.setIconViewVisibility()
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0 = r2.webGroup
            java.lang.String r1 = "全屏"
            r0.setIconViewTag(r1)
            com.bianfeng.utilslib.ConfigurationUtils r0 = com.bianfeng.utilslib.UtilsSdk.getConfiguration()
            android.app.Activity r1 = r2.activity
            boolean r0 = r0.isLand(r1)
            if (r0 == 0) goto L23
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0 = r2.webGroup
            r1 = 0
            r0.setIconViewRotation(r1)
            goto L2a
        L23:
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0 = r2.webGroup
            r1 = -1028390912(0xffffffffc2b40000, float:-90.0)
            r0.setIconViewRotation(r1)
        L2a:
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindow r0 = r2.splitScreenWindow
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r1 = r2.webGroup
            r0.showFenping(r1)
        L31:
            return
    }

    private void showQuanping() {
            r2 = this;
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindow r0 = r2.splitScreenWindow
            if (r0 == 0) goto L17
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0 = r2.webGroup
            r0.setIconViewVisibility()
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0 = r2.webGroup
            java.lang.String r1 = "分屏"
            r0.setIconViewTag(r1)
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindow r0 = r2.splitScreenWindow
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r1 = r2.webGroup
            r0.showQuanping(r1)
        L17:
            return
    }

    public void closeWindow() {
            r1 = this;
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindow r0 = r1.splitScreenWindow
            if (r0 == 0) goto L14
            r0 = 0
            r1.isShowing = r0
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindow r0 = r1.splitScreenWindow
            r0.remove()
            r0 = 0
            r1.splitScreenWindow = r0
            r1.webGroup = r0
            com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener.removeListener()
        L14:
            return
    }

    public void onDestory() {
            r1 = this;
            boolean r0 = r1.isPaying
            if (r0 == 0) goto L5
            return
        L5:
            r1.remove()
            return
    }

    public void onPause() {
            r2 = this;
            boolean r0 = r2.isPaying
            if (r0 == 0) goto L5
            return
        L5:
            boolean r0 = r2.isPlaying
            if (r0 == 0) goto La
            return
        La:
            r0 = 1
            r2.isPause = r0
            r0 = 0
            r2.isResume = r0
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r1 = "onPause---------"
            r0.e(r1)
            r2.remove()
            return
    }

    public void onResume(android.app.Activity r3) {
            r2 = this;
            r2.activity = r3
            boolean r0 = r2.isPaying
            if (r0 == 0) goto L7
            return
        L7:
            boolean r0 = r2.isPlaying
            r1 = 0
            if (r0 == 0) goto Lf
            r2.isPlaying = r1
            return
        Lf:
            boolean r0 = r2.isPause
            if (r0 != 0) goto L14
            return
        L14:
            boolean r0 = r2.isResume
            if (r0 == 0) goto L1b
            r2.isResume = r1
            return
        L1b:
            r0 = 1
            r2.isResume = r0
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r1 = "onResume---------"
            r0.e(r1)
            com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener$OnSoftKeyBoardChangeListener r0 = r2.changeListener
            com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener.setListener(r3, r0)
            r2.show()
            return
    }

    public void remove() {
            r1 = this;
            com.bianfeng.splitscreenwindow.ui.SplitScreenWindow r0 = r1.splitScreenWindow
            if (r0 == 0) goto La
            r0.remove()
            com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener.removeListener()
        La:
            return
    }

    public void setPaying() {
            r1 = this;
            boolean r0 = r1.isShowing
            if (r0 == 0) goto Le
            boolean r0 = r1.isPaying
            if (r0 == 0) goto Le
            r0 = 0
            r1.isPaying = r0
            r1.onPause()
        Le:
            return
    }

    public void setShowType(com.bianfeng.splitscreenwindow.ShowType r1) {
            r0 = this;
            r0.showType = r1
            return
    }

    public void show(java.lang.String r4) {
            r3 = this;
            boolean r0 = r3.isShowing
            if (r0 != 0) goto L2e
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "show  is "
            r1.append(r2)
            boolean r2 = r3.isShowing
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.e(r1)
            android.app.Activity r0 = r3.activity
            r3.init(r0)
            r0 = 1
            r3.isShowing = r0
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0 = r3.webGroup
            r0.show(r4)
            r3.show()
        L2e:
            return
    }
}
