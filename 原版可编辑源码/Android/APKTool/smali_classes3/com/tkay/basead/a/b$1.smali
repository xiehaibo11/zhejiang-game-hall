.class final Lcom/tkay/basead/a/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/b;->a(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/c/d;Ljava/lang/String;Lcom/tkay/core/common/g/b;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/h;

.field final synthetic b:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f/h;Landroid/content/Context;)V
    .locals 0

    .line 101
    iput-object p1, p0, Lcom/tkay/basead/a/b$1;->a:Lcom/tkay/core/common/f/h;

    iput-object p2, p0, Lcom/tkay/basead/a/b$1;->b:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 104
    iget-object v0, p0, Lcom/tkay/basead/a/b$1;->a:Lcom/tkay/core/common/f/h;

    instance-of v0, v0, Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_0

    .line 105
    iget-object v0, p0, Lcom/tkay/basead/a/b$1;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/a/h;->a(Landroid/content/Context;)Lcom/tkay/basead/a/h;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/basead/a/h;->a()V

    .line 106
    iget-object v0, p0, Lcom/tkay/basead/a/b$1;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/a/h;->a(Landroid/content/Context;)Lcom/tkay/basead/a/h;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/a/b$1;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/a/b$1;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/a/h;->a(Ljava/lang/String;Lcom/tkay/core/common/f/h;)V

    :cond_0
    return-void
.end method
