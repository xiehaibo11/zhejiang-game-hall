.class final Lcom/tkay/expressad/mbbanner/a/d/c$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/mbbanner/a/c/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/mbbanner/a/d/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/mbbanner/a/d/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V
    .locals 0

    .line 150
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 162
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->b(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    return-void
.end method

.method public final a(I)V
    .locals 1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    .line 154
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->c(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    return-void

    .line 156
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->d(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    .line 182
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    const/4 v1, 0x0

    const-string v2, ""

    invoke-virtual {v0, p1, v1, v2}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/foundation/d/c;ZLjava/lang/String;)V

    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 187
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->g(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/mbbanner/a/c/c;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 188
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {v0, p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/mbbanner/a/d/c;Z)Z

    if-eqz p1, :cond_0

    .line 190
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->g(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/mbbanner/a/c/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/mbbanner/a/c/c;->b()V

    return-void

    .line 192
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->g(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/mbbanner/a/c/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/mbbanner/a/c/c;->c()V

    :cond_1
    return-void
.end method

.method public final a(ZLjava/lang/String;)V
    .locals 2

    .line 200
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->g(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/mbbanner/a/c/c;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 201
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 203
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->g(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/mbbanner/a/c/c;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p2}, Lcom/tkay/expressad/mbbanner/a/d/c;->h(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/tkay/expressad/mbbanner/a/c/c;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 204
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->g(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/mbbanner/a/c/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/mbbanner/a/c/c;->a()V

    return-void

    .line 206
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    .line 207
    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->h(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/c;->a(Lcom/tkay/expressad/foundation/d/c;)Lorg/json/JSONObject;

    move-result-object v0

    .line 206
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    .line 208
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/foundation/d/c;->p(Ljava/lang/String;)V

    .line 209
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-virtual {v1, v0, p1, p2}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/foundation/d/c;ZLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception p1

    .line 213
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/c;->c()Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final b()V
    .locals 1

    .line 167
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->b(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    return-void
.end method

.method public final b(I)V
    .locals 1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 173
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->e(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    .line 174
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/c;->b()V

    return-void

    .line 176
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$6;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->f(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    return-void
.end method
