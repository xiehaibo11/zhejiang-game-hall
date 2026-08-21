.class public Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;
.super Landroid/app/Dialog;
.source "DownloadMessageDialog.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$a;
    }
.end annotation


# instance fields
.field private a:F

.field private b:I

.field private c:I

.field private d:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

.field private e:Lcom/mbridge/msdk/widget/custom/a;

.field private f:Z

.field private g:Landroid/view/OrientationEventListener;

.field private h:Lcom/mbridge/msdk/widget/custom/b;

.field private i:Landroid/animation/AnimatorSet;

.field private j:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$a;

.field private k:Lcom/mbridge/msdk/widget/custom/a;


# direct methods
.method public constructor <init>(Landroid/content/Context;ZLandroid/content/DialogInterface$OnCancelListener;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Lcom/mbridge/msdk/widget/custom/a;)V
    .locals 4

    const-string v0, "mbridge_dialog_fullscreen_bottom"

    const-string v1, "style"

    .line 109
    invoke-static {p1, v0, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-direct {p0, p1, v0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    const v0, 0x3f4ccccd    # 0.8f

    .line 36
    iput v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->a:F

    const/4 v0, 0x0

    .line 41
    iput-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->f:Z

    const/4 v0, 0x0

    .line 43
    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    .line 52
    new-instance v0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;-><init>(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->k:Lcom/mbridge/msdk/widget/custom/a;

    .line 110
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->setCancelable(Z)V

    .line 111
    invoke-virtual {p0, p3}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->setOnCancelListener(Landroid/content/DialogInterface$OnCancelListener;)V

    if-nez p4, :cond_0

    .line 113
    new-instance p2, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    invoke-direct {p2}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;-><init>()V

    iput-object p2, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->d:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    goto :goto_0

    .line 115
    :cond_0
    iput-object p4, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->d:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    .line 117
    :goto_0
    iput-object p5, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->e:Lcom/mbridge/msdk/widget/custom/a;

    if-eqz p4, :cond_1

    .line 119
    invoke-virtual {p4}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->getApplicationImage()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_1

    const p2, 0x3f19999a    # 0.6f

    .line 120
    iput p2, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->a:F

    .line 125
    :cond_1
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-virtual {p2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    .line 126
    invoke-virtual {p2}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p2

    .line 127
    iget-object p3, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->k:Lcom/mbridge/msdk/widget/custom/a;

    invoke-interface {p3, p0, p4}, Lcom/mbridge/msdk/widget/custom/a;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;)V

    .line 128
    new-instance p3, Lcom/mbridge/msdk/widget/custom/b;

    iget-object p5, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->d:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->k:Lcom/mbridge/msdk/widget/custom/a;

    invoke-direct {p3, p0, p1, p5, v0}, Lcom/mbridge/msdk/widget/custom/b;-><init>(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Landroid/content/Context;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Lcom/mbridge/msdk/widget/custom/a;)V

    iput-object p3, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->h:Lcom/mbridge/msdk/widget/custom/b;

    .line 129
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->isScreenOrientationPortrait(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 130
    iget p1, p2, Landroid/util/DisplayMetrics;->widthPixels:I

    iput p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->c:I

    .line 131
    iget p1, p2, Landroid/util/DisplayMetrics;->heightPixels:I

    iput p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->b:I

    goto :goto_1

    .line 133
    :cond_2
    iget p1, p2, Landroid/util/DisplayMetrics;->widthPixels:I

    iput p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->b:I

    .line 134
    iget p1, p2, Landroid/util/DisplayMetrics;->heightPixels:I

    iput p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->c:I

    .line 136
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->h:Lcom/mbridge/msdk/widget/custom/b;

    iget p3, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->c:I

    iget p5, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->b:I

    invoke-virtual {p1, p3, p5}, Lcom/mbridge/msdk/widget/custom/b;->a(II)Landroid/view/View;

    move-result-object p1

    if-eqz p1, :cond_4

    const/4 p3, 0x1

    .line 138
    invoke-virtual {p0, p3}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->requestWindowFeature(I)Z

    .line 139
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->setContentView(Landroid/view/View;)V

    .line 140
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->k:Lcom/mbridge/msdk/widget/custom/a;

    invoke-interface {p1, p0, p4}, Lcom/mbridge/msdk/widget/custom/a;->b(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;)V

    .line 141
    iput-boolean p3, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->f:Z

    .line 143
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->isScreenOrientationPortrait(Landroid/content/Context;)Z

    move-result p1

    const/4 p3, -0x1

    if-eqz p1, :cond_3

    .line 144
    iget p1, p2, Landroid/util/DisplayMetrics;->widthPixels:I

    iput p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->c:I

    .line 145
    iget p1, p2, Landroid/util/DisplayMetrics;->heightPixels:I

    iput p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->b:I

    .line 146
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object p1

    .line 147
    iget p2, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->b:I

    int-to-float p2, p2

    iget p5, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->a:F

    mul-float/2addr p2, p5

    float-to-int p2, p2

    .line 148
    iput p3, p1, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 149
    iput p2, p1, Landroid/view/WindowManager$LayoutParams;->height:I

    const/16 p2, 0x50

    .line 150
    iput p2, p1, Landroid/view/WindowManager$LayoutParams;->gravity:I

    .line 151
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getWindow()Landroid/view/Window;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    goto :goto_2

    .line 153
    :cond_3
    iget p1, p2, Landroid/util/DisplayMetrics;->widthPixels:I

    iput p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->c:I

    .line 154
    iget p1, p2, Landroid/util/DisplayMetrics;->heightPixels:I

    iput p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->b:I

    .line 155
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object p1

    .line 156
    iget p2, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->c:I

    int-to-double v0, p2

    const-wide/high16 v2, 0x3fe0000000000000L    # 0.5

    mul-double/2addr v0, v2

    double-to-int p2, v0

    .line 157
    iput p2, p1, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 158
    iput p3, p1, Landroid/view/WindowManager$LayoutParams;->height:I

    const/16 p2, 0x11

    .line 159
    iput p2, p1, Landroid/view/WindowManager$LayoutParams;->gravity:I

    .line 160
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getWindow()Landroid/view/Window;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    goto :goto_2

    .line 163
    :cond_4
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->k:Lcom/mbridge/msdk/widget/custom/a;

    new-instance p2, Ljava/lang/Exception;

    const-string p3, "view is null"

    invoke-direct {p2, p3}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    invoke-interface {p1, p0, p4, p2}, Lcom/mbridge/msdk/widget/custom/a;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Ljava/lang/Exception;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 166
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string p3, "DownloadMessageDialog"

    invoke-static {p3, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 167
    iget-object p2, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->k:Lcom/mbridge/msdk/widget/custom/a;

    invoke-interface {p2, p0, p4, p1}, Lcom/mbridge/msdk/widget/custom/a;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Ljava/lang/Exception;)V

    :goto_2
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;ZLcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Lcom/mbridge/msdk/widget/custom/a;)V
    .locals 6

    const/4 v3, 0x0

    move-object v0, p0

    move-object v1, p1

    move v2, p2

    move-object v4, p3

    move-object v5, p4

    .line 96
    invoke-direct/range {v0 .. v5}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;-><init>(Landroid/content/Context;ZLandroid/content/DialogInterface$OnCancelListener;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Lcom/mbridge/msdk/widget/custom/a;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/a;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->e:Lcom/mbridge/msdk/widget/custom/a;

    return-object p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Landroid/animation/AnimatorSet;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->i:Landroid/animation/AnimatorSet;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$a;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->j:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$a;

    return-object p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)F
    .locals 0

    .line 33
    iget p0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->a:F

    return p0
.end method

.method public static isScreenOrientationPortrait(Landroid/content/Context;)Z
    .locals 1

    .line 348
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    iget p0, p0, Landroid/content/res/Configuration;->orientation:I

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method


# virtual methods
.method public cancel()V
    .locals 2

    .line 311
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->i:Landroid/animation/AnimatorSet;

    if-eqz v0, :cond_0

    .line 312
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->i:Landroid/animation/AnimatorSet;

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->cancel()V

    .line 314
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->canDetectOrientation()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 315
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->disable()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 318
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DownloadMessageDialog"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 320
    :cond_1
    :goto_0
    invoke-super {p0}, Landroid/app/Dialog;->cancel()V

    return-void
.end method

.method public dismiss()V
    .locals 2

    .line 289
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->i:Landroid/animation/AnimatorSet;

    if-eqz v0, :cond_0

    .line 290
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->i:Landroid/animation/AnimatorSet;

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->cancel()V

    .line 292
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->canDetectOrientation()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 293
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->disable()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 296
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DownloadMessageDialog"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 298
    :cond_1
    :goto_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    if-nez v0, :cond_2

    return-void

    .line 302
    :cond_2
    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 303
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 304
    invoke-super {p0}, Landroid/app/Dialog;->dismiss()V

    :cond_3
    return-void
.end method

.method public hideNavigationBar(Landroid/view/Window;)V
    .locals 2

    if-eqz p1, :cond_1

    const/16 v0, 0x400

    .line 325
    invoke-virtual {p1, v0, v0}, Landroid/view/Window;->setFlags(II)V

    .line 327
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_0

    const/high16 v0, 0x4000000

    .line 328
    invoke-virtual {p1, v0}, Landroid/view/Window;->addFlags(I)V

    const/16 v0, 0x1002

    .line 330
    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    goto :goto_0

    .line 332
    :cond_0
    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 335
    :goto_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-lt v0, v1, :cond_1

    .line 336
    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    const/4 v1, 0x1

    .line 337
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->layoutInDisplayCutoutMode:I

    .line 338
    invoke-virtual {p1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    :cond_1
    return-void
.end method

.method public onAttachedToWindow()V
    .locals 0

    .line 353
    invoke-super {p0}, Landroid/app/Dialog;->onAttachedToWindow()V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 0

    .line 260
    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    return-void
.end method

.method protected onStart()V
    .locals 0

    .line 266
    invoke-super {p0}, Landroid/app/Dialog;->onStart()V

    return-void
.end method

.method protected onStop()V
    .locals 2

    .line 271
    invoke-super {p0}, Landroid/app/Dialog;->onStop()V

    .line 274
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->i:Landroid/animation/AnimatorSet;

    if-eqz v0, :cond_0

    .line 275
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->i:Landroid/animation/AnimatorSet;

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->cancel()V

    .line 277
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->canDetectOrientation()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 278
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->disable()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 282
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DownloadMessageDialog"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public registerOrientationListener(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$a;)V
    .locals 0

    .line 344
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->j:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$a;

    return-void
.end method

.method public setRenderListener(Lcom/mbridge/msdk/widget/custom/a;)V
    .locals 0

    .line 49
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->e:Lcom/mbridge/msdk/widget/custom/a;

    return-void
.end method

.method public show()V
    .locals 9

    .line 174
    :try_start_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->f:Z

    if-eqz v0, :cond_a

    .line 175
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    if-nez v0, :cond_0

    .line 177
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->k:Lcom/mbridge/msdk/widget/custom/a;

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->d:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    new-instance v2, Ljava/lang/Exception;

    const-string v3, "window is null"

    invoke-direct {v2, v3}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    invoke-interface {v0, p0, v1, v2}, Lcom/mbridge/msdk/widget/custom/a;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Ljava/lang/Exception;)V

    return-void

    :cond_0
    const/16 v1, 0x400

    .line 180
    invoke-virtual {v0, v1, v1}, Landroid/view/Window;->setFlags(II)V

    const/16 v2, 0x8

    .line 181
    invoke-virtual {v0, v2, v2}, Landroid/view/Window;->setFlags(II)V

    .line 182
    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v3

    const/16 v4, 0x100

    invoke-virtual {v3, v4}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 183
    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v3

    const/16 v4, 0x200

    invoke-virtual {v3, v4}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 184
    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v3

    const/16 v4, 0x1000

    invoke-virtual {v3, v4}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 185
    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v3

    invoke-virtual {v3, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 186
    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    const/4 v3, 0x4

    invoke-virtual {v1, v3}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 187
    invoke-virtual {v0, v2}, Landroid/view/Window;->clearFlags(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    .line 190
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, v2, v2}, Landroid/view/Window;->setFlags(II)V

    .line 191
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 192
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/view/ContextThemeWrapper;

    .line 193
    invoke-virtual {v0}, Landroid/view/ContextThemeWrapper;->getBaseContext()Landroid/content/Context;

    move-result-object v1

    instance-of v1, v1, Landroid/app/Activity;

    if-eqz v1, :cond_3

    .line 194
    invoke-virtual {v0}, Landroid/view/ContextThemeWrapper;->getBaseContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    .line 195
    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v1

    if-nez v1, :cond_2

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x11

    if-lt v1, v3, :cond_1

    invoke-virtual {v0}, Landroid/app/Activity;->isDestroyed()Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 198
    :cond_1
    invoke-super {p0}, Landroid/app/Dialog;->show()V

    goto :goto_1

    :cond_2
    :goto_0
    return-void

    .line 201
    :cond_3
    :goto_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->hideNavigationBar(Landroid/view/Window;)V

    .line 202
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/view/Window;->clearFlags(I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 208
    :try_start_2
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->k:Lcom/mbridge/msdk/widget/custom/a;

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->d:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    invoke-interface {v0, p0, v1}, Lcom/mbridge/msdk/widget/custom/a;->c(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;)V

    .line 210
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    const/16 v1, 0x14

    const/4 v2, 0x0

    if-gt v0, v1, :cond_4

    .line 212
    :try_start_3
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->d:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    const-string v1, "download"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->getView(Ljava/lang/String;)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    if-eqz v0, :cond_4

    .line 214
    invoke-virtual {v0, v2, v2, v2, v2}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setPadding(IIII)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    :try_start_4
    const-string v1, "dialog"

    .line 217
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 221
    :cond_4
    :goto_2
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    const/4 v1, 0x1

    if-nez v0, :cond_6

    .line 1361
    new-instance v0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$2;

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v0, p0, v3, v1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$2;-><init>(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    .line 1391
    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->canDetectOrientation()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 1392
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->enable()V

    goto :goto_3

    .line 1394
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->disable()V

    const/4 v0, 0x0

    .line 1395
    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    .line 225
    :cond_6
    :goto_3
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->canDetectOrientation()Z

    move-result v0

    if-eqz v0, :cond_9

    .line 226
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->d:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->getCampaignEx()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    if-eqz v0, :cond_8

    .line 227
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v3

    const/16 v4, 0x5e

    if-eq v3, v4, :cond_7

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v3

    const/16 v4, 0x11f

    if-ne v3, v4, :cond_8

    .line 228
    :cond_7
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v3

    if-eqz v3, :cond_9

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->c()I

    move-result v0

    if-nez v0, :cond_9

    .line 229
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->enable()V

    goto :goto_4

    :cond_8
    if-eqz v0, :cond_9

    .line 232
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->g:Landroid/view/OrientationEventListener;

    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->enable()V

    .line 236
    :cond_9
    :goto_4
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->h:Lcom/mbridge/msdk/widget/custom/b;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->h:Lcom/mbridge/msdk/widget/custom/b;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/b;->a()Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    move-result-object v0

    if-eqz v0, :cond_a

    .line 237
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->h:Lcom/mbridge/msdk/widget/custom/b;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/b;->a()Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    move-result-object v0

    if-eqz v0, :cond_a

    .line 239
    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getContentDescription()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "anim"

    .line 240
    invoke-virtual {v3, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_a

    const-string v3, "scaleX"

    const/4 v4, 0x2

    new-array v5, v4, [F

    const v6, 0x3f99999a    # 1.2f

    aput v6, v5, v2

    const v7, 0x3f4ccccd    # 0.8f

    aput v7, v5, v1

    .line 241
    invoke-static {v0, v3, v5}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v3

    const/4 v5, -0x1

    .line 242
    invoke-virtual {v3, v5}, Landroid/animation/ObjectAnimator;->setRepeatCount(I)V

    const-string v8, "scaleY"

    new-array v4, v4, [F

    aput v6, v4, v2

    aput v7, v4, v1

    .line 243
    invoke-static {v0, v8, v4}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    .line 244
    invoke-virtual {v0, v5}, Landroid/animation/ObjectAnimator;->setRepeatCount(I)V

    .line 245
    new-instance v1, Landroid/animation/AnimatorSet;

    invoke-direct {v1}, Landroid/animation/AnimatorSet;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->i:Landroid/animation/AnimatorSet;

    .line 246
    invoke-virtual {v1, v3}, Landroid/animation/AnimatorSet;->play(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/animation/AnimatorSet$Builder;->with(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;

    .line 247
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->i:Landroid/animation/AnimatorSet;

    const-wide/16 v1, 0x7d0

    invoke-virtual {v0, v1, v2}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    .line 248
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->i:Landroid/animation/AnimatorSet;

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->start()V

    goto :goto_5

    :catch_1
    move-exception v0

    .line 204
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->k:Lcom/mbridge/msdk/widget/custom/a;

    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->d:Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    invoke-interface {v1, p0, v2, v0}, Lcom/mbridge/msdk/widget/custom/a;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Ljava/lang/Exception;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    return-void

    :catch_2
    move-exception v0

    .line 254
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DownloadMessageDialog"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    :goto_5
    return-void
.end method
