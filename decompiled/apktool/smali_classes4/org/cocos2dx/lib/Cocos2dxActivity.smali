.class public abstract Lorg/cocos2dx/lib/Cocos2dxActivity;
.super Landroid/app/Activity;
.source "Cocos2dxActivity.java"

# interfaces
.implements Lorg/cocos2dx/lib/Cocos2dxHelper$Cocos2dxHelperListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/cocos2dx/lib/Cocos2dxActivity$SystemProperties;,
        Lorg/cocos2dx/lib/Cocos2dxActivity$Cocos2dxEGLConfigChooser;
    }
.end annotation


# static fields
.field public static final DISPLAY_NOTCH_STATUS:Ljava/lang/String; = "display_notch_status"

.field private static final FILE_CHOOSER_RESULT_CODE:I = 0x2710

.field public static final FLAG_NOTCH_SUPPORT:I = 0x10000

.field public static final NOTCH_IN_SCREEN_VOIO:I = 0x20

.field private static final TAG:Ljava/lang/String; = "Cocos2dxActivity"

.field private static sContext:Lorg/cocos2dx/lib/Cocos2dxActivity;


# instance fields
.field private gainAudioFocus:Z

.field public getImgUrl:Ljava/lang/String;

.field private hasFocus:Z

.field private mEditBoxHelper:Lorg/cocos2dx/lib/Cocos2dxEditBoxHelper;

.field protected mFrameLayout:Lorg/cocos2dx/lib/ResizeLayout;

.field private mGLContextAttrs:[I

.field private mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

.field private mHandler:Lorg/cocos2dx/lib/Cocos2dxHandler;

.field private mIsNotchSwitchOpen:I

.field private mVideoHelper:Lorg/cocos2dx/lib/Cocos2dxVideoHelper;

.field private mWebViewHelper:Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;

.field private paused:Z

.field private showVirtualButton:Z

.field public uploadMessage:Landroid/webkit/ValueCallback;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/webkit/ValueCallback<",
            "Landroid/net/Uri;",
            ">;"
        }
    .end annotation
.end field

