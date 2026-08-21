.class final Lcom/tkay/rewardvideo/a/d$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/rewardvideo/a/d$1;->onRewardVideoAutoLoadFail(Ljava/lang/String;Lcom/tkay/core/api/AdError;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/core/api/AdError;

.field final synthetic c:Lcom/tkay/rewardvideo/a/d$1;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/a/d$1;Ljava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/tkay/rewardvideo/a/d$1$2;->c:Lcom/tkay/rewardvideo/a/d$1;

    iput-object p2, p0, Lcom/tkay/rewardvideo/a/d$1$2;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/rewardvideo/a/d$1$2;->b:Lcom/tkay/core/api/AdError;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 59
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/d$1$2;->c:Lcom/tkay/rewardvideo/a/d$1;

    iget-object v0, v0, Lcom/tkay/rewardvideo/a/d$1;->a:Lcom/tkay/rewardvideo/a/d;

    invoke-static {v0}, Lcom/tkay/rewardvideo/a/d;->a(Lcom/tkay/rewardvideo/a/d;)Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 60
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/d$1$2;->c:Lcom/tkay/rewardvideo/a/d$1;

    iget-object v0, v0, Lcom/tkay/rewardvideo/a/d$1;->a:Lcom/tkay/rewardvideo/a/d;

    invoke-static {v0}, Lcom/tkay/rewardvideo/a/d;->a(Lcom/tkay/rewardvideo/a/d;)Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/d$1$2;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/rewardvideo/a/d$1$2;->b:Lcom/tkay/core/api/AdError;

    invoke-interface {v0, v1, v2}, Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;->onRewardVideoAutoLoadFail(Ljava/lang/String;Lcom/tkay/core/api/AdError;)V

    :cond_0
    return-void
.end method
