.class final Lcom/tkay/rewardvideo/a/e$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/rewardvideo/a/e;->onRewardedVideoAdClosed()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/rewardvideo/a/e;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/a/e;)V
    .locals 0

    .line 216
    iput-object p1, p0, Lcom/tkay/rewardvideo/a/e$1;->a:Lcom/tkay/rewardvideo/a/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 220
    :try_start_0
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e$1;->a:Lcom/tkay/rewardvideo/a/e;

    invoke-static {v0}, Lcom/tkay/rewardvideo/a/e;->a(Lcom/tkay/rewardvideo/a/e;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->clearImpressionListener()V

    .line 221
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e$1;->a:Lcom/tkay/rewardvideo/a/e;

    invoke-static {v0}, Lcom/tkay/rewardvideo/a/e;->a(Lcom/tkay/rewardvideo/a/e;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->destory()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
