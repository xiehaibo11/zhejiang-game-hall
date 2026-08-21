.class final Lcom/tkay/basead/f/a/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/f/a/b;->a(Lcom/tkay/core/common/f/r;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/c/c;

.field final synthetic b:Lcom/tkay/basead/f/a/b;


# direct methods
.method constructor <init>(Lcom/tkay/basead/f/a/b;Lcom/tkay/basead/c/c;)V
    .locals 0

    .line 66
    iput-object p1, p0, Lcom/tkay/basead/f/a/b$1;->b:Lcom/tkay/basead/f/a/b;

    iput-object p2, p0, Lcom/tkay/basead/f/a/b$1;->a:Lcom/tkay/basead/c/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 69
    iget-object v0, p0, Lcom/tkay/basead/f/a/b$1;->b:Lcom/tkay/basead/f/a/b;

    invoke-static {v0}, Lcom/tkay/basead/f/a/b;->a(Lcom/tkay/basead/f/a/b;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/basead/b/c;->a(Landroid/content/Context;)Lcom/tkay/basead/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/f/a/b$1;->a:Lcom/tkay/basead/c/c;

    iget-object v1, v1, Lcom/tkay/basead/c/c;->f:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/b/c;->c(Ljava/lang/String;)V

    .line 73
    iget-object v0, p0, Lcom/tkay/basead/f/a/b$1;->b:Lcom/tkay/basead/f/a/b;

    invoke-static {v0}, Lcom/tkay/basead/f/a/b;->a(Lcom/tkay/basead/f/a/b;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/basead/b/c;->a(Landroid/content/Context;)Lcom/tkay/basead/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/f/a/b$1;->a:Lcom/tkay/basead/c/c;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/b/c;->a(Lcom/tkay/basead/c/c;)J

    return-void
.end method
