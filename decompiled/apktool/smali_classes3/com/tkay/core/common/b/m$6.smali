.class final Lcom/tkay/core/common/b/m$6;
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

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Landroid/content/Context;

.field final synthetic d:Lcom/tkay/core/common/b/m;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/m;Landroid/content/Context;Ljava/lang/String;Landroid/content/Context;)V
    .locals 0

    .line 661
    iput-object p1, p0, Lcom/tkay/core/common/b/m$6;->d:Lcom/tkay/core/common/b/m;

    iput-object p2, p0, Lcom/tkay/core/common/b/m$6;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/core/common/b/m$6;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/core/common/b/m$6;->c:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 665
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/k/b;->a()Lcom/tkay/core/common/k/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/b/m$6;->a:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/k/b;->a(Landroid/content/Context;)V

    .line 666
    iget-object v0, p0, Lcom/tkay/core/common/b/m$6;->d:Lcom/tkay/core/common/b/m;

    iget-object v1, p0, Lcom/tkay/core/common/b/m$6;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/core/common/b/m$6;->b:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/lang/String;I)J

    .line 667
    iget-object v0, p0, Lcom/tkay/core/common/b/m$6;->d:Lcom/tkay/core/common/b/m;

    iget-object v1, p0, Lcom/tkay/core/common/b/m$6;->c:Landroid/content/Context;

    invoke-static {v0, v1}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/common/b/m;Landroid/content/Context;)V

    .line 670
    iget-object v0, p0, Lcom/tkay/core/common/b/m$6;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/b/g;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/g;->a()V

    .line 673
    iget-object v0, p0, Lcom/tkay/core/common/b/m$6;->d:Lcom/tkay/core/common/b/m;

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->b(Lcom/tkay/core/common/b/m;)V

    .line 677
    iget-object v0, p0, Lcom/tkay/core/common/b/m$6;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->c(Landroid/content/Context;)V

    .line 680
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/a/j;->b()V

    .line 683
    iget-object v0, p0, Lcom/tkay/core/common/b/m$6;->d:Lcom/tkay/core/common/b/m;

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/d;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/res/d;->b()V

    .line 686
    iget-object v0, p0, Lcom/tkay/core/common/b/m$6;->d:Lcom/tkay/core/common/b/m;

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/d;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/res/d;->c()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method
