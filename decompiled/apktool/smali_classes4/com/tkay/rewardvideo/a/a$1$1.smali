.class final Lcom/tkay/rewardvideo/a/a$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/rewardvideo/a/a$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

.field final synthetic b:Lcom/tkay/rewardvideo/a/a$1;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/a/a$1;Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;)V
    .locals 0

    .line 105
    iput-object p1, p0, Lcom/tkay/rewardvideo/a/a$1$1;->b:Lcom/tkay/rewardvideo/a/a$1;

    iput-object p2, p0, Lcom/tkay/rewardvideo/a/a$1$1;->a:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    .line 108
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/a$1$1;->a:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/a$1$1;->b:Lcom/tkay/rewardvideo/a/a$1;

    iget-object v1, v1, Lcom/tkay/rewardvideo/a/a$1;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->setScenario(Ljava/lang/String;)V

    .line 109
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 111
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/a$1$1;->a:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/tkay/rewardvideo/a/a$1$1;->b:Lcom/tkay/rewardvideo/a/a$1;

    iget-object v3, v3, Lcom/tkay/rewardvideo/a/a$1;->e:Lcom/tkay/core/api/TYEventInterface;

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/core/api/IExHandler;->createDownloadListener(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/api/BaseAd;Lcom/tkay/core/api/TYEventInterface;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->setAdDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V

    .line 113
    :cond_0
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/a$1$1;->a:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/a$1$1;->b:Lcom/tkay/rewardvideo/a/a$1;

    iget-object v1, v1, Lcom/tkay/rewardvideo/a/a$1;->d:Landroid/app/Activity;

    new-instance v2, Lcom/tkay/rewardvideo/a/e;

    iget-object v3, p0, Lcom/tkay/rewardvideo/a/a$1$1;->a:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->A()Lcom/tkay/core/common/g/c;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/rewardvideo/a/a$1$1;->b:Lcom/tkay/rewardvideo/a/a$1;

    iget-object v5, v5, Lcom/tkay/rewardvideo/a/a$1;->f:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    invoke-direct {v2, v3, v4, v5}, Lcom/tkay/rewardvideo/a/e;-><init>(Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;Lcom/tkay/core/common/g/c;Lcom/tkay/rewardvideo/api/TYRewardVideoListener;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->internalShow(Landroid/app/Activity;Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;)V

    return-void
.end method
