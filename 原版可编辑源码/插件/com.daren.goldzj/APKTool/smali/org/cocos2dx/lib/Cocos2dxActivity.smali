.class public abstract Lorg/cocos2dx/lib/Cocos2dxActivity;
.super Lcom/qihoo360/replugin/loader/a/PluginActivity;
.source "Cocos2dxActivity.java"

# interfaces
.implements Lorg/cocos2dx/lib/Cocos2dxHelper$Cocos2dxHelperListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/cocos2dx/lib/Cocos2dxActivity$Cocos2dxEGLConfigChooser;
    }
.end annotation


# static fields
.field private static final FILE_CHOOSER_RESULT_CODE:I = 0x2710

.field private static final TAG:Ljava/lang/String; = "Cocos2dxActivity"

.field private static sContext:Lorg/cocos2dx/lib/Cocos2dxActivity;


# instance fields
.field private gainAudioFocus:Z

.field public getImgUrl:Ljava/lang/String;

.field private hasFocus:Z

.field private mFPSTextView:Landroid/widget/TextView;

.field protected mFrameLayout:Landroid/widget/FrameLayout;

.field private mGLContextAttrs:[I

.field private mGLOptModeTextView:Landroid/widget/TextView;

.field private mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

.field private mGameInfoTextView_0:Landroid/widget/TextView;

.field private mGameInfoTextView_1:Landroid/widget/TextView;

.field private mGameInfoTextView_2:Landroid/widget/TextView;

.field private mHandler:Lorg/cocos2dx/lib/Cocos2dxHandler;

.field private mIsTaskRootOnCreate:Z

.field private mJSBInvocationTextView:Landroid/widget/TextView;

.field private mLinearLayoutForDebugView:Landroid/widget/LinearLayout;

.field private mVideoHelper:Lorg/cocos2dx/lib/Cocos2dxVideoHelper;

.field private mWebViewHelper:Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;

.field private paused:Z

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

    .line 64
    invoke-direct {p0}, Lcom/qihoo360/replugin/loader/a/PluginActivity;-><init>()V

    const/4 v0, 0x0

    .line 76
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Landroid/widget/FrameLayout;

    .line 78
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    .line 79
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLContextAttrs:[I

    .line 80
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHandler:Lorg/cocos2dx/lib/Cocos2dxHandler;

    .line 81
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mVideoHelper:Lorg/cocos2dx/lib/Cocos2dxVideoHelper;

    .line 82
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mWebViewHelper:Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;

    const/4 v1, 0x0

    .line 83
    iput-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->hasFocus:Z

    .line 85
    iput-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->gainAudioFocus:Z

    const/4 v1, 0x1

    .line 86
    iput-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->paused:Z

    .line 90
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->getImgUrl:Ljava/lang/String;

    .line 102
    iput-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mIsTaskRootOnCreate:Z

    return-void
.end method

.method static synthetic access$100(Lorg/cocos2dx/lib/Cocos2dxActivity;)Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;
    .locals 0

    .line 64
    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    return-object p0
.end method

.method static synthetic access$200(Lorg/cocos2dx/lib/Cocos2dxActivity;)Landroid/widget/TextView;
    .locals 0

    .line 64
    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFPSTextView:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$202(Lorg/cocos2dx/lib/Cocos2dxActivity;Landroid/widget/TextView;)Landroid/widget/TextView;
    .locals 0

    .line 64
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFPSTextView:Landroid/widget/TextView;

    return-object p1
.end method

.method static synthetic access$300(Lorg/cocos2dx/lib/Cocos2dxActivity;)Landroid/widget/TextView;
    .locals 0

    .line 64
    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mJSBInvocationTextView:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$302(Lorg/cocos2dx/lib/Cocos2dxActivity;Landroid/widget/TextView;)Landroid/widget/TextView;
    .locals 0

    .line 64
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mJSBInvocationTextView:Landroid/widget/TextView;

    return-object p1
.end method

.method static synthetic access$400(Lorg/cocos2dx/lib/Cocos2dxActivity;)Landroid/widget/LinearLayout;
    .locals 0

    .line 64
    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mLinearLayoutForDebugView:Landroid/widget/LinearLayout;

    return-object p0
.end method

.method static synthetic access$402(Lorg/cocos2dx/lib/Cocos2dxActivity;Landroid/widget/LinearLayout;)Landroid/widget/LinearLayout;
    .locals 0

    .line 64
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mLinearLayoutForDebugView:Landroid/widget/LinearLayout;

    return-object p1
.end method

.method static synthetic access$500()Ljava/lang/String;
    .locals 1

    .line 64
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$600(Lorg/cocos2dx/lib/Cocos2dxActivity;)Landroid/widget/TextView;
    .locals 0

    .line 64
    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLOptModeTextView:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$602(Lorg/cocos2dx/lib/Cocos2dxActivity;Landroid/widget/TextView;)Landroid/widget/TextView;
    .locals 0

    .line 64
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLOptModeTextView:Landroid/widget/TextView;

    return-object p1
.end method

.method static synthetic access$700(Lorg/cocos2dx/lib/Cocos2dxActivity;)Landroid/widget/TextView;
    .locals 0

    .line 64
    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGameInfoTextView_0:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$702(Lorg/cocos2dx/lib/Cocos2dxActivity;Landroid/widget/TextView;)Landroid/widget/TextView;
    .locals 0

    .line 64
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGameInfoTextView_0:Landroid/widget/TextView;

    return-object p1
.end method

.method static synthetic access$800(Lorg/cocos2dx/lib/Cocos2dxActivity;)Landroid/widget/TextView;
    .locals 0

    .line 64
    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGameInfoTextView_1:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$802(Lorg/cocos2dx/lib/Cocos2dxActivity;Landroid/widget/TextView;)Landroid/widget/TextView;
    .locals 0

    .line 64
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGameInfoTextView_1:Landroid/widget/TextView;

    return-object p1
.end method

.method static synthetic access$900(Lorg/cocos2dx/lib/Cocos2dxActivity;)Landroid/widget/TextView;
    .locals 0

    .line 64
    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGameInfoTextView_2:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$902(Lorg/cocos2dx/lib/Cocos2dxActivity;Landroid/widget/TextView;)Landroid/widget/TextView;
    .locals 0

    .line 64
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGameInfoTextView_2:Landroid/widget/TextView;

    return-object p1
.end method

.method private addDebugInfo(Lorg/cocos2dx/lib/Cocos2dxRenderer;)V
    .locals 3

    .line 578
    new-instance v0, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v1, -0x2

    invoke-direct {v0, v1, v1}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    const/4 v1, 0x0

    const/16 v2, 0x1e

    .line 580
    invoke-virtual {v0, v2, v1, v1, v1}, Landroid/widget/LinearLayout$LayoutParams;->setMargins(IIII)V

    .line 581
    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxActivity$2;

    invoke-direct {v1, p0, v0, p1}, Lorg/cocos2dx/lib/Cocos2dxActivity$2;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;Landroid/widget/LinearLayout$LayoutParams;Lorg/cocos2dx/lib/Cocos2dxRenderer;)V

    invoke-static {v1}, Lorg/cocos2dx/lib/Cocos2dxHelper;->setOnGameInfoUpdatedListener(Lorg/cocos2dx/lib/Cocos2dxHelper$OnGameInfoUpdatedListener;)V

    return-void
.end method

.method private addSurfaceView()Lorg/cocos2dx/lib/Cocos2dxRenderer;
    .locals 8

    .line 560
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onCreateView()Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    move-result-object v0

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    .line 561
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setPreserveEGLContextOnPause(Z)V

    .line 564
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setBackgroundColor(I)V

    .line 566
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->isAndroidEmulator()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 567
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    const/16 v2, 0x8

    const/16 v3, 0x8

    const/16 v4, 0x8

    const/16 v5, 0x8

    const/16 v6, 0x10

    const/4 v7, 0x0

    invoke-virtual/range {v1 .. v7}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setEGLConfigChooser(IIIIII)V

    .line 569
    :cond_0
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxRenderer;

    invoke-direct {v0}, Lorg/cocos2dx/lib/Cocos2dxRenderer;-><init>()V

    .line 570
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-virtual {v1, v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setCocos2dxRenderer(Lorg/cocos2dx/lib/Cocos2dxRenderer;)V

    .line 572
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Landroid/widget/FrameLayout;

    iget-object v2, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-virtual {v1, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    return-object v0
.end method

.method private createCamcorderIntent()Landroid/content/Intent;
    .locals 2

    .line 761
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.media.action.VIDEO_CAPTURE"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    return-object v0
.end method

.method private createCameraIntent()Landroid/content/Intent;
    .locals 4

    .line 747
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.media.action.IMAGE_CAPTURE"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 748
    sget-object v1, Landroid/os/Environment;->DIRECTORY_DCIM:Ljava/lang/String;

    invoke-static {v1}, Landroid/os/Environment;->getExternalStoragePublicDirectory(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    .line 750
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

    .line 752
    invoke-virtual {v2}, Ljava/io/File;->mkdirs()Z

    .line 753
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 754
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, ".jpg"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 755
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v2}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v2

    const-string v3, "output"

    invoke-virtual {v0, v3, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    .line 756
    iput-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->getImgUrl:Ljava/lang/String;

    return-object v0
.end method

.method private varargs createChooserIntent([Landroid/content/Intent;)Landroid/content/Intent;
    .locals 2

    .line 740
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.CHOOSER"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "android.intent.extra.INITIAL_INTENTS"

    .line 741
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;[Landroid/os/Parcelable;)Landroid/content/Intent;

    const-string p1, "android.intent.extra.TITLE"

    const-string v1, "File Chooser"

    .line 742
    invoke-virtual {v0, p1, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    return-object v0
.end method

.method private createDefaultOpenableIntent()Landroid/content/Intent;
    .locals 4

    .line 730
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.GET_CONTENT"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "android.intent.category.OPENABLE"

    .line 731
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "image/*"

    .line 732
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    const/4 v1, 0x1

    .line 734
    new-array v1, v1, [Landroid/content/Intent;

    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->createCameraIntent()Landroid/content/Intent;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-direct {p0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->createChooserIntent([Landroid/content/Intent;)Landroid/content/Intent;

    move-result-object v1

    const-string v2, "android.intent.extra.INTENT"

    .line 735
    invoke-virtual {v1, v2, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    return-object v1
.end method

.method private createSoundRecorderIntent()Landroid/content/Intent;
    .locals 2

    .line 765
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.provider.MediaStore.RECORD_SOUND"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    return-object v0
.end method

.method public static getContext()Landroid/content/Context;
    .locals 1

    .line 269
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->sContext:Lorg/cocos2dx/lib/Cocos2dxActivity;

    return-object v0
.end method

.method private static native getGLContextAttrs()[I
.end method

.method private static final isAndroidEmulator()Z
    .locals 4

    .line 710
    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    .line 711
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "model="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 712
    sget-object v0, Landroid/os/Build;->PRODUCT:Ljava/lang/String;

    .line 713
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

    .line 716
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

    .line 718
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

.method private resumeIfHasFocus()V
    .locals 1

    .line 429
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->hasFocus:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->paused:Z

    if-nez v0, :cond_0

    .line 430
    invoke-static {}, Lorg/cocos2dx/lib/Utils;->hideVirtualButton()V

    .line 431
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->onResume()V

    .line 432
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->onResume()V

    :cond_0
    return-void
.end method


# virtual methods
.method protected CallJSFuncByEvent(ILjava/lang/String;)V
    .locals 0

    return-void
.end method

.method public getGLSurfaceView()Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;
    .locals 1

    .line 266
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    return-object v0
.end method

.method public getTaskRootCreate()Z
    .locals 1

    .line 353
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mIsTaskRootOnCreate:Z

    return v0
.end method

.method public init()V
    .locals 4

    .line 276
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 279
    new-instance v1, Landroid/widget/FrameLayout;

    invoke-direct {v1, p0}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Landroid/widget/FrameLayout;

    .line 280
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Landroid/widget/FrameLayout;

    invoke-virtual {v1, v0}, Landroid/widget/FrameLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 282
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->addSurfaceView()Lorg/cocos2dx/lib/Cocos2dxRenderer;

    move-result-object v0

    .line 283
    invoke-direct {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->addDebugInfo(Lorg/cocos2dx/lib/Cocos2dxRenderer;)V

    .line 290
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Landroid/widget/FrameLayout;

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->setContentView(Landroid/view/View;)V

    .line 292
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    .line 294
    :try_start_0
    invoke-virtual {v0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    const-string v2, "layoutInDisplayCutoutMode"

    invoke-virtual {v1, v2}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v1

    .line 296
    invoke-virtual {v0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    const-string v3, "LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES"

    invoke-virtual {v2, v3}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v2

    const/4 v3, 0x0

    .line 297
    invoke-virtual {v2, v3}, Ljava/lang/reflect/Field;->getInt(Ljava/lang/Object;)I

    move-result v2

    invoke-virtual {v1, v0, v2}, Ljava/lang/reflect/Field;->setInt(Ljava/lang/Object;I)V

    .line 306
    const-class v0, Landroid/view/View;

    const-string v1, "SYSTEM_UI_FLAG_IMMERSIVE_STICKY"

    invoke-virtual {v0, v1}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    invoke-virtual {v0, v3}, Ljava/lang/reflect/Field;->getInt(Ljava/lang/Object;)I

    move-result v0

    or-int/lit16 v0, v0, 0x706

    .line 307
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    .line 308
    invoke-virtual {v1, v0}, Landroid/view/View;->setSystemUiVisibility(I)V
    :try_end_0
    .catch Ljava/lang/NoSuchFieldException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 313
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 311
    invoke-virtual {v0}, Ljava/lang/NoSuchFieldException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 3

    .line 484
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

    .line 485
    invoke-interface {v1, p1, p2, p3}, Landroid/preference/PreferenceManager$OnActivityResultListener;->onActivityResult(IILandroid/content/Intent;)Z

    goto :goto_0

    .line 488
    :cond_0
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onActivityResult(IILandroid/content/Intent;)V

    const/16 v0, 0x2710

    if-ne p1, v0, :cond_4

    const/4 v0, 0x0

    if-eqz p3, :cond_2

    const/4 v1, -0x1

    if-eq p2, v1, :cond_1

    goto :goto_1

    .line 490
    :cond_1
    invoke-virtual {p3}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v1

    goto :goto_2

    :cond_2
    :goto_1
    move-object v1, v0

    .line 491
    :goto_2
    iget-object v2, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessageAboveL:Landroid/webkit/ValueCallback;

    if-eqz v2, :cond_3

    .line 492
    invoke-virtual {p0, p1, p2, p3}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onActivityResultAboveL(IILandroid/content/Intent;)V

    goto :goto_3

    .line 493
    :cond_3
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessage:Landroid/webkit/ValueCallback;

    if-eqz p1, :cond_4

    .line 494
    invoke-interface {p1, v1}, Landroid/webkit/ValueCallback;->onReceiveValue(Ljava/lang/Object;)V

    .line 495
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

    .line 502
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessageAboveL:Landroid/webkit/ValueCallback;

    if-nez p1, :cond_0

    goto/16 :goto_3

    :cond_0
    const/4 p1, 0x0

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-nez p3, :cond_2

    .line 505
    iget-object v2, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->getImgUrl:Ljava/lang/String;

    if-eqz v2, :cond_2

    .line 507
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 508
    invoke-virtual {p2}, Ljava/io/File;->exists()Z

    move-result p2

    if-eqz p2, :cond_1

    .line 509
    new-array p2, v0, [Landroid/net/Uri;

    .line 510
    new-instance p3, Ljava/io/File;

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->getImgUrl:Ljava/lang/String;

    invoke-direct {p3, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p3}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object p3

    aput-object p3, p2, p1

    goto :goto_0

    :cond_1
    move-object p2, v1

    .line 512
    :goto_0
    iput-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->getImgUrl:Ljava/lang/String;

    .line 513
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessageAboveL:Landroid/webkit/ValueCallback;

    invoke-interface {p1, p2}, Landroid/webkit/ValueCallback;->onReceiveValue(Ljava/lang/Object;)V

    .line 514
    iput-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessageAboveL:Landroid/webkit/ValueCallback;

    return-void

    :cond_2
    const/4 v2, -0x1

    if-ne p2, v2, :cond_6

    if-eqz p3, :cond_6

    .line 519
    invoke-virtual {p3}, Landroid/content/Intent;->getDataString()Ljava/lang/String;

    move-result-object p2

    .line 520
    invoke-virtual {p3}, Landroid/content/Intent;->getClipData()Landroid/content/ClipData;

    move-result-object p3

    if-eqz p3, :cond_3

    .line 522
    invoke-virtual {p3}, Landroid/content/ClipData;->getItemCount()I

    move-result v2

    new-array v2, v2, [Landroid/net/Uri;

    const/4 v3, 0x0

    .line 523
    :goto_1
    invoke-virtual {p3}, Landroid/content/ClipData;->getItemCount()I

    move-result v4

    if-ge v3, v4, :cond_4

    .line 524
    invoke-virtual {p3, v3}, Landroid/content/ClipData;->getItemAt(I)Landroid/content/ClipData$Item;

    move-result-object v4

    .line 525
    invoke-virtual {v4}, Landroid/content/ClipData$Item;->getUri()Landroid/net/Uri;

    move-result-object v4

    aput-object v4, v2, v3

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_3
    move-object v2, v1

    :cond_4
    if-eqz p2, :cond_5

    .line 529
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

    .line 532
    :goto_2
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessageAboveL:Landroid/webkit/ValueCallback;

    invoke-interface {p1, p3}, Landroid/webkit/ValueCallback;->onReceiveValue(Ljava/lang/Object;)V

    .line 533
    iput-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessageAboveL:Landroid/webkit/ValueCallback;

    :cond_7
    :goto_3
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3

    .line 362
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Cocos2dxActivity onCreate: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ", savedInstanceState: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 363
    invoke-super {p0, p1}, Lcom/qihoo360/replugin/loader/a/PluginActivity;->onCreate(Landroid/os/Bundle;)V

    .line 365
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->isTaskRoot()Z

    move-result p1

    iput-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mIsTaskRootOnCreate:Z

    .line 376
    invoke-static {p0}, Lorg/cocos2dx/lib/Utils;->setActivity(Landroid/app/Activity;)V

    .line 378
    invoke-static {}, Lorg/cocos2dx/lib/Utils;->hideVirtualButton()V

    .line 380
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxHelper;->registerBatteryLevelReceiver(Landroid/content/Context;)V

    .line 382
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onLoadNativeLibraries()V

    .line 384
    sput-object p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->sContext:Lorg/cocos2dx/lib/Cocos2dxActivity;

    .line 385
    new-instance p1, Lorg/cocos2dx/lib/Cocos2dxHandler;

    invoke-direct {p1, p0}, Lorg/cocos2dx/lib/Cocos2dxHandler;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHandler:Lorg/cocos2dx/lib/Cocos2dxHandler;

    .line 387
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxHelper;->init(Landroid/app/Activity;)V

    .line 388
    invoke-static {p0}, Lorg/cocos2dx/lib/CanvasRenderingContext2DImpl;->init(Landroid/content/Context;)V

    .line 390
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getGLContextAttrs()[I

    move-result-object p1

    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLContextAttrs:[I

    .line 391
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->init()V

    .line 393
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mVideoHelper:Lorg/cocos2dx/lib/Cocos2dxVideoHelper;

    if-nez p1, :cond_0

    .line 394
    new-instance p1, Lorg/cocos2dx/lib/Cocos2dxVideoHelper;

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Landroid/widget/FrameLayout;

    invoke-direct {p1, p0, v0}, Lorg/cocos2dx/lib/Cocos2dxVideoHelper;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;Landroid/widget/FrameLayout;)V

    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mVideoHelper:Lorg/cocos2dx/lib/Cocos2dxVideoHelper;

    .line 397
    :cond_0
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mWebViewHelper:Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;

    if-nez p1, :cond_1

    .line 398
    new-instance p1, Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mFrameLayout:Landroid/widget/FrameLayout;

    invoke-direct {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;-><init>(Landroid/widget/FrameLayout;)V

    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mWebViewHelper:Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;

    .line 401
    :cond_1
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getWindow()Landroid/view/Window;

    move-result-object p1

    const/16 v0, 0x10

    .line 402
    invoke-virtual {p1, v0}, Landroid/view/Window;->setSoftInputMode(I)V

    const/16 v0, 0x80

    .line 403
    invoke-virtual {p1, v0}, Landroid/view/Window;->addFlags(I)V

    const/4 p1, 0x3

    .line 404
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->setVolumeControlStream(I)V

    return-void
.end method

.method public onCreateView()Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;
    .locals 3

    .line 342
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;-><init>(Landroid/content/Context;)V

    .line 344
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLContextAttrs:[I

    const/4 v2, 0x3

    aget v1, v1, v2

    if-lez v1, :cond_0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->getHolder()Landroid/view/SurfaceHolder;

    move-result-object v1

    const/4 v2, -0x3

    invoke-interface {v1, v2}, Landroid/view/SurfaceHolder;->setFormat(I)V

    .line 346
    :cond_0
    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxActivity$Cocos2dxEGLConfigChooser;

    iget-object v2, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLContextAttrs:[I

    invoke-direct {v1, p0, v2}, Lorg/cocos2dx/lib/Cocos2dxActivity$Cocos2dxEGLConfigChooser;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;[I)V

    .line 347
    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setEGLConfigChooser(Landroid/opengl/GLSurfaceView$EGLConfigChooser;)V

    return-object v0
.end method

.method protected onDestroy()V
    .locals 3

    .line 450
    invoke-super {p0}, Lcom/qihoo360/replugin/loader/a/PluginActivity;->onDestroy()V

    .line 453
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mIsTaskRootOnCreate:Z

    if-nez v0, :cond_0

    return-void

    .line 457
    :cond_0
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->gainAudioFocus:Z

    if-eqz v0, :cond_1

    .line 458
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxAudioFocusManager;->unregisterAudioFocusListener(Landroid/content/Context;)V

    .line 459
    :cond_1
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxHelper;->unregisterBatteryLevelReceiver(Landroid/content/Context;)V

    .line 460
    invoke-static {}, Lorg/cocos2dx/lib/CanvasRenderingContext2DImpl;->destroy()V

    .line 462
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Cocos2dxActivity onDestroy: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ", mGLSurfaceView"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 463
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    if-eqz v0, :cond_2

    .line 464
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->terminateProcess()V

    :cond_2
    return-void
.end method

.method protected onLoadNativeLibraries()V
    .locals 3

    .line 549
    :try_start_0
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x80

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    .line 550
    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v0, "cocos2djs"

    .line 553
    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 555
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method protected onPause()V
    .locals 2

    .line 438
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    const-string v1, "onPause()"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x1

    .line 439
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->paused:Z

    .line 440
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    .line 441
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->gainAudioFocus:Z

    if-eqz v0, :cond_0

    .line 442
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxAudioFocusManager;->unregisterAudioFocusListener(Landroid/content/Context;)V

    .line 443
    :cond_0
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->onPause()V

    .line 444
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->onPause()V

    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 409
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    const-string v1, "onResume()"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    .line 410
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->paused:Z

    .line 411
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 412
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->gainAudioFocus:Z

    if-eqz v0, :cond_0

    .line 413
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxAudioFocusManager;->registerAudioFocusListener(Landroid/content/Context;)Z

    .line 414
    :cond_0
    invoke-static {}, Lorg/cocos2dx/lib/Utils;->hideVirtualButton()V

    .line 415
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->resumeIfHasFocus()V

    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 3

    .line 421
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onWindowFocusChanged() hasFocus="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 422
    invoke-super {p0, p1}, Landroid/app/Activity;->onWindowFocusChanged(Z)V

    .line 424
    iput-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->hasFocus:Z

    .line 425
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->resumeIfHasFocus()V

    return-void
.end method

.method public openImageChooserActivity()V
    .locals 2

    .line 540
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->createDefaultOpenableIntent()Landroid/content/Intent;

    move-result-object v0

    const/16 v1, 0x2710

    invoke-virtual {p0, v0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->startActivityForResult(Landroid/content/Intent;I)V

    return-void
.end method

.method public runOnGLThread(Ljava/lang/Runnable;)V
    .locals 1

    .line 478
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-virtual {v0, p1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->queueEvent(Ljava/lang/Runnable;)V

    return-void
.end method

.method public setEnableAudioFocusGain(Z)V
    .locals 1

    .line 330
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->gainAudioFocus:Z

    if-eq v0, p1, :cond_2

    .line 331
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->paused:Z

    if-nez v0, :cond_1

    if-eqz p1, :cond_0

    .line 333
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxAudioFocusManager;->registerAudioFocusListener(Landroid/content/Context;)Z

    goto :goto_0

    .line 335
    :cond_0
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxAudioFocusManager;->unregisterAudioFocusListener(Landroid/content/Context;)V

    .line 337
    :cond_1
    :goto_0
    iput-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->gainAudioFocus:Z

    :cond_2
    return-void
.end method

.method public setKeepScreenOn(Z)V
    .locals 1

    .line 321
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxActivity$1;

    invoke-direct {v0, p0, p1}, Lorg/cocos2dx/lib/Cocos2dxActivity$1;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;Z)V

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public showDialog(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 470
    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    const/4 v1, 0x1

    .line 471
    iput v1, v0, Landroid/os/Message;->what:I

    .line 472
    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxHandler$DialogMessage;

    invoke-direct {v1, p1, p2}, Lorg/cocos2dx/lib/Cocos2dxHandler$DialogMessage;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 473
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHandler:Lorg/cocos2dx/lib/Cocos2dxHandler;

    invoke-virtual {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxHandler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
