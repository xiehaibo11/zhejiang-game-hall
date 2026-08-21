.class Lcom/sigmob/sdk/base/j$a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/j$a;->onVideoAdLoadSuccess(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/sigmob/sdk/base/j$a;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/j$a;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/j$a$1;->b:Lcom/sigmob/sdk/base/j$a;

    iput-object p2, p0, Lcom/sigmob/sdk/base/j$a$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$a$1;->b:Lcom/sigmob/sdk/base/j$a;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j$a;->a(Lcom/sigmob/sdk/base/j$a;)Lcom/sigmob/sdk/rewardVideoAd/f;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$a$1;->b:Lcom/sigmob/sdk/base/j$a;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j$a;->a(Lcom/sigmob/sdk/base/j$a;)Lcom/sigmob/sdk/rewardVideoAd/f;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/j$a$1;->a:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/rewardVideoAd/f;->onVideoAdLoadSuccess(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
