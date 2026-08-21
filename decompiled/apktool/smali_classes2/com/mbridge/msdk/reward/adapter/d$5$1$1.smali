.class final Lcom/mbridge/msdk/reward/adapter/d$5$1$1;
.super Ljava/lang/Object;
.source "RewardMVVideoAdapter.java"

# interfaces
.implements Lcom/mbridge/msdk/reward/adapter/c$j;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/reward/adapter/d$5$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/reward/adapter/d$5$1;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/adapter/d$5$1;)V
    .locals 0

    .line 2452
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V
    .locals 9

    .line 2455
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "\u6a21\u677f\u52a0\u8f7d\u6210\u529f requestId "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "HBOPTIMIZE"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2457
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v0, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v1

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "preload template success is tpl :"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-boolean p2, p2, Lcom/mbridge/msdk/reward/adapter/d$5;->b:Z

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v3

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v4

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v5, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->a:Ljava/lang/String;

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v6

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iget-object p5, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p5}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide p5

    sub-long v7, p1, p5

    invoke-static/range {v0 .. v8}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 2461
    :catch_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p2

    iget-object p5, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-boolean p5, p5, Lcom/mbridge/msdk/reward/adapter/d$5;->b:Z

    iget-object p6, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p6, p6, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget p6, p6, Lcom/mbridge/msdk/reward/adapter/d$5;->c:I

    invoke-virtual {p1, p2, p5, p6}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;ZI)Z

    move-result p1

    const/4 p2, 0x1

    const/4 p5, 0x5

    const-string p6, "RewardMVVideoAdapter"

    if-eqz p1, :cond_2

    const-string p1, "\u5927\u6a21\u677f\u4e1a\u52a1\uff0c\u5927\u6a21\u677f\u9884\u52a0\u8f7d\u6210\u529f\uff0cisReady true"

    .line 2462
    invoke-static {p6, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2463
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object p3

    iget-object p4, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p4, p4, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p4, p4, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p4}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object p4

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v0, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v0, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->g(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v1, v1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v1, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v1

    invoke-static {p1, p3, p4, v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Z)V

    .line 2465
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 2466
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, p5}, Landroid/os/Handler;->removeMessages(I)V

    .line 2468
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 2469
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean p1, p1, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    if-nez p1, :cond_5

    .line 2470
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean p2, p1, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    .line 2472
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 2473
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p3}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide p3

    sub-long/2addr p1, p3

    .line 2474
    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p3}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object p3

    iget-object p4, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p4, p4, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p4, p4, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p4}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p4

    iget-object p5, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p5}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object p5

    invoke-static {p3, p4, p5, p1, p2}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;J)V

    .line 2476
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/reward/adapter/b;->a()V

    const-string p1, "\u5927\u6a21\u677f\u4e1a\u52a1\uff0c\u5927\u6a21\u677f\u9884\u52a0\u8f7d\u6210\u529f\uff0cisReady true onVideoLoadSuccess"

    .line 2477
    invoke-static {p6, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    :cond_2
    const-string p1, "\u5927\u6a21\u677f\u4e1a\u52a1\uff0c\u5927\u6a21\u677f\u9884\u52a0\u8f7d\u6210\u529f\uff0cisReady false"

    .line 2481
    invoke-static {p6, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2482
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v0, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v0, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v1, v1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v1, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v1

    invoke-static {p1, p3, v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Z)V

    .line 2483
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 2484
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, p5}, Landroid/os/Handler;->removeMessages(I)V

    .line 2486
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 2487
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean p1, p1, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    if-nez p1, :cond_5

    .line 2488
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean p2, p1, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 2489
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_4

    .line 2490
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v0

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object p1

    const/4 p2, 0x0

    invoke-interface {p1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    move-object v1, p1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v3

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v4

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v6

    const-string v2, "tpl temp preload success but isReady false"

    move-object v5, p4

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 2492
    :cond_4
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object p1

    const-string p2, "errorCode: 3505 errorMessage: tpl temp preload success but isReady false"

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/reward/adapter/b;->a(Ljava/lang/String;)V

    const-string p1, "\u5927\u6a21\u677f\u4e1a\u52a1\uff0c\u5927\u6a21\u677f\u9884\u52a0\u8f7d\u6210\u529f isReady false  onVideoLoadFail"

    .line 2493
    invoke-static {p6, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Ljava/lang/String;)V
    .locals 16

    move-object/from16 v0, p0

    move-object/from16 v1, p7

    const-string v2, "RewardMVVideoAdapter"

    const-string v3, "\u5927\u6a21\u677f\u4e1a\u52a1\uff0c\u5927\u6a21\u677f\u9884\u52a0\u8f7d\u5931\u8d25"

    .line 2501
    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2502
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u6a21\u677f\u52a0\u8f7d\u5931\u8d25 requestId "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v4, p4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v5, "HBOPTIMIZE"

    invoke-static {v5, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2503
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v5

    iget-object v6, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v6, v6, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v6, v6, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v6}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v6

    move-object/from16 v7, p3

    invoke-static {v3, v7, v5, v6}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Z)V

    .line 2505
    :try_start_0
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v5, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v6

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "preload template failed is tpl :"

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v7, v7, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-boolean v7, v7, Lcom/mbridge/msdk/reward/adapter/d$5;->b:Z

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v7, " "

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v8

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v9

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v10, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->a:Ljava/lang/String;

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v11

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v12

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v14

    sub-long/2addr v12, v14

    invoke-static/range {v5 .. v13}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 2509
    :catch_0
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 2510
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v3

    const/4 v5, 0x5

    invoke-virtual {v3, v5}, Landroid/os/Handler;->removeMessages(I)V

    .line 2512
    :cond_0
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v3

    if-eqz v3, :cond_2

    .line 2513
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v3, v3, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    if-nez v3, :cond_2

    .line 2514
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    const/4 v5, 0x1

    iput-boolean v5, v3, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 2515
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v3

    if-eqz v3, :cond_1

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_1

    .line 2516
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v5

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v3

    const/4 v6, 0x0

    invoke-interface {v3, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    move-object v6, v3

    check-cast v6, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "tpl temp preload failed: "

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v8

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v9

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v11

    move-object/from16 v10, p4

    invoke-static/range {v5 .. v11}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 2518
    :cond_1
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5$1$1;->a:Lcom/mbridge/msdk/reward/adapter/d$5$1;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5$1;->d:Lcom/mbridge/msdk/reward/adapter/d$5;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "errorCode: 3303 errorMessage: tpl temp preload failed: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v3, v1}, Lcom/mbridge/msdk/reward/adapter/b;->a(Ljava/lang/String;)V

    const-string v1, "\u5927\u6a21\u677f\u4e1a\u52a1\uff0c\u5927\u6a21\u677f\u9884\u52a0\u8f7d\u5931\u8d25 onVideoLoadFail"

    .line 2519
    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method
