.class final Lcom/tkay/core/c/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/h/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/c/b;->a(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/core/c/b;


# direct methods
.method constructor <init>(Lcom/tkay/core/c/b;Ljava/lang/String;)V
    .locals 0

    .line 263
    iput-object p1, p0, Lcom/tkay/core/c/b$1;->b:Lcom/tkay/core/c/b;

    iput-object p2, p0, Lcom/tkay/core/c/b$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLoadCanceled(I)V
    .locals 0

    .line 283
    iget-object p1, p0, Lcom/tkay/core/c/b$1;->b:Lcom/tkay/core/c/b;

    invoke-static {p1}, Lcom/tkay/core/c/b;->a(Lcom/tkay/core/c/b;)Z

    .line 284
    iget-object p1, p0, Lcom/tkay/core/c/b$1;->b:Lcom/tkay/core/c/b;

    invoke-static {p1}, Lcom/tkay/core/c/b;->c(Lcom/tkay/core/c/b;)V

    return-void
.end method

.method public final onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 276
    iget-object p1, p0, Lcom/tkay/core/c/b$1;->b:Lcom/tkay/core/c/b;

    invoke-static {p1}, Lcom/tkay/core/c/b;->a(Lcom/tkay/core/c/b;)Z

    .line 277
    sget-object p1, Lcom/tkay/core/c/b;->a:Ljava/lang/String;

    .line 278
    iget-object p1, p0, Lcom/tkay/core/c/b$1;->b:Lcom/tkay/core/c/b;

    invoke-static {p1}, Lcom/tkay/core/c/b;->c(Lcom/tkay/core/c/b;)V

    return-void
.end method

.method public final onLoadFinish(ILjava/lang/Object;)V
    .locals 2

    .line 270
    iget-object p1, p0, Lcom/tkay/core/c/b$1;->b:Lcom/tkay/core/c/b;

    invoke-static {p1}, Lcom/tkay/core/c/b;->a(Lcom/tkay/core/c/b;)Z

    .line 271
    iget-object p1, p0, Lcom/tkay/core/c/b$1;->b:Lcom/tkay/core/c/b;

    invoke-static {p1}, Lcom/tkay/core/c/b;->b(Lcom/tkay/core/c/b;)Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/c/b$1;->a:Ljava/lang/String;

    invoke-static {p1, v0, p2, v1}, Lcom/tkay/core/c/b;->a(Lcom/tkay/core/c/b;Landroid/content/Context;Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public final onLoadStart(I)V
    .locals 0

    return-void
.end method
