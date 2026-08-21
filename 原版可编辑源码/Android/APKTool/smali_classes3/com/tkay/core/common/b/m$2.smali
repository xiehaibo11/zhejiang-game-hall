.class final Lcom/tkay/core/common/b/m$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Lcom/tkay/core/common/b/m;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/m;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 1697
    iput-object p1, p0, Lcom/tkay/core/common/b/m$2;->d:Lcom/tkay/core/common/b/m;

    iput-object p2, p0, Lcom/tkay/core/common/b/m$2;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/core/common/b/m$2;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/core/common/b/m$2;->c:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 1700
    iget-object v0, p0, Lcom/tkay/core/common/b/m$2;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/b/m$2;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1701
    iget-object v0, p0, Lcom/tkay/core/common/b/m$2;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/b/m$2;->b:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/core/common/b/m$2;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/c/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
