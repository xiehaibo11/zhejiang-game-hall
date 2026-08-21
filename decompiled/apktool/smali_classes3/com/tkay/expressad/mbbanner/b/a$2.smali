.class final Lcom/tkay/expressad/mbbanner/b/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/mbbanner/a/c/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/mbbanner/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/mbbanner/b/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/mbbanner/b/a;)V
    .locals 0

    .line 146
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/b/a$2;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 176
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a$2;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/b/a;->h(Lcom/tkay/expressad/mbbanner/b/a;)Lcom/tkay/expressad/foundation/d/d;

    .line 179
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a$2;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/b/a;->i(Lcom/tkay/expressad/mbbanner/b/a;)Lcom/tkay/expressad/out/TemplateBannerView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 180
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a$2;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/b/a;->j(Lcom/tkay/expressad/mbbanner/b/a;)Z

    .line 181
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a$2;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/b/a;->k(Lcom/tkay/expressad/mbbanner/b/a;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 1

    .line 150
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a$2;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-static {v0, p1}, Lcom/tkay/expressad/mbbanner/b/a;->a(Lcom/tkay/expressad/mbbanner/b/a;Lcom/tkay/expressad/foundation/d/d;)Lcom/tkay/expressad/foundation/d/d;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 163
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a$2;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/b/a;->a(Lcom/tkay/expressad/mbbanner/b/a;)Lcom/tkay/expressad/out/b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 164
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a$2;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/b/a;->a(Lcom/tkay/expressad/mbbanner/b/a;)Lcom/tkay/expressad/out/b;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/expressad/out/b;->a(Ljava/lang/String;)V

    .line 166
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/mbbanner/b/a;->e()Ljava/lang/String;

    return-void
.end method

.method public final b()V
    .locals 2

    .line 188
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a$2;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/b/a;->a(Lcom/tkay/expressad/mbbanner/b/a;)Lcom/tkay/expressad/out/b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 189
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a$2;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/b/a;->a(Lcom/tkay/expressad/mbbanner/b/a;)Lcom/tkay/expressad/out/b;

    move-result-object v0

    const-string v1, "banner res load failed"

    invoke-interface {v0, v1}, Lcom/tkay/expressad/out/b;->a(Ljava/lang/String;)V

    .line 191
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/mbbanner/b/a;->e()Ljava/lang/String;

    return-void
.end method
