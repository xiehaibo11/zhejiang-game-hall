.class final Lcom/tkay/core/common/b/m$11;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/m;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/core/common/b/m;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/m;Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 1135
    iput-object p1, p0, Lcom/tkay/core/common/b/m$11;->c:Lcom/tkay/core/common/b/m;

    iput-object p2, p0, Lcom/tkay/core/common/b/m$11;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/core/common/b/m$11;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 1138
    iget-object v0, p0, Lcom/tkay/core/common/b/m$11;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/b/m$11;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1140
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->G()Z

    move-result v1

    if-nez v1, :cond_0

    .line 1141
    iget-object v1, p0, Lcom/tkay/core/common/b/m$11;->c:Lcom/tkay/core/common/b/m;

    invoke-static {v1}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/common/b/m;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/r;->a(Landroid/content/Context;)Lcom/tkay/core/common/r;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/r;->a(Lcom/tkay/core/c/a;)V

    .line 1144
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m$11;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/b/m$11;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 1147
    iget-object v0, p0, Lcom/tkay/core/common/b/m$11;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    :cond_1
    return-void
.end method
