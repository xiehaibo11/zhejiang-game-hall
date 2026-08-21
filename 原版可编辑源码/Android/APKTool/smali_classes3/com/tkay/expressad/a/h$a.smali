.class final Lcom/tkay/expressad/a/h$a;
.super Lcom/tkay/expressad/foundation/g/g/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/a/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation


# static fields
.field private static final h:I = 0xa


# instance fields
.field final synthetic a:Lcom/tkay/expressad/a/h;

.field private final e:Ljava/util/concurrent/Semaphore;

.field private final f:Landroid/content/Context;

.field private g:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:Lcom/tkay/expressad/c/b;

.field private m:Lcom/tkay/expressad/foundation/d/c;

.field private n:Z

.field private o:Z

.field private p:I

.field private q:Lcom/tkay/expressad/a/g$a;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/a/h;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/c/b;Lcom/tkay/expressad/foundation/d/c;ZZI)V
    .locals 1

    .line 99
    iput-object p1, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-direct {p0}, Lcom/tkay/expressad/foundation/g/g/a;-><init>()V

    .line 74
    new-instance p1, Ljava/util/concurrent/Semaphore;

    const/4 v0, 0x0

    invoke-direct {p1, v0}, Ljava/util/concurrent/Semaphore;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/expressad/a/h$a;->e:Ljava/util/concurrent/Semaphore;

    .line 280
    new-instance p1, Lcom/tkay/expressad/a/h$a$1;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/a/h$a$1;-><init>(Lcom/tkay/expressad/a/h$a;)V

    iput-object p1, p0, Lcom/tkay/expressad/a/h$a;->q:Lcom/tkay/expressad/a/g$a;

    .line 100
    iput-object p2, p0, Lcom/tkay/expressad/a/h$a;->f:Landroid/content/Context;

    .line 101
    iput-object p3, p0, Lcom/tkay/expressad/a/h$a;->g:Ljava/lang/String;

    .line 102
    iput-object p4, p0, Lcom/tkay/expressad/a/h$a;->i:Ljava/lang/String;

    .line 103
    iput-object p5, p0, Lcom/tkay/expressad/a/h$a;->j:Ljava/lang/String;

    .line 104
    iput-object p6, p0, Lcom/tkay/expressad/a/h$a;->k:Ljava/lang/String;

    .line 105
    iput-object p7, p0, Lcom/tkay/expressad/a/h$a;->l:Lcom/tkay/expressad/c/b;

    .line 106
    iput-object p8, p0, Lcom/tkay/expressad/a/h$a;->m:Lcom/tkay/expressad/foundation/d/c;

    .line 107
    iput-boolean p9, p0, Lcom/tkay/expressad/a/h$a;->n:Z

    .line 108
    iput-boolean p10, p0, Lcom/tkay/expressad/a/h$a;->o:Z

    .line 109
    iput p11, p0, Lcom/tkay/expressad/a/h$a;->p:I

    return-void
.end method

