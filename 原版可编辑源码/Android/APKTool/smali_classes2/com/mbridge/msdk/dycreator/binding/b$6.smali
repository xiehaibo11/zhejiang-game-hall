.class final Lcom/mbridge/msdk/dycreator/binding/b$6;
.super Ljava/lang/Object;
.source "MBDataBinding.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/c/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/dycreator/binding/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/dycreator/f/a/a;

.field final synthetic b:Landroid/view/View;

.field final synthetic c:Lcom/mbridge/msdk/dycreator/binding/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/dycreator/binding/b;Lcom/mbridge/msdk/dycreator/f/a/a;Landroid/view/View;)V
    .locals 0

    .line 451
    iput-object p1, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->c:Lcom/mbridge/msdk/dycreator/binding/b;

    iput-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->a:Lcom/mbridge/msdk/dycreator/f/a/a;

    iput-object p3, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailedLoad(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 559
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    if-eqz p1, :cond_0

    .line 560
    check-cast p1, Landroid/widget/ImageView;

    const p2, -0x777778

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setBackgroundColor(I)V

    :cond_0
    return-void
.end method

.method public final onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 4

    if-eqz p1, :cond_e

    .line 455
    :try_start_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_e

    .line 457
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result p2

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-le p2, v0, :cond_0

    move p2, v1

    goto :goto_0

    :cond_0
    move p2, v2

    .line 462
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->a:Lcom/mbridge/msdk/dycreator/f/a/a;

    invoke-interface {v0}, Lcom/mbridge/msdk/dycreator/f/a/a;->getEffectData()Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getOrientation()I

    move-result v0

    if-ne v0, v1, :cond_1

    .line 463
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    iget v0, v0, Landroid/content/res/Configuration;->orientation:I

    goto :goto_1

    .line 465
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->a:Lcom/mbridge/msdk/dycreator/f/a/a;

    invoke-interface {v0}, Lcom/mbridge/msdk/dycreator/f/a/a;->getEffectData()Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getOrientation()I

    move-result v0

    :goto_1
    const/16 v3, 0x8

    if-ne v0, v1, :cond_7

    if-eqz p2, :cond_4

    .line 470
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    instance-of p2, p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashPortView;

    if-eqz p2, :cond_3

    .line 471
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 472
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    .line 473
    invoke-virtual {p1, v3}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_2
    return-void

    .line 477
    :cond_3
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    instance-of p2, p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashImageBgView;

    if-eqz p2, :cond_d

    .line 478
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    invoke-virtual {p2, v2}, Landroid/view/View;->setVisibility(I)V

    .line 479
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/y;->a(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 480
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashImageBgView;

    sget-object v0, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/dycreator/baseview/MBSplashImageBgView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 481
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashImageBgView;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/dycreator/baseview/MBSplashImageBgView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    return-void

    .line 485
    :cond_4
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    instance-of p2, p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashPortView;

    if-eqz p2, :cond_5

    .line 486
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    invoke-virtual {p2, v2}, Landroid/view/View;->setVisibility(I)V

    .line 487
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashPortView;

    sget-object v0, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/dycreator/baseview/MBSplashPortView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 488
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashPortView;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/dycreator/baseview/MBSplashPortView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    return-void

    .line 491
    :cond_5
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    instance-of p2, p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashImageBgView;

    if-eqz p2, :cond_6

    .line 492
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    invoke-virtual {p1, v3}, Landroid/view/View;->setVisibility(I)V

    return-void

    .line 496
    :cond_6
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    instance-of p2, p2, Lcom/mbridge/msdk/dycreator/baseview/inter/InterBase;

    if-eqz p2, :cond_d

    .line 497
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p2, Lcom/mbridge/msdk/dycreator/baseview/inter/InterBase;

    invoke-interface {p2}, Lcom/mbridge/msdk/dycreator/baseview/inter/InterBase;->getEffectDes()Ljava/lang/String;

    move-result-object p2

    .line 498
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_d

    .line 500
    invoke-static {p2, v0, v1}, Lcom/mbridge/msdk/dycreator/e/d;->a(Ljava/lang/String;Landroid/view/View;Z)V

    goto/16 :goto_2

    :cond_7
    if-eqz p2, :cond_a

    .line 506
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    instance-of p2, p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashPortView;

    if-eqz p2, :cond_8

    .line 507
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    invoke-virtual {p2, v2}, Landroid/view/View;->setVisibility(I)V

    .line 508
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashPortView;

    sget-object v0, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/dycreator/baseview/MBSplashPortView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 509
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p2, Landroid/widget/ImageView;

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    return-void

    .line 512
    :cond_8
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    instance-of p2, p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashImageBgView;

    if-eqz p2, :cond_9

    .line 513
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    invoke-virtual {p2, v3}, Landroid/view/View;->setVisibility(I)V

    .line 514
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/y;->a(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 515
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashImageBgView;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/dycreator/baseview/MBSplashImageBgView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    return-void

    .line 519
    :cond_9
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    instance-of p2, p2, Lcom/mbridge/msdk/dycreator/baseview/inter/InterBase;

    if-eqz p2, :cond_d

    .line 520
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p2, Lcom/mbridge/msdk/dycreator/baseview/inter/InterBase;

    invoke-interface {p2}, Lcom/mbridge/msdk/dycreator/baseview/inter/InterBase;->getEffectDes()Ljava/lang/String;

    move-result-object p2

    .line 521
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_d

    .line 523
    invoke-static {p2, v0, v1}, Lcom/mbridge/msdk/dycreator/e/d;->a(Ljava/lang/String;Landroid/view/View;Z)V

    goto :goto_2

    .line 527
    :cond_a
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    instance-of p2, p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashPortView;

    if-eqz p2, :cond_b

    .line 528
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    invoke-virtual {p2, v2}, Landroid/view/View;->setVisibility(I)V

    .line 529
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashPortView;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/dycreator/baseview/MBSplashPortView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    return-void

    .line 532
    :cond_b
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    instance-of p2, p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashImageBgView;

    if-eqz p2, :cond_c

    .line 533
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    invoke-virtual {p2, v2}, Landroid/view/View;->setVisibility(I)V

    .line 534
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/y;->a(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 535
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashImageBgView;

    sget-object v0, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/dycreator/baseview/MBSplashImageBgView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 536
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p2, Lcom/mbridge/msdk/dycreator/baseview/MBSplashImageBgView;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/dycreator/baseview/MBSplashImageBgView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    return-void

    .line 540
    :cond_c
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    instance-of p2, p2, Lcom/mbridge/msdk/dycreator/baseview/inter/InterBase;

    if-eqz p2, :cond_d

    .line 541
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p2, Lcom/mbridge/msdk/dycreator/baseview/inter/InterBase;

    invoke-interface {p2}, Lcom/mbridge/msdk/dycreator/baseview/inter/InterBase;->getEffectDes()Ljava/lang/String;

    move-result-object p2

    .line 542
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_d

    .line 544
    invoke-static {p2, v0, v1}, Lcom/mbridge/msdk/dycreator/e/d;->a(Ljava/lang/String;Landroid/view/View;Z)V

    .line 549
    :cond_d
    :goto_2
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p2, Landroid/widget/ImageView;

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    goto :goto_3

    .line 551
    :cond_e
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/binding/b$6;->b:Landroid/view/View;

    check-cast p1, Landroid/widget/ImageView;

    const p2, -0x777778

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setBackgroundColor(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception p1

    .line 554
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "MBDataBinding"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_3
    return-void
.end method
