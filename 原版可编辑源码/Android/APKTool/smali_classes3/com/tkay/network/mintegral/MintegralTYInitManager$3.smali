.class final Lcom/tkay/network/mintegral/MintegralTYInitManager$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;ILcom/tkay/core/api/TYBidRequestInfoListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:I

.field final synthetic d:Ljava/util/Map;

.field final synthetic e:Lcom/tkay/core/api/TYBidRequestInfoListener;

.field final synthetic f:Lcom/tkay/network/mintegral/MintegralTYInitManager;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYInitManager;Landroid/content/Context;Ljava/util/Map;ILjava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
    .locals 0

    .line 417
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->f:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    iput-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->b:Ljava/util/Map;

    iput p4, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->c:I

    iput-object p5, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->d:Ljava/util/Map;

    iput-object p6, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->e:Lcom/tkay/core/api/TYBidRequestInfoListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 1

    .line 450
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->e:Lcom/tkay/core/api/TYBidRequestInfoListener;

    if-eqz v0, :cond_0

    .line 451
    invoke-interface {v0, p1}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onFailed(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onSuccess()V
    .locals 2

    .line 421
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->f:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    new-instance v1, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;-><init>(Lcom/tkay/network/mintegral/MintegralTYInitManager$3;)V

    invoke-static {v0, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/lang/Runnable;)V

    return-void
.end method
