.class final Lcom/mbridge/msdk/click/j$a;
.super Lcom/mbridge/msdk/foundation/same/e/a;
.source "WebViewSpiderLoader.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/click/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/click/j;

.field private final b:Ljava/util/concurrent/Semaphore;

.field private final c:Landroid/content/Context;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Lcom/mbridge/msdk/rover/d;

.field private i:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private j:Z

.field private k:Z

.field private l:I

.field private m:Lcom/mbridge/msdk/click/i$a;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/click/j;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/rover/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZI)V
    .locals 1

    .line 101
    iput-object p1, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/e/a;-><init>()V

    .line 76
    new-instance p1, Ljava/util/concurrent/Semaphore;

    const/4 v0, 0x0

    invoke-direct {p1, v0}, Ljava/util/concurrent/Semaphore;-><init>(I)V

    iput-object p1, p0, Lcom/mbridge/msdk/click/j$a;->b:Ljava/util/concurrent/Semaphore;

    .line 282
    new-instance p1, Lcom/mbridge/msdk/click/j$a$1;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/click/j$a$1;-><init>(Lcom/mbridge/msdk/click/j$a;)V

    iput-object p1, p0, Lcom/mbridge/msdk/click/j$a;->m:Lcom/mbridge/msdk/click/i$a;

    .line 102
    iput-object p2, p0, Lcom/mbridge/msdk/click/j$a;->c:Landroid/content/Context;

    .line 103
    iput-object p3, p0, Lcom/mbridge/msdk/click/j$a;->d:Ljava/lang/String;

    .line 104
    iput-object p4, p0, Lcom/mbridge/msdk/click/j$a;->e:Ljava/lang/String;

    .line 105
    iput-object p5, p0, Lcom/mbridge/msdk/click/j$a;->f:Ljava/lang/String;

    .line 106
    iput-object p6, p0, Lcom/mbridge/msdk/click/j$a;->g:Ljava/lang/String;

    .line 107
    iput-object p7, p0, Lcom/mbridge/msdk/click/j$a;->h:Lcom/mbridge/msdk/rover/d;

    .line 108
    iput-object p8, p0, Lcom/mbridge/msdk/click/j$a;->i:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 109
    iput-boolean p9, p0, Lcom/mbridge/msdk/click/j$a;->j:Z

    .line 110
    iput-boolean p10, p0, Lcom/mbridge/msdk/click/j$a;->k:Z

    .line 111
    iput p11, p0, Lcom/mbridge/msdk/click/j$a;->l:I

    return-void
.end method

