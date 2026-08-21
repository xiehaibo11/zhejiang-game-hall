.class final Lcom/tkay/core/common/a/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/a/a;->b(Landroid/content/Context;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/core/common/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/a/a;Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 75
    iput-object p1, p0, Lcom/tkay/core/common/a/a$1;->c:Lcom/tkay/core/common/a/a;

    iput-object p2, p0, Lcom/tkay/core/common/a/a$1;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/core/common/a/a$1;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 78
    iget-object v0, p0, Lcom/tkay/core/common/a/a$1;->c:Lcom/tkay/core/common/a/a;

    invoke-static {v0}, Lcom/tkay/core/common/a/a;->a(Lcom/tkay/core/common/a/a;)Lcom/tkay/core/common/c/k;

    move-result-object v0

    if-nez v0, :cond_0

    .line 79
    iget-object v0, p0, Lcom/tkay/core/common/a/a$1;->c:Lcom/tkay/core/common/a/a;

    iget-object v1, p0, Lcom/tkay/core/common/a/a$1;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/c/k;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/k;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tkay/core/common/a/a;->a(Lcom/tkay/core/common/a/a;Lcom/tkay/core/common/c/k;)Lcom/tkay/core/common/c/k;

    .line 81
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/a/a$1;->c:Lcom/tkay/core/common/a/a;

    invoke-static {v0}, Lcom/tkay/core/common/a/a;->a(Lcom/tkay/core/common/a/a;)Lcom/tkay/core/common/c/k;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/a/a$1;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/c/k;->a(Ljava/lang/String;)V

    return-void
.end method
