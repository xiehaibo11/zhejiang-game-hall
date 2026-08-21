.class final Lcom/tkay/core/common/r$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/r;->a(ILcom/tkay/core/common/f/e;Lcom/tkay/core/c/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/e;

.field final synthetic b:I

.field final synthetic c:Lcom/tkay/core/c/a;

.field final synthetic d:Lcom/tkay/core/common/r;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/r;Lcom/tkay/core/common/f/e;ILcom/tkay/core/c/a;)V
    .locals 0

    .line 53
    iput-object p1, p0, Lcom/tkay/core/common/r$1;->d:Lcom/tkay/core/common/r;

    iput-object p2, p0, Lcom/tkay/core/common/r$1;->a:Lcom/tkay/core/common/f/e;

    iput p3, p0, Lcom/tkay/core/common/r$1;->b:I

    iput-object p4, p0, Lcom/tkay/core/common/r$1;->c:Lcom/tkay/core/c/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 8

    .line 63
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/r$1;->a:Lcom/tkay/core/common/f/e;

    iget-object v1, v1, Lcom/tkay/core/common/f/e;->b:Lcom/tkay/core/common/f/ai;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/ai;->W()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 67
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/r$1;->a:Lcom/tkay/core/common/f/e;

    iget-object v0, v0, Lcom/tkay/core/common/f/e;->b:Lcom/tkay/core/common/f/ai;

    check-cast v0, Lcom/tkay/core/common/f/d;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v6

    .line 68
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    :cond_1
    const/4 v0, 0x0

    .line 74
    iget v1, p0, Lcom/tkay/core/common/r$1;->b:I

    const/4 v2, 0x4

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-eq v1, v2, :cond_5

    const/4 v2, 0x6

    if-eq v1, v2, :cond_3

    packed-switch v1, :pswitch_data_0

    goto :goto_0

    .line 94
    :pswitch_0
    iget-object v0, p0, Lcom/tkay/core/common/r$1;->a:Lcom/tkay/core/common/f/e;

    iget-object v0, v0, Lcom/tkay/core/common/f/e;->b:Lcom/tkay/core/common/f/ai;

    check-cast v0, Lcom/tkay/core/common/f/d;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->b()I

    move-result v0

    if-ne v0, v4, :cond_2

    move v3, v4

    .line 95
    :cond_2
    iget-object v0, p0, Lcom/tkay/core/common/r$1;->c:Lcom/tkay/core/c/a;

    invoke-virtual {v0}, Lcom/tkay/core/c/a;->M()Ljava/util/Map;

    move-result-object v0

    const-string v1, "dl"

    .line 96
    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 84
    :cond_3
    iget-object v0, p0, Lcom/tkay/core/common/r$1;->a:Lcom/tkay/core/common/f/e;

    iget-object v0, v0, Lcom/tkay/core/common/f/e;->b:Lcom/tkay/core/common/f/ai;

    check-cast v0, Lcom/tkay/core/common/f/d;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->u()I

    move-result v0

    if-ne v0, v4, :cond_4

    move v3, v4

    .line 86
    :cond_4
    iget-object v0, p0, Lcom/tkay/core/common/r$1;->c:Lcom/tkay/core/c/a;

    invoke-virtual {v0}, Lcom/tkay/core/c/a;->M()Ljava/util/Map;

    move-result-object v0

    const-string v1, "click"

    .line 87
    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 76
    :cond_5
    iget-object v0, p0, Lcom/tkay/core/common/r$1;->a:Lcom/tkay/core/common/f/e;

    iget-object v0, v0, Lcom/tkay/core/common/f/e;->b:Lcom/tkay/core/common/f/ai;

    check-cast v0, Lcom/tkay/core/common/f/d;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->t()I

    move-result v0

    if-ne v0, v4, :cond_6

    move v3, v4

    .line 78
    :cond_6
    iget-object v0, p0, Lcom/tkay/core/common/r$1;->c:Lcom/tkay/core/c/a;

    invoke-virtual {v0}, Lcom/tkay/core/c/a;->M()Ljava/util/Map;

    move-result-object v0

    const-string v1, "show"

    .line 79
    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    :goto_0
    if-eqz v3, :cond_7

    .line 100
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    .line 101
    invoke-static {}, Lcom/tkay/core/common/l/m;->a()Lorg/json/JSONObject;

    move-result-object v1

    .line 102
    sget-object v2, Lcom/tkay/core/common/r;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "common -> "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 103
    sget-object v2, Lcom/tkay/core/common/r;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "data -> "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, p0, Lcom/tkay/core/common/r$1;->a:Lcom/tkay/core/common/f/e;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/e;->a()Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 105
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    .line 106
    iget-object v1, p0, Lcom/tkay/core/common/r$1;->a:Lcom/tkay/core/common/f/e;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/e;->a()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v5

    .line 108
    iget-object v1, p0, Lcom/tkay/core/common/r$1;->d:Lcom/tkay/core/common/r;

    iget v2, p0, Lcom/tkay/core/common/r$1;->b:I

    iget-object v3, p0, Lcom/tkay/core/common/r$1;->a:Lcom/tkay/core/common/f/e;

    iget-object v3, v3, Lcom/tkay/core/common/f/e;->b:Lcom/tkay/core/common/f/ai;

    move-object v7, v3

    check-cast v7, Lcom/tkay/core/common/f/d;

    move-object v3, v0

    invoke-static/range {v1 .. v7}, Lcom/tkay/core/common/r;->a(Lcom/tkay/core/common/r;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/d;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_7
    return-void

    :pswitch_data_0
    .packed-switch 0x12
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method