.method private a(Ljava/lang/String;ZZLcom/tkay/expressad/foundation/d/c;I)Lcom/tkay/expressad/a/c$b;
    .locals 15

    move-object v0, p0

    move-object/from16 v1, p1

    const-string v2, ""

    .line 116
    iget-object v3, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v3}, Lcom/tkay/expressad/a/h;->a(Lcom/tkay/expressad/a/h;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 117
    iget-object v3, v0, Lcom/tkay/expressad/a/h$a;->f:Landroid/content/Context;

    invoke-static {v3, v1}, Lcom/tkay/expressad/d/a;->a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 118
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 119
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 123
    :cond_0
    iget-object v3, v0, Lcom/tkay/expressad/a/h$a;->m:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v3, :cond_1

    .line 124
    invoke-virtual {v3, v1}, Lcom/tkay/expressad/foundation/d/c;->u(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 127
    :cond_1
    new-instance v3, Lcom/tkay/expressad/a/c$b;

    invoke-direct {v3}, Lcom/tkay/expressad/a/c$b;-><init>()V

    .line 128
    new-instance v4, Lcom/tkay/expressad/a/f;

    invoke-direct {v4}, Lcom/tkay/expressad/a/f;-><init>()V

    .line 133
    :try_start_0
    invoke-static {v1}, Lcom/tkay/expressad/a/h$a;->b(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 134
    invoke-static {v1}, Ljava/net/URI;->create(Ljava/lang/String;)Ljava/net/URI;

    move-result-object v5

    .line 135
    invoke-virtual {v5}, Ljava/net/URI;->getScheme()Ljava/lang/String;

    move-result-object v6
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 136
    :try_start_1
    invoke-virtual {v5}, Ljava/net/URI;->getHost()Ljava/lang/String;

    move-result-object v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :cond_2
    move-object v5, v2

    goto :goto_1

    :catch_0
    move-object v6, v2

    :catch_1
    :goto_0
    move-object v5, v2

    move-object v2, v6

    :goto_1
    const/4 v6, 0x0

    move-object v8, v1

    move v1, v6

    :goto_2
    const/16 v7, 0xa

    if-ge v1, v7, :cond_15

    .line 144
    iget-object v7, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v7}, Lcom/tkay/expressad/a/h;->b(Lcom/tkay/expressad/a/h;)Z

    move-result v7

    const/4 v9, 0x0

    if-nez v7, :cond_3

    return-object v9

    .line 148
    :cond_3
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    .line 149
    iget-object v7, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    move/from16 v12, p2

    move/from16 v13, p3

    move-object/from16 v10, p4

    invoke-virtual {v4, v8, v12, v13, v10}, Lcom/tkay/expressad/a/f;->a(Ljava/lang/String;ZZLcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/a/f$a;

    move-result-object v11

    invoke-static {v7, v11}, Lcom/tkay/expressad/a/h;->a(Lcom/tkay/expressad/a/h;Lcom/tkay/expressad/a/f$a;)Lcom/tkay/expressad/a/f$a;

    .line 150
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    .line 152
    iget-object v7, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v7}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v7

    if-nez v7, :cond_4

    .line 154
    invoke-virtual {v3, v8}, Lcom/tkay/expressad/a/c$b;->e(Ljava/lang/String;)V

    .line 155
    invoke-virtual {v3, v6}, Lcom/tkay/expressad/a/c$b;->a(Z)V

    .line 156
    iget-object v1, v0, Lcom/tkay/expressad/a/h$a;->l:Lcom/tkay/expressad/c/b;

    if-eqz v1, :cond_15

    .line 157
    sget v1, Lcom/tkay/expressad/c/a;->a:I

    goto/16 :goto_8

    .line 162
    :cond_4
    iget-object v7, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v7}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v7

    iget-object v7, v7, Lcom/tkay/expressad/a/f$a;->h:Ljava/lang/String;

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    const/4 v11, 0x1

    if-nez v7, :cond_6

    .line 163
    invoke-virtual {v3, v8}, Lcom/tkay/expressad/a/c$b;->e(Ljava/lang/String;)V

    .line 164
    iget-object v2, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v2}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v2

    iget-object v2, v2, Lcom/tkay/expressad/a/f$a;->h:Ljava/lang/String;

    invoke-virtual {v3, v2}, Lcom/tkay/expressad/a/c$b;->b(Ljava/lang/String;)V

    .line 165
    invoke-virtual {v3, v11}, Lcom/tkay/expressad/a/c$b;->b(I)V

    .line 166
    iget-object v2, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v2}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/a/f$a;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Lcom/tkay/expressad/a/c$b;->a(Ljava/lang/String;)V

    .line 168
    invoke-virtual {v3, v6}, Lcom/tkay/expressad/a/c$b;->a(Z)V

    if-nez v1, :cond_5

    .line 170
    invoke-static {}, Lcom/tkay/expressad/a/a/a;->a()Lcom/tkay/expressad/a/a/a;

    move-result-object v7

    iget-object v1, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v1}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v1

    iget-object v9, v1, Lcom/tkay/expressad/a/f$a;->h:Ljava/lang/String;

    iget-object v11, v0, Lcom/tkay/expressad/a/h$a;->k:Ljava/lang/String;

    move-object/from16 v10, p4

    move/from16 v12, p2

    move/from16 v13, p3

    move/from16 v14, p5

    invoke-virtual/range {v7 .. v14}, Lcom/tkay/expressad/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;ZZI)V

    .line 172
    :cond_5
    iget-object v1, v0, Lcom/tkay/expressad/a/h$a;->l:Lcom/tkay/expressad/c/b;

    if-eqz v1, :cond_15

    .line 173
    sget v1, Lcom/tkay/expressad/c/a;->a:I

    iget-object v1, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v1}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    iget-object v1, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v1}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    iget-object v1, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v1}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    goto/16 :goto_8

    .line 177
    :cond_6
    invoke-virtual {v3, v11}, Lcom/tkay/expressad/a/c$b;->a(Z)V

    .line 178
    iget-object v7, v0, Lcom/tkay/expressad/a/h$a;->l:Lcom/tkay/expressad/c/b;

    if-eqz v7, :cond_7

    .line 179
    sget v7, Lcom/tkay/expressad/c/a;->a:I

    iget-object v7, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v7}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    iget-object v7, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v7}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    iget-object v7, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v7}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    .line 181
    :cond_7
    iget-object v7, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v7}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v7

    iget v7, v7, Lcom/tkay/expressad/a/f$a;->f:I

    const/16 v14, 0x12d

    if-eq v7, v14, :cond_9

    const/16 v14, 0x12e

    if-eq v7, v14, :cond_9

    const/16 v14, 0x133

    if-ne v7, v14, :cond_8

    goto :goto_3

    :cond_8
    move v7, v6

    goto :goto_4

    :cond_9
    :goto_3
    move v7, v11

    :goto_4
    if-eqz v7, :cond_11

    .line 183
    invoke-virtual {v3}, Lcom/tkay/expressad/a/c$b;->b()V

    .line 184
    iget-object v7, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v7}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v7

    iget-object v7, v7, Lcom/tkay/expressad/a/f$a;->a:Ljava/lang/String;

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_a

    .line 186
    invoke-virtual {v3, v11}, Lcom/tkay/expressad/a/c$b;->b(Z)V

    .line 187
    invoke-virtual {v3, v8}, Lcom/tkay/expressad/a/c$b;->e(Ljava/lang/String;)V

    goto/16 :goto_8

    .line 190
    :cond_a
    iget-object v7, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v7}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v7

    iget-object v7, v7, Lcom/tkay/expressad/a/f$a;->a:Ljava/lang/String;

    .line 192
    invoke-static {v7}, Lcom/tkay/expressad/a/h$a;->b(Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_c

    const-string v8, "/"

    .line 2371
    invoke-virtual {v7, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_b

    .line 193
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_b

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_b

    .line 194
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "://"

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    move-object v2, v9

    move-object v5, v2

    goto :goto_5

    .line 197
    :cond_b
    invoke-virtual {v3, v11}, Lcom/tkay/expressad/a/c$b;->b(Z)V

    .line 198
    invoke-virtual {v3, v7}, Lcom/tkay/expressad/a/c$b;->e(Ljava/lang/String;)V

    goto/16 :goto_8

    .line 201
    :cond_c
    invoke-static {v7}, Lcom/tkay/expressad/a/h$a;->b(Ljava/lang/String;)Z

    move-result v8

    if-nez v8, :cond_d

    .line 203
    :try_start_2
    invoke-static {v7}, Ljava/net/URI;->create(Ljava/lang/String;)Ljava/net/URI;

    move-result-object v8

    .line 204
    invoke-virtual {v8}, Ljava/net/URI;->getScheme()Ljava/lang/String;

    move-result-object v2

    .line 205
    invoke-virtual {v8}, Ljava/net/URI;->getHost()Ljava/lang/String;

    move-result-object v5
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    .line 2379
    :catch_2
    :cond_d
    :goto_5
    invoke-static {v7}, Lcom/tkay/expressad/foundation/h/s$a;->a(Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_e

    .line 212
    invoke-virtual {v3, v11}, Lcom/tkay/expressad/a/c$b;->b(Z)V

    .line 213
    invoke-virtual {v3, v7}, Lcom/tkay/expressad/a/c$b;->e(Ljava/lang/String;)V

    goto/16 :goto_8

    .line 217
    :cond_e
    iget-object v8, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v8}, Lcom/tkay/expressad/a/h;->a(Lcom/tkay/expressad/a/h;)Z

    move-result v8

    if-eqz v8, :cond_f

    .line 219
    iget-object v8, v0, Lcom/tkay/expressad/a/h$a;->f:Landroid/content/Context;

    invoke-static {v8, v7}, Lcom/tkay/expressad/d/a;->a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 220
    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_f

    .line 221
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    .line 224
    :cond_f
    iget-object v8, v0, Lcom/tkay/expressad/a/h$a;->m:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v8, :cond_10

    .line 225
    invoke-virtual {v8, v7}, Lcom/tkay/expressad/foundation/d/c;->u(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    :cond_10
    move-object v8, v7

    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_2

    .line 228
    :cond_11
    iget-object v2, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v2}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v2

    iget v2, v2, Lcom/tkay/expressad/a/f$a;->f:I

    const/16 v4, 0xc8

    if-ne v2, v4, :cond_12

    move v2, v11

    goto :goto_6

    :cond_12
    move v2, v6

    :goto_6
    if-eqz v2, :cond_14

    .line 229
    invoke-virtual {v3, v11}, Lcom/tkay/expressad/a/c$b;->b(Z)V

    .line 230
    invoke-virtual {v3, v8}, Lcom/tkay/expressad/a/c$b;->e(Ljava/lang/String;)V

    .line 231
    iget-object v1, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v1}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v1

    iget-object v1, v1, Lcom/tkay/expressad/a/f$a;->g:Ljava/lang/String;

    if-nez v1, :cond_13

    goto :goto_7

    :cond_13
    iget-object v1, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v1}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v1

    iget-object v9, v1, Lcom/tkay/expressad/a/f$a;->g:Ljava/lang/String;

    :goto_7
    invoke-virtual {v3, v9}, Lcom/tkay/expressad/a/c$b;->c(Ljava/lang/String;)V

    goto :goto_8

    .line 234
    :cond_14
    invoke-virtual {v3, v6}, Lcom/tkay/expressad/a/c$b;->b(Z)V

    .line 235
    invoke-virtual {v3, v8}, Lcom/tkay/expressad/a/c$b;->e(Ljava/lang/String;)V

    if-nez v1, :cond_15

    .line 237
    invoke-static {}, Lcom/tkay/expressad/a/a/a;->a()Lcom/tkay/expressad/a/a/a;

    move-result-object v7

    iget-object v1, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v1}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v1

    iget-object v9, v1, Lcom/tkay/expressad/a/f$a;->h:Ljava/lang/String;

    iget-object v11, v0, Lcom/tkay/expressad/a/h$a;->k:Ljava/lang/String;

    move-object/from16 v10, p4

    move/from16 v12, p2

    move/from16 v13, p3

    move/from16 v14, p5

    invoke-virtual/range {v7 .. v14}, Lcom/tkay/expressad/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;ZZI)V

    :cond_15
    :goto_8
    return-object v3
