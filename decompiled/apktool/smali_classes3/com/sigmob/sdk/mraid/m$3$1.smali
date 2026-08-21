.class Lcom/sigmob/sdk/mraid/m$3$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/webkit/ValueCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid/m$3;->g()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Landroid/webkit/ValueCallback<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/m$3;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/m$3;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/m$3$1;->a:Lcom/sigmob/sdk/mraid/m$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;)V
    .locals 3

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-static {p1}, Ljava/lang/Float;->valueOf(Ljava/lang/String;)Ljava/lang/Float;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Float;->floatValue()F

    move-result v0

    const v1, 0x3f7fbe77    # 0.999f

    cmpg-float v0, v0, v1

    const/4 v1, 0x1

    if-gez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$1;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->j(Lcom/sigmob/sdk/mraid/m;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$1;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid/m;->b(Lcom/sigmob/sdk/mraid/m;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$1;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->s:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/base/common/a;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$1;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->d(Lcom/sigmob/sdk/mraid/m;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$1;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v0

    const/4 v2, 0x4

    if-eq v0, v2, :cond_1

    invoke-virtual {p1}, Ljava/lang/Float;->floatValue()F

    move-result p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$1;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getFinishedTime()F

    move-result v0

    cmpl-float p1, p1, v0

    if-lez p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3$1;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object p1, p1, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p1, v1}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/mraid/m;Z)Z

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3$1;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object p1, p1, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    iget-object p1, p1, Lcom/sigmob/sdk/mraid/m;->f:Lcom/sigmob/sdk/base/common/r;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->b:Lcom/sigmob/sdk/base/common/a;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/m$3$1;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v1, v1, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/m;->b(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/mraid/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid/d;->e()Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3$1;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object p1, p1, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    const-string v0, "com.sigmob.action.rewardedvideo.complete"

    invoke-static {p1, v0}, Lcom/sigmob/sdk/mraid/m;->f(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public synthetic onReceiveValue(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/m$3$1;->a(Ljava/lang/String;)V

    return-void
.end method
