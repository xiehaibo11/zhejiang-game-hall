.class final Lcom/tkay/core/common/e/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/h/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/e/a;->b(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Lcom/tkay/core/common/e/a;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/e/a;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 164
    iput-object p1, p0, Lcom/tkay/core/common/e/a$1;->d:Lcom/tkay/core/common/e/a;

    iput-object p2, p0, Lcom/tkay/core/common/e/a$1;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/core/common/e/a$1;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/core/common/e/a$1;->c:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLoadCanceled(I)V
    .locals 0

    .line 189
    iget-object p1, p0, Lcom/tkay/core/common/e/a$1;->d:Lcom/tkay/core/common/e/a;

    invoke-static {p1}, Lcom/tkay/core/common/e/a;->b(Lcom/tkay/core/common/e/a;)Z

    return-void
.end method

.method public final onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 2

    .line 183
    iget-object p1, p0, Lcom/tkay/core/common/e/a$1;->d:Lcom/tkay/core/common/e/a;

    invoke-static {p1}, Lcom/tkay/core/common/e/a;->a(Lcom/tkay/core/common/e/a;)Ljava/util/List;

    move-result-object p2

    iget-object p3, p0, Lcom/tkay/core/common/e/a$1;->b:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/core/common/e/a$1;->c:Ljava/lang/String;

    const-string v1, ""

    invoke-static {p1, p2, v1, p3, v0}, Lcom/tkay/core/common/e/a;->a(Lcom/tkay/core/common/e/a;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    iget-object p1, p0, Lcom/tkay/core/common/e/a$1;->d:Lcom/tkay/core/common/e/a;

    invoke-static {p1}, Lcom/tkay/core/common/e/a;->b(Lcom/tkay/core/common/e/a;)Z

    return-void
.end method

.method public final onLoadFinish(ILjava/lang/Object;)V
    .locals 3

    .line 171
    iget-object p1, p0, Lcom/tkay/core/common/e/a$1;->d:Lcom/tkay/core/common/e/a;

    iget-object v0, p0, Lcom/tkay/core/common/e/a$1;->a:Landroid/content/Context;

    invoke-static {p1, v0}, Lcom/tkay/core/common/e/a;->a(Lcom/tkay/core/common/e/a;Landroid/content/Context;)V

    if-eqz p2, :cond_0

    .line 173
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "api."

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 174
    iget-object p2, p0, Lcom/tkay/core/common/e/a$1;->d:Lcom/tkay/core/common/e/a;

    invoke-static {p2}, Lcom/tkay/core/common/e/a;->a(Lcom/tkay/core/common/e/a;)Ljava/util/List;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/e/a$1;->b:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/core/common/e/a$1;->c:Ljava/lang/String;

    invoke-static {p2, v0, p1, v1, v2}, Lcom/tkay/core/common/e/a;->a(Lcom/tkay/core/common/e/a;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 176
    :cond_0
    iget-object p1, p0, Lcom/tkay/core/common/e/a$1;->d:Lcom/tkay/core/common/e/a;

    invoke-static {p1}, Lcom/tkay/core/common/e/a;->a(Lcom/tkay/core/common/e/a;)Ljava/util/List;

    move-result-object p2

    iget-object v0, p0, Lcom/tkay/core/common/e/a$1;->b:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/core/common/e/a$1;->c:Ljava/lang/String;

    const-string v2, ""

    invoke-static {p1, p2, v2, v0, v1}, Lcom/tkay/core/common/e/a;->a(Lcom/tkay/core/common/e/a;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 178
    :goto_0
    iget-object p1, p0, Lcom/tkay/core/common/e/a$1;->d:Lcom/tkay/core/common/e/a;

    invoke-static {p1}, Lcom/tkay/core/common/e/a;->b(Lcom/tkay/core/common/e/a;)Z

    return-void
.end method

.method public final onLoadStart(I)V
    .locals 0

    return-void
.end method
