.class final Lcom/tkay/network/toutiao/TTTYAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Ljava/util/Map;

.field final synthetic d:Lcom/tkay/network/toutiao/TTTYAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYAdapter$1;->d:Lcom/tkay/network/toutiao/TTTYAdapter;

    iput-object p2, p0, Lcom/tkay/network/toutiao/TTTYAdapter$1;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/toutiao/TTTYAdapter$1;->b:Ljava/util/Map;

    iput-object p4, p0, Lcom/tkay/network/toutiao/TTTYAdapter$1;->c:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 85
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYAdapter$1;->d:Lcom/tkay/network/toutiao/TTTYAdapter;

    const-string v1, ""

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/toutiao/TTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 5

    .line 80
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYAdapter$1;->d:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYAdapter$1;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYAdapter$1;->b:Ljava/util/Map;

    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYAdapter$1;->c:Ljava/util/Map;

    iget-boolean v4, v0, Lcom/tkay/network/toutiao/TTTYAdapter;->f:Z

    if-eqz v4, :cond_0

    const/4 v4, 0x1

    goto :goto_0

    :cond_0
    iget-object v4, p0, Lcom/tkay/network/toutiao/TTTYAdapter$1;->d:Lcom/tkay/network/toutiao/TTTYAdapter;

    invoke-static {v4}, Lcom/tkay/network/toutiao/TTTYAdapter;->a(Lcom/tkay/network/toutiao/TTTYAdapter;)I

    move-result v4

    :goto_0
    invoke-static {v0, v1, v2, v3, v4}, Lcom/tkay/network/toutiao/TTTYAdapter;->a(Lcom/tkay/network/toutiao/TTTYAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;I)V

    return-void
.end method
