.class final Lcom/tkay/network/ks/KSTYAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSTYAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/Map;

.field final synthetic b:Lcom/tkay/network/ks/KSTYAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSTYAdapter;Ljava/util/Map;)V
    .locals 0

    .line 66
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYAdapter$1;->b:Lcom/tkay/network/ks/KSTYAdapter;

    iput-object p2, p0, Lcom/tkay/network/ks/KSTYAdapter$1;->a:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 74
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYAdapter$1;->b:Lcom/tkay/network/ks/KSTYAdapter;

    const-string v1, ""

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/ks/KSTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 4

    .line 69
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYAdapter$1;->b:Lcom/tkay/network/ks/KSTYAdapter;

    iget-object v1, v0, Lcom/tkay/network/ks/KSTYAdapter;->f:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/network/ks/KSTYAdapter$1;->a:Ljava/util/Map;

    iget-object v3, p0, Lcom/tkay/network/ks/KSTYAdapter$1;->b:Lcom/tkay/network/ks/KSTYAdapter;

    invoke-static {v3}, Lcom/tkay/network/ks/KSTYAdapter;->a(Lcom/tkay/network/ks/KSTYAdapter;)I

    move-result v3

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/network/ks/KSTYAdapter;->a(Lcom/tkay/network/ks/KSTYAdapter;Landroid/content/Context;Ljava/util/Map;I)V

    return-void
.end method
