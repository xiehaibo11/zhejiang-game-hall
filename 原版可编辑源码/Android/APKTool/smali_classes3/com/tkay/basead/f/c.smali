.class public abstract Lcom/tkay/basead/f/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/f/a;


# static fields
.field public static final h:Ljava/lang/String; = "extra_request_id"

.field public static final i:Ljava/lang/String; = "extra_scenario"

.field public static final j:Ljava/lang/String; = "extra_orientation"


# instance fields
.field public b:Ljava/lang/String;

.field protected c:Landroid/content/Context;

.field protected d:Lcom/tkay/core/common/f/i;

.field protected e:Ljava/lang/String;

.field protected f:Z

.field protected g:Lcom/tkay/core/common/f/r;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;Z)V
    .locals 1

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/f/c;->b:Ljava/lang/String;

    .line 37
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/f/c;->c:Landroid/content/Context;

    .line 38
    iput-object p2, p0, Lcom/tkay/basead/f/c;->d:Lcom/tkay/core/common/f/i;

    .line 39
    iput-object p3, p0, Lcom/tkay/basead/f/c;->e:Ljava/lang/String;

    .line 40
    iput-boolean p4, p0, Lcom/tkay/basead/f/c;->f:Z

    return-void
.end method

.method private b()Lcom/tkay/basead/c/e;
    .locals 4

    .line 91
    iget-object v0, p0, Lcom/tkay/basead/f/c;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, "30001"

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/tkay/basead/f/c;->d:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 94
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/f/c;->c:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/f/a/a;->a(Landroid/content/Context;)Lcom/tkay/basead/f/a/a;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/basead/f/c;->d:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/basead/f/c;->e:Ljava/lang/String;

    invoke-virtual {v0, v2, v3}, Lcom/tkay/basead/f/a/a;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/r;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/f/c;->g:Lcom/tkay/core/common/f/r;

    if-nez v0, :cond_1

    const-string v0, "No fill, offer = null!"

    .line 97
    invoke-static {v1, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    return-object v0

    .line 99
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/f/c;->d:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    if-nez v0, :cond_2

    const-string v0, "30002"

    const-string v1, "No fill, setting = null!"

    .line 100
    invoke-static {v0, v1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    return-object v0

    :cond_2
    const/4 v0, 0x0

    return-object v0

    :cond_3
    :goto_0
    const-string v0, "offerid\u3001placementid can not be null!"

    .line 92
    invoke-static {v1, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/tkay/basead/e/c;)V
    .locals 5

    .line 1091
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/f/c;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, "30001"

    if-nez v0, :cond_3

    :try_start_1
    iget-object v0, p0, Lcom/tkay/basead/f/c;->d:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 1094
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/f/c;->c:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/f/a/a;->a(Landroid/content/Context;)Lcom/tkay/basead/f/a/a;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/basead/f/c;->d:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/basead/f/c;->e:Ljava/lang/String;

    invoke-virtual {v0, v2, v3}, Lcom/tkay/basead/f/a/a;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/r;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/f/c;->g:Lcom/tkay/core/common/f/r;

    if-nez v0, :cond_1

    const-string v0, "No fill, offer = null!"

    .line 1097
    invoke-static {v1, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    goto :goto_1

    .line 1099
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/f/c;->d:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    if-nez v0, :cond_2

    const-string v0, "30002"

    const-string v1, "No fill, setting = null!"

    .line 1100
    invoke-static {v0, v1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    goto :goto_1

    :cond_2
    const/4 v0, 0x0

    goto :goto_1

    :cond_3
    :goto_0
    const-string v0, "offerid\u3001placementid can not be null!"

    .line 1092
    invoke-static {v1, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    :goto_1
    if-eqz v0, :cond_4

    .line 49
    invoke-interface {p1, v0}, Lcom/tkay/basead/e/c;->onAdLoadFailed(Lcom/tkay/basead/c/e;)V

    return-void

    .line 54
    :cond_4
    iget-object v0, p0, Lcom/tkay/basead/f/c;->c:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/f/a/a;->a(Landroid/content/Context;)Lcom/tkay/basead/f/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/f/c;->d:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/basead/f/c;->g:Lcom/tkay/core/common/f/r;

    iget-object v3, p0, Lcom/tkay/basead/f/c;->d:Lcom/tkay/core/common/f/i;

    new-instance v4, Lcom/tkay/basead/f/c$1;

    invoke-direct {v4, p0, p1}, Lcom/tkay/basead/f/c$1;-><init>(Lcom/tkay/basead/f/c;Lcom/tkay/basead/e/c;)V

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/basead/f/a/a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/r;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/a/b/b$b;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 70
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 72
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "-9999"

    invoke-static {v1, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/tkay/basead/e/c;->onAdLoadFailed(Lcom/tkay/basead/c/e;)V

    return-void
.end method

.method public a()Z
    .locals 4

    .line 80
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/basead/f/c;->d()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 81
    iget-object v0, p0, Lcom/tkay/basead/f/c;->c:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/f/a/a;->a(Landroid/content/Context;)Lcom/tkay/basead/f/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/f/c;->g:Lcom/tkay/core/common/f/r;

    iget-object v2, p0, Lcom/tkay/basead/f/c;->d:Lcom/tkay/core/common/f/i;

    iget-boolean v3, p0, Lcom/tkay/basead/f/c;->f:Z

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/basead/f/a/a;->a(Lcom/tkay/core/common/f/r;Lcom/tkay/core/common/f/i;Z)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    .line 84
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public c()V
    .locals 0

    return-void
.end method

.method protected final d()Z
    .locals 4

    .line 106
    iget-object v0, p0, Lcom/tkay/basead/f/c;->c:Landroid/content/Context;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 109
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/f/c;->d:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return v1

    .line 112
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/f/c;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    return v1

    .line 117
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/f/c;->g:Lcom/tkay/core/common/f/r;

    if-nez v0, :cond_3

    .line 118
    iget-object v0, p0, Lcom/tkay/basead/f/c;->c:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/f/a/a;->a(Landroid/content/Context;)Lcom/tkay/basead/f/a/a;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/basead/f/c;->d:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/basead/f/c;->e:Ljava/lang/String;

    invoke-virtual {v0, v2, v3}, Lcom/tkay/basead/f/a/a;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/r;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/f/c;->g:Lcom/tkay/core/common/f/r;

    if-nez v0, :cond_3

    return v1

    :cond_3
    const/4 v0, 0x1

    return v0
.end method

.method public final e()Lcom/tkay/core/common/f/r;
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/tkay/basead/f/c;->g:Lcom/tkay/core/common/f/r;

    return-object v0
.end method
