.class final Lcom/mbridge/msdk/nativex/view/MBMediaView$e;
.super Ljava/lang/Object;
.source "MBMediaView.java"

# interfaces
.implements Landroid/hardware/SensorEventListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/nativex/view/MBMediaView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "e"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/nativex/view/MBMediaView;


# direct methods
.method private constructor <init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 0

    .line 2640
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;Lcom/mbridge/msdk/nativex/view/MBMediaView$1;)V
    .locals 0

    .line 2640
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    return-void
.end method


# virtual methods
.method public final onAccuracyChanged(Landroid/hardware/Sensor;I)V
    .locals 0

    return-void
.end method

.method public final onSensorChanged(Landroid/hardware/SensorEvent;)V
    .locals 13

    const-string v0, "MBMediaView"

    .line 2650
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->C(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 2655
    :cond_0
    :try_start_0
    iget-object p1, p1, Landroid/hardware/SensorEvent;->values:[F

    const/4 v1, 0x0

    .line 2657
    aget v2, p1, v1

    neg-float v2, v2

    const/4 v3, 0x1

    .line 2658
    aget v4, p1, v3

    neg-float v4, v4

    const/4 v5, 0x2

    .line 2659
    aget p1, p1, v5

    neg-float p1, p1

    mul-float v5, v2, v2

    mul-float v6, v4, v4

    add-float/2addr v5, v6

    const/high16 v6, 0x40800000    # 4.0f

    mul-float/2addr v5, v6

    mul-float/2addr p1, p1

    cmpl-float p1, v5, p1

    const/4 v5, -0x1

    const/16 v6, 0x168

    if-ltz p1, :cond_2

    const p1, 0x42652ee1

    neg-float v4, v4

    float-to-double v7, v4

    float-to-double v9, v2

    .line 2664
    invoke-static {v7, v8, v9, v10}, Ljava/lang/Math;->atan2(DD)D

    move-result-wide v7

    double-to-float v2, v7

    mul-float/2addr v2, p1

    .line 2665
    invoke-static {v2}, Ljava/lang/Math;->round(F)I

    move-result p1

    rsub-int/lit8 p1, p1, 0x5a

    :goto_0
    if-lt p1, v6, :cond_1

    add-int/lit16 p1, p1, -0x168

    goto :goto_0

    :cond_1
    :goto_1
    if-gez p1, :cond_3

    add-int/lit16 p1, p1, 0x168

    goto :goto_1

    :cond_2
    move p1, v5

    .line 2674
    :cond_3
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->D(Lcom/mbridge/msdk/nativex/view/MBMediaView;)F

    move-result v2

    .line 2675
    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-virtual {v4}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/ae;->j(Landroid/content/Context;)I

    move-result v4

    const-wide/16 v7, 0xc8

    const/16 v9, 0x87

    const/16 v10, 0x2d

    if-le p1, v10, :cond_4

    if-lt p1, v9, :cond_5

    :cond_4
    const/16 v11, 0x13b

    const/16 v12, 0xe1

    if-le p1, v12, :cond_6

    if-ge p1, v11, :cond_6

    :cond_5
    int-to-float p1, v4

    cmpl-float p1, v2, p1

    if-ltz p1, :cond_b

    .line 2678
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z

    move-result p1

    if-nez p1, :cond_b

    const-string p1, "onSensorChanged: to LandScape: --------------"

    .line 2679
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 2680
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1, v3}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b(Lcom/mbridge/msdk/nativex/view/MBMediaView;Z)Z

    .line 2681
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1, v3}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->c(Lcom/mbridge/msdk/nativex/view/MBMediaView;Z)Z

    .line 2683
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->J(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Landroid/os/Handler;

    move-result-object p1

    new-instance v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$1;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView$e;)V

    invoke-virtual {p1, v1, v7, v8}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_2

    :cond_6
    if-le p1, v9, :cond_7

    if-lt p1, v12, :cond_a

    :cond_7
    if-le p1, v11, :cond_8

    if-lt p1, v6, :cond_a

    :cond_8
    if-ltz p1, :cond_9

    if-le p1, v10, :cond_a

    :cond_9
    if-ne p1, v5, :cond_b

    :cond_a
    int-to-float p1, v4

    cmpg-float p1, v2, p1

    if-gtz p1, :cond_b

    .line 2709
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z

    move-result p1

    if-eqz p1, :cond_b

    const-string p1, "onSensorChanged: to protrait: |||||||||||||||||"

    .line 2710
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 2711
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1, v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b(Lcom/mbridge/msdk/nativex/view/MBMediaView;Z)Z

    .line 2712
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1, v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->c(Lcom/mbridge/msdk/nativex/view/MBMediaView;Z)Z

    .line 2714
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->J(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Landroid/os/Handler;

    move-result-object p1

    new-instance v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$2;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$2;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView$e;)V

    invoke-virtual {p1, v1, v7, v8}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 2737
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_b
    :goto_2
    return-void
.end method
