.class final Lcom/tkay/expressad/reward/a/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/reward/a/c;->a(Landroid/content/Context;ZIZILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/tkay/expressad/reward/a/c$c;Lcom/tkay/expressad/reward/a/c$i;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/concurrent/CopyOnWriteArrayList;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:I

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:Ljava/lang/String;

.field final synthetic g:Lcom/tkay/expressad/reward/a/c$i;

.field final synthetic h:Lcom/tkay/expressad/reward/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/reward/a/c;Ljava/util/concurrent/CopyOnWriteArrayList;Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/reward/a/c$i;)V
    .locals 0

    .line 86
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/c$1;->h:Lcom/tkay/expressad/reward/a/c;

    iput-object p2, p0, Lcom/tkay/expressad/reward/a/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    iput-object p3, p0, Lcom/tkay/expressad/reward/a/c$1;->b:Landroid/content/Context;

    iput-object p4, p0, Lcom/tkay/expressad/reward/a/c$1;->c:Ljava/lang/String;

    iput p5, p0, Lcom/tkay/expressad/reward/a/c$1;->d:I

    iput-object p6, p0, Lcom/tkay/expressad/reward/a/c$1;->e:Ljava/lang/String;

    iput-object p7, p0, Lcom/tkay/expressad/reward/a/c$1;->f:Ljava/lang/String;

    iput-object p8, p0, Lcom/tkay/expressad/reward/a/c$1;->g:Lcom/tkay/expressad/reward/a/c$i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 19

    move-object/from16 v1, p0

    .line 89
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_f

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_f

    .line 93
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v0

    iget-object v2, v1, Lcom/tkay/expressad/reward/a/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/videocommon/b/j;->a(Ljava/util/List;)V

    .line 94
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v2, v1, Lcom/tkay/expressad/reward/a/c$1;->c:Ljava/lang/String;

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    iget v4, v1, Lcom/tkay/expressad/reward/a/c$1;->d:I

    new-instance v5, Lcom/tkay/expressad/reward/a/c$f;

    iget-object v6, v1, Lcom/tkay/expressad/reward/a/c$1;->h:Lcom/tkay/expressad/reward/a/c;

    invoke-static {v6}, Lcom/tkay/expressad/reward/a/c;->a(Lcom/tkay/expressad/reward/a/c;)Lcom/tkay/expressad/reward/a/c$h;

    move-result-object v6

    iget-object v7, v1, Lcom/tkay/expressad/reward/a/c$1;->e:Ljava/lang/String;

    iget-object v8, v1, Lcom/tkay/expressad/reward/a/c$1;->c:Ljava/lang/String;

    iget-object v9, v1, Lcom/tkay/expressad/reward/a/c$1;->f:Ljava/lang/String;

    invoke-direct {v5, v6, v7, v8, v9}, Lcom/tkay/expressad/reward/a/c$f;-><init>(Landroid/os/Handler;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v2, v3, v4, v5}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/util/List;ILcom/tkay/expressad/videocommon/d/b;)Lcom/tkay/expressad/videocommon/b/n;

    .line 95
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v2, v1, Lcom/tkay/expressad/reward/a/c$1;->c:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/videocommon/b/c;->d(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 97
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_0

    .line 98
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    .line 102
    :cond_0
    :goto_0
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_f

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    move-object v13, v0

    check-cast v13, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v13, :cond_1

    .line 106
    invoke-virtual {v13}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v14

    const-string v15, ".zip"

    if-eqz v14, :cond_3

    .line 108
    invoke-virtual {v13}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_3

    .line 109
    invoke-virtual {v14}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v0

    .line 110
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    const-string v3, "cmpt=1"

    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    .line 111
    invoke-virtual {v0, v15}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 114
    :try_start_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v12

    new-instance v11, Lcom/tkay/expressad/reward/a/c$g;

    iget-object v4, v1, Lcom/tkay/expressad/reward/a/c$1;->b:Landroid/content/Context;

    iget-object v5, v1, Lcom/tkay/expressad/reward/a/c$1;->e:Ljava/lang/String;

    iget-object v6, v1, Lcom/tkay/expressad/reward/a/c$1;->c:Ljava/lang/String;

    iget-object v7, v1, Lcom/tkay/expressad/reward/a/c$1;->f:Ljava/lang/String;

    const/16 v9, 0x35b

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/c$1;->h:Lcom/tkay/expressad/reward/a/c;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/c;->a(Lcom/tkay/expressad/reward/a/c;)Lcom/tkay/expressad/reward/a/c$h;

    move-result-object v10

    iget-object v8, v1, Lcom/tkay/expressad/reward/a/c$1;->g:Lcom/tkay/expressad/reward/a/c$i;

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    move-object/from16 v16, v3

    move-object v3, v11

    move-object/from16 v17, v8

    move-object v8, v13

    move-object/from16 v18, v11

    move-object/from16 v11, v17

    move-object/from16 v17, v2

    move-object v2, v12

    move-object/from16 v12, v16

    :try_start_2
    invoke-direct/range {v3 .. v12}, Lcom/tkay/expressad/reward/a/c$g;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;ILandroid/os/Handler;Lcom/tkay/expressad/reward/a/c$i;Ljava/util/List;)V

    move-object/from16 v3, v18

    invoke-virtual {v2, v0, v3}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_3

    :catch_1
    move-exception v0

    goto :goto_2

    :catch_2
    move-exception v0

    move-object/from16 v17, v2

    .line 116
    :goto_2
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_4

    .line 117
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    goto :goto_3

    :cond_2
    move-object/from16 v17, v2

    .line 123
    :try_start_3
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v2

    new-instance v12, Lcom/tkay/expressad/reward/a/c$d;

    const/16 v4, 0x35b

    iget-object v5, v1, Lcom/tkay/expressad/reward/a/c$1;->e:Ljava/lang/String;

    iget-object v6, v1, Lcom/tkay/expressad/reward/a/c$1;->c:Ljava/lang/String;

    iget-object v7, v1, Lcom/tkay/expressad/reward/a/c$1;->f:Ljava/lang/String;

    iget-object v9, v1, Lcom/tkay/expressad/reward/a/c$1;->g:Lcom/tkay/expressad/reward/a/c$i;

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/c$1;->h:Lcom/tkay/expressad/reward/a/c;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/c;->a(Lcom/tkay/expressad/reward/a/c;)Lcom/tkay/expressad/reward/a/c$h;

    move-result-object v10

    iget-object v11, v1, Lcom/tkay/expressad/reward/a/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    move-object v3, v12

    move-object v8, v13

    invoke-direct/range {v3 .. v11}, Lcom/tkay/expressad/reward/a/c$d;-><init>(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/c$i;Landroid/os/Handler;Ljava/util/List;)V

    invoke-virtual {v2, v0, v12}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_3

    :catch_3
    move-exception v0

    .line 125
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_4

    .line 126
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    goto :goto_3

    :cond_3
    move-object/from16 v17, v2

    .line 134
    :cond_4
    :goto_3
    invoke-virtual {v13}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v9

    .line 135
    invoke-virtual {v13}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    .line 136
    invoke-static {v9}, Lcom/tkay/expressad/foundation/h/t;->f(Ljava/lang/String;)Z

    move-result v2

    if-nez v0, :cond_5

    .line 138
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/c$1;->h:Lcom/tkay/expressad/reward/a/c;

    iget-object v4, v1, Lcom/tkay/expressad/reward/a/c$1;->b:Landroid/content/Context;

    iget-object v5, v1, Lcom/tkay/expressad/reward/a/c$1;->e:Ljava/lang/String;

    iget-object v6, v1, Lcom/tkay/expressad/reward/a/c$1;->c:Ljava/lang/String;

    iget-object v7, v1, Lcom/tkay/expressad/reward/a/c$1;->f:Ljava/lang/String;

    iget-object v10, v1, Lcom/tkay/expressad/reward/a/c$1;->g:Lcom/tkay/expressad/reward/a/c$i;

    iget-object v11, v1, Lcom/tkay/expressad/reward/a/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    move-object v8, v13

    invoke-static/range {v3 .. v11}, Lcom/tkay/expressad/reward/a/c;->a(Lcom/tkay/expressad/reward/a/c;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Lcom/tkay/expressad/reward/a/c$i;Ljava/util/List;)V

    goto :goto_4

    :cond_5
    if-eqz v2, :cond_6

    .line 141
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/c$1;->h:Lcom/tkay/expressad/reward/a/c;

    iget-object v4, v1, Lcom/tkay/expressad/reward/a/c$1;->b:Landroid/content/Context;

    iget-object v5, v1, Lcom/tkay/expressad/reward/a/c$1;->e:Ljava/lang/String;

    iget-object v6, v1, Lcom/tkay/expressad/reward/a/c$1;->c:Ljava/lang/String;

    iget-object v7, v1, Lcom/tkay/expressad/reward/a/c$1;->f:Ljava/lang/String;

    iget-object v10, v1, Lcom/tkay/expressad/reward/a/c$1;->g:Lcom/tkay/expressad/reward/a/c$i;

    iget-object v11, v1, Lcom/tkay/expressad/reward/a/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    move-object v8, v13

    invoke-static/range {v3 .. v11}, Lcom/tkay/expressad/reward/a/c;->a(Lcom/tkay/expressad/reward/a/c;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Lcom/tkay/expressad/reward/a/c$i;Ljava/util/List;)V

    .line 145
    :cond_6
    :goto_4
    invoke-virtual {v13}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    invoke-virtual {v13}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_7

    .line 146
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {v13}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;)V

    .line 150
    :cond_7
    invoke-virtual {v13}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v0

    .line 151
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_8

    .line 154
    :try_start_4
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/c$1;->b:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v2

    new-instance v10, Lcom/tkay/expressad/reward/a/c$e;

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/c$1;->h:Lcom/tkay/expressad/reward/a/c;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/c;->a(Lcom/tkay/expressad/reward/a/c;)Lcom/tkay/expressad/reward/a/c$h;

    move-result-object v4

    const/4 v5, 0x0

    iget-object v6, v1, Lcom/tkay/expressad/reward/a/c$1;->e:Ljava/lang/String;

    iget-object v7, v1, Lcom/tkay/expressad/reward/a/c$1;->c:Ljava/lang/String;

    iget-object v8, v1, Lcom/tkay/expressad/reward/a/c$1;->f:Ljava/lang/String;

    move-object v3, v10

    move-object v9, v13

    invoke-direct/range {v3 .. v9}, Lcom/tkay/expressad/reward/a/c$e;-><init>(Landroid/os/Handler;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v2, v0, v10}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_4

    goto :goto_5

    :catch_4
    move-exception v0

    .line 156
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_8

    .line 157
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    .line 161
    :cond_8
    :goto_5
    invoke-virtual {v13}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    .line 162
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_9

    .line 165
    :try_start_5
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/c$1;->b:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v2

    new-instance v10, Lcom/tkay/expressad/reward/a/c$e;

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/c$1;->h:Lcom/tkay/expressad/reward/a/c;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/c;->a(Lcom/tkay/expressad/reward/a/c;)Lcom/tkay/expressad/reward/a/c$h;

    move-result-object v4

    const/4 v5, 0x0

    iget-object v6, v1, Lcom/tkay/expressad/reward/a/c$1;->e:Ljava/lang/String;

    iget-object v7, v1, Lcom/tkay/expressad/reward/a/c$1;->c:Ljava/lang/String;

    iget-object v8, v1, Lcom/tkay/expressad/reward/a/c$1;->f:Ljava/lang/String;

    move-object v3, v10

    move-object v9, v13

    invoke-direct/range {v3 .. v9}, Lcom/tkay/expressad/reward/a/c$e;-><init>(Landroid/os/Handler;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v2, v0, v10}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_5

    goto :goto_6

    :catch_5
    move-exception v0

    .line 167
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_9

    .line 168
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_9
    :goto_6
    if-eqz v14, :cond_e

    .line 175
    invoke-virtual {v14}, Lcom/tkay/expressad/foundation/d/c$c;->d()Ljava/lang/String;

    move-result-object v0

    .line 176
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_b

    invoke-virtual {v13}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v2

    if-nez v2, :cond_b

    .line 177
    invoke-virtual {v0, v15}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_a

    .line 180
    :try_start_6
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v2

    new-instance v15, Lcom/tkay/expressad/reward/a/c$g;

    iget-object v4, v1, Lcom/tkay/expressad/reward/a/c$1;->b:Landroid/content/Context;

    iget-object v5, v1, Lcom/tkay/expressad/reward/a/c$1;->e:Ljava/lang/String;

    iget-object v6, v1, Lcom/tkay/expressad/reward/a/c$1;->c:Ljava/lang/String;

    iget-object v7, v1, Lcom/tkay/expressad/reward/a/c$1;->f:Ljava/lang/String;

    const/16 v9, 0x139

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/c$1;->h:Lcom/tkay/expressad/reward/a/c;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/c;->a(Lcom/tkay/expressad/reward/a/c;)Lcom/tkay/expressad/reward/a/c$h;

    move-result-object v10

    iget-object v11, v1, Lcom/tkay/expressad/reward/a/c$1;->g:Lcom/tkay/expressad/reward/a/c$i;

    iget-object v12, v1, Lcom/tkay/expressad/reward/a/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    move-object v3, v15

    move-object v8, v13

    invoke-direct/range {v3 .. v12}, Lcom/tkay/expressad/reward/a/c$g;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;ILandroid/os/Handler;Lcom/tkay/expressad/reward/a/c$i;Ljava/util/List;)V

    invoke-virtual {v2, v0, v15}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_6

    goto :goto_7

    :catch_6
    move-exception v0

    .line 182
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_b

    .line 183
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    goto :goto_7

    .line 189
    :cond_a
    :try_start_7
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v2

    new-instance v12, Lcom/tkay/expressad/reward/a/c$d;

    const/16 v4, 0x139

    iget-object v5, v1, Lcom/tkay/expressad/reward/a/c$1;->e:Ljava/lang/String;

    iget-object v6, v1, Lcom/tkay/expressad/reward/a/c$1;->c:Ljava/lang/String;

    iget-object v7, v1, Lcom/tkay/expressad/reward/a/c$1;->f:Ljava/lang/String;

    iget-object v9, v1, Lcom/tkay/expressad/reward/a/c$1;->g:Lcom/tkay/expressad/reward/a/c$i;

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/c$1;->h:Lcom/tkay/expressad/reward/a/c;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/c;->a(Lcom/tkay/expressad/reward/a/c;)Lcom/tkay/expressad/reward/a/c$h;

    move-result-object v10

    iget-object v11, v1, Lcom/tkay/expressad/reward/a/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    move-object v3, v12

    move-object v8, v13

    invoke-direct/range {v3 .. v11}, Lcom/tkay/expressad/reward/a/c$d;-><init>(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/c$i;Landroid/os/Handler;Ljava/util/List;)V

    invoke-virtual {v2, v0, v12}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_7

    goto :goto_7

    :catch_7
    move-exception v0

    .line 191
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_b

    .line 192
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    .line 198
    :cond_b
    :goto_7
    invoke-virtual {v14}, Lcom/tkay/expressad/foundation/d/c$c;->f()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_e

    .line 199
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_e

    .line 200
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_c
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_e

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c$c$a;

    if-eqz v0, :cond_c

    .line 201
    iget-object v3, v0, Lcom/tkay/expressad/foundation/d/c$c$a;->b:Ljava/util/List;

    if-eqz v3, :cond_c

    iget-object v3, v0, Lcom/tkay/expressad/foundation/d/c$c$a;->b:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_c

    .line 202
    iget-object v0, v0, Lcom/tkay/expressad/foundation/d/c$c$a;->b:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v10

    :cond_d
    :goto_8
    invoke-interface {v10}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_c

    invoke-interface {v10}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 203
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_d

    .line 205
    :try_start_8
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/c$1;->b:Landroid/content/Context;

    invoke-static {v3}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v11

    new-instance v12, Lcom/tkay/expressad/reward/a/c$e;

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/c$1;->h:Lcom/tkay/expressad/reward/a/c;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/c;->a(Lcom/tkay/expressad/reward/a/c;)Lcom/tkay/expressad/reward/a/c$h;

    move-result-object v4

    const/4 v5, 0x1

    iget-object v6, v1, Lcom/tkay/expressad/reward/a/c$1;->e:Ljava/lang/String;

    iget-object v7, v1, Lcom/tkay/expressad/reward/a/c$1;->c:Ljava/lang/String;

    iget-object v8, v1, Lcom/tkay/expressad/reward/a/c$1;->f:Ljava/lang/String;

    move-object v3, v12

    move-object v9, v13

    invoke-direct/range {v3 .. v9}, Lcom/tkay/expressad/reward/a/c$e;-><init>(Landroid/os/Handler;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v11, v0, v12}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_8

    goto :goto_8

    :catch_8
    move-exception v0

    .line 207
    sget-boolean v3, Lcom/tkay/expressad/b;->a:Z

    if-eqz v3, :cond_d

    .line 208
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    goto :goto_8

    :cond_e
    move-object/from16 v2, v17

    goto/16 :goto_1

    :cond_f
    return-void
.end method
