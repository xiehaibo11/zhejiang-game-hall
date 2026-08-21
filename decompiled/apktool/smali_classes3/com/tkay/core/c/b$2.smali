.class final Lcom/tkay/core/c/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/h/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/c/b;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/core/c/b;


# direct methods
.method constructor <init>(Lcom/tkay/core/c/b;Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 409
    iput-object p1, p0, Lcom/tkay/core/c/b$2;->c:Lcom/tkay/core/c/b;

    iput-object p2, p0, Lcom/tkay/core/c/b$2;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/core/c/b$2;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLoadCanceled(I)V
    .locals 0

    .line 426
    iget-object p1, p0, Lcom/tkay/core/c/b$2;->c:Lcom/tkay/core/c/b;

    invoke-static {p1}, Lcom/tkay/core/c/b;->c(Lcom/tkay/core/c/b;)V

    return-void
.end method

.method public final onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 421
    iget-object p1, p0, Lcom/tkay/core/c/b$2;->c:Lcom/tkay/core/c/b;

    invoke-static {p1}, Lcom/tkay/core/c/b;->c(Lcom/tkay/core/c/b;)V

    return-void
.end method

.method public final onLoadFinish(ILjava/lang/Object;)V
    .locals 2

    .line 416
    iget-object p1, p0, Lcom/tkay/core/c/b$2;->c:Lcom/tkay/core/c/b;

    iget-object v0, p0, Lcom/tkay/core/c/b$2;->a:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/core/c/b$2;->b:Ljava/lang/String;

    invoke-static {p1, v0, p2, v1}, Lcom/tkay/core/c/b;->a(Lcom/tkay/core/c/b;Landroid/content/Context;Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public final onLoadStart(I)V
    .locals 0

    return-void
.end method
