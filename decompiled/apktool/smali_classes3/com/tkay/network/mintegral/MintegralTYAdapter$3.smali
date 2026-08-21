.class final Lcom/tkay/network/mintegral/MintegralTYAdapter$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Z

.field final synthetic e:Lcom/tkay/network/mintegral/MintegralTYAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/lang/String;Z)V
    .locals 0

    .line 358
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;->e:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    iput-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;->b:Ljava/util/Map;

    iput-object p4, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;->c:Ljava/lang/String;

    iput-boolean p5, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;->d:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 366
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;->e:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->n(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 367
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;->e:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->o(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const-string v1, ""

    invoke-interface {v0, v1, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onSuccess()V
    .locals 7

    .line 361
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;->e:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;->b:Ljava/util/Map;

    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;->c:Ljava/lang/String;

    iget-object v4, v0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->h:Ljava/lang/String;

    iget-boolean v5, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;->d:Z

    iget-object v6, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;->e:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {v6}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->m(Lcom/tkay/network/mintegral/MintegralTYAdapter;)I

    invoke-static/range {v0 .. v5}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a(Lcom/tkay/network/mintegral/MintegralTYAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;Z)V

    return-void
.end method
