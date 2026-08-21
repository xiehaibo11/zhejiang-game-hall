.class public abstract Lcom/sigmob/sdk/base/common/v;
.super Lcom/sigmob/sdk/base/common/m;


# instance fields
.field protected a:Ljava/lang/String;

.field protected b:Lcom/sigmob/sdk/base/common/m$b;

.field protected c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private d:Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;


# direct methods
.method protected constructor <init>(Lcom/sigmob/sdk/base/common/m$b;)V
    .locals 1

    invoke-direct {p0}, Lcom/sigmob/sdk/base/common/m;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/v;->b:Lcom/sigmob/sdk/base/common/m$b;

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/v;->b:Lcom/sigmob/sdk/base/common/m$b;

    return-void
.end method


# virtual methods
.method protected abstract a(Lcom/sigmob/sdk/base/common/m$b;)V
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;)V
    .locals 2

    new-instance p2, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/v;->b:Lcom/sigmob/sdk/base/common/m$b;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/v;->a:Ljava/lang/String;

    invoke-direct {p2, p1, v0, v1}, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;-><init>(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/m$b;Ljava/lang/String;)V

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/v;->d:Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;

    invoke-virtual {p2, p2}, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->a(Landroid/content/BroadcastReceiver;)V

    return-void
.end method

.method public a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ")V"
        }
    .end annotation

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/v;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/v;->a:Ljava/lang/String;

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/v;->b:Lcom/sigmob/sdk/base/common/m$b;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/common/v;->a(Lcom/sigmob/sdk/base/common/m$b;)V

    return-void
.end method

.method protected abstract a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/v;->d:Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;

    if-eqz p1, :cond_0

    invoke-virtual {p1, p1}, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->b(Landroid/content/BroadcastReceiver;)V

    :cond_0
    return-void
.end method
