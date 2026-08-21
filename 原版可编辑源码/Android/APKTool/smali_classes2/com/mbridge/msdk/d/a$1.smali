.class final Lcom/mbridge/msdk/d/a$1;
.super Lcom/mbridge/msdk/foundation/same/e/a;
.source "ShortCutsDataManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/d/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/mbridge/msdk/d/a/a;

.field final synthetic c:I

.field final synthetic d:Lcom/mbridge/msdk/d/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/d/a;Landroid/content/Context;Lcom/mbridge/msdk/d/a/a;I)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/mbridge/msdk/d/a$1;->d:Lcom/mbridge/msdk/d/a;

    iput-object p2, p0, Lcom/mbridge/msdk/d/a$1;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/mbridge/msdk/d/a$1;->b:Lcom/mbridge/msdk/d/a/a;

    iput p4, p0, Lcom/mbridge/msdk/d/a$1;->c:I

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/e/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final cancelTask()V
    .locals 0

    return-void
.end method

.method public final pauseTask(Z)V
    .locals 0

    return-void
.end method

.method public final runTask()V
    .locals 7

    .line 59
    new-instance v0, Lcom/mbridge/msdk/d/b/a;

    iget-object v1, p0, Lcom/mbridge/msdk/d/a$1;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/d/b/a;-><init>(Landroid/content/Context;)V

    .line 60
    new-instance v1, Lcom/mbridge/msdk/foundation/same/net/g/d;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;-><init>()V

    .line 61
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v2

    if-nez v2, :cond_0

    .line 63
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v2

    .line 65
    :cond_0
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->D()Ljava/lang/String;

    move-result-object v2

    .line 66
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x1

    if-eqz v3, :cond_1

    .line 67
    iget-object v0, p0, Lcom/mbridge/msdk/d/a$1;->b:Lcom/mbridge/msdk/d/a/a;

    const-string v1, "unit id is empty"

    invoke-interface {v0, v4, v1}, Lcom/mbridge/msdk/d/a/a;->a(ILjava/lang/String;)V

    return-void

    .line 70
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v3

    const-string v5, "app_id"

    invoke-virtual {v1, v5, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 71
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v5, "sign"

    invoke-virtual {v1, v5, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 72
    iget-object v3, p0, Lcom/mbridge/msdk/d/a$1;->a:Landroid/content/Context;

    invoke-static {v3}, Lcom/mbridge/msdk/d/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/d/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/d/b;->c()Ljava/lang/String;

    move-result-object v3

    const-string v5, "jm_a"

    invoke-virtual {v1, v5, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 73
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/d/a$1;->a:Landroid/content/Context;

    invoke-static {v5}, Lcom/mbridge/msdk/d/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/d/b;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/d/b;->a()I

    move-result v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ""

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v6, "jm_n"

    invoke-virtual {v1, v6, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 74
    iget-object v3, p0, Lcom/mbridge/msdk/d/a$1;->a:Landroid/content/Context;

    invoke-static {v3}, Lcom/mbridge/msdk/d/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/d/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/d/b;->b()Ljava/lang/String;

    move-result-object v3

    const-string v6, "jm_l"

    invoke-virtual {v1, v6, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "unit_id"

    .line 76
    invoke-virtual {v1, v3, v2}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 78
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v3

    .line 77
    invoke-static {v3}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v3

    .line 79
    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/foundation/db/f;->e(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v6, "jm_dp_ads"

    invoke-virtual {v1, v6, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 80
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget v6, p0, Lcom/mbridge/msdk/d/a$1;->c:I

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v6, "req_type"

    invoke-virtual {v1, v6, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "ad_type"

    const-string v6, "289"

    .line 81
    invoke-virtual {v1, v3, v6}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 82
    invoke-static {}, Landroid/os/Looper;->prepare()V

    .line 84
    new-instance v3, Lcom/mbridge/msdk/d/a$1$1;

    invoke-direct {v3, p0}, Lcom/mbridge/msdk/d/a$1$1;-><init>(Lcom/mbridge/msdk/d/a$1;)V

    .line 111
    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/d/b/b;->setUnitId(Ljava/lang/String;)V

    .line 112
    invoke-virtual {v0, v4, v1, v3, v5}, Lcom/mbridge/msdk/d/b/a;->choiceV3OrV5BySetting(ILcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;Ljava/lang/String;)V

    .line 113
    invoke-static {}, Landroid/os/Looper;->loop()V

    return-void
.end method
