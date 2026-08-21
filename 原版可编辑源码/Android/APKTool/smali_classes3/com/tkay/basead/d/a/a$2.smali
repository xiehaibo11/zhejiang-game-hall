.class final Lcom/tkay/basead/d/a/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/h/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/a/a;->b(Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/i;

.field final synthetic b:Lcom/tkay/basead/d/a/a$a;

.field final synthetic c:Lcom/tkay/basead/d/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/a/a;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;)V
    .locals 0

    .line 97
    iput-object p1, p0, Lcom/tkay/basead/d/a/a$2;->c:Lcom/tkay/basead/d/a/a;

    iput-object p2, p0, Lcom/tkay/basead/d/a/a$2;->a:Lcom/tkay/core/common/f/i;

    iput-object p3, p0, Lcom/tkay/basead/d/a/a$2;->b:Lcom/tkay/basead/d/a/a$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLoadCanceled(I)V
    .locals 3

    .line 153
    iget-object p1, p0, Lcom/tkay/basead/d/a/a$2;->b:Lcom/tkay/basead/d/a/a$a;

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    const-string v1, "30001"

    const-string v2, "Cancel Request."

    .line 154
    invoke-static {v1, v2}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Lcom/tkay/basead/d/a/a$a;->a(Lcom/tkay/core/common/f/f;Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void
.end method

.method public final onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 1

    .line 146
    iget-object p1, p0, Lcom/tkay/basead/d/a/a$2;->b:Lcom/tkay/basead/d/a/a$a;

    if-eqz p1, :cond_0

    const/4 p3, 0x0

    const-string v0, "30001"

    .line 147
    invoke-static {v0, p2}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p2

    invoke-interface {p1, p3, p2}, Lcom/tkay/basead/d/a/a$a;->a(Lcom/tkay/core/common/f/f;Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void
.end method

.method public final onLoadFinish(ILjava/lang/Object;)V
    .locals 8

    const/4 p1, 0x0

    .line 107
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 108
    iget-object v1, p0, Lcom/tkay/basead/d/a/a$2;->a:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/basead/d/a/a$2;->a:Lcom/tkay/core/common/f/i;

    iget v2, v2, Lcom/tkay/core/common/f/i;->f:I

    invoke-static {v1, v0, v2}, Lcom/tkay/core/common/a/c;->a(Ljava/lang/String;Lorg/json/JSONObject;I)Lcom/tkay/core/common/f/f;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-object v0, p1

    :goto_0
    if-eqz v0, :cond_2

    .line 114
    invoke-static {v0}, Lcom/tkay/basead/d/c/b;->a(Lcom/tkay/core/common/f/h;)V

    .line 116
    iget-object p1, p0, Lcom/tkay/basead/d/a/a$2;->a:Lcom/tkay/core/common/f/i;

    invoke-static {p1, v0}, Lcom/tkay/basead/d/c/a;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/z;)V

    .line 118
    iget-object p1, p0, Lcom/tkay/basead/d/a/a$2;->a:Lcom/tkay/core/common/f/i;

    invoke-static {p1, v0}, Lcom/tkay/basead/d/c/d;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/z;)V

    .line 121
    iget-object p1, p0, Lcom/tkay/basead/d/a/a$2;->a:Lcom/tkay/core/common/f/i;

    iget p1, p1, Lcom/tkay/core/common/f/i;->f:I

    const/16 v1, 0x43

    if-ne p1, v1, :cond_0

    .line 122
    iget-object p1, p0, Lcom/tkay/basead/d/a/a$2;->c:Lcom/tkay/basead/d/a/a;

    invoke-static {p1}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/basead/d/a/a;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/d/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/c;

    move-result-object p1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->p()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->P()J

    move-result-wide v2

    invoke-virtual {p1, v1, v2, v3}, Lcom/tkay/core/common/d/c;->a(Ljava/lang/String;J)V

    .line 123
    iget-object p1, p0, Lcom/tkay/basead/d/a/a$2;->c:Lcom/tkay/basead/d/a/a;

    invoke-static {p1}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/basead/d/a/a;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/d/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/a;

    move-result-object p1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->q()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->P()J

    move-result-wide v2

    invoke-virtual {p1, v1, v2, v3}, Lcom/tkay/core/common/d/a;->a(Ljava/lang/String;J)V

    :cond_0
    const/16 p1, 0xa

    .line 126
    new-instance v1, Lcom/tkay/basead/c/i;

    iget-object v2, p0, Lcom/tkay/basead/d/a/a$2;->a:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v3, ""

    invoke-direct {v1, v2, v3}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p1, v0, v1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 127
    invoke-static {}, Lcom/tkay/core/common/a/a;->a()Lcom/tkay/core/common/a/a;

    iget-object p1, p0, Lcom/tkay/basead/d/a/a$2;->c:Lcom/tkay/basead/d/a/a;

    invoke-static {p1}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/basead/d/a/a;)Landroid/content/Context;

    move-result-object p1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->b()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/tkay/core/common/a/a;->c(Landroid/content/Context;Ljava/lang/String;)V

    .line 129
    invoke-static {}, Lcom/tkay/core/common/a/a;->a()Lcom/tkay/core/common/a/a;

    move-result-object v2

    iget-object p1, p0, Lcom/tkay/basead/d/a/a$2;->c:Lcom/tkay/basead/d/a/a;

    invoke-static {p1}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/basead/d/a/a;)Landroid/content/Context;

    move-result-object v3

    iget-object p1, p0, Lcom/tkay/basead/d/a/a$2;->a:Lcom/tkay/core/common/f/i;

    iget v4, p1, Lcom/tkay/core/common/f/i;->f:I

    iget-object p1, p0, Lcom/tkay/basead/d/a/a$2;->a:Lcom/tkay/core/common/f/i;

    iget-object v5, p1, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    iget-object p1, p0, Lcom/tkay/basead/d/a/a$2;->a:Lcom/tkay/core/common/f/i;

    iget-object v6, p1, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual/range {v2 .. v7}, Lcom/tkay/core/common/a/a;->a(Landroid/content/Context;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 130
    iget-object p1, p0, Lcom/tkay/basead/d/a/a$2;->c:Lcom/tkay/basead/d/a/a;

    iget-object p2, p0, Lcom/tkay/basead/d/a/a$2;->a:Lcom/tkay/core/common/f/i;

    invoke-static {p1, v0, p2}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/basead/d/a/a;Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;)Lcom/tkay/expressad/foundation/d/d;

    move-result-object p1

    .line 132
    iget-object p2, p0, Lcom/tkay/basead/d/a/a$2;->b:Lcom/tkay/basead/d/a/a$a;

    if-eqz p2, :cond_1

    .line 133
    invoke-interface {p2, v0}, Lcom/tkay/basead/d/a/a$a;->a(Lcom/tkay/core/common/f/f;)V

    .line 135
    :cond_1
    iget-object p2, p0, Lcom/tkay/basead/d/a/a$2;->c:Lcom/tkay/basead/d/a/a;

    iget-object v1, p0, Lcom/tkay/basead/d/a/a$2;->a:Lcom/tkay/core/common/f/i;

    iget-object v2, p0, Lcom/tkay/basead/d/a/a$2;->b:Lcom/tkay/basead/d/a/a$a;

    invoke-static {p2, v0, v1, p1, v2}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/basead/d/a/a;Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/a$a;)V

    return-void

    .line 137
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/d/a/a$2;->b:Lcom/tkay/basead/d/a/a$a;

    if-eqz v0, :cond_4

    if-eqz p2, :cond_3

    .line 138
    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    :cond_3
    const-string p2, "No Ad Return."

    :goto_1
    const-string v1, "30001"

    invoke-static {v1, p2}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Lcom/tkay/basead/d/a/a$a;->a(Lcom/tkay/core/common/f/f;Lcom/tkay/basead/c/e;)V

    :cond_4
    return-void
.end method

.method public final onLoadStart(I)V
    .locals 0

    return-void
.end method
