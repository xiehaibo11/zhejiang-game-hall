.class final Lcom/tkay/rewardvideo/a/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/rewardvideo/a/a;->a(Landroid/app/Activity;Ljava/lang/String;Lcom/tkay/rewardvideo/api/TYRewardVideoListener;Lcom/tkay/core/api/TYEventInterface;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/a;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/util/Map;

.field final synthetic d:Landroid/app/Activity;

.field final synthetic e:Lcom/tkay/core/api/TYEventInterface;

.field final synthetic f:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

.field final synthetic g:Lcom/tkay/rewardvideo/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/a/a;Lcom/tkay/core/common/f/a;Ljava/lang/String;Ljava/util/Map;Landroid/app/Activity;Lcom/tkay/core/api/TYEventInterface;Lcom/tkay/rewardvideo/api/TYRewardVideoListener;)V
    .locals 0

    .line 79
    iput-object p1, p0, Lcom/tkay/rewardvideo/a/a$1;->g:Lcom/tkay/rewardvideo/a/a;

    iput-object p2, p0, Lcom/tkay/rewardvideo/a/a$1;->a:Lcom/tkay/core/common/f/a;

    iput-object p3, p0, Lcom/tkay/rewardvideo/a/a$1;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/rewardvideo/a/a$1;->c:Ljava/util/Map;

    iput-object p5, p0, Lcom/tkay/rewardvideo/a/a$1;->d:Landroid/app/Activity;

    iput-object p6, p0, Lcom/tkay/rewardvideo/a/a$1;->e:Lcom/tkay/core/api/TYEventInterface;

    iput-object p7, p0, Lcom/tkay/rewardvideo/a/a$1;->f:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 82
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/a$1;->a:Lcom/tkay/core/common/f/a;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v3

    .line 83
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    if-eqz v3, :cond_0

    .line 86
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/a$1;->g:Lcom/tkay/rewardvideo/a/a;

    invoke-static {v0}, Lcom/tkay/rewardvideo/a/a;->a(Lcom/tkay/rewardvideo/a/a;)Ljava/lang/String;

    move-result-object v0

    .line 1578
    iput-object v0, v3, Lcom/tkay/core/common/f/d;->v:Ljava/lang/String;

    .line 87
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/a$1;->b:Ljava/lang/String;

    .line 2406
    iput-object v0, v3, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    .line 88
    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, v5, v6}, Lcom/tkay/core/common/l/g;->a(Ljava/lang/String;Ljava/lang/String;J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/d;->h(Ljava/lang/String;)V

    .line 91
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/a$1;->g:Lcom/tkay/rewardvideo/a/a;

    invoke-static {v0}, Lcom/tkay/rewardvideo/a/a;->b(Lcom/tkay/rewardvideo/a/a;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v3}, Lcom/tkay/core/common/l/s;->a(Landroid/content/Context;Lcom/tkay/core/common/f/d;)V

    .line 92
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/a$1;->c:Ljava/util/Map;

    invoke-static {v0, v3}, Lcom/tkay/core/common/l/s;->a(Ljava/util/Map;Lcom/tkay/core/common/f/d;)V

    .line 95
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/a$1;->g:Lcom/tkay/rewardvideo/a/a;

    invoke-static {v1}, Lcom/tkay/rewardvideo/a/a;->c(Lcom/tkay/rewardvideo/a/a;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/rewardvideo/a/a$1;->a:Lcom/tkay/core/common/f/a;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/a;->a(Landroid/content/Context;Lcom/tkay/core/common/f/a;)V

    .line 97
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/a$1;->g:Lcom/tkay/rewardvideo/a/a;

    invoke-static {v0}, Lcom/tkay/rewardvideo/a/a;->d(Lcom/tkay/rewardvideo/a/a;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/16 v2, 0xd

    iget-object v0, p0, Lcom/tkay/rewardvideo/a/a$1;->a:Lcom/tkay/core/common/f/a;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v4

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;J)V

    .line 100
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/a$1;->a:Lcom/tkay/core/common/f/a;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    check-cast v0, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    .line 101
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/a$1;->d:Landroid/app/Activity;

    if-eqz v1, :cond_1

    .line 102
    invoke-virtual {v0, v1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->refreshActivityContext(Landroid/app/Activity;)V

    .line 105
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    new-instance v2, Lcom/tkay/rewardvideo/a/a$1$1;

    invoke-direct {v2, p0, v0}, Lcom/tkay/rewardvideo/a/a$1$1;-><init>(Lcom/tkay/rewardvideo/a/a$1;Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;)V

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
