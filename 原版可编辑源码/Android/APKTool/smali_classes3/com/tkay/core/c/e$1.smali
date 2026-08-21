.class final Lcom/tkay/core/c/e$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/c/e;->a(Lcom/tkay/core/c/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lcom/tkay/core/c/e$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/c/d;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/core/c/e$a;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:Ljava/util/Map;

.field final synthetic g:Lcom/tkay/core/c/e;


# direct methods
.method constructor <init>(Lcom/tkay/core/c/e;Lcom/tkay/core/c/d;Ljava/lang/String;Lcom/tkay/core/c/e$a;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 0

    .line 144
    iput-object p1, p0, Lcom/tkay/core/c/e$1;->g:Lcom/tkay/core/c/e;

    iput-object p2, p0, Lcom/tkay/core/c/e$1;->a:Lcom/tkay/core/c/d;

    iput-object p3, p0, Lcom/tkay/core/c/e$1;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    iput-object p5, p0, Lcom/tkay/core/c/e$1;->d:Ljava/lang/String;

    iput-object p6, p0, Lcom/tkay/core/c/e$1;->e:Ljava/lang/String;

    iput-object p7, p0, Lcom/tkay/core/c/e$1;->f:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 16

    move-object/from16 v7, p0

    .line 147
    iget-object v0, v7, Lcom/tkay/core/c/e$1;->a:Lcom/tkay/core/c/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->Q()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    move-object v13, v0

    .line 149
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, v7, Lcom/tkay/core/c/e$1;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->d(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v14

    .line 150
    iget-object v0, v7, Lcom/tkay/core/c/e$1;->a:Lcom/tkay/core/c/d;

    const/4 v15, 0x0

    if-eqz v0, :cond_6

    .line 153
    invoke-virtual {v0}, Lcom/tkay/core/c/d;->N()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v14, v0}, Ljava/util/Map;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v8, 0x1

    xor-int/2addr v0, v8

    if-nez v0, :cond_3

    .line 156
    iget-object v0, v7, Lcom/tkay/core/c/e$1;->a:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->az()Z

    move-result v0

    if-nez v0, :cond_3

    invoke-static {}, Lcom/tkay/core/common/s;->a()Lcom/tkay/core/common/s;

    move-result-object v0

    iget-object v1, v7, Lcom/tkay/core/c/e$1;->g:Lcom/tkay/core/c/e;

    invoke-static {v1}, Lcom/tkay/core/c/e;->a(Lcom/tkay/core/c/e;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, v7, Lcom/tkay/core/c/e$1;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/s;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_1

    .line 298
    :cond_1
    iget-object v0, v7, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    if-eqz v0, :cond_2

    .line 299
    iget-object v1, v7, Lcom/tkay/core/c/e$1;->a:Lcom/tkay/core/c/d;

    invoke-interface {v0, v1}, Lcom/tkay/core/c/e$a;->a(Lcom/tkay/core/c/d;)V

    :cond_2
    return-void

    .line 158
    :cond_3
    :goto_1
    sget-object v0, Lcom/tkay/core/c/e;->a:Ljava/lang/String;

    new-array v12, v8, [Z

    .line 161
    iget-object v0, v7, Lcom/tkay/core/c/e$1;->a:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->Z()J

    move-result-wide v9

    .line 163
    new-instance v11, Lcom/tkay/core/c/e$1$1;

    move-object v0, v11

    move-object/from16 v1, p0

    move-wide v2, v9

    move-wide v4, v9

    move-object v6, v12

    invoke-direct/range {v0 .. v6}, Lcom/tkay/core/c/e$1$1;-><init>(Lcom/tkay/core/c/e$1;JJ[Z)V

    const-wide/16 v0, 0x0

    cmp-long v0, v9, v0

    if-nez v0, :cond_4

    aput-boolean v8, v12, v15

    .line 181
    iget-object v0, v7, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    if-eqz v0, :cond_5

    .line 182
    iget-object v1, v7, Lcom/tkay/core/c/e$1;->a:Lcom/tkay/core/c/d;

    invoke-interface {v0, v1}, Lcom/tkay/core/c/e$a;->a(Lcom/tkay/core/c/d;)V

    goto :goto_2

    .line 185
    :cond_4
    sget-object v0, Lcom/tkay/core/c/e;->a:Ljava/lang/String;

    .line 186
    invoke-virtual {v11}, Landroid/os/CountDownTimer;->start()Landroid/os/CountDownTimer;

    .line 189
    :cond_5
    :goto_2
    new-instance v0, Lcom/tkay/core/common/h/l;

    iget-object v1, v7, Lcom/tkay/core/c/e$1;->g:Lcom/tkay/core/c/e;

    invoke-static {v1}, Lcom/tkay/core/c/e;->a(Lcom/tkay/core/c/e;)Landroid/content/Context;

    move-result-object v9

    iget-object v10, v7, Lcom/tkay/core/c/e$1;->d:Ljava/lang/String;

    iget-object v1, v7, Lcom/tkay/core/c/e$1;->e:Ljava/lang/String;

    iget-object v2, v7, Lcom/tkay/core/c/e$1;->b:Ljava/lang/String;

    iget-object v3, v7, Lcom/tkay/core/c/e$1;->f:Ljava/util/Map;

    move-object v8, v0

    move-object v4, v11

    move-object v11, v1

    move-object v1, v12

    move-object v12, v2

    move v2, v15

    move-object v15, v3

    invoke-direct/range {v8 .. v15}, Lcom/tkay/core/common/h/l;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)V

    .line 190
    new-instance v3, Lcom/tkay/core/c/e$1$2;

    invoke-direct {v3, v7, v4, v1}, Lcom/tkay/core/c/e$1$2;-><init>(Lcom/tkay/core/c/e$1;Landroid/os/CountDownTimer;[Z)V

    invoke-virtual {v0, v2, v3}, Lcom/tkay/core/common/h/l;->a(ILcom/tkay/core/common/h/k;)V

    return-void

    :cond_6
    move v2, v15

    .line 305
    new-instance v0, Lcom/tkay/core/common/h/l;

    iget-object v1, v7, Lcom/tkay/core/c/e$1;->g:Lcom/tkay/core/c/e;

    invoke-static {v1}, Lcom/tkay/core/c/e;->a(Lcom/tkay/core/c/e;)Landroid/content/Context;

    move-result-object v9

    iget-object v10, v7, Lcom/tkay/core/c/e$1;->d:Ljava/lang/String;

    iget-object v11, v7, Lcom/tkay/core/c/e$1;->e:Ljava/lang/String;

    iget-object v12, v7, Lcom/tkay/core/c/e$1;->b:Ljava/lang/String;

    iget-object v15, v7, Lcom/tkay/core/c/e$1;->f:Ljava/util/Map;

    move-object v8, v0

    invoke-direct/range {v8 .. v15}, Lcom/tkay/core/common/h/l;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)V

    .line 306
    new-instance v1, Lcom/tkay/core/c/e$1$3;

    invoke-direct {v1, v7}, Lcom/tkay/core/c/e$1$3;-><init>(Lcom/tkay/core/c/e$1;)V

    invoke-virtual {v0, v2, v1}, Lcom/tkay/core/common/h/l;->a(ILcom/tkay/core/common/h/k;)V

    return-void
.end method