.end method

.method static synthetic a(Lcom/tkay/expressad/a/h$a;)V
    .locals 0

    .line 6081
    iget-object p0, p0, Lcom/tkay/expressad/a/h$a;->e:Ljava/util/concurrent/Semaphore;

    invoke-virtual {p0}, Ljava/util/concurrent/Semaphore;->release()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/a/h$a;ZZ)V
    .locals 4

    .line 5249
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->d(Lcom/tkay/expressad/a/h;)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    .line 5251
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 5252
    iget-object v2, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v2, v0, v1}, Lcom/tkay/expressad/a/h;->a(Lcom/tkay/expressad/a/h;J)J

    goto :goto_0

    .line 5254
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 5256
    iget-object v2, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v2, v0, v1}, Lcom/tkay/expressad/a/h;->a(Lcom/tkay/expressad/a/h;J)J

    :goto_0
    if-eqz p1, :cond_2

    if-eqz p2, :cond_1

    .line 5262
    iget-object p1, p0, Lcom/tkay/expressad/a/h$a;->l:Lcom/tkay/expressad/c/b;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {p1}, Lcom/tkay/expressad/a/h;->e(Lcom/tkay/expressad/a/h;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 5263
    iget-object p0, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {p0}, Lcom/tkay/expressad/a/h;->f(Lcom/tkay/expressad/a/h;)Z

    .line 5264
    sget p0, Lcom/tkay/expressad/c/a;->b:I

    return-void

    .line 5267
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/a/h$a;->l:Lcom/tkay/expressad/c/b;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {p1}, Lcom/tkay/expressad/a/h;->e(Lcom/tkay/expressad/a/h;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 5268
    iget-object p0, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {p0}, Lcom/tkay/expressad/a/h;->f(Lcom/tkay/expressad/a/h;)Z

    .line 5269
    sget p0, Lcom/tkay/expressad/c/a;->b:I

    return-void

    .line 5273
    :cond_2
    iget-object p0, p0, Lcom/tkay/expressad/a/h$a;->l:Lcom/tkay/expressad/c/b;

    if-eqz p0, :cond_3

    .line 5274
    sget p0, Lcom/tkay/expressad/c/a;->b:I

    :cond_3
    return-void
.end method

.method private a(ZZ)V
    .locals 4

    .line 249
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->d(Lcom/tkay/expressad/a/h;)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    .line 251
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 252
    iget-object v2, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v2, v0, v1}, Lcom/tkay/expressad/a/h;->a(Lcom/tkay/expressad/a/h;J)J

    goto :goto_0

    .line 254
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 256
    iget-object v2, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v2, v0, v1}, Lcom/tkay/expressad/a/h;->a(Lcom/tkay/expressad/a/h;J)J

    :goto_0
    if-eqz p1, :cond_2

    if-eqz p2, :cond_1

    .line 262
    iget-object p1, p0, Lcom/tkay/expressad/a/h$a;->l:Lcom/tkay/expressad/c/b;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {p1}, Lcom/tkay/expressad/a/h;->e(Lcom/tkay/expressad/a/h;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 263
    iget-object p1, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {p1}, Lcom/tkay/expressad/a/h;->f(Lcom/tkay/expressad/a/h;)Z

    .line 264
    sget p1, Lcom/tkay/expressad/c/a;->b:I

    return-void

    .line 267
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/a/h$a;->l:Lcom/tkay/expressad/c/b;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {p1}, Lcom/tkay/expressad/a/h;->e(Lcom/tkay/expressad/a/h;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 268
    iget-object p1, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {p1}, Lcom/tkay/expressad/a/h;->f(Lcom/tkay/expressad/a/h;)Z

    .line 269
    sget p1, Lcom/tkay/expressad/c/a;->b:I

    return-void

    .line 273
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/a/h$a;->l:Lcom/tkay/expressad/c/b;

    if-eqz p1, :cond_3

    .line 274
    sget p1, Lcom/tkay/expressad/c/a;->b:I

    :cond_3
    return-void
.end method

.method private static a(I)Z
    .locals 1

    const/16 v0, 0xc8

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic a(Lcom/tkay/expressad/a/h$a;Ljava/lang/String;)Z
    .locals 0

    .line 72
    invoke-direct {p0, p1}, Lcom/tkay/expressad/a/h$a;->a(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private a(Ljava/lang/String;)Z
    .locals 3

    .line 342
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a;->m:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    .line 343
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->Q()I

    .line 3379
    :cond_0
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/s$a;->a(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    .line 346
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/a/c$b;->c(I)V

    .line 347
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/a/c$b;->e(Ljava/lang/String;)V

    .line 348
    iget-object p1, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {p1}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/a/c$b;->b(Z)V

    return v1

    .line 350
    :cond_1
    invoke-static {p1}, Lcom/tkay/expressad/a/h$a;->e(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 351
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    const/4 v2, 0x3

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/a/c$b;->c(I)V

    .line 352
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/a/c$b;->e(Ljava/lang/String;)V

    .line 353
    iget-object p1, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {p1}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/a/c$b;->b(Z)V

    return v1

    .line 356
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/a/c$b;->c(I)V

    .line 357
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/a/c$b;->e(Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1
.end method

.method private static b(I)Z
    .locals 1

    const/16 v0, 0x12d

    if-eq p0, v0, :cond_1

    const/16 v0, 0x12e

    if-eq p0, v0, :cond_1

    const/16 v0, 0x133

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method private static b(Ljava/lang/String;)Z
    .locals 0

    .line 367
    invoke-static {p0}, Landroid/webkit/URLUtil;->isNetworkUrl(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static c(Ljava/lang/String;)Z
    .locals 1

    const-string v0, "/"

    .line 371
    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private d()V
    .locals 1

    .line 77
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a;->e:Ljava/util/concurrent/Semaphore;

    invoke-virtual {v0}, Ljava/util/concurrent/Semaphore;->acquireUninterruptibly()V

    return-void
.end method

.method private static d(Ljava/lang/String;)Z
    .locals 0

    .line 379
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/s$a;->a(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private static e(Ljava/lang/String;)Z
    .locals 1

    .line 383
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p0

    const-string v0, "apk"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private h()V
    .locals 1

    .line 81
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a;->e:Ljava/util/concurrent/Semaphore;

    invoke-virtual {v0}, Ljava/util/concurrent/Semaphore;->release()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 22

    move-object/from16 v6, p0

    .line 389
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->h(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/e;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 390
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->h(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/e;

    .line 393
    :cond_0
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    new-instance v1, Lcom/tkay/expressad/a/c$b;

    invoke-direct {v1}, Lcom/tkay/expressad/a/c$b;-><init>()V

    invoke-static {v0, v1}, Lcom/tkay/expressad/a/h;->a(Lcom/tkay/expressad/a/h;Lcom/tkay/expressad/a/c$b;)Lcom/tkay/expressad/a/c$b;

    .line 394
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    iget-object v1, v6, Lcom/tkay/expressad/a/h$a;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/a/c$b;->e(Ljava/lang/String;)V

    .line 396
    iget-object v7, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    iget-object v1, v6, Lcom/tkay/expressad/a/h$a;->g:Ljava/lang/String;

    iget-boolean v2, v6, Lcom/tkay/expressad/a/h$a;->n:Z

    iget-boolean v3, v6, Lcom/tkay/expressad/a/h$a;->o:Z

    iget-object v4, v6, Lcom/tkay/expressad/a/h$a;->m:Lcom/tkay/expressad/foundation/d/c;

    iget v5, v6, Lcom/tkay/expressad/a/h$a;->p:I

    move-object/from16 v0, p0

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/a/h$a;->a(Ljava/lang/String;ZZLcom/tkay/expressad/foundation/d/c;I)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-static {v7, v0}, Lcom/tkay/expressad/a/h;->a(Lcom/tkay/expressad/a/h;Lcom/tkay/expressad/a/c$b;)Lcom/tkay/expressad/a/c$b;

    .line 398
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->e()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_1

    .line 399
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/a/c$b;->a(Z)V

    .line 401
    :cond_1
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->b(Lcom/tkay/expressad/a/h;)Z

    move-result v0

    if-nez v0, :cond_2

    return-void

    .line 406
    :cond_2
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->g()Z

    move-result v0

    if-nez v0, :cond_3

    return-void

    .line 409
    :cond_3
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 410
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    iget-object v2, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v2}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v2

    iget v2, v2, Lcom/tkay/expressad/a/f$a;->f:I

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/a/c$b;->a(I)V

    .line 413
    :cond_4
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/a/h$a;->e(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v0

    .line 4379
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/s$a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_6

    const/16 v0, 0xc8

    .line 413
    iget-object v2, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    .line 414
    invoke-static {v2}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v2

    iget v2, v2, Lcom/tkay/expressad/a/f$a;->f:I

    if-ne v0, v2, :cond_6

    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->f()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->f()Ljava/lang/String;

    move-result-object v0

    const-string v2, "EXCEPTION_CAMPAIGN_NOT_ACTIVE"

    invoke-virtual {v0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 415
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/a/c$b;->b(I)V

    .line 416
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->f()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "302"

    const-string v1, "startWebViewHtmlParser"

    .line 417
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 418
    new-instance v7, Lcom/tkay/expressad/a/g;

    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->i(Lcom/tkay/expressad/a/h;)Z

    move-result v0

    invoke-direct {v7, v0}, Lcom/tkay/expressad/a/g;-><init>(Z)V

    iget-object v8, v6, Lcom/tkay/expressad/a/h$a;->i:Ljava/lang/String;

    iget-object v9, v6, Lcom/tkay/expressad/a/h$a;->j:Ljava/lang/String;

    iget-object v10, v6, Lcom/tkay/expressad/a/h$a;->k:Ljava/lang/String;

    iget-object v11, v6, Lcom/tkay/expressad/a/h$a;->f:Landroid/content/Context;

    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v12

    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    .line 419
    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->f()Ljava/lang/String;

    move-result-object v13

    iget-object v14, v6, Lcom/tkay/expressad/a/h$a;->q:Lcom/tkay/expressad/a/g$a;

    .line 418
    invoke-virtual/range {v7 .. v14}, Lcom/tkay/expressad/a/g;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/a/g$a;)V

    goto :goto_0

    .line 424
    :cond_5
    :try_start_0
    new-instance v15, Lcom/tkay/expressad/a/g;

    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->i(Lcom/tkay/expressad/a/h;)Z

    move-result v0

    invoke-direct {v15, v0}, Lcom/tkay/expressad/a/g;-><init>(Z)V

    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->i:Ljava/lang/String;

    iget-object v1, v6, Lcom/tkay/expressad/a/h$a;->j:Ljava/lang/String;

    iget-object v2, v6, Lcom/tkay/expressad/a/h$a;->k:Ljava/lang/String;

    iget-object v3, v6, Lcom/tkay/expressad/a/h$a;->f:Landroid/content/Context;

    iget-object v4, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v4}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v20

    iget-object v4, v6, Lcom/tkay/expressad/a/h$a;->q:Lcom/tkay/expressad/a/g$a;

    move-object/from16 v16, v0

    move-object/from16 v17, v1

    move-object/from16 v18, v2

    move-object/from16 v19, v3

    move-object/from16 v21, v4

    invoke-virtual/range {v15 .. v21}, Lcom/tkay/expressad/a/g;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/a/g$a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 5077
    :catch_0
    :goto_0
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->e:Ljava/util/concurrent/Semaphore;

    invoke-virtual {v0}, Ljava/util/concurrent/Semaphore;->acquireUninterruptibly()V

    return-void

    .line 433
    :cond_6
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->l:Lcom/tkay/expressad/c/b;

    if-eqz v0, :cond_7

    .line 434
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    sget v0, Lcom/tkay/expressad/c/a;->a:I

    .line 436
    :cond_7
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v0

    if-eqz v0, :cond_8

    .line 437
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/a/c$b;->b(I)V

    .line 438
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    iget-object v1, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v1}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v1

    iget-object v1, v1, Lcom/tkay/expressad/a/f$a;->h:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/a/c$b;->b(Ljava/lang/String;)V

    .line 439
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    iget-object v1, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v1}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v1

    iget v1, v1, Lcom/tkay/expressad/a/f$a;->f:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/a/c$b;->a(I)V

    .line 440
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    iget-object v1, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v1}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/a/f$a;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/a/c$b;->a(Ljava/lang/String;)V

    .line 441
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    iget-object v1, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v1}, Lcom/tkay/expressad/a/h;->c(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/f$a;

    move-result-object v1

    iget-object v1, v1, Lcom/tkay/expressad/a/f$a;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/a/c$b;->c(Ljava/lang/String;)V

    .line 444
    :cond_8
    iget-object v0, v6, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v6, v0}, Lcom/tkay/expressad/a/h$a;->a(Ljava/lang/String;)Z

    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final c()V
    .locals 0

    return-void
.end method
