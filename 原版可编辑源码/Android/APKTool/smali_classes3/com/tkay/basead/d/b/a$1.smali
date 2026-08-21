.class final Lcom/tkay/basead/d/b/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/h/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/b/a;->b(Lcom/tkay/core/common/f/i;Ljava/lang/String;Lcom/tkay/basead/d/b/a$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/i;

.field final synthetic b:Lcom/tkay/basead/d/b/a$a;

.field final synthetic c:Lcom/tkay/basead/d/b/a;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/b/a;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/b/a$a;)V
    .locals 0

    .line 92
    iput-object p1, p0, Lcom/tkay/basead/d/b/a$1;->c:Lcom/tkay/basead/d/b/a;

    iput-object p2, p0, Lcom/tkay/basead/d/b/a$1;->a:Lcom/tkay/core/common/f/i;

    iput-object p3, p0, Lcom/tkay/basead/d/b/a$1;->b:Lcom/tkay/basead/d/b/a$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLoadCanceled(I)V
    .locals 3

    .line 163
    iget-object p1, p0, Lcom/tkay/basead/d/b/a$1;->b:Lcom/tkay/basead/d/b/a$a;

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    const-string v1, "30001"

    const-string v2, "Cancel Request."

    .line 164
    invoke-static {v1, v2}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Lcom/tkay/basead/d/b/a$a;->a(Lcom/tkay/core/common/f/y;Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void
.end method

.method public final onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 1

    .line 156
    iget-object p1, p0, Lcom/tkay/basead/d/b/a$1;->b:Lcom/tkay/basead/d/b/a$a;

    if-eqz p1, :cond_0

    const/4 p3, 0x0

    const-string v0, "30001"

    .line 157
    invoke-static {v0, p2}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p2

    invoke-interface {p1, p3, p2}, Lcom/tkay/basead/d/b/a$a;->a(Lcom/tkay/core/common/f/y;Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void
.end method

.method public final onLoadFinish(ILjava/lang/Object;)V
    .locals 5

    const/4 p1, 0x0

    .line 103
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :try_start_1
    const-string v1, "sdk_updatetime"

    .line 104
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 105
    iget-object v1, p0, Lcom/tkay/basead/d/b/a$1;->a:Lcom/tkay/core/common/f/i;

    invoke-static {v1, v0}, Lcom/tkay/basead/d/b/b;->a(Lcom/tkay/core/common/f/i;Lorg/json/JSONObject;)Lcom/tkay/core/common/f/y;

    move-result-object v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_0
    move-object v0, p1

    :catch_1
    move-object v1, p1

    :goto_0
    const-string v2, "30001"

    if-eqz v1, :cond_5

    .line 111
    invoke-static {v1}, Lcom/tkay/basead/d/c/b;->a(Lcom/tkay/core/common/f/h;)V

    .line 113
    invoke-virtual {v1}, Lcom/tkay/core/common/f/y;->b()I

    move-result p2

    const/4 v3, 0x1

    if-ne p2, v3, :cond_1

    .line 114
    iget-object p2, p0, Lcom/tkay/basead/d/b/a$1;->c:Lcom/tkay/basead/d/b/a;

    invoke-static {p2}, Lcom/tkay/basead/d/b/a;->a(Lcom/tkay/basead/d/b/a;)Landroid/content/Context;

    move-result-object p2

    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    invoke-virtual {v1}, Lcom/tkay/core/common/f/y;->B()Ljava/lang/String;

    move-result-object v3

    invoke-static {p2, v3}, Lcom/tkay/basead/a/b;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_1

    .line 116
    invoke-static {}, Lcom/tkay/basead/d/c/c;->a()Lcom/tkay/basead/d/c/c;

    move-result-object p2

    iget-object v0, p0, Lcom/tkay/basead/d/b/a$1;->c:Lcom/tkay/basead/d/b/a;

    invoke-static {v0}, Lcom/tkay/basead/d/b/a;->a(Lcom/tkay/basead/d/b/a;)Landroid/content/Context;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/basead/d/b/a$1;->a:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/basead/d/b/a$1;->a:Lcom/tkay/core/common/f/i;

    iget-object v4, v4, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    invoke-static {v3, v4}, Lcom/tkay/basead/d/c/c;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/basead/d/b/a$1;->a:Lcom/tkay/core/common/f/i;

    iget-object v4, v4, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2, v0, v3, v1, v4}, Lcom/tkay/basead/d/c/c;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/j;)V

    .line 117
    iget-object p2, p0, Lcom/tkay/basead/d/b/a$1;->b:Lcom/tkay/basead/d/b/a$a;

    if-eqz p2, :cond_0

    const-string v0, "Application installed."

    .line 118
    invoke-static {v2, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-interface {p2, p1, v0}, Lcom/tkay/basead/d/b/a$a;->a(Lcom/tkay/core/common/f/y;Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void

    .line 125
    :cond_1
    invoke-virtual {v1}, Lcom/tkay/core/common/f/y;->b()I

    move-result p2

    const/4 v3, 0x2

    if-ne p2, v3, :cond_3

    .line 126
    iget-object p2, p0, Lcom/tkay/basead/d/b/a$1;->c:Lcom/tkay/basead/d/b/a;

    invoke-static {p2}, Lcom/tkay/basead/d/b/a;->a(Lcom/tkay/basead/d/b/a;)Landroid/content/Context;

    move-result-object p2

    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    invoke-virtual {v1}, Lcom/tkay/core/common/f/y;->B()Ljava/lang/String;

    move-result-object v3

    invoke-static {p2, v3}, Lcom/tkay/basead/a/b;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p2

    if-nez p2, :cond_3

    .line 128
    invoke-static {}, Lcom/tkay/basead/d/c/c;->a()Lcom/tkay/basead/d/c/c;

    move-result-object p2

    iget-object v0, p0, Lcom/tkay/basead/d/b/a$1;->c:Lcom/tkay/basead/d/b/a;

    invoke-static {v0}, Lcom/tkay/basead/d/b/a;->a(Lcom/tkay/basead/d/b/a;)Landroid/content/Context;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/basead/d/b/a$1;->a:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/basead/d/b/a$1;->a:Lcom/tkay/core/common/f/i;

    iget-object v4, v4, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    invoke-static {v3, v4}, Lcom/tkay/basead/d/c/c;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/basead/d/b/a$1;->a:Lcom/tkay/core/common/f/i;

    iget-object v4, v4, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2, v0, v3, v1, v4}, Lcom/tkay/basead/d/c/c;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/j;)V

    .line 130
    iget-object p2, p0, Lcom/tkay/basead/d/b/a$1;->b:Lcom/tkay/basead/d/b/a$a;

    if-eqz p2, :cond_2

    const-string v0, "Application not installed yet."

    .line 131
    invoke-static {v2, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-interface {p2, p1, v0}, Lcom/tkay/basead/d/b/a$a;->a(Lcom/tkay/core/common/f/y;Lcom/tkay/basead/c/e;)V

    :cond_2
    return-void

    .line 138
    :cond_3
    iget-object p1, p0, Lcom/tkay/basead/d/b/a$1;->a:Lcom/tkay/core/common/f/i;

    invoke-static {p1, v1}, Lcom/tkay/basead/d/c/a;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/z;)V

    const/16 p1, 0xa

    .line 139
    new-instance p2, Lcom/tkay/basead/c/i;

    iget-object v2, p0, Lcom/tkay/basead/d/b/a$1;->a:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v3, ""

    invoke-direct {p2, v2, v3}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p1, v1, p2}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 141
    invoke-static {}, Lcom/tkay/core/basead/b;->a()Lcom/tkay/core/basead/b;

    iget-object p1, p0, Lcom/tkay/basead/d/b/a$1;->c:Lcom/tkay/basead/d/b/a;

    invoke-static {p1}, Lcom/tkay/basead/d/b/a;->a(Lcom/tkay/basead/d/b/a;)Landroid/content/Context;

    move-result-object p1

    invoke-static {}, Lcom/tkay/core/basead/b;->a()Lcom/tkay/core/basead/b;

    iget-object p2, p0, Lcom/tkay/basead/d/b/a$1;->a:Lcom/tkay/core/common/f/i;

    invoke-static {p2}, Lcom/tkay/core/basead/b;->a(Lcom/tkay/core/common/f/i;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, p2, v0}, Lcom/tkay/core/basead/b;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 142
    iget-object p1, p0, Lcom/tkay/basead/d/b/a$1;->b:Lcom/tkay/basead/d/b/a$a;

    if-eqz p1, :cond_4

    .line 143
    invoke-interface {p1}, Lcom/tkay/basead/d/b/a$a;->a()V

    .line 145
    :cond_4
    iget-object p1, p0, Lcom/tkay/basead/d/b/a$1;->c:Lcom/tkay/basead/d/b/a;

    iget-object p2, p0, Lcom/tkay/basead/d/b/a$1;->a:Lcom/tkay/core/common/f/i;

    iget-object v0, p0, Lcom/tkay/basead/d/b/a$1;->b:Lcom/tkay/basead/d/b/a$a;

    invoke-static {p1, v1, p2, v0}, Lcom/tkay/basead/d/b/a;->a(Lcom/tkay/basead/d/b/a;Lcom/tkay/core/common/f/y;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/b/a$a;)V

    return-void

    .line 147
    :cond_5
    iget-object v0, p0, Lcom/tkay/basead/d/b/a$1;->b:Lcom/tkay/basead/d/b/a$a;

    if-eqz v0, :cond_7

    if-eqz p2, :cond_6

    .line 148
    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    :cond_6
    const-string p2, "No Ad Return."

    :goto_1
    invoke-static {v2, p2}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Lcom/tkay/basead/d/b/a$a;->a(Lcom/tkay/core/common/f/y;Lcom/tkay/basead/c/e;)V

    :cond_7
    return-void
.end method

.method public final onLoadStart(I)V
    .locals 0

    return-void
.end method
