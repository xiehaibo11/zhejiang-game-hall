.class final Lcom/tkay/core/common/i/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/i/d;->a(JJLcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/TYBaseAdAdapter;

.field final synthetic b:J

.field final synthetic c:Lcom/tkay/core/common/f/d;

.field final synthetic d:J

.field final synthetic e:Lcom/tkay/core/common/i/d;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/i/d;Lcom/tkay/core/api/TYBaseAdAdapter;JLcom/tkay/core/common/f/d;J)V
    .locals 0

    .line 36
    iput-object p1, p0, Lcom/tkay/core/common/i/d$1;->e:Lcom/tkay/core/common/i/d;

    iput-object p2, p0, Lcom/tkay/core/common/i/d$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    iput-wide p3, p0, Lcom/tkay/core/common/i/d$1;->b:J

    iput-object p5, p0, Lcom/tkay/core/common/i/d$1;->c:Lcom/tkay/core/common/f/d;

    iput-wide p6, p0, Lcom/tkay/core/common/i/d$1;->d:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 12

    .line 41
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/i/d$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v0

    .line 42
    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->R()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    return-void

    .line 46
    :cond_0
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    .line 48
    iget-wide v2, p0, Lcom/tkay/core/common/i/d$1;->b:J

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-eqz v2, :cond_1

    iget-wide v2, p0, Lcom/tkay/core/common/i/d$1;->b:J

    cmp-long v2, v0, v2

    if-ltz v2, :cond_1

    .line 49
    iget-wide v0, p0, Lcom/tkay/core/common/i/d$1;->b:J

    :cond_1
    move-wide v4, v0

    .line 52
    iget-object v0, p0, Lcom/tkay/core/common/i/d$1;->c:Lcom/tkay/core/common/f/d;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v0

    .line 53
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v11

    .line 54
    invoke-virtual {v11}, Lcom/tkay/core/c/d;->v()Ljava/lang/String;

    move-result-object v1

    .line 55
    invoke-static {v1}, Lcom/tkay/core/common/i/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 58
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v1, "a"

    .line 59
    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v8

    const-string v1, "b"

    .line 60
    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 62
    iget-wide v2, p0, Lcom/tkay/core/common/i/d$1;->d:J

    iget-object v6, p0, Lcom/tkay/core/common/i/d$1;->c:Lcom/tkay/core/common/f/d;

    iget-object v7, p0, Lcom/tkay/core/common/i/d$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-static/range {v2 .. v7}, Lcom/tkay/core/common/i/d;->a(JJLcom/tkay/core/common/f/d;Lcom/tkay/core/api/TYBaseAdAdapter;)Ljava/lang/String;

    move-result-object v2

    .line 63
    invoke-static {v1, v2}, Lcom/tkay/core/common/i/a;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/i/b;

    move-result-object v1

    .line 65
    invoke-virtual {v1}, Lcom/tkay/core/common/i/b;->a()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 66
    iget-object v0, p0, Lcom/tkay/core/common/i/d$1;->c:Lcom/tkay/core/common/f/d;

    const-string v2, ""

    invoke-virtual {v1}, Lcom/tkay/core/common/i/b;->b()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v11, v2, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/c/d;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 68
    :cond_2
    new-instance v2, Lcom/tkay/core/common/i/c;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v7

    invoke-virtual {v1}, Lcom/tkay/core/common/i/b;->a()Ljava/lang/String;

    move-result-object v9

    iget-object v10, p0, Lcom/tkay/core/common/i/d$1;->c:Lcom/tkay/core/common/f/d;

    move-object v6, v2

    invoke-direct/range {v6 .. v11}, Lcom/tkay/core/common/i/c;-><init>(Landroid/content/Context;ILjava/lang/String;Lcom/tkay/core/common/f/d;Lcom/tkay/core/c/d;)V

    const/4 v1, 0x0

    .line 69
    new-instance v3, Lcom/tkay/core/common/i/d$1$1;

    invoke-direct {v3, p0, v0}, Lcom/tkay/core/common/i/d$1$1;-><init>(Lcom/tkay/core/common/i/d$1;Ljava/lang/String;)V

    invoke-virtual {v2, v1, v3}, Lcom/tkay/core/common/i/c;->a(ILcom/tkay/core/common/h/k;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
