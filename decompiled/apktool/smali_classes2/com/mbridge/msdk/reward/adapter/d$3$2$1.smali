.class final Lcom/mbridge/msdk/reward/adapter/d$3$2$1;
.super Ljava/lang/Object;
.source "RewardMVVideoAdapter.java"

# interfaces
.implements Lcom/mbridge/msdk/reward/adapter/c$j;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/reward/adapter/d$3$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/reward/adapter/d$3$2;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/adapter/d$3$2;)V
    .locals 0

    .line 2222
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V
    .locals 9

    const/4 p1, 0x0

    :try_start_0
    const-string p2, "HBOPTIMIZE"

    .line 2227
    new-instance p5, Ljava/lang/StringBuilder;

    invoke-direct {p5}, Ljava/lang/StringBuilder;-><init>()V

    const-string p6, "\u6a21\u677f\u52a0\u8f7d\u6210\u529f requestId "

    invoke-virtual {p5, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p5, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p5

    invoke-static {p2, p5}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2228
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/adapter/d$3$2;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object p2

    move-object v0, p2

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p5, "preload template success is tpl :"

    invoke-virtual {p2, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p5, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-boolean p5, p5, Lcom/mbridge/msdk/reward/adapter/d$3;->a:Z

    invoke-virtual {p2, p5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v3

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v4

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, p2, Lcom/mbridge/msdk/reward/adapter/d$3$2;->a:Ljava/lang/String;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/adapter/d$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v6

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p5

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p2, p2, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v7

    sub-long v7, p5, v7

    invoke-static/range {v0 .. v8}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    const-string p2, "RewardMVVideoAdapter"

    const-string p5, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u5927\u6a21\u677f\u9884\u52a0\u8f7d\u6210\u529f"

    .line 2232
    invoke-static {p2, p5}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2233
    iget-object p5, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object p6, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p6, p6, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p6, p6, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p6}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p6

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v0, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-boolean v0, v0, Lcom/mbridge/msdk/reward/adapter/d$3;->a:Z

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v1, v1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget v1, v1, Lcom/mbridge/msdk/reward/adapter/d$3;->c:I

    invoke-virtual {p5, p6, v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;ZI)Z

    move-result p5

    const/4 p6, 0x1

    const/4 v0, 0x5

    if-eqz p5, :cond_2

    const-string p1, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u5927\u6a21\u677f\u9884\u52a0\u8f7d\u6210\u529f,isReady true"

    .line 2234
    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2235
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object p3

    iget-object p4, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p4, p4, Lcom/mbridge/msdk/reward/adapter/d$3$2;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    iget-object p5, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p5}, Lcom/mbridge/msdk/reward/adapter/d;->g(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object p5

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v1, v1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v1, v1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v1

    invoke-static {p1, p3, p4, p5, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Z)V

    .line 2236
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 2237
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 2239
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 2240
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean p1, p1, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    if-nez p1, :cond_5

    .line 2241
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean p6, p1, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    .line 2242
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 2243
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p3

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide p5

    sub-long/2addr p3, p5

    .line 2244
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object p1

    iget-object p5, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p5}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p5

    iget-object p6, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p6, p6, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p6, p6, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p6}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object p6

    invoke-static {p1, p5, p6, p3, p4}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;J)V

    .line 2246
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/reward/adapter/b;->a()V

    const-string p1, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u5927\u6a21\u677f\u9884\u52a0\u8f7d\u6210\u529f,isReady true onVideoLoadSuccess"

    .line 2247
    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    :cond_2
    const-string p5, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u5927\u6a21\u677f\u9884\u52a0\u8f7d\u6210\u529f,isReady false"

    .line 2251
    invoke-static {p2, p5}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2252
    iget-object p5, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p5, p5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v1, v1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v1, v1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v2, v2, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v2, v2, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v2

    invoke-static {p5, p3, v1, v2}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Z)V

    .line 2253
    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p3}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object p3

    if-eqz p3, :cond_3

    .line 2254
    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p3}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object p3

    invoke-virtual {p3, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 2256
    :cond_3
    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p3}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object p3

    if-eqz p3, :cond_5

    .line 2257
    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean p3, p3, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    if-nez p3, :cond_5

    .line 2258
    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean p6, p3, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 2259
    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_4

    .line 2260
    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object p3

    if-eqz p3, :cond_4

    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object p3

    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p3

    if-lez p3, :cond_4

    .line 2261
    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p3}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v0

    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p3, p3, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object p3

    invoke-interface {p3, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    move-object v1, p1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v3

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v4

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v6

    const-string v2, "tpl temp preload success but isReady false"

    move-object v5, p4

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 2264
    :cond_4
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object p1

    const-string p3, "errorCode: 3505 errorMessage: tpl temp preload success but isReady false"

    invoke-interface {p1, p3}, Lcom/mbridge/msdk/reward/adapter/b;->a(Ljava/lang/String;)V

    const-string p1, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u5927\u6a21\u677f\u9884\u52a0\u8f7d\u6210\u529f,isReady false onVideoLoadFail"

    .line 2265
    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Ljava/lang/String;)V
    .locals 17

    move-object/from16 v0, p0

    move-object/from16 v1, p7

    const-string v2, "RewardMVVideoAdapter"

    const-string v3, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u5927\u6a21\u677f\u9884\u52a0\u8f7d\u5931\u8d25"

    .line 2273
    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2274
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

    const/4 v3, 0x0

    .line 2277
    :try_start_0
    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v5, v3}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v5

    move-object v6, v5

    check-cast v6, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v7

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "preload template failed is tpl :"

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v8, v8, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-boolean v8, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->a:Z

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v8, " "

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v9

    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v10

    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v11, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->a:Ljava/lang/String;

    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v12

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v13

    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v15

    sub-long/2addr v13, v15

    invoke-static/range {v6 .. v14}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 2282
    :catch_0
    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v5

    if-eqz v5, :cond_0

    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v5

    invoke-virtual {v5}, Ljava/util/ArrayList;->size()I

    move-result v5

    if-lez v5, :cond_0

    .line 2283
    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v5

    const/4 v6, 0x3

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_0

    const-string v1, "template download fail but hit ignoreCheckRule"

    .line 2284
    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 2289
    :cond_0
    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v6, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v6, v6, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v6, v6, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v6}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v6

    iget-object v7, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v7, v7, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v7, v7, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v7

    move-object/from16 v8, p3

    invoke-static {v5, v8, v6, v7}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Z)V

    .line 2291
    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v5

    if-eqz v5, :cond_1

    .line 2292
    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v5

    const/4 v6, 0x5

    invoke-virtual {v5, v6}, Landroid/os/Handler;->removeMessages(I)V

    .line 2294
    :cond_1
    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v5

    if-eqz v5, :cond_3

    .line 2295
    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v5, v5, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    if-nez v5, :cond_3

    .line 2296
    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    const/4 v6, 0x1

    iput-boolean v6, v5, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 2297
    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v5

    if-eqz v5, :cond_2

    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v5

    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v5

    if-lez v5, :cond_2

    .line 2298
    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v5, v5, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v5

    iget-object v6, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v6, v6, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v6, v6, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v6}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

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

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v8

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v9

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v11

    move-object/from16 v10, p4

    invoke-static/range {v5 .. v11}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 2300
    :cond_2
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$3$2$1;->a:Lcom/mbridge/msdk/reward/adapter/d$3$2;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$3$2;->d:Lcom/mbridge/msdk/reward/adapter/d$3;

    iget-object v3, v3, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

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

    const-string v1, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u5927\u6a21\u677f\u9884\u52a0\u8f7d\u5931\u8d25 onVideoLoadFail"

    .line 2301
    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method
