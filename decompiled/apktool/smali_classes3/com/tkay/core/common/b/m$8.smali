.class final Lcom/tkay/core/common/b/m$8;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYNetworkConfig;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Lcom/tkay/core/common/b/m;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/m;Landroid/content/Context;Landroid/content/Context;)V
    .locals 0

    .line 713
    iput-object p1, p0, Lcom/tkay/core/common/b/m$8;->c:Lcom/tkay/core/common/b/m;

    iput-object p2, p0, Lcom/tkay/core/common/b/m$8;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/core/common/b/m$8;->b:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 716
    iget-object v0, p0, Lcom/tkay/core/common/b/m$8;->c:Lcom/tkay/core/common/b/m;

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    .line 718
    iget-object v0, p0, Lcom/tkay/core/common/b/m$8;->c:Lcom/tkay/core/common/b/m;

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->c(Lcom/tkay/core/common/b/m;)Lcom/tkay/core/api/IExHandler;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 719
    iget-object v0, p0, Lcom/tkay/core/common/b/m$8;->c:Lcom/tkay/core/common/b/m;

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->c(Lcom/tkay/core/common/b/m;)Lcom/tkay/core/api/IExHandler;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/b/m$8;->a:Landroid/content/Context;

    invoke-interface {v0, v1}, Lcom/tkay/core/api/IExHandler;->initDeviceInfo(Landroid/content/Context;)V

    .line 721
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m$8;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/c/e;->a()V

    .line 722
    iget-object v0, p0, Lcom/tkay/core/common/b/m$8;->c:Lcom/tkay/core/common/b/m;

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/common/b/m;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/l/d;->r(Landroid/content/Context;)Ljava/lang/String;

    .line 725
    iget-object v0, p0, Lcom/tkay/core/common/b/m$8;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/y;->a(Landroid/content/Context;)Lcom/tkay/core/common/y;

    return-void
.end method
