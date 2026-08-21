.class final Lcom/tkay/rewardvideo/a/c$11;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/rewardvideo/a/c;->onAgainReward(Lcom/tkay/core/api/TYAdInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/TYAdInfo;

.field final synthetic b:Lcom/tkay/rewardvideo/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    .line 101
    iput-object p1, p0, Lcom/tkay/rewardvideo/a/c$11;->b:Lcom/tkay/rewardvideo/a/c;

    iput-object p2, p0, Lcom/tkay/rewardvideo/a/c$11;->a:Lcom/tkay/core/api/TYAdInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 104
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/c$11;->b:Lcom/tkay/rewardvideo/a/c;

    iget-object v0, v0, Lcom/tkay/rewardvideo/a/c;->a:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;

    if-eqz v0, :cond_0

    .line 105
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/c$11;->b:Lcom/tkay/rewardvideo/a/c;

    iget-object v0, v0, Lcom/tkay/rewardvideo/a/c;->a:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/c$11;->a:Lcom/tkay/core/api/TYAdInfo;

    invoke-virtual {v0, v1}, Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;->onAgainReward(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_0
    return-void
.end method