.field public uploadMessageAboveL:Landroid/webkit/ValueCallback;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/webkit/ValueCallback<",
            "[",
            "Landroid/net/Uri;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 71
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/4 v0, 0x0

    .line 82
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    .line 83
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLContextAttrs:[I

    .line 84
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHandler:Lorg/cocos2dx/lib/Cocos2dxHandler;

    .line 86
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mVideoHelper:Lorg/cocos2dx/lib/Cocos2dxVideoHelper;

    .line 87
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mWebViewHelper:Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;

    .line 88
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mEditBoxHelper:Lorg/cocos2dx/lib/Cocos2dxEditBoxHelper;

    const/4 v1, 0x0

    .line 89
    iput-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->hasFocus:Z

    .line 90
    iput-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->showVirtualButton:Z

    .line 91
    iput-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->gainAudioFocus:Z

    const/4 v1, 0x1

    .line 92
    iput-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->paused:Z

    .line 98
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->getImgUrl:Ljava/lang/String;

    .line 335
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Lorg/cocos2dx/lib/ResizeLayout;

    const/4 v0, -0x1

    .line 552
    iput v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mIsNotchSwitchOpen:I

    return-void
.end method

.method static synthetic access$000(Lorg/cocos2dx/lib/Cocos2dxActivity;)Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;
    .locals 0

    .line 71
    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    return-object p0
.end method

.method static synthetic access$100()Ljava/lang/String;
    .locals 1

    .line 71
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    return-object v0
.end method

.method private changeNotchState()V
    .locals 5
    .annotation build Landroid/annotation/TargetApi;
        value = 0x15
    .end annotation

    .line 556
    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v1, "HUAWEI"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    .line 557
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v0

    .line 558
    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v3, "display_notch_status"

    .line 557
    invoke-static {v0, v3, v2}, Landroid/provider/Settings$Secure;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v0

    const/4 v3, -0x1

    if-ne v0, v1, :cond_0

    .line 560
    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    if-eqz v4, :cond_1

    iget v4, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mIsNotchSwitchOpen:I

    if-eq v4, v3, :cond_1

    if-eq v4, v0, :cond_1

    .line 562
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->setFullScreenWindowLayoutInDisplayCutout(Landroid/view/Window;)V

    .line 563
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    .line 564
    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    .line 565
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v3

    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-interface {v3, v4, v0}, Landroid/view/WindowManager;->updateViewLayout(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    .line 569
    :cond_0
    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    if-eqz v4, :cond_1

    iget v4, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mIsNotchSwitchOpen:I

    if-eq v4, v3, :cond_1

    if-eq v4, v0, :cond_1

    .line 571
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->setNotFullScreenWindowLayoutInDisplayCutout(Landroid/view/Window;)V

    .line 572
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    .line 573
    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    .line 574
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v3

    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-interface {v3, v4, v0}, Landroid/view/WindowManager;->updateViewLayout(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 579
    :cond_1
    :goto_0
    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v3, "OPPO"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v3, "oppo"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_1

    .line 595
    :cond_2
    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v3, "Xiaomi"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 597
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v4, "force_black"

    invoke-static {v0, v4, v2}, Landroid/provider/Settings$Global;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v1, :cond_3

    const-string v0, "Notch off"

    .line 598
    invoke-static {v3, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    const-string v0, "Notch in"

    .line 600
    invoke-static {v3, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    .line 581
    :cond_4
    :goto_1
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->hasNotchInScreen()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 582
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    .line 584
    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    const/16 v3, 0x500

    .line 586
    invoke-virtual {v1, v3}, Landroid/view/View;->setSystemUiVisibility(I)V

    const/high16 v1, -0x80000000

    .line 590
    invoke-virtual {v0, v1}, Landroid/view/Window;->addFlags(I)V

    .line 592
    invoke-virtual {v0, v2}, Landroid/view/Window;->setStatusBarColor(I)V

    :cond_5
    :goto_2
    return-void
.end method

.method private createCamcorderIntent()Landroid/content/Intent;
    .locals 2

    .line 933
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.media.action.VIDEO_CAPTURE"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    return-object v0
.end method

.method private createCameraIntent()Landroid/content/Intent;
    .locals 4

    .line 920
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.media.action.IMAGE_CAPTURE"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 921
    sget-object v1, Landroid/os/Environment;->DIRECTORY_DCIM:Ljava/lang/String;

    invoke-static {v1}, Landroid/os/Environment;->getExternalStoragePublicDirectory(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    .line 923
    new-instance v2, Ljava/io/File;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "browser-photos"

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 925
    invoke-virtual {v2}, Ljava/io/File;->mkdirs()Z

    .line 926
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 927
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, ".jpg"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 928
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v2}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v2

    const-string v3, "output"

    invoke-virtual {v0, v3, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    .line 929
    iput-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->getImgUrl:Ljava/lang/String;

    return-object v0
.end method

.method private varargs createChooserIntent([Landroid/content/Intent;)Landroid/content/Intent;
    .locals 2

    .line 914
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.CHOOSER"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "android.intent.extra.INITIAL_INTENTS"

    .line 915
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;[Landroid/os/Parcelable;)Landroid/content/Intent;

    const-string p1, "android.intent.extra.TITLE"

    const-string v1, "File Chooser"

    .line 916
    invoke-virtual {v0, p1, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    return-object v0
.end method

.method private createDefaultOpenableIntent()Landroid/content/Intent;
    .locals 4

    .line 905
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.GET_CONTENT"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "android.intent.category.OPENABLE"

    .line 906
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "image/*"

    .line 907
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    const/4 v1, 0x1

    .line 909
    new-array v1, v1, [Landroid/content/Intent;

    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->createCameraIntent()Landroid/content/Intent;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-direct {p0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->createChooserIntent([Landroid/content/Intent;)Landroid/content/Intent;

    move-result-object v1

    const-string v2, "android.intent.extra.INTENT"

    .line 910
    invoke-virtual {v1, v2, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    return-object v1
.end method

.method private createSoundRecorderIntent()Landroid/content/Intent;
    .locals 2

    .line 937
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.provider.MediaStore.RECORD_SOUND"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    return-object v0
.end method

.method public static getContext()Landroid/content/Context;
    .locals 1

    .line 105
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->sContext:Lorg/cocos2dx/lib/Cocos2dxActivity;

    return-object v0
.end method

.method private static native getGLContextAttrs()[I
.end method

.method public static getInstance()Lorg/cocos2dx/lib/Cocos2dxActivity;
    .locals 1

    .line 109
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->sContext:Lorg/cocos2dx/lib/Cocos2dxActivity;

    return-object v0
.end method

.method public static getNavigationBarHeight(Landroid/content/Context;)I
    .locals 3

    .line 896
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    const-string v0, "navigation_bar_height"

    const-string v1, "dimen"

    const-string v2, "android"

    .line 897
    invoke-virtual {p0, v0, v1, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    if-lez v0, :cond_0

    .line 900
    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result p0

    goto :goto_0

    :cond_0
    const/4 p0, -0x1

    :goto_0
    return p0
.end method

.method public static getNotchSize()[I
    .locals 10

    const-string v0, "test"

    const/4 v1, 0x2

    .line 731
    new-array v1, v1, [I

    fill-array-data v1, :array_0

    .line 732
    sget-object v2, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v3, "getNotchSize\u624b\u673a\u5382\u5546\u4fe1\u606f"

    invoke-static {v3, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 734
    sget-object v2, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v3, "HUAWEI"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-eqz v2, :cond_1

    .line 736
    :try_start_0
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v2

    .line 737
    invoke-virtual {v2}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    const-string v5, "display_notch_status"

    .line 736
    invoke-static {v2, v5, v4}, Landroid/provider/Settings$Secure;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v2

    if-ne v2, v3, :cond_0

    return-object v1

    .line 741
    :cond_0
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v2

    const-string v5, "com.huawei.android.util.HwNotchSizeUtil"

    .line 743
    invoke-virtual {v2, v5}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    const-string v5, "getNotchSize"

    .line 744
    new-array v6, v4, [Ljava/lang/Class;

    invoke-virtual {v2, v5, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v5

    .line 745
    new-array v6, v4, [Ljava/lang/Object;

    invoke-virtual {v5, v2, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [I

    .line 747
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getStatusBarHeight(Landroid/content/Context;)I

    move-result v5

    const-string v6, "stateBarheight : "

    const-string v7, "%d"

    .line 748
    new-array v8, v3, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v8, v4

    invoke-static {v7, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 750
    aget v2, v2, v4

    aput v2, v1, v4

    aput v5, v1, v3
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    const-string v2, "getNotchSize Exception"

    .line 759
    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :catch_1
    const-string v2, "getNotchSize NoSuchMethodException"

    .line 757
    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :catch_2
    const-string v2, "getNotchSize ClassNotFoundException"

    .line 755
    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 762
    :cond_1
    :goto_0
    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v2, "OPPO"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/16 v2, 0x3c

    if-nez v0, :cond_6

    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v5, "oppo"

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_2

    .line 773
    :cond_2
    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v5, "VIVO"

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v5, "vivo"

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    goto :goto_1

    .line 780
    :cond_3
    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v2, "Xiaomi"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 782
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getStatusBarHeight(Landroid/content/Context;)I

    move-result v0

    aput v0, v1, v4

    aput v0, v1, v3

    :cond_4
    return-object v1

    :cond_5
    :goto_1
    aput v2, v1, v4

    aput v2, v1, v3

    return-object v1

    :cond_6
    :goto_2
    const-string v0, "ro.oppo.screen.heteromorphism"

    .line 764
    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity$SystemProperties;->get(Ljava/lang/String;)[I

    move-result-object v0

    .line 766
    aget v1, v0, v4

    if-nez v1, :cond_7

    .line 767
    aput v2, v0, v4

    .line 768
    aput v2, v0, v3

    :cond_7
    return-object v0

    :array_0
    .array-data 4
        0x0
        0x0
    .end array-data
.end method

.method public static getStatusBarHeight(Landroid/content/Context;)I
    .locals 4

    .line 887
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const-string v1, "status_bar_height"

    const-string v2, "dimen"

    const-string v3, "android"

    invoke-virtual {v0, v1, v2, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    if-lez v0, :cond_0

    .line 889
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result p0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static hasNotchInScreen()Z
    .locals 10

    const-string v0, "HUA WEI"

    const-string v1, "test"

    .line 608
    sget-object v2, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v3, "hasNotchInScreen\u624b\u673a\u5382\u5546\u4fe1\u606f"

    invoke-static {v3, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 609
    sget-object v2, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v3, "vivo"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    const-string v3, "hasNotchInScreen NoSuchMethodException"

    const-string v4, "hasNotchInScreen ClassNotFoundException"

    const-string v5, "hasNotchInScreen Exception"

    const/4 v6, 0x1

    const/4 v7, 0x0

    if-nez v2, :cond_5

    sget-object v2, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v8, "VIVO"

    invoke-virtual {v2, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto/16 :goto_2

    .line 628
    :cond_0
    sget-object v1, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v2, "HUAWEI"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 631
    :try_start_0
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v1

    .line 632
    invoke-virtual {v1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v1

    const-string v2, "display_notch_status"

    .line 631
    invoke-static {v1, v2, v7}, Landroid/provider/Settings$Secure;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v6, :cond_1

    goto :goto_0

    .line 637
    :cond_1
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v2

    const-string v6, "com.huawei.android.util.HwNotchSizeUtil"

    .line 639
    invoke-virtual {v2, v6}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    const-string v6, "hasNotchInScreen"

    .line 640
    new-array v8, v7, [Ljava/lang/Class;

    invoke-virtual {v2, v6, v8}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v6

    .line 641
    new-array v8, v7, [Ljava/lang/Object;

    invoke-virtual {v6, v2, v8}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    move v7, v2

    .line 643
    :goto_0
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getInstance()Lorg/cocos2dx/lib/Cocos2dxActivity;

    move-result-object v2

    iput v1, v2, Lorg/cocos2dx/lib/Cocos2dxActivity;->mIsNotchSwitchOpen:I
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto/16 :goto_3

    .line 650
    :catch_0
    invoke-static {v0, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto/16 :goto_3

    .line 648
    :catch_1
    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto/16 :goto_3

    .line 646
    :catch_2
    invoke-static {v0, v4}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto/16 :goto_3

    .line 653
    :cond_2
    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v1, "OPPO"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v2, "oppo"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    goto :goto_1

    .line 662
    :cond_3
    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v1, "Xiaomi"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    :try_start_1
    const-string v0, "ro.miui.notch"

    .line 665
    invoke-static {v0, v7}, Lorg/cocos2dx/lib/Cocos2dxActivity$SystemProperties;->getInt(Ljava/lang/String;I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3

    if-ne v0, v6, :cond_6

    const/4 v7, 0x1

    goto :goto_3

    .line 672
    :catch_3
    invoke-static {v1, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_3

    .line 656
    :cond_4
    :goto_1
    :try_start_2
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    const-string v2, "com.oppo.feature.screen.heteromorphism"

    invoke-virtual {v0, v2}, Landroid/content/pm/PackageManager;->hasSystemFeature(Ljava/lang/String;)Z

    move-result v7
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_4

    goto :goto_3

    .line 659
    :catch_4
    invoke-static {v1, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_3

    .line 612
    :cond_5
    :goto_2
    :try_start_3
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    const-string v2, "android.util.FtFeature"

    .line 613
    invoke-virtual {v0, v2}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v2, "isFeatureSupport"

    .line 614
    new-array v8, v6, [Ljava/lang/Class;

    sget-object v9, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v9, v8, v7

    invoke-virtual {v0, v2, v8}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    .line 615
    new-array v6, v6, [Ljava/lang/Object;

    const/16 v8, 0x20

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v6, v7

    invoke-virtual {v2, v0, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v7
    :try_end_3
    .catch Ljava/lang/ClassNotFoundException; {:try_start_3 .. :try_end_3} :catch_7
    .catch Ljava/lang/NoSuchMethodException; {:try_start_3 .. :try_end_3} :catch_6
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_5

    goto :goto_3

    .line 624
    :catch_5
    invoke-static {v1, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_3

    .line 621
    :catch_6
    invoke-static {v1, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_3

    .line 618
    :catch_7
    invoke-static {v1, v4}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_6
    :goto_3
    return v7
.end method

.method private static isAndroidEmulator()Z
    .locals 4

    .line 428
    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    .line 429
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "model="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 430
    sget-object v0, Landroid/os/Build;->PRODUCT:Ljava/lang/String;

    .line 431
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "product="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    const-string v2, "sdk"

    .line 434
    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "_sdk"

    invoke-virtual {v0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "sdk_"

    invoke-virtual {v0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    const/4 v0, 0x1

    const/4 v1, 0x1

    .line 436
    :cond_1
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "isEmulator="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v1
.end method

.method private static isDeviceAsleep()Z
    .locals 3

    .line 447
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "power"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/PowerManager;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 451
    :cond_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x14

    if-lt v1, v2, :cond_1

    .line 452
    invoke-virtual {v0}, Landroid/os/PowerManager;->isInteractive()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0

    .line 454
    :cond_1
    invoke-virtual {v0}, Landroid/os/PowerManager;->isScreenOn()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method private static isDeviceLocked()Z
    .locals 2

    .line 441
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "keyguard"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/KeyguardManager;

    .line 442
    invoke-virtual {v0}, Landroid/app/KeyguardManager;->inKeyguardRestrictedInputMode()Z

    move-result v0

    return v0
.end method

.method private resumeIfHasFocus()V
    .locals 2

    .line 233
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->isDeviceLocked()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->isDeviceAsleep()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 235
    :goto_0
    iget-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->hasFocus:Z

    if-eqz v1, :cond_1

    if-eqz v0, :cond_1

    .line 236
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->hideVirtualButton()V

    .line 237
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->onResume()V

    .line 238
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->onResume()V

    :cond_1
    return-void
.end method

.method public static setFullScreenWindowLayoutInDisplayCutout(Landroid/view/Window;)V
    .locals 6

    if-nez p0, :cond_0

    return-void

    .line 691
    :cond_0
    invoke-virtual {p0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object p0

    :try_start_0
    const-string v0, "com.huawei.android.view.LayoutParamsEx"

    .line 694
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const/4 v1, 0x1

    .line 695
    new-array v2, v1, [Ljava/lang/Class;

    const-class v3, Landroid/view/WindowManager$LayoutParams;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    .line 696
    invoke-virtual {v0, v2}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v2

    .line 697
    new-array v3, v1, [Ljava/lang/Object;

    aput-object p0, v3, v4

    invoke-virtual {v2, v3}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    const-string v2, "addHwFlags"

    .line 698
    new-array v3, v1, [Ljava/lang/Class;

    sget-object v5, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v5, v3, v4

    .line 699
    invoke-virtual {v0, v2, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    .line 700
    new-array v1, v1, [Ljava/lang/Object;

    const/high16 v2, 0x10000

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v1, v4

    invoke-virtual {v0, p0, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p0, "test"

    const-string v0, "other Exception"

    .line 702
    invoke-static {p0, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method public static setNotFullScreenWindowLayoutInDisplayCutout(Landroid/view/Window;)V
    .locals 6

    if-nez p0, :cond_0

    return-void

    .line 716
    :cond_0
    invoke-virtual {p0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object p0

    :try_start_0
    const-string v0, "com.huawei.android.view.LayoutParamsEx"

    .line 719
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const/4 v1, 0x1

    .line 720
    new-array v2, v1, [Ljava/lang/Class;

    const-class v3, Landroid/view/WindowManager$LayoutParams;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    .line 721
    invoke-virtual {v0, v2}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v2

    .line 722
    new-array v3, v1, [Ljava/lang/Object;

    aput-object p0, v3, v4

    invoke-virtual {v2, v3}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    const-string v2, "clearHwFlags"

    .line 723
    new-array v3, v1, [Ljava/lang/Class;

    sget-object v5, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v5, v3, v4

    invoke-virtual {v0, v2, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    .line 725
    new-array v1, v1, [Ljava/lang/Object;

    const/high16 v2, 0x10000

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v1, v4

    invoke-virtual {v0, p0, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p0, "test"

    const-string v0, "other Exception"

    .line 727
    invoke-static {p0, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method


# virtual methods
.method public getGLSurfaceView()Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;
    .locals 1

    .line 101
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    return-object v0
.end method

.method protected hideVirtualButton()V
    .locals 8

    .line 393
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->showVirtualButton:Z

    if-eqz v0, :cond_0

    return-void

    .line 397
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_1

    .line 400
    const-class v0, Landroid/view/View;

    :try_start_0
    const-string v1, "SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION"

    .line 403
    invoke-static {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxReflectionHelper;->getConstantValue(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    const-string v2, "SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN"

    .line 404
    invoke-static {v0, v2}, Lorg/cocos2dx/lib/Cocos2dxReflectionHelper;->getConstantValue(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    const-string v3, "SYSTEM_UI_FLAG_HIDE_NAVIGATION"

    .line 405
    invoke-static {v0, v3}, Lorg/cocos2dx/lib/Cocos2dxReflectionHelper;->getConstantValue(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    const-string v4, "SYSTEM_UI_FLAG_FULLSCREEN"

    .line 406
    invoke-static {v0, v4}, Lorg/cocos2dx/lib/Cocos2dxReflectionHelper;->getConstantValue(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    const-string v5, "SYSTEM_UI_FLAG_IMMERSIVE_STICKY"

    .line 407
    invoke-static {v0, v5}, Lorg/cocos2dx/lib/Cocos2dxReflectionHelper;->getConstantValue(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/Integer;

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    const-string v6, "SYSTEM_UI_FLAG_LAYOUT_STABLE"

    .line 408
    invoke-static {v0, v6}, Lorg/cocos2dx/lib/Cocos2dxReflectionHelper;->getConstantValue(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v6, 0x1

    .line 411
    new-array v7, v6, [Ljava/lang/Object;

    or-int/2addr v0, v1

    or-int/2addr v0, v2

    or-int/2addr v0, v3

    or-int/2addr v0, v4

    or-int/2addr v0, v5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const/4 v1, 0x0

    aput-object v0, v7, v1

    .line 417
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const-string v2, "setSystemUiVisibility"

    new-array v3, v6, [Ljava/lang/Class;

    sget-object v4, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v4, v3, v1

    invoke-static {v0, v2, v3, v7}, Lorg/cocos2dx/lib/Cocos2dxReflectionHelper;->invokeInstanceMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Class;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 422
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    const-string v2, "hideVirtualButton"

    invoke-static {v1, v2, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_1
    :goto_0
    return-void
.end method

.method public init()V
    .locals 3

    .line 342
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 346
    new-instance v2, Lorg/cocos2dx/lib/ResizeLayout;

    invoke-direct {v2, p0}, Lorg/cocos2dx/lib/ResizeLayout;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Lorg/cocos2dx/lib/ResizeLayout;

    .line 348
    iget-object v2, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Lorg/cocos2dx/lib/ResizeLayout;

    invoke-virtual {v2, v0}, Lorg/cocos2dx/lib/ResizeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 351
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v0, v1, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 354
    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxEditBox;

    invoke-direct {v1, p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;-><init>(Landroid/content/Context;)V

    .line 355
    invoke-virtual {v1, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 358
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Lorg/cocos2dx/lib/ResizeLayout;

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/ResizeLayout;->addView(Landroid/view/View;)V

    .line 361
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onCreateView()Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    move-result-object v0

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    .line 362
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setPreserveEGLContextOnPause(Z)V

    .line 365
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Lorg/cocos2dx/lib/ResizeLayout;

    iget-object v2, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-virtual {v0, v2}, Lorg/cocos2dx/lib/ResizeLayout;->addView(Landroid/view/View;)V

    .line 372
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    new-instance v2, Lorg/cocos2dx/lib/Cocos2dxRenderer;

    invoke-direct {v2}, Lorg/cocos2dx/lib/Cocos2dxRenderer;-><init>()V

    invoke-virtual {v0, v2}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setCocos2dxRenderer(Lorg/cocos2dx/lib/Cocos2dxRenderer;)V

    .line 373
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setCocos2dxEditText(Lorg/cocos2dx/lib/Cocos2dxEditBox;)V

    .line 376
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Lorg/cocos2dx/lib/ResizeLayout;

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->setContentView(Landroid/view/View;)V

    return-void
.end method

.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 3

    .line 276
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getOnActivityResultListeners()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/preference/PreferenceManager$OnActivityResultListener;

    .line 277
    invoke-interface {v1, p1, p2, p3}, Landroid/preference/PreferenceManager$OnActivityResultListener;->onActivityResult(IILandroid/content/Intent;)Z

    goto :goto_0

    .line 280
    :cond_0
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onActivityResult(IILandroid/content/Intent;)V

    const/16 v0, 0x2710

    if-ne p1, v0, :cond_4

    const/4 v0, 0x0

    if-eqz p3, :cond_2

    const/4 v1, -0x1

    if-eq p2, v1, :cond_1

    goto :goto_1

    .line 282
    :cond_1
    invoke-virtual {p3}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v1

    goto :goto_2

    :cond_2
    :goto_1
    move-object v1, v0

    .line 283
    :goto_2
    iget-object v2, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessageAboveL:Landroid/webkit/ValueCallback;

    if-eqz v2, :cond_3

    .line 284
    invoke-virtual {p0, p1, p2, p3}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onActivityResultAboveL(IILandroid/content/Intent;)V

    goto :goto_3

    .line 285
    :cond_3
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessage:Landroid/webkit/ValueCallback;

    if-eqz p1, :cond_4

    .line 286
    invoke-interface {p1, v1}, Landroid/webkit/ValueCallback;->onReceiveValue(Ljava/lang/Object;)V

    .line 287
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessage:Landroid/webkit/ValueCallback;

    :cond_4
    :goto_3
    return-void
.end method

.method protected onActivityResultAboveL(IILandroid/content/Intent;)V
    .locals 5
    .annotation build Landroid/annotation/TargetApi;
        value = 0x15
    .end annotation

    const/16 v0, 0x2710

    if-ne p1, v0, :cond_7

    .line 294
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessageAboveL:Landroid/webkit/ValueCallback;

    if-nez p1, :cond_0

    goto/16 :goto_3

    :cond_0
    const/4 p1, 0x0

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-nez p3, :cond_2

    .line 297
    iget-object v2, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->getImgUrl:Ljava/lang/String;

    if-eqz v2, :cond_2

    .line 299
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 300
    invoke-virtual {p2}, Ljava/io/File;->exists()Z

    move-result p2

    if-eqz p2, :cond_1

    .line 301
    new-array p2, v0, [Landroid/net/Uri;

    .line 302
    new-instance p3, Ljava/io/File;

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->getImgUrl:Ljava/lang/String;

    invoke-direct {p3, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p3}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object p3

    aput-object p3, p2, p1

    goto :goto_0

    :cond_1
    move-object p2, v1

    .line 304
    :goto_0
    iput-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->getImgUrl:Ljava/lang/String;

    .line 305
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessageAboveL:Landroid/webkit/ValueCallback;

    invoke-interface {p1, p2}, Landroid/webkit/ValueCallback;->onReceiveValue(Ljava/lang/Object;)V

    .line 306
    iput-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessageAboveL:Landroid/webkit/ValueCallback;

    return-void

    :cond_2
    const/4 v2, -0x1

    if-ne p2, v2, :cond_6

    if-eqz p3, :cond_6

    .line 311
    invoke-virtual {p3}, Landroid/content/Intent;->getDataString()Ljava/lang/String;

    move-result-object p2

    .line 312
    invoke-virtual {p3}, Landroid/content/Intent;->getClipData()Landroid/content/ClipData;

    move-result-object p3

    if-eqz p3, :cond_3

    .line 314
    invoke-virtual {p3}, Landroid/content/ClipData;->getItemCount()I

    move-result v2

    new-array v2, v2, [Landroid/net/Uri;

    const/4 v3, 0x0

    .line 315
    :goto_1
    invoke-virtual {p3}, Landroid/content/ClipData;->getItemCount()I

    move-result v4

    if-ge v3, v4, :cond_4

    .line 316
    invoke-virtual {p3, v3}, Landroid/content/ClipData;->getItemAt(I)Landroid/content/ClipData$Item;

    move-result-object v4

    .line 317
    invoke-virtual {v4}, Landroid/content/ClipData$Item;->getUri()Landroid/net/Uri;

    move-result-object v4

    aput-object v4, v2, v3

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_3
    move-object v2, v1

    :cond_4
    if-eqz p2, :cond_5

    .line 321
    new-array p3, v0, [Landroid/net/Uri;

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    aput-object p2, p3, p1

    goto :goto_2

    :cond_5
    move-object p3, v2

    goto :goto_2

    :cond_6
    move-object p3, v1

    .line 324
    :goto_2
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessageAboveL:Landroid/webkit/ValueCallback;

    invoke-interface {p1, p3}, Landroid/webkit/ValueCallback;->onReceiveValue(Ljava/lang/Object;)V

    .line 325
    iput-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessageAboveL:Landroid/webkit/ValueCallback;

    :cond_7
    :goto_3
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 155
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 158
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->isTaskRoot()Z

    move-result p1

    if-nez p1, :cond_0

    .line 162
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->finish()V

    .line 163
    sget-object p1, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    const-string v0, "[Workaround] Ignore the activity started from icon!"

    invoke-static {p1, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 167
    :cond_0
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->hideVirtualButton()V

    .line 169
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onLoadNativeLibraries()V

    .line 171
    sput-object p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->sContext:Lorg/cocos2dx/lib/Cocos2dxActivity;

    .line 172
    new-instance p1, Lorg/cocos2dx/lib/Cocos2dxHandler;

    invoke-direct {p1, p0}, Lorg/cocos2dx/lib/Cocos2dxHandler;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHandler:Lorg/cocos2dx/lib/Cocos2dxHandler;

    .line 174
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxHelper;->init(Landroid/app/Activity;)V

    .line 176
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getGLContextAttrs()[I

    move-result-object p1

    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLContextAttrs:[I

    .line 177
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->init()V

    .line 179
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mVideoHelper:Lorg/cocos2dx/lib/Cocos2dxVideoHelper;

    if-nez p1, :cond_1

    .line 180
    new-instance p1, Lorg/cocos2dx/lib/Cocos2dxVideoHelper;

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Lorg/cocos2dx/lib/ResizeLayout;

    invoke-direct {p1, p0, v0}, Lorg/cocos2dx/lib/Cocos2dxVideoHelper;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;Landroid/widget/FrameLayout;)V

    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mVideoHelper:Lorg/cocos2dx/lib/Cocos2dxVideoHelper;

    .line 183
    :cond_1
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mWebViewHelper:Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;

    if-nez p1, :cond_2

    .line 184
    new-instance p1, Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Lorg/cocos2dx/lib/ResizeLayout;

    invoke-direct {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;-><init>(Landroid/widget/FrameLayout;)V

    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mWebViewHelper:Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;

    .line 187
    :cond_2
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mEditBoxHelper:Lorg/cocos2dx/lib/Cocos2dxEditBoxHelper;

    if-nez p1, :cond_3

    .line 188
    new-instance p1, Lorg/cocos2dx/lib/Cocos2dxEditBoxHelper;

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Lorg/cocos2dx/lib/ResizeLayout;

    invoke-direct {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBoxHelper;-><init>(Lorg/cocos2dx/lib/ResizeLayout;)V

    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mEditBoxHelper:Lorg/cocos2dx/lib/Cocos2dxEditBoxHelper;

    .line 191
    :cond_3
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getWindow()Landroid/view/Window;

    move-result-object p1

    const/16 v0, 0x20

    .line 192
    invoke-virtual {p1, v0}, Landroid/view/Window;->setSoftInputMode(I)V

    const/16 v0, 0x80

    .line 193
    invoke-virtual {p1, v0}, Landroid/view/Window;->addFlags(I)V

    const/4 p1, 0x3

    .line 196
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->setVolumeControlStream(I)V

    return-void
.end method

.method public onCreateView()Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;
    .locals 3

    .line 381
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;-><init>(Landroid/content/Context;)V

    .line 386
    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxActivity$Cocos2dxEGLConfigChooser;

    iget-object v2, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLContextAttrs:[I

    invoke-direct {v1, p0, v2}, Lorg/cocos2dx/lib/Cocos2dxActivity$Cocos2dxEGLConfigChooser;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;[I)V

    .line 387
    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setEGLConfigChooser(Landroid/opengl/GLSurfaceView$EGLConfigChooser;)V

    return-object v0
.end method

.method protected onDestroy()V
    .locals 1

    .line 255
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->gainAudioFocus:Z

    if-eqz v0, :cond_0

    .line 256
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxAudioFocusManager;->unregisterAudioFocusListener(Landroid/content/Context;)V

    .line 257
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    return-void
.end method

.method protected onLoadNativeLibraries()V
    .locals 3

    .line 140
    :try_start_0
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x80

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    .line 141
    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v1, "android.app.lib_name"

    .line 142
    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 143
    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 145
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method protected onPause()V
    .locals 2

    .line 244
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    const-string v1, "onPause()"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x1

    .line 245
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->paused:Z

    .line 246
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    .line 247
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->gainAudioFocus:Z

    if-eqz v0, :cond_0

    .line 248
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxAudioFocusManager;->unregisterAudioFocusListener(Landroid/content/Context;)V

    .line 249
    :cond_0
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->onPause()V

    .line 250
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->onPause()V

    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 212
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    const-string v1, "onResume()"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    .line 213
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->paused:Z

    .line 214
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 215
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->gainAudioFocus:Z

    if-eqz v0, :cond_0

    .line 216
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxAudioFocusManager;->registerAudioFocusListener(Landroid/content/Context;)Z

    .line 217
    :cond_0
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->hideVirtualButton()V

    .line 218
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->resumeIfHasFocus()V

    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 3

    .line 223
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onWindowFocusChanged() hasFocus="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 224
    invoke-super {p0, p1}, Landroid/app/Activity;->onWindowFocusChanged(Z)V

    .line 226
    iput-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->hasFocus:Z

    .line 227
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->resumeIfHasFocus()V

    return-void
.end method

.method public openImageChooserActivity()V
    .locals 2

    .line 332
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->createDefaultOpenableIntent()Landroid/content/Intent;

    move-result-object v0

    const/16 v1, 0x2710

    invoke-virtual {p0, v0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->startActivityForResult(Landroid/content/Intent;I)V

    return-void
.end method

.method public runOnGLThread(Ljava/lang/Runnable;)V
    .locals 1

    .line 270
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-virtual {v0, p1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->queueEvent(Ljava/lang/Runnable;)V

    return-void
.end method

.method public setEnableAudioFocusGain(Z)V
    .locals 1

    .line 127
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->gainAudioFocus:Z

    if-eq v0, p1, :cond_2

    .line 128
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->paused:Z

    if-nez v0, :cond_1

    if-eqz p1, :cond_0

    .line 130
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxAudioFocusManager;->registerAudioFocusListener(Landroid/content/Context;)Z

    goto :goto_0

    .line 132
    :cond_0
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxAudioFocusManager;->unregisterAudioFocusListener(Landroid/content/Context;)V

    .line 134
    :cond_1
    :goto_0
    iput-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->gainAudioFocus:Z

    :cond_2
    return-void
.end method

.method public setEnableVirtualButton(Z)V
    .locals 0

    .line 123
    iput-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->showVirtualButton:Z

    return-void
.end method

.method public setKeepScreenOn(Z)V
    .locals 1

    .line 114
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxActivity$1;

    invoke-direct {v0, p0, p1}, Lorg/cocos2dx/lib/Cocos2dxActivity$1;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;Z)V

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public showDialog(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 262
    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    const/4 v1, 0x1

    .line 263
    iput v1, v0, Landroid/os/Message;->what:I

    .line 264
    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxHandler$DialogMessage;

    invoke-direct {v1, p1, p2}, Lorg/cocos2dx/lib/Cocos2dxHandler$DialogMessage;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 265
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHandler:Lorg/cocos2dx/lib/Cocos2dxHandler;

    invoke-virtual {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxHandler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