.method private a(Ljava/lang/String;ZZLcom/mbridge/msdk/foundation/entity/CampaignEx;I)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;
    .locals 19

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    const-string v2, ""

    const-string v3, "302"

    const-string v4, "startJavaHTTPSpider"

    .line 116
    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 118
    iget-object v3, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v3}, Lcom/mbridge/msdk/click/j;->a(Lcom/mbridge/msdk/click/j;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 119
    iget-object v3, v0, Lcom/mbridge/msdk/click/j$a;->c:Landroid/content/Context;

    invoke-static {v3, v1}, Lcom/mbridge/msdk/c/a;->a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 120
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 121
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 125
    :cond_0
    iget-object v3, v0, Lcom/mbridge/msdk/click/j$a;->i:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v3, :cond_1

    .line 126
    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->matchLoopback(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 129
    :cond_1
    new-instance v3, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    invoke-direct {v3}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;-><init>()V

    .line 130
    new-instance v4, Lcom/mbridge/msdk/click/g;

    invoke-direct {v4}, Lcom/mbridge/msdk/click/g;-><init>()V

    .line 135
    :try_start_0
    invoke-direct {v0, v1}, Lcom/mbridge/msdk/click/j$a;->b(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 136
    invoke-static {v1}, Ljava/net/URI;->create(Ljava/lang/String;)Ljava/net/URI;

    move-result-object v5

    .line 137
    invoke-virtual {v5}, Ljava/net/URI;->getScheme()Ljava/lang/String;

    move-result-object v6
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 138
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

    move v14, v6

    :goto_2
    const/16 v7, 0xa

    if-ge v14, v7, :cond_15

    .line 146
    iget-object v7, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v7}, Lcom/mbridge/msdk/click/j;->b(Lcom/mbridge/msdk/click/j;)Z

    move-result v7

    const/4 v15, 0x0

    if-nez v7, :cond_3

    return-object v15

    .line 150
    :cond_3
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    .line 151
    iget-object v9, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    move/from16 v13, p2

    move/from16 v12, p3

    move-object/from16 v11, p4

    invoke-virtual {v4, v1, v13, v12, v11}, Lcom/mbridge/msdk/click/g;->a(Ljava/lang/String;ZZLcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v10

    invoke-static {v9, v10}, Lcom/mbridge/msdk/click/j;->a(Lcom/mbridge/msdk/click/j;Lcom/mbridge/msdk/click/g$a;)Lcom/mbridge/msdk/click/g$a;

    .line 152
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    sub-long/2addr v9, v7

    long-to-int v10, v9

    .line 154
    iget-object v7, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v7}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v7

    if-nez v7, :cond_4

    .line 156
    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setUrl(Ljava/lang/String;)V

    .line 157
    invoke-virtual {v3, v6}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setSuccess(Z)V

    .line 158
    iget-object v7, v0, Lcom/mbridge/msdk/click/j$a;->h:Lcom/mbridge/msdk/rover/d;

    if-eqz v7, :cond_15

    .line 159
    sget v9, Lcom/mbridge/msdk/rover/a;->a:I

    const/4 v11, 0x0

    const-string v12, ""

    const-string v13, "headerFiled is null"

    move-object v8, v1

    invoke-interface/range {v7 .. v13}, Lcom/mbridge/msdk/rover/d;->c(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_a

    .line 164
    :cond_4
    iget-object v7, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v7}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v7

    iget-object v7, v7, Lcom/mbridge/msdk/click/g$a;->h:Ljava/lang/String;

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    const/4 v9, 0x1

    if-nez v7, :cond_6

    .line 165
    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setUrl(Ljava/lang/String;)V

    .line 166
    iget-object v2, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v2}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v2

    iget-object v2, v2, Lcom/mbridge/msdk/click/g$a;->h:Ljava/lang/String;

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setExceptionMsg(Ljava/lang/String;)V

    .line 167
    invoke-virtual {v3, v9}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setType(I)V

    .line 168
    iget-object v2, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v2}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/click/g$a;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setHeader(Ljava/lang/String;)V

    .line 170
    invoke-virtual {v3, v6}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setSuccess(Z)V

    if-nez v14, :cond_5

    .line 172
    invoke-static {}, Lcom/mbridge/msdk/click/a/a;->a()Lcom/mbridge/msdk/click/a/a;

    move-result-object v7

    iget-object v2, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v2}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v2

    iget-object v9, v2, Lcom/mbridge/msdk/click/g$a;->h:Ljava/lang/String;

    iget-object v2, v0, Lcom/mbridge/msdk/click/j$a;->g:Ljava/lang/String;

    move-object v8, v1

    move/from16 v16, v10

    move-object/from16 v10, p4

    move-object v11, v2

    move/from16 v12, p2

    move/from16 v13, p3

    move/from16 v14, p5

    invoke-virtual/range {v7 .. v14}, Lcom/mbridge/msdk/click/a/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;ZZI)V

    goto :goto_3

    :cond_5
    move/from16 v16, v10

    .line 174
    :goto_3
    iget-object v7, v0, Lcom/mbridge/msdk/click/j$a;->h:Lcom/mbridge/msdk/rover/d;

    if-eqz v7, :cond_15

    .line 175
    sget v9, Lcom/mbridge/msdk/rover/a;->a:I

    iget-object v2, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v2}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v2

    iget v11, v2, Lcom/mbridge/msdk/click/g$a;->f:I

    iget-object v2, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v2}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/click/g$a;->toString()Ljava/lang/String;

    move-result-object v12

    iget-object v2, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v2}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v2

    iget-object v13, v2, Lcom/mbridge/msdk/click/g$a;->h:Ljava/lang/String;

    move-object v8, v1

    move/from16 v10, v16

    invoke-interface/range {v7 .. v13}, Lcom/mbridge/msdk/rover/d;->c(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_a

    :cond_6
    move/from16 v16, v10

    .line 179
    invoke-virtual {v3, v9}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setSuccess(Z)V

    .line 180
    iget-object v7, v0, Lcom/mbridge/msdk/click/j$a;->h:Lcom/mbridge/msdk/rover/d;

    if-eqz v7, :cond_7

    .line 181
    sget v10, Lcom/mbridge/msdk/rover/a;->a:I

    iget-object v8, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v8}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v8

    iget v12, v8, Lcom/mbridge/msdk/click/g$a;->f:I

    iget-object v8, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v8}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/click/g$a;->toString()Ljava/lang/String;

    move-result-object v17

    iget-object v8, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v8}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v8

    iget-object v8, v8, Lcom/mbridge/msdk/click/g$a;->h:Ljava/lang/String;

    move-object/from16 v18, v8

    move-object v8, v1

    move v15, v9

    move v9, v10

    move/from16 v10, v16

    move v11, v12

    move-object/from16 v12, v17

    move-object/from16 v13, v18

    invoke-interface/range {v7 .. v13}, Lcom/mbridge/msdk/rover/d;->b(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    :cond_7
    move v15, v9

    .line 183
    :goto_4
    iget-object v7, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v7}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v7

    iget v7, v7, Lcom/mbridge/msdk/click/g$a;->f:I

    const/16 v8, 0x12d

    if-eq v7, v8, :cond_9

    const/16 v8, 0x12e

    if-eq v7, v8, :cond_9

    const/16 v8, 0x133

    if-ne v7, v8, :cond_8

    goto :goto_5

    :cond_8
    move v9, v6

    goto :goto_6

    :cond_9
    :goto_5
    move v9, v15

    :goto_6
    if-eqz v9, :cond_11

    .line 185
    invoke-virtual {v3, v15}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setIs302Jump(Z)V

    .line 186
    iget-object v7, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v7}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v7

    iget-object v7, v7, Lcom/mbridge/msdk/click/g$a;->a:Ljava/lang/String;

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_a

    .line 188
    invoke-virtual {v3, v15}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setjumpDone(Z)V

    .line 189
    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setUrl(Ljava/lang/String;)V

    goto/16 :goto_a

    .line 192
    :cond_a
    iget-object v1, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v1}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v1

    iget-object v1, v1, Lcom/mbridge/msdk/click/g$a;->a:Ljava/lang/String;

    .line 194
    invoke-direct {v0, v1}, Lcom/mbridge/msdk/click/j$a;->b(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_c

    const-string v7, "/"

    .line 2373
    invoke-virtual {v1, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_b

    .line 195
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_b

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_b

    .line 196
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "://"

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    const/4 v5, 0x0

    goto :goto_7

    .line 199
    :cond_b
    invoke-virtual {v3, v15}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setjumpDone(Z)V

    .line 200
    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setUrl(Ljava/lang/String;)V

    goto/16 :goto_a

    .line 203
    :cond_c
    invoke-direct {v0, v1}, Lcom/mbridge/msdk/click/j$a;->b(Ljava/lang/String;)Z

    move-result v7

    if-nez v7, :cond_d

    .line 205
    :try_start_2
    invoke-static {v1}, Ljava/net/URI;->create(Ljava/lang/String;)Ljava/net/URI;

    move-result-object v7

    .line 206
    invoke-virtual {v7}, Ljava/net/URI;->getScheme()Ljava/lang/String;

    move-result-object v2

    .line 207
    invoke-virtual {v7}, Ljava/net/URI;->getHost()Ljava/lang/String;

    move-result-object v5
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    .line 2381
    :catch_2
    :cond_d
    :goto_7
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ad$a;->a(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_e

    .line 214
    invoke-virtual {v3, v15}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setjumpDone(Z)V

    .line 215
    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setUrl(Ljava/lang/String;)V

    goto/16 :goto_a

    .line 219
    :cond_e
    iget-object v7, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v7}, Lcom/mbridge/msdk/click/j;->a(Lcom/mbridge/msdk/click/j;)Z

    move-result v7

    if-eqz v7, :cond_f

    .line 221
    iget-object v7, v0, Lcom/mbridge/msdk/click/j$a;->c:Landroid/content/Context;

    invoke-static {v7, v1}, Lcom/mbridge/msdk/c/a;->a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 222
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_f

    .line 223
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 226
    :cond_f
    iget-object v7, v0, Lcom/mbridge/msdk/click/j$a;->i:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v7, :cond_10

    .line 227
    invoke-virtual {v7, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->matchLoopback(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    :cond_10
    add-int/lit8 v14, v14, 0x1

    goto/16 :goto_2

    .line 230
    :cond_11
    iget-object v2, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v2}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v2

    iget v2, v2, Lcom/mbridge/msdk/click/g$a;->f:I

    const/16 v4, 0xc8

    if-ne v2, v4, :cond_12

    move v9, v15

    goto :goto_8

    :cond_12
    move v9, v6

    :goto_8
    if-eqz v9, :cond_14

    .line 231
    invoke-virtual {v3, v15}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setjumpDone(Z)V

    .line 232
    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setUrl(Ljava/lang/String;)V

    .line 233
    iget-object v1, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v1}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v1

    iget-object v1, v1, Lcom/mbridge/msdk/click/g$a;->g:Ljava/lang/String;

    if-nez v1, :cond_13

    const/4 v15, 0x0

    goto :goto_9

    :cond_13
    iget-object v1, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v1}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v1

    iget-object v15, v1, Lcom/mbridge/msdk/click/g$a;->g:Ljava/lang/String;

    :goto_9
    invoke-virtual {v3, v15}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setContent(Ljava/lang/String;)V

    goto :goto_a

    .line 236
    :cond_14
    invoke-virtual {v3, v6}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setjumpDone(Z)V

    .line 237
    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setUrl(Ljava/lang/String;)V

    if-nez v14, :cond_15

    .line 239
    invoke-static {}, Lcom/mbridge/msdk/click/a/a;->a()Lcom/mbridge/msdk/click/a/a;

    move-result-object v7

    iget-object v2, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v2}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v2

    iget-object v9, v2, Lcom/mbridge/msdk/click/g$a;->h:Ljava/lang/String;

    iget-object v11, v0, Lcom/mbridge/msdk/click/j$a;->g:Ljava/lang/String;

    move-object v8, v1

    move-object/from16 v10, p4

    move/from16 v12, p2

    move/from16 v13, p3

    move/from16 v14, p5

    invoke-virtual/range {v7 .. v14}, Lcom/mbridge/msdk/click/a/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;ZZI)V

    :cond_15
    :goto_a
    return-object v3
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/j$a;)V
    .locals 0

    .line 6083
    iget-object p0, p0, Lcom/mbridge/msdk/click/j$a;->b:Ljava/util/concurrent/Semaphore;

    invoke-virtual {p0}, Ljava/util/concurrent/Semaphore;->release()V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/j$a;ZZLjava/lang/String;Ljava/lang/String;)V
    .locals 11

    .line 5251
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->d(Lcom/mbridge/msdk/click/j;)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-nez v2, :cond_0

    .line 5253
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 5254
    iget-object v2, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v2, v0, v1}, Lcom/mbridge/msdk/click/j;->a(Lcom/mbridge/msdk/click/j;J)J

    const/4 v0, 0x0

    goto :goto_0

    .line 5256
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    sub-long v0, v2, v0

    long-to-int v0, v0

    .line 5258
    iget-object v1, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/click/j;->a(Lcom/mbridge/msdk/click/j;J)J

    :goto_0
    move v7, v0

    if-eqz p1, :cond_2

    const/4 p1, 0x1

    if-eqz p2, :cond_1

    .line 5264
    iget-object p2, p0, Lcom/mbridge/msdk/click/j$a;->h:Lcom/mbridge/msdk/rover/d;

    if-eqz p2, :cond_3

    iget-object p2, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {p2}, Lcom/mbridge/msdk/click/j;->e(Lcom/mbridge/msdk/click/j;)Z

    move-result p2

    if-nez p2, :cond_3

    .line 5265
    iget-object p2, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {p2, p1}, Lcom/mbridge/msdk/click/j;->a(Lcom/mbridge/msdk/click/j;Z)Z

    .line 5266
    iget-object v4, p0, Lcom/mbridge/msdk/click/j$a;->h:Lcom/mbridge/msdk/rover/d;

    sget v6, Lcom/mbridge/msdk/rover/a;->b:I

    const/4 v8, 0x0

    const-string v9, ""

    move-object v5, p3

    move-object v10, p4

    invoke-interface/range {v4 .. v10}, Lcom/mbridge/msdk/rover/d;->a(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 5269
    :cond_1
    iget-object p2, p0, Lcom/mbridge/msdk/click/j$a;->h:Lcom/mbridge/msdk/rover/d;

    if-eqz p2, :cond_3

    iget-object p2, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {p2}, Lcom/mbridge/msdk/click/j;->e(Lcom/mbridge/msdk/click/j;)Z

    move-result p2

    if-nez p2, :cond_3

    .line 5270
    iget-object p2, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {p2, p1}, Lcom/mbridge/msdk/click/j;->a(Lcom/mbridge/msdk/click/j;Z)Z

    .line 5271
    iget-object v4, p0, Lcom/mbridge/msdk/click/j$a;->h:Lcom/mbridge/msdk/rover/d;

    sget v6, Lcom/mbridge/msdk/rover/a;->b:I

    const/4 v8, 0x0

    const-string v9, ""

    move-object v5, p3

    move-object v10, p4

    invoke-interface/range {v4 .. v10}, Lcom/mbridge/msdk/rover/d;->c(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 5275
    :cond_2
    iget-object v4, p0, Lcom/mbridge/msdk/click/j$a;->h:Lcom/mbridge/msdk/rover/d;

    if-eqz v4, :cond_3

    .line 5276
    sget v6, Lcom/mbridge/msdk/rover/a;->b:I

    const/4 v8, 0x0

    const-string v9, ""

    move-object v5, p3

    move-object v10, p4

    invoke-interface/range {v4 .. v10}, Lcom/mbridge/msdk/rover/d;->b(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/j$a;Ljava/lang/String;)Z
    .locals 0

    .line 74
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/click/j$a;->a(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private a(Ljava/lang/String;)Z
    .locals 3

    .line 344
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->i:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 345
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    .line 3381
    :cond_0
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ad$a;->a(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    .line 348
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setCode(I)V

    .line 349
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setUrl(Ljava/lang/String;)V

    .line 350
    iget-object p1, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {p1}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setjumpDone(Z)V

    return v1

    .line 352
    :cond_1
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/click/j$a;->c(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 353
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    const/4 v2, 0x3

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setCode(I)V

    .line 354
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setUrl(Ljava/lang/String;)V

    .line 355
    iget-object p1, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {p1}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setjumpDone(Z)V

    return v1

    .line 358
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setCode(I)V

    .line 359
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setUrl(Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1
.end method

.method private b(Ljava/lang/String;)Z
    .locals 0

    .line 369
    invoke-static {p1}, Landroid/webkit/URLUtil;->isNetworkUrl(Ljava/lang/String;)Z

    move-result p1

    xor-int/lit8 p1, p1, 0x1

    return p1
.end method

.method private c(Ljava/lang/String;)Z
    .locals 1

    .line 385
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p1

    const-string v0, "apk"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
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
    .locals 10

    .line 391
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->g(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/e;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 392
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->g(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/e;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/click/e;->a(Ljava/lang/Object;)V

    .line 395
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    new-instance v1, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    invoke-direct {v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;-><init>()V

    invoke-static {v0, v1}, Lcom/mbridge/msdk/click/j;->a(Lcom/mbridge/msdk/click/j;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    .line 396
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/j$a;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setUrl(Ljava/lang/String;)V

    .line 398
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    iget-object v2, p0, Lcom/mbridge/msdk/click/j$a;->d:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/mbridge/msdk/click/j$a;->j:Z

    iget-boolean v4, p0, Lcom/mbridge/msdk/click/j$a;->k:Z

    iget-object v5, p0, Lcom/mbridge/msdk/click/j$a;->i:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget v6, p0, Lcom/mbridge/msdk/click/j$a;->l:I

    move-object v1, p0

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/click/j$a;->a(Ljava/lang/String;ZZLcom/mbridge/msdk/foundation/entity/CampaignEx;I)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/click/j;->a(Lcom/mbridge/msdk/click/j;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    .line 400
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getExceptionMsg()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_1

    .line 401
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setSuccess(Z)V

    .line 403
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->b(Lcom/mbridge/msdk/click/j;)Z

    move-result v0

    if-nez v0, :cond_2

    return-void

    .line 408
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->isSuccess()Z

    move-result v0

    if-nez v0, :cond_3

    return-void

    .line 411
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 412
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v2}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v2

    iget v2, v2, Lcom/mbridge/msdk/click/g$a;->f:I

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setStatusCode(I)V

    .line 415
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/click/j$a;->c(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v0

    .line 4381
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ad$a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_6

    const/16 v0, 0xc8

    .line 415
    iget-object v2, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    .line 416
    invoke-static {v2}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v2

    iget v2, v2, Lcom/mbridge/msdk/click/g$a;->f:I

    if-ne v0, v2, :cond_6

    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getContent()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getContent()Ljava/lang/String;

    move-result-object v0

    const-string v2, "EXCEPTION_CAMPAIGN_NOT_ACTIVE"

    invoke-virtual {v0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 417
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setType(I)V

    .line 418
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getContent()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, "302"

    if-nez v0, :cond_5

    const-string v0, "startWebViewHtmlParser"

    .line 419
    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 420
    new-instance v2, Lcom/mbridge/msdk/click/i;

    iget-object v3, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v3}, Lcom/mbridge/msdk/click/j;->h(Lcom/mbridge/msdk/click/j;)Z

    move-result v3

    invoke-direct {v2, v3}, Lcom/mbridge/msdk/click/i;-><init>(Z)V

    iget-object v3, p0, Lcom/mbridge/msdk/click/j$a;->e:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/click/j$a;->f:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/click/j$a;->g:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/click/j$a;->c:Landroid/content/Context;

    iget-object v7, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v7}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v7

    invoke-virtual {v7}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v7

    iget-object v8, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    .line 421
    invoke-static {v8}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getContent()Ljava/lang/String;

    move-result-object v8

    iget-object v9, p0, Lcom/mbridge/msdk/click/j$a;->m:Lcom/mbridge/msdk/click/i$a;

    .line 420
    invoke-virtual/range {v2 .. v9}, Lcom/mbridge/msdk/click/i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/click/i$a;)V

    .line 422
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_5
    const-string v0, "startWebViewSpider"

    .line 424
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 426
    :try_start_0
    new-instance v2, Lcom/mbridge/msdk/click/i;

    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->h(Lcom/mbridge/msdk/click/j;)Z

    move-result v0

    invoke-direct {v2, v0}, Lcom/mbridge/msdk/click/i;-><init>(Z)V

    iget-object v3, p0, Lcom/mbridge/msdk/click/j$a;->e:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/click/j$a;->f:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/click/j$a;->g:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/click/j$a;->c:Landroid/content/Context;

    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v7

    iget-object v8, p0, Lcom/mbridge/msdk/click/j$a;->m:Lcom/mbridge/msdk/click/i$a;

    invoke-virtual/range {v2 .. v8}, Lcom/mbridge/msdk/click/i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/click/i$a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string v0, "TAG"

    const-string v1, "webview spider start error"

    .line 428
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 5079
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->b:Ljava/util/concurrent/Semaphore;

    invoke-virtual {v0}, Ljava/util/concurrent/Semaphore;->acquireUninterruptibly()V

    goto/16 :goto_1

    .line 435
    :cond_6
    iget-object v2, p0, Lcom/mbridge/msdk/click/j$a;->h:Lcom/mbridge/msdk/rover/d;

    if-eqz v2, :cond_7

    .line 436
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v3

    sget v4, Lcom/mbridge/msdk/rover/a;->a:I

    const/4 v5, 0x0

    const/4 v6, 0x0

    const-string v7, ""

    const-string v8, ""

    invoke-interface/range {v2 .. v8}, Lcom/mbridge/msdk/rover/d;->a(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    .line 438
    :cond_7
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v0

    if-eqz v0, :cond_8

    .line 439
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setType(I)V

    .line 440
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v1}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v1

    iget-object v1, v1, Lcom/mbridge/msdk/click/g$a;->h:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setExceptionMsg(Ljava/lang/String;)V

    .line 441
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v1}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v1

    iget v1, v1, Lcom/mbridge/msdk/click/g$a;->f:I

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setStatusCode(I)V

    .line 442
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v1}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/click/g$a;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setHeader(Ljava/lang/String;)V

    .line 443
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v1}, Lcom/mbridge/msdk/click/j;->c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;

    move-result-object v1

    iget-object v1, v1, Lcom/mbridge/msdk/click/g$a;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setContent(Ljava/lang/String;)V

    .line 446
    :cond_8
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/click/j$a;->a(Ljava/lang/String;)Z

    :goto_1
    return-void
.end method
