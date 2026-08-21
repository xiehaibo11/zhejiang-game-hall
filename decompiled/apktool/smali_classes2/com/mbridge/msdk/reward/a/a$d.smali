.class final Lcom/mbridge/msdk/reward/a/a$d;
.super Ljava/lang/Object;
.source "RewardVideoController.java"

# interfaces
.implements Lcom/mbridge/msdk/video/bt/module/b/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "d"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/reward/a/a;

.field private b:Lcom/mbridge/msdk/reward/a/a;

.field private c:I

.field private d:Landroid/os/Handler;

.field private e:I


# direct methods
.method private constructor <init>(Lcom/mbridge/msdk/reward/a/a;Lcom/mbridge/msdk/reward/a/a;ILandroid/os/Handler;)V
    .locals 0

    .line 567
    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    .line 568
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x0

    .line 565
    iput p1, p0, Lcom/mbridge/msdk/reward/a/a$d;->e:I

    .line 569
    iput-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    .line 570
    iput p3, p0, Lcom/mbridge/msdk/reward/a/a$d;->c:I

    .line 571
    iput-object p4, p0, Lcom/mbridge/msdk/reward/a/a$d;->d:Landroid/os/Handler;

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/reward/a/a;Lcom/mbridge/msdk/reward/a/a;ILandroid/os/Handler;Lcom/mbridge/msdk/reward/a/a$1;)V
    .locals 0

    .line 560
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/mbridge/msdk/reward/a/a$d;-><init>(Lcom/mbridge/msdk/reward/a/a;Lcom/mbridge/msdk/reward/a/a;ILandroid/os/Handler;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/a/a$d;)Lcom/mbridge/msdk/reward/a/a;
    .locals 0

    .line 560
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    return-object p0
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 581
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;Z)Z

    const-string v0, "RewardVideoController"

    const-string v1, "=====================onAdShow====================="

    .line 582
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 584
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_2

    .line 585
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->b(Lcom/mbridge/msdk/reward/a/a;Z)Z

    .line 586
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 587
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v0

    const-string v1, ""

    iput-object v1, v0, Lcom/mbridge/msdk/reward/adapter/d;->c:Ljava/lang/String;

    .line 589
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    iget v1, p0, Lcom/mbridge/msdk/reward/a/a$d;->c:I

    .line 3169
    new-instance v2, Lcom/mbridge/msdk/reward/a/a$7;

    invoke-direct {v2, v0, v1}, Lcom/mbridge/msdk/reward/a/a$7;-><init>(Lcom/mbridge/msdk/reward/a/a;I)V

    .line 3190
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v0

    invoke-virtual {v0, v2}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    .line 590
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 592
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 593
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->j(Lcom/mbridge/msdk/reward/a/a;)V

    .line 595
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->k(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onAdShow(Lcom/mbridge/msdk/out/MBridgeIds;)V

    const/4 v0, 0x2

    .line 596
    iput v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->e:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 600
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_2

    .line 601
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    :goto_0
    return-void
.end method

.method public final a(ILjava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 769
    iput p1, p0, Lcom/mbridge/msdk/reward/a/a$d;->e:I

    const-string p1, "RewardVideoController"

    const-string p2, "===================== onAutoLoad ====================="

    .line 770
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 771
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    if-eqz p2, :cond_3

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result p2

    if-nez p2, :cond_3

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->p(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result p2

    if-nez p2, :cond_3

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    .line 772
    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->l(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object p2

    if-eqz p2, :cond_3

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    .line 773
    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->l(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object p2

    iget p3, p0, Lcom/mbridge/msdk/reward/a/a$d;->e:I

    invoke-virtual {p2, p3}, Lcom/mbridge/msdk/videocommon/d/c;->v(I)Z

    move-result p2

    if-eqz p2, :cond_3

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    .line 774
    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p2

    if-eqz p2, :cond_3

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    .line 775
    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p2

    const/4 p3, 0x1

    if-eq p2, p3, :cond_3

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    .line 776
    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p2

    const/4 p3, 0x3

    if-eq p2, p3, :cond_3

    .line 778
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->n(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/ArrayList;

    move-result-object p2

    iget p3, p0, Lcom/mbridge/msdk/reward/a/a$d;->e:I

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_0

    return-void

    .line 781
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->n(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/ArrayList;

    move-result-object p2

    iget p3, p0, Lcom/mbridge/msdk/reward/a/a$d;->e:I

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const-string p2, "===================== onAutoLoad \u8fdb\u6765\u4e86====================="

    .line 783
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 784
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->l(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/c;->E()I

    move-result p1

    mul-int/lit16 p1, p1, 0x3e8

    .line 785
    iget p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->e:I

    const/4 p3, 0x4

    if-ne p2, p3, :cond_1

    const/16 p1, 0xbb8

    .line 788
    :cond_1
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->d:Landroid/os/Handler;

    if-eqz p2, :cond_2

    const p3, 0xf4629

    .line 789
    invoke-virtual {p2, p3}, Landroid/os/Handler;->removeMessages(I)V

    .line 790
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->d:Landroid/os/Handler;

    int-to-long v0, p1

    invoke-virtual {p2, p3, v0, v1}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    goto :goto_0

    .line 792
    :cond_2
    new-instance p2, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p3

    invoke-direct {p2, p3}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 793
    new-instance p3, Lcom/mbridge/msdk/reward/a/a$d$1;

    invoke-direct {p3, p0}, Lcom/mbridge/msdk/reward/a/a$d$1;-><init>(Lcom/mbridge/msdk/reward/a/a$d;)V

    int-to-long v0, p1

    invoke-virtual {p2, p3, v0, v1}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_3
    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 11

    .line 635
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;Z)Z

    const-string v0, "RewardVideoController"

    const-string v2, "=====================onShowFail====================="

    .line 636
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 638
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_3

    .line 640
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 641
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->j(Lcom/mbridge/msdk/reward/a/a;)V

    .line 643
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->b(Lcom/mbridge/msdk/reward/a/a;Z)Z

    .line 644
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    if-eqz v0, :cond_3

    .line 647
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 648
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    invoke-virtual {v0, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    move-object v2, v0

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "show failed: "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    .line 649
    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v5

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v6

    const-string v7, ""

    const-string v8, ""

    const-wide/16 v9, 0x0

    .line 648
    invoke-static/range {v2 .. v10}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 654
    :catch_0
    :cond_1
    :try_start_2
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->k(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v2

    invoke-interface {v0, v2, p1}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_0

    :catch_1
    move-exception p1

    .line 656
    :try_start_3
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_2

    .line 657
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    const/4 p1, 0x4

    .line 660
    iput p1, p0, Lcom/mbridge/msdk/reward/a/a$d;->e:I
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    goto :goto_1

    :catch_2
    move-exception p1

    .line 664
    iput v1, p0, Lcom/mbridge/msdk/reward/a/a$d;->e:I

    .line 665
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_3

    .line 666
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_1
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const-string p1, "RewardVideoController"

    const-string p2, "=====================onVideoComplete====================="

    .line 697
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "onVideoComplete start"

    .line 698
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 700
    :try_start_0
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object p2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-eqz p2, :cond_1

    .line 702
    :try_start_1
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->k(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v0

    invoke-interface {p2, v0}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onVideoComplete(Lcom/mbridge/msdk/out/MBridgeIds;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 704
    :try_start_2
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_0

    .line 705
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    const/4 p2, 0x5

    .line 708
    iput p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->e:I

    const-string p2, "onEndcardShow callback"

    .line 709
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 712
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_1

    .line 713
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method

.method public final a(ZI)V
    .locals 3

    const-string v0, "RewardVideoController"

    const-string v1, "=====================onAdCloseWithIVReward====================="

    .line 720
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "onAdCloseWithIVReward start"

    .line 721
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 723
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 724
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    const/4 v2, 0x0

    invoke-static {v1, v2}, Lcom/mbridge/msdk/reward/a/a;->b(Lcom/mbridge/msdk/reward/a/a;Z)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 726
    :try_start_1
    new-instance v1, Lcom/mbridge/msdk/out/RewardInfo;

    invoke-direct {v1, p1, p2}, Lcom/mbridge/msdk/out/RewardInfo;-><init>(ZI)V

    .line 727
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->k(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object p2

    invoke-interface {p1, p2, v1}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onAdCloseWithIVReward(Lcom/mbridge/msdk/out/MBridgeIds;Lcom/mbridge/msdk/out/RewardInfo;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 729
    :try_start_2
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_0

    .line 730
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    const-string p1, "onAdCloseWithIVReward callback"

    .line 733
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 736
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_1

    .line 737
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method

.method public final a(ZLcom/mbridge/msdk/videocommon/b/d;)V
    .locals 3

    const-string v0, "RewardVideoController"

    const-string v1, "=====================onAdClose====================="

    .line 608
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 610
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object v1

    if-eqz v1, :cond_2

    if-nez p2, :cond_0

    .line 612
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->o(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/videocommon/b/d;->b(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/b/d;

    move-result-object p2

    .line 614
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 615
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->j(Lcom/mbridge/msdk/reward/a/a;)V

    .line 616
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-virtual {v1}, Lcom/mbridge/msdk/reward/a/a;->a()V

    .line 617
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-virtual {v2}, Lcom/mbridge/msdk/reward/a/a;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/same/a/d;->c(Ljava/lang/String;Ljava/lang/String;)V

    .line 619
    :cond_1
    new-instance v1, Lcom/mbridge/msdk/out/RewardInfo;

    invoke-virtual {p2}, Lcom/mbridge/msdk/videocommon/b/d;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2}, Lcom/mbridge/msdk/videocommon/b/d;->b()I

    move-result p2

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-direct {v1, p1, v2, p2}, Lcom/mbridge/msdk/out/RewardInfo;-><init>(ZLjava/lang/String;Ljava/lang/String;)V

    .line 620
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->k(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object p2

    invoke-interface {p1, p2, v1}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onAdClose(Lcom/mbridge/msdk/out/MBridgeIds;Lcom/mbridge/msdk/out/RewardInfo;)V

    const/4 p1, 0x7

    .line 621
    iput p1, p0, Lcom/mbridge/msdk/reward/a/a$d;->e:I

    const-string p1, "onAdClose start release"

    .line 622
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 623
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    const/4 p2, 0x0

    invoke-static {p1, p2}, Lcom/mbridge/msdk/reward/a/a;->b(Lcom/mbridge/msdk/reward/a/a;Z)Z

    .line 3575
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->n(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/ArrayList;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/ArrayList;->clear()V

    const/4 p1, 0x0

    .line 3576
    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 627
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_2

    .line 628
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    return-void
.end method

.method public final a(ZLjava/lang/String;Ljava/lang/String;)V
    .locals 0

    const-string p2, "RewardVideoController"

    const-string p3, "=====================onVideoAdClicked====================="

    .line 673
    invoke-static {p2, p3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 675
    :try_start_0
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object p2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-eqz p2, :cond_1

    .line 678
    :try_start_1
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 679
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->j(Lcom/mbridge/msdk/reward/a/a;)V

    .line 681
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object p2

    iget-object p3, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p3}, Lcom/mbridge/msdk/reward/a/a;->k(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object p3

    invoke-interface {p2, p1, p3}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onVideoAdClicked(ZLcom/mbridge/msdk/out/MBridgeIds;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 683
    :try_start_2
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_1

    .line 684
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_0

    :catch_1
    move-exception p1

    .line 689
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_1

    .line 690
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    const-string p1, "RewardVideoController"

    const-string v0, "=====================onEndcardShow====================="

    .line 744
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "onEndcardShow start"

    .line 745
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 747
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-eqz v0, :cond_1

    .line 749
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$d;->b:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$d;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->k(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onEndcardShow(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 750
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "_"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 p2, 0x2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p2}, Lcom/mbridge/msdk/foundation/b/b;->c(Ljava/lang/String;I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 752
    :try_start_2
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_0

    .line 753
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    const/4 p2, 0x6

    .line 756
    iput p2, p0, Lcom/mbridge/msdk/reward/a/a$d;->e:I

    const-string p2, "onEndcardShow callback"

    .line 757
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 760
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_1

    .line 761
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method

.method public final b()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
