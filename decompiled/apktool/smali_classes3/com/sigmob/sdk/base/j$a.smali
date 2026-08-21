.class Lcom/sigmob/sdk/base/j$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/rewardVideoAd/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/j;

.field private b:Lcom/sigmob/sdk/rewardVideoAd/f;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/j;Lcom/sigmob/sdk/rewardVideoAd/f;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/j$a;->a:Lcom/sigmob/sdk/base/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p2, p0, Lcom/sigmob/sdk/base/j$a;->b:Lcom/sigmob/sdk/rewardVideoAd/f;

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/j$a;)Lcom/sigmob/sdk/rewardVideoAd/f;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/j$a;->b:Lcom/sigmob/sdk/rewardVideoAd/f;

    return-object p0
.end method


# virtual methods
.method public onVideoAdLoadError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onVideoAdLoadError |"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/j$a;->a:Lcom/sigmob/sdk/base/j;

    iget-object v1, v1, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$a;->a:Lcom/sigmob/sdk/base/j;

    iget-object v0, v0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusPlaying:Lcom/czhj/sdk/common/models/AdStatus;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$a;->a:Lcom/sigmob/sdk/base/j;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v1, v0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/j$a;->a:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->a(Lcom/sigmob/sdk/base/j;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/j$a$4;

    invoke-direct {v1, p0, p1, p2}, Lcom/sigmob/sdk/base/j$a$4;-><init>(Lcom/sigmob/sdk/base/j$a;Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onVideoAdLoadSuccess(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onVideoAdLoadSuccess |"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/j$a;->a:Lcom/sigmob/sdk/base/j;

    iget-object v1, v1, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$a;->a:Lcom/sigmob/sdk/base/j;

    iget-object v0, v0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusPlaying:Lcom/czhj/sdk/common/models/AdStatus;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$a;->a:Lcom/sigmob/sdk/base/j;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v1, v0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/j$a;->a:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->a(Lcom/sigmob/sdk/base/j;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/j$a$1;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/sdk/base/j$a$1;-><init>(Lcom/sigmob/sdk/base/j$a;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onVideoAdPreLoadFail(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onVideoAdPreLoadFail |"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/j$a;->a:Lcom/sigmob/sdk/base/j;

    iget-object v1, v1, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$a;->a:Lcom/sigmob/sdk/base/j;

    iget-object v0, v0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusPlaying:Lcom/czhj/sdk/common/models/AdStatus;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$a;->a:Lcom/sigmob/sdk/base/j;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v1, v0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/j$a;->a:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->a(Lcom/sigmob/sdk/base/j;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/j$a$3;

    invoke-direct {v1, p0, p1, p2}, Lcom/sigmob/sdk/base/j$a$3;-><init>(Lcom/sigmob/sdk/base/j$a;Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onVideoAdPreLoadSuccess(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$a;->a:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->a(Lcom/sigmob/sdk/base/j;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/j$a$2;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/sdk/base/j$a$2;-><init>(Lcom/sigmob/sdk/base/j$a;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
