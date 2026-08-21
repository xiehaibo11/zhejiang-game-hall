.class final Lcom/tkay/core/common/b/m$9;
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
.field final synthetic a:Lcom/tkay/core/api/TYNetworkConfig;

.field final synthetic b:Lcom/tkay/core/common/b/m;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/m;Lcom/tkay/core/api/TYNetworkConfig;)V
    .locals 0

    .line 730
    iput-object p1, p0, Lcom/tkay/core/common/b/m$9;->b:Lcom/tkay/core/common/b/m;

    iput-object p2, p0, Lcom/tkay/core/common/b/m$9;->a:Lcom/tkay/core/api/TYNetworkConfig;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 733
    iget-object v0, p0, Lcom/tkay/core/common/b/m$9;->b:Lcom/tkay/core/common/b/m;

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/common/b/m;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/b/m$9;->a:Lcom/tkay/core/api/TYNetworkConfig;

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/common/b/m;Landroid/content/Context;Lcom/tkay/core/api/TYNetworkConfig;)V

    return-void
.end method
