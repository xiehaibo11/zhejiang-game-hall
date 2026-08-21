.class final Lcom/mbridge/msdk/reward/a/a$5;
.super Ljava/lang/Object;
.source "RewardVideoController.java"

# interfaces
.implements Lcom/mbridge/msdk/reward/adapter/c$i;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/reward/a/a;->a(Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/mbridge/msdk/reward/adapter/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic c:I

.field final synthetic d:Lcom/mbridge/msdk/reward/a/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/a/a;ZLcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 0

    .line 1517
    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    iput-boolean p2, p0, Lcom/mbridge/msdk/reward/a/a$5;->a:Z

    iput-object p3, p0, Lcom/mbridge/msdk/reward/a/a$5;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput p4, p0, Lcom/mbridge/msdk/reward/a/a$5;->c:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    const-string p1, "RewardVideoController"

    const-string p2, "Cache template \u4e0b\u8f7d\u6210\u529f\uff1a "

    .line 1520
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 8

    const-string p1, "RewardVideoController"

    const-string p4, "Cache template \u4e0b\u8f7d\u5931\u8d25\uff1a "

    .line 1525
    invoke-static {p1, p4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1526
    iget-object p4, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p4}, Lcom/mbridge/msdk/reward/a/a;->b(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/List;

    move-result-object v0

    invoke-static {p4, p2, v0}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;Ljava/lang/String;Ljava/util/List;)V

    .line 1527
    iget-boolean p2, p0, Lcom/mbridge/msdk/reward/a/a$5;->a:Z

    const/4 p4, 0x0

    const-string v0, "errorCode: 3202 errorMessage: temp resource download failed"

    const/4 v1, 0x1

    if-nez p2, :cond_1

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 1528
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    iget-boolean p1, p1, Lcom/mbridge/msdk/reward/a/a;->f:Z

    if-nez p1, :cond_3

    .line 1529
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    iput-boolean v1, p1, Lcom/mbridge/msdk/reward/a/a;->f:Z

    .line 1530
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p1

    if-lez p1, :cond_0

    .line 1531
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->m(Lcom/mbridge/msdk/reward/a/a;)Landroid/content/Context;

    move-result-object v1

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p1

    invoke-virtual {p1, p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object p1

    move-object v2, p1

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, ""

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v4

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v5

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v7

    move-object v6, p3

    invoke-static/range {v1 .. v7}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 1533
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p1

    invoke-static {p1, v0}, Lcom/mbridge/msdk/reward/a/a$c;->d(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    goto :goto_0

    .line 1536
    :cond_1
    iget p2, p0, Lcom/mbridge/msdk/reward/a/a$5;->c:I

    if-ne p2, v1, :cond_3

    const-string p2, "\u64ad\u653e\u6a21\u677f\u4e0b\u8f7d\u5931\u8d25\uff0c\u5927\u6a21\u677f\uff0cnscpt 1"

    .line 1537
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1538
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    iget-boolean p1, p1, Lcom/mbridge/msdk/reward/a/a;->f:Z

    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 1539
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    iput-boolean v1, p1, Lcom/mbridge/msdk/reward/a/a;->f:Z

    .line 1540
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p1

    if-lez p1, :cond_2

    .line 1541
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->m(Lcom/mbridge/msdk/reward/a/a;)Landroid/content/Context;

    move-result-object v1

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p1

    invoke-virtual {p1, p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object p1

    move-object v2, p1

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v4

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v5

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v7

    const-string v3, "temp resource download failed"

    move-object v6, p3

    invoke-static/range {v1 .. v7}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 1543
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$5;->d:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p1

    invoke-static {p1, v0}, Lcom/mbridge/msdk/reward/a/a$c;->d(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method
