.class final Lcom/mbridge/msdk/reward/a/a$4$1$1;
.super Ljava/lang/Object;
.source "RewardVideoController.java"

# interfaces
.implements Lcom/mbridge/msdk/reward/adapter/c$j;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/reward/a/a$4$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/reward/a/a$4$1;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/a/a$4$1;)V
    .locals 0

    .line 1370
    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V
    .locals 7

    const-string p1, "RewardVideoController"

    const-string p5, "Campaign Cache \u4e0b\u8f7d\u6210\u529f\uff1a \u975e\u5927\u6a21\u677f\uff0c\u64ad\u653e\u6a21\u677f\u9884\u52a0\u8f7d"

    .line 1373
    invoke-static {p1, p5}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1375
    iget-object p5, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/a/a$4;->c:Lcom/mbridge/msdk/reward/adapter/d;

    const/4 p6, 0x1

    if-eqz p5, :cond_0

    iget-object p5, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/a/a$4;->c:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object v0, v0, Lcom/mbridge/msdk/reward/a/a$4$1;->b:Ljava/util/concurrent/CopyOnWriteArrayList;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object v1, v1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-boolean v1, v1, Lcom/mbridge/msdk/reward/a/a$4;->a:Z

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object v2, v2, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget v2, v2, Lcom/mbridge/msdk/reward/a/a$4;->d:I

    invoke-virtual {p5, v0, v1, v2}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;ZI)Z

    move-result p5

    if-eqz p5, :cond_0

    .line 1378
    iget-object p4, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p4, p4, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p4, p4, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p4}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p4

    if-eqz p4, :cond_1

    .line 1379
    iget-object p4, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p4, p4, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p4, p4, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iget-boolean p4, p4, Lcom/mbridge/msdk/reward/a/a;->g:Z

    if-nez p4, :cond_1

    .line 1380
    iget-object p4, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p4, p4, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p4, p4, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iput-boolean p6, p4, Lcom/mbridge/msdk/reward/a/a;->g:Z

    const-string p4, "Cache onVideoLoadSuccessForCache"

    .line 1381
    invoke-static {p1, p4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1382
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->m(Lcom/mbridge/msdk/reward/a/a;)Landroid/content/Context;

    move-result-object p1

    iget-object p4, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p4, p4, Lcom/mbridge/msdk/reward/a/a$4$1;->b:Ljava/util/concurrent/CopyOnWriteArrayList;

    iget-object p5, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p5}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object p5

    const-wide/16 v0, 0x0

    invoke-static {p1, p4, p5, v0, v1}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;J)V

    .line 1383
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p1

    invoke-static {p1, p2, p3}, Lcom/mbridge/msdk/reward/a/a$c;->b(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 1387
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iget-object p5, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p5}, Lcom/mbridge/msdk/reward/a/a;->b(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/List;

    move-result-object p5

    invoke-static {p2, p3, p5}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;Ljava/lang/String;Ljava/util/List;)V

    .line 1388
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 1389
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iget-boolean p2, p2, Lcom/mbridge/msdk/reward/a/a;->f:Z

    if-nez p2, :cond_1

    .line 1390
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iput-boolean p6, p2, Lcom/mbridge/msdk/reward/a/a;->f:Z

    const-string p2, "Cache onVideoLoadFailForCache"

    .line 1391
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1392
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->m(Lcom/mbridge/msdk/reward/a/a;)Landroid/content/Context;

    move-result-object v0

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object v1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v3

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v4

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v6

    const-string v2, "temp preload success but isReady false"

    move-object v5, p4

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 1393
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p1

    const-string p2, "errorCode: 3502 errorMessage: temp preload success but isReady false"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/reward/a/a$c;->d(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Ljava/lang/String;)V
    .locals 7

    const-string p1, "RewardVideoController"

    const-string p2, "Campaign Cache \u4e0b\u8f7d\u6210\u529f\uff1a \u975e\u5927\u6a21\u677f\uff0c\u64ad\u653e\u6a21\u677f\u9884\u52a0\u8f7d\u5931\u8d25"

    .line 1401
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1402
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->b(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/List;

    move-result-object p2

    invoke-static {p1, p3, p2}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;Ljava/lang/String;Ljava/util/List;)V

    .line 1403
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 1404
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iget-boolean p1, p1, Lcom/mbridge/msdk/reward/a/a;->f:Z

    if-nez p1, :cond_0

    .line 1405
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    const/4 p2, 0x1

    iput-boolean p2, p1, Lcom/mbridge/msdk/reward/a/a;->f:Z

    .line 1406
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->m(Lcom/mbridge/msdk/reward/a/a;)Landroid/content/Context;

    move-result-object v0

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object v1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "temp preload failed: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v3

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v4

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v6

    move-object v5, p4

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 1407
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4$1$1;->a:Lcom/mbridge/msdk/reward/a/a$4$1;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4$1;->f:Lcom/mbridge/msdk/reward/a/a$4;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "errorCode: 3301 errorMessage: temp preload failed: "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/reward/a/a$c;->d(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
