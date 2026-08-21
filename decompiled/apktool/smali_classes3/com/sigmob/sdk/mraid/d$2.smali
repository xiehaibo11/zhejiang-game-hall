.class Lcom/sigmob/sdk/mraid/d$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid/b$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/mraid/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/d;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/d;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->j()V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->e(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->e(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$a;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/d;->d(Lcom/sigmob/sdk/mraid/d;)Landroid/widget/FrameLayout;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/mraid/d$a;->a(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method public a(IIIILcom/sigmob/sdk/mraid/a$a;Z)V
    .locals 8

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->e(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->e(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$a;

    move-result-object v1

    move v2, p1

    move v3, p2

    move v4, p3

    move v5, p4

    move-object v6, p5

    move v7, p6

    invoke-interface/range {v1 .. v7}, Lcom/sigmob/sdk/mraid/d$a;->a(IIIILcom/sigmob/sdk/mraid/a$a;Z)V

    :cond_0
    return-void
.end method

.method public a(Lcom/sigmob/windad/WindAdError;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/windad/WindAdError;)V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0, p1, p2}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/d;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public a(Ljava/net/URI;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {p1}, Ljava/net/URI;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;)V

    return-void
.end method

.method public a(Ljava/net/URI;ILjava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0, p1, p2, p3}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/net/URI;ILjava/lang/String;)V

    return-void
.end method

.method public a(Ljava/net/URI;Z)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/net/URI;Z)V

    return-void
.end method

.method public a(Z)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid/b;->a(Z)V

    return-void
.end method

.method public a(ZLcom/sigmob/sdk/mraid/j;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/mraid/d;->a(ZLcom/sigmob/sdk/mraid/j;)V

    return-void
.end method

.method public a(Landroid/webkit/ConsoleMessage;)Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid/d;->a(Landroid/webkit/ConsoleMessage;)Z

    move-result p1

    return p1
.end method

.method public a(Ljava/lang/String;Landroid/webkit/JsResult;)Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Landroid/webkit/JsResult;)Z

    move-result p1

    return p1
.end method

.method public b()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->i()V

    return-void
.end method

.method public b(Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0, p1, p2}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/mraid/d;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public b(Z)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid/d;->e(Z)V

    return-void
.end method

.method public c()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->e(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->e(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/mraid/d$a;->d()V

    :cond_0
    return-void
.end method

.method public d()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->m()V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->e(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/mraid/d$a;->g()V

    return-void
.end method

.method public e()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->e(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->e(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/mraid/d$a;->e()V

    :cond_0
    return-void
.end method

.method public f()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->e(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$2;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->e(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/mraid/d$a;->f()V

    :cond_0
    return-void
.end method
