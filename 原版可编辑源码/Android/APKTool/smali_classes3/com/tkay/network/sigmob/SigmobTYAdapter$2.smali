.class final Lcom/tkay/network/sigmob/SigmobTYAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:I

.field final synthetic d:Lcom/tkay/network/sigmob/SigmobTYAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYAdapter;Landroid/content/Context;Ljava/util/Map;I)V
    .locals 0

    .line 121
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2;->d:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    iput-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2;->b:Ljava/util/Map;

    iput p4, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2;->c:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 125
    :try_start_0
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2;->b:Ljava/util/Map;

    new-instance v3, Lcom/tkay/network/sigmob/SigmobTYAdapter$2$1;

    invoke-direct {v3, p0}, Lcom/tkay/network/sigmob/SigmobTYAdapter$2$1;-><init>(Lcom/tkay/network/sigmob/SigmobTYAdapter$2;)V

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 143
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2;->d:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, ""

    invoke-static {v1, v2, v0}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYAdapter;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
