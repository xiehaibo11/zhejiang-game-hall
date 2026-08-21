.class final Lcom/tkay/expressad/advanced/c/b$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/advanced/d/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/advanced/c/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/advanced/c/b;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/c/b;)V
    .locals 0

    .line 144
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 155
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/b;->d(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 156
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/b;->d(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setVisibility(I)V

    .line 158
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/b;->b(Lcom/tkay/expressad/advanced/c/b;)V

    return-void
.end method

.method public final a(I)V
    .locals 1

    .line 147
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {v0, p1}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/advanced/c/b;I)I

    .line 148
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/b;->d(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 149
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/b;->d(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->changeCloseBtnState(I)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 168
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/foundation/d/c;)V

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 202
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/b;->f(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/advanced/d/d;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 204
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 206
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/b;->f(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/advanced/d/d;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/b;->c(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/advanced/d/d;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 207
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/b;->f(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/advanced/d/d;

    return-void

    .line 210
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    .line 211
    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/b;->c(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/c;->a(Lcom/tkay/expressad/foundation/d/c;)Lorg/json/JSONObject;

    move-result-object v0

    .line 210
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    .line 212
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/c;->p(Ljava/lang/String;)V

    .line 213
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/foundation/d/c;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception p1

    .line 217
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/b;->e(Lcom/tkay/expressad/advanced/c/b;)Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 189
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/b;->f(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/advanced/d/d;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 190
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {v0, p1}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/advanced/c/b;Z)Z

    if-eqz p1, :cond_0

    .line 192
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/b;->f(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/advanced/d/d;

    return-void

    .line 194
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/b;->f(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/advanced/d/d;

    :cond_1
    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final c()V
    .locals 1

    .line 173
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/b;->e(Lcom/tkay/expressad/advanced/c/b;)Ljava/lang/String;

    return-void
.end method

.method public final d()V
    .locals 0

    return-void
.end method

.method public final e()V
    .locals 1

    .line 184
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$3;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/b;->b(Lcom/tkay/expressad/advanced/c/b;)V

    return-void
.end method
