.class final Lcom/tkay/rewardvideo/a/c$9;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/rewardvideo/a/c;->onRewardedVideoAdAgainPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/AdError;

.field final synthetic b:Lcom/tkay/core/api/TYAdInfo;

.field final synthetic c:Lcom/tkay/rewardvideo/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/tkay/rewardvideo/a/c$9;->c:Lcom/tkay/rewardvideo/a/c;

    iput-object p2, p0, Lcom/tkay/rewardvideo/a/c$9;->a:Lcom/tkay/core/api/AdError;

    iput-object p3, p0, Lcom/tkay/rewardvideo/a/c$9;->b:Lcom/tkay/core/api/TYAdInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 80
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/c$9;->c:Lcom/tkay/rewardvideo/a/c;

    iget-object v0, v0, Lcom/tkay/rewardvideo/a/c;->a:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;

    if-eqz v0, :cond_0

    .line 81
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/c$9;->c:Lcom/tkay/rewardvideo/a/c;

    iget-object v0, v0, Lcom/tkay/rewardvideo/a/c;->a:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/c$9;->a:Lcom/tkay/core/api/AdError;

    iget-object v2, p0, Lcom/tkay/rewardvideo/a/c$9;->b:Lcom/tkay/core/api/TYAdInfo;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;->onRewardedVideoAdAgainPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V

    :cond_0
    return-void
.end method
