.class final Lcom/tkay/network/sigmob/SigmobTYInitManager$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/Map;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Lcom/tkay/core/api/TYBidRequestInfoListener;

.field final synthetic d:Lcom/tkay/network/sigmob/SigmobTYInitManager;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYInitManager;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
    .locals 0

    .line 446
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager$1;->d:Lcom/tkay/network/sigmob/SigmobTYInitManager;

    iput-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager$1;->a:Ljava/util/Map;

    iput-object p3, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager$1;->b:Ljava/util/Map;

    iput-object p4, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager$1;->c:Lcom/tkay/core/api/TYBidRequestInfoListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 1

    .line 472
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager$1;->c:Lcom/tkay/core/api/TYBidRequestInfoListener;

    if-eqz p1, :cond_0

    const-string v0, "Network init error."

    .line 473
    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onFailed(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onSuccess()V
    .locals 2

    .line 450
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager$1;->d:Lcom/tkay/network/sigmob/SigmobTYInitManager;

    new-instance v1, Lcom/tkay/network/sigmob/SigmobTYInitManager$1$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/sigmob/SigmobTYInitManager$1$1;-><init>(Lcom/tkay/network/sigmob/SigmobTYInitManager$1;)V

    invoke-static {v0, v1}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->a(Lcom/tkay/network/sigmob/SigmobTYInitManager;Ljava/lang/Runnable;)V

    return-void
.end method
