.class final Lcom/tkay/rewardvideo/a/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/rewardvideo/a/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/rewardvideo/a/d;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/a/d;)V
    .locals 0

    .line 41
    iput-object p1, p0, Lcom/tkay/rewardvideo/a/d$1;->a:Lcom/tkay/rewardvideo/a/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onRewardVideoAutoLoadFail(Ljava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 2

    .line 56
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/d$1$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/rewardvideo/a/d$1$2;-><init>(Lcom/tkay/rewardvideo/a/d$1;Ljava/lang/String;Lcom/tkay/core/api/AdError;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onRewardVideoAutoLoaded(Ljava/lang/String;)V
    .locals 2

    .line 44
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/d$1$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/a/d$1$1;-><init>(Lcom/tkay/rewardvideo/a/d$1;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
