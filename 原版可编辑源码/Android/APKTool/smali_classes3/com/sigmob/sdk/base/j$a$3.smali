.class Lcom/sigmob/sdk/base/j$a$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/j$a;->onVideoAdPreLoadFail(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/windad/WindAdError;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/sigmob/sdk/base/j$a;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/j$a;Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/j$a$3;->c:Lcom/sigmob/sdk/base/j$a;

    iput-object p2, p0, Lcom/sigmob/sdk/base/j$a$3;->a:Lcom/sigmob/windad/WindAdError;

    iput-object p3, p0, Lcom/sigmob/sdk/base/j$a$3;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$a$3;->c:Lcom/sigmob/sdk/base/j$a;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j$a;->a(Lcom/sigmob/sdk/base/j$a;)Lcom/sigmob/sdk/rewardVideoAd/f;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$a$3;->c:Lcom/sigmob/sdk/base/j$a;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j$a;->a(Lcom/sigmob/sdk/base/j$a;)Lcom/sigmob/sdk/rewardVideoAd/f;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/j$a$3;->a:Lcom/sigmob/windad/WindAdError;

    iget-object v2, p0, Lcom/sigmob/sdk/base/j$a$3;->b:Ljava/lang/String;

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/rewardVideoAd/f;->onVideoAdPreLoadFail(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
