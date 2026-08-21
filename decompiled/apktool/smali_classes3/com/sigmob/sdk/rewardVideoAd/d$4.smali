.class Lcom/sigmob/sdk/rewardVideoAd/d$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/rewardVideoAd/d;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/rewardVideoAd/d;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/rewardVideoAd/d;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$4;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d$4;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/rewardVideoAd/d;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    return-void
.end method
