package com.bianfeng.splitscreenwindow.ui;

import android.app.Activity;
import com.bianfeng.splitscreenwindow.ShowType;
import com.bianfeng.splitscreenwindow.SplitScreenSdk;
import com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener;
import com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog;
import com.bianfeng.splitscreenwindow.ui.ViewWebGroup;
import com.bianfeng.utilslib.UtilsSdk;

/* JADX INFO: loaded from: classes.dex */
public class SplitScreenWindowManager {
    private Activity activity;
    private ShowType showType;
    private SplitScreenWindow splitScreenWindow;
    private ViewWebGroup webGroup;
    private volatile boolean isPause = false;
    private volatile boolean isResume = false;
    private volatile boolean isPaying = false;
    private volatile boolean isPlaying = false;
    private volatile boolean isShowing = false;
    private ViewWebGroup.ViewWebInterface webInterface = new ViewWebGroup.ViewWebInterface() { // from class: com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager.1
        @Override // com.bianfeng.splitscreenwindow.ui.ViewWebGroup.ViewWebInterface
        public void onRemove() {
            if (SplitScreenWindowManager.this.splitScreenWindow != null) {
                UtilsSdk.getLogger().e("测试关闭");
                SplitScreenWindowManager.this.closeWindow();
            }
        }

        @Override // com.bianfeng.splitscreenwindow.ui.ViewWebGroup.ViewWebInterface
        public void showQuanping(ShowType showType) {
            SplitScreenWindowManager.this.showType = showType;
            SplitScreenWindowManager.this.showQuanping();
        }

        @Override // com.bianfeng.splitscreenwindow.ui.ViewWebGroup.ViewWebInterface
        public void showFenping(ShowType showType) {
            SplitScreenWindowManager.this.showType = showType;
            SplitScreenWindowManager.this.showFenping();
        }

        @Override // com.bianfeng.splitscreenwindow.ui.ViewWebGroup.ViewWebInterface
        public void onPay(String str) {
            SplitScreenWindowManager.this.isPaying = true;
            SplitScreenSdk.getInstance().pay(str);
        }

        @Override // com.bianfeng.splitscreenwindow.ui.ViewWebGroup.ViewWebInterface
        public void showNotityDailog() {
            SplitScreenWindowManager.this.isPlaying = true;
            SplitScreenWindowManager.this.showDailog();
        }
    };
    private SoftKeyBoardListener.OnSoftKeyBoardChangeListener changeListener = new SoftKeyBoardListener.OnSoftKeyBoardChangeListener() { // from class: com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager.2
        @Override // com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener.OnSoftKeyBoardChangeListener
        public void keyBoardShow(int i) {
            if (SplitScreenWindowManager.this.isPause) {
                SplitScreenWindowManager.this.isPause = false;
            } else if (UtilsSdk.getConfiguration().isLand(SplitScreenWindowManager.this.activity)) {
                SplitScreenWindowManager.this.splitScreenWindow.updateViewY(i);
            }
        }

        @Override // com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener.OnSoftKeyBoardChangeListener
        public void keyBoardHide(int i) {
            if (!SplitScreenWindowManager.this.isPause && UtilsSdk.getConfiguration().isLand(SplitScreenWindowManager.this.activity)) {
                SplitScreenWindowManager.this.splitScreenWindow.updateViewY(0);
            }
        }
    };

    public void setPaying() {
        if (this.isShowing && this.isPaying) {
            this.isPaying = false;
            onPause();
        }
    }

    public void setShowType(ShowType showType) {
        this.showType = showType;
    }

    public SplitScreenWindowManager(Activity activity) {
        this.activity = activity;
        init(activity);
    }

    private void init(Activity activity) {
        if (this.splitScreenWindow == null) {
            this.splitScreenWindow = new SplitScreenWindow(activity);
            SoftKeyBoardListener.setListener(activity, this.changeListener);
        }
        if (this.webGroup == null) {
            ViewWebGroup viewWebGroup = new ViewWebGroup(activity);
            this.webGroup = viewWebGroup;
            viewWebGroup.setWebInterface(this.webInterface);
        }
    }

    public void remove() {
        SplitScreenWindow splitScreenWindow = this.splitScreenWindow;
        if (splitScreenWindow != null) {
            splitScreenWindow.remove();
            SoftKeyBoardListener.removeListener();
        }
    }

    public void closeWindow() {
        if (this.splitScreenWindow != null) {
            this.isShowing = false;
            this.splitScreenWindow.remove();
            this.splitScreenWindow = null;
            this.webGroup = null;
            SoftKeyBoardListener.removeListener();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showDailog() {
        try {
            new SplitScreenExitDialog.Builder(this.activity).create().show();
        } catch (Exception unused) {
        }
    }

    public void show(String str) {
        if (this.isShowing) {
            return;
        }
        UtilsSdk.getLogger().e("show  is " + this.isShowing);
        init(this.activity);
        this.isShowing = true;
        this.webGroup.show(str);
        show();
    }

    /* JADX INFO: renamed from: com.bianfeng.splitscreenwindow.ui.SplitScreenWindowManager$3, reason: invalid class name */
    static /* synthetic */ class AnonymousClass3 {
        static final /* synthetic */ int[] $SwitchMap$com$bianfeng$splitscreenwindow$ShowType;

        static {
            int[] iArr = new int[ShowType.values().length];
            $SwitchMap$com$bianfeng$splitscreenwindow$ShowType = iArr;
            try {
                iArr[ShowType.FENPING_LAND.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$bianfeng$splitscreenwindow$ShowType[ShowType.FENPING_PORTRAIT.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$bianfeng$splitscreenwindow$ShowType[ShowType.QUANPING_PORTRAIT.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                $SwitchMap$com$bianfeng$splitscreenwindow$ShowType[ShowType.QUANPING_LAND.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
        }
    }

    private void show() {
        int i = AnonymousClass3.$SwitchMap$com$bianfeng$splitscreenwindow$ShowType[this.showType.ordinal()];
        if (i == 1 || i == 2) {
            showFenping();
        } else if (i == 3 || i == 4) {
            showQuanping();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showQuanping() {
        if (this.splitScreenWindow != null) {
            this.webGroup.setIconViewVisibility();
            this.webGroup.setIconViewTag("分屏");
            this.splitScreenWindow.showQuanping(this.webGroup);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showFenping() {
        if (this.splitScreenWindow != null) {
            this.webGroup.setIconViewVisibility();
            this.webGroup.setIconViewTag("全屏");
            if (UtilsSdk.getConfiguration().isLand(this.activity)) {
                this.webGroup.setIconViewRotation(0.0f);
            } else {
                this.webGroup.setIconViewRotation(-90.0f);
            }
            this.splitScreenWindow.showFenping(this.webGroup);
        }
    }

    public void onResume(Activity activity) {
        this.activity = activity;
        if (this.isPaying) {
            return;
        }
        if (this.isPlaying) {
            this.isPlaying = false;
            return;
        }
        if (this.isPause) {
            if (this.isResume) {
                this.isResume = false;
                return;
            }
            this.isResume = true;
            UtilsSdk.getLogger().e("onResume---------");
            SoftKeyBoardListener.setListener(activity, this.changeListener);
            show();
        }
    }

    public void onPause() {
        if (this.isPaying || this.isPlaying) {
            return;
        }
        this.isPause = true;
        this.isResume = false;
        UtilsSdk.getLogger().e("onPause---------");
        remove();
    }

    public void onDestory() {
        if (this.isPaying) {
            return;
        }
        remove();
    }
}
