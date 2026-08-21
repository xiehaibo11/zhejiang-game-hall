.class public final Lcom/mbridge/msdk/videocommon/download/a;
.super Ljava/lang/Object;
.source "CampaignDownLoadTask.java"

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/videocommon/download/a$a;
    }
.end annotation


# instance fields
.field private A:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

.field private B:I

.field private C:Z

.field private D:I

.field private E:Ljava/io/File;

.field private F:I

.field private G:I

.field private H:I

.field private I:I

.field private J:Z

.field private K:Lcom/mbridge/msdk/c/d;

.field private L:Lcom/mbridge/msdk/videocommon/d/c;

.field private M:Lcom/mbridge/msdk/c/d;

.field private N:Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;

.field private O:Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;

.field private P:Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;

.field private Q:Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;

.field private a:Z

.field private b:Z

.field private c:I

.field private d:I

.field private e:Z

.field private volatile f:I

.field private g:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/videocommon/download/c;",
            ">;"
        }
    .end annotation
.end field

.field private h:Lcom/mbridge/msdk/videocommon/listener/a;

.field private i:Lcom/mbridge/msdk/videocommon/listener/a;

.field private j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private k:Ljava/lang/String;

.field private l:Landroid/content/Context;

.field private m:J

.field private n:Ljava/lang/String;

.field private o:Ljava/lang/String;

.field private p:J

.field private q:Ljava/lang/String;

.field private r:Z

.field private s:J

.field private t:I

.field private u:Z

.field private v:Lcom/mbridge/msdk/foundation/db/s;

.field private w:Z

.field private x:Ljava/lang/String;

.field private y:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

.field private z:Lcom/mbridge/msdk/foundation/download/DownloadMessage;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V
    .locals 19

    move-object/from16 v1, p0

    move-object/from16 v0, p2

    const-string v2, ""

    .line 138
    invoke-direct/range {p0 .. p0}, Ljava/lang/Object;-><init>()V

    const/4 v3, 0x0

    .line 68
    iput-boolean v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->a:Z

    .line 70
    iput-boolean v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->b:Z

    const/4 v4, 0x1

    .line 72
    iput v4, v1, Lcom/mbridge/msdk/videocommon/download/a;->c:I

    .line 76
    iput-boolean v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->e:Z

    .line 78
    iput v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    .line 80
    new-instance v5, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v5}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v5, v1, Lcom/mbridge/msdk/videocommon/download/a;->g:Ljava/util/concurrent/CopyOnWriteArrayList;

    const-wide/16 v5, 0x0

    .line 95
    iput-wide v5, v1, Lcom/mbridge/msdk/videocommon/download/a;->p:J

    .line 99
    iput-boolean v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->r:Z

    const/16 v7, 0x64

    .line 103
    iput v7, v1, Lcom/mbridge/msdk/videocommon/download/a;->t:I

    .line 104
    iput-boolean v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->u:Z

    .line 107
    iput-boolean v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->w:Z

    .line 122
    iput v4, v1, Lcom/mbridge/msdk/videocommon/download/a;->F:I

    .line 126
    iput-boolean v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->J:Z

    .line 822
    new-instance v8, Lcom/mbridge/msdk/videocommon/download/a$1;

    invoke-direct {v8, v1}, Lcom/mbridge/msdk/videocommon/download/a$1;-><init>(Lcom/mbridge/msdk/videocommon/download/a;)V

    iput-object v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->N:Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;

    .line 886
    new-instance v8, Lcom/mbridge/msdk/videocommon/download/a$2;

    invoke-direct {v8, v1}, Lcom/mbridge/msdk/videocommon/download/a$2;-><init>(Lcom/mbridge/msdk/videocommon/download/a;)V

    iput-object v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->O:Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;

    .line 904
    new-instance v8, Lcom/mbridge/msdk/videocommon/download/a$3;

    invoke-direct {v8, v1}, Lcom/mbridge/msdk/videocommon/download/a$3;-><init>(Lcom/mbridge/msdk/videocommon/download/a;)V

    iput-object v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->P:Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;

    .line 1046
    new-instance v8, Lcom/mbridge/msdk/videocommon/download/a$4;

    invoke-direct {v8, v1}, Lcom/mbridge/msdk/videocommon/download/a$4;-><init>(Lcom/mbridge/msdk/videocommon/download/a;)V

    iput-object v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->Q:Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;

    if-nez p1, :cond_0

    if-nez v0, :cond_0

    return-void

    .line 143
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v8

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v9

    invoke-virtual {v9}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/c/b;->g(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v8

    if-eqz v8, :cond_1

    .line 146
    invoke-virtual {v8}, Lcom/mbridge/msdk/c/a;->r()Z

    move-result v8

    iput-boolean v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->J:Z

    .line 148
    :cond_1
    sget v8, Lcom/mbridge/msdk/foundation/same/a;->Q:I

    iput v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->G:I

    .line 149
    sget v8, Lcom/mbridge/msdk/foundation/same/a;->R:I

    iput v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->H:I

    .line 150
    sget v8, Lcom/mbridge/msdk/foundation/same/a;->P:I

    iput v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->I:I

    .line 162
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    iput-wide v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->s:J

    .line 163
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v8

    iput-object v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->l:Landroid/content/Context;

    .line 164
    iput-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-object/from16 v8, p3

    .line 165
    iput-object v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->k:Ljava/lang/String;

    move/from16 v8, p4

    .line 166
    iput v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->c:I

    if-eqz v0, :cond_2

    .line 168
    invoke-virtual/range {p2 .. p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    .line 170
    :cond_2
    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/x;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    .line 171
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v8, Lcom/mbridge/msdk/foundation/same/b/c;->c:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v8}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->o:Ljava/lang/String;

    .line 172
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->o:Ljava/lang/String;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->q:Ljava/lang/String;

    .line 173
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object v0

    const-string v8, "u_n_d_r_r"

    invoke-virtual {v0, v8, v3}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->a:Z

    .line 174
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " videoLocalPath:"

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->q:Ljava/lang/String;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " videoUrl: "

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " "

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v8, v1, Lcom/mbridge/msdk/videocommon/download/a;->t:I

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v8, "CampaignDownLoadTask"

    invoke-static {v8, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1253
    :try_start_0
    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    goto/16 :goto_2

    :cond_3
    const/4 v0, 0x0

    .line 1257
    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/a;->o:Ljava/lang/String;

    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_4

    .line 1258
    new-instance v0, Ljava/io/File;

    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/a;->o:Ljava/lang/String;

    invoke-direct {v0, v9}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1259
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v9

    if-nez v9, :cond_4

    .line 1260
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    :cond_4
    if-eqz v0, :cond_6

    .line 1264
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v9

    if-eqz v9, :cond_6

    .line 1265
    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/a;->E:Ljava/io/File;

    if-eqz v9, :cond_5

    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/a;->E:Ljava/io/File;

    invoke-virtual {v9}, Ljava/io/File;->exists()Z

    move-result v9

    if-nez v9, :cond_6

    .line 1266
    :cond_5
    new-instance v9, Ljava/io/File;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, "/.nomedia"

    invoke-virtual {v10, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v9, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    iput-object v9, v1, Lcom/mbridge/msdk/videocommon/download/a;->E:Ljava/io/File;

    .line 1267
    invoke-virtual {v9}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_6

    .line 1268
    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->E:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->createNewFile()Z

    .line 1599
    :cond_6
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/s;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/s;

    move-result-object v0

    .line 1601
    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-virtual {v0, v9, v2}, Lcom/mbridge/msdk/foundation/db/s;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/o;

    move-result-object v9

    const/4 v10, 0x5

    if-eqz v9, :cond_c

    .line 1603
    invoke-virtual {v9}, Lcom/mbridge/msdk/foundation/entity/o;->b()J

    move-result-wide v11

    iput-wide v11, v1, Lcom/mbridge/msdk/videocommon/download/a;->p:J

    .line 1604
    iget v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    const/4 v11, 0x2

    if-eq v0, v11, :cond_7

    .line 1605
    invoke-virtual {v9}, Lcom/mbridge/msdk/foundation/entity/o;->d()I

    move-result v0

    iput v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    .line 1607
    :cond_7
    iget v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    if-ne v0, v4, :cond_8

    .line 1608
    iput v11, v1, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    .line 1610
    :cond_8
    invoke-virtual {v9}, Lcom/mbridge/msdk/foundation/entity/o;->c()I

    move-result v0

    int-to-long v11, v0

    iput-wide v11, v1, Lcom/mbridge/msdk/videocommon/download/a;->m:J

    .line 1611
    invoke-virtual {v9}, Lcom/mbridge/msdk/foundation/entity/o;->a()J

    move-result-wide v11

    cmp-long v0, v11, v5

    if-lez v0, :cond_9

    .line 1612
    invoke-virtual {v9}, Lcom/mbridge/msdk/foundation/entity/o;->a()J

    move-result-wide v11

    iput-wide v11, v1, Lcom/mbridge/msdk/videocommon/download/a;->s:J

    .line 1615
    :cond_9
    iget v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    if-ne v0, v10, :cond_b

    .line 1616
    new-instance v0, Ljava/io/File;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v11, v1, Lcom/mbridge/msdk/videocommon/download/a;->o:Ljava/lang/String;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v11, v1, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-direct {v0, v9}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1618
    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/a;->o:Ljava/lang/String;

    iget-object v11, v1, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    invoke-static {v0, v9, v11}, Lcom/mbridge/msdk/foundation/download/utils/Objects;->exists(Ljava/io/File;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_a

    .line 1619
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/a;->o:Ljava/lang/String;

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->q:Ljava/lang/String;

    goto :goto_0

    .line 1621
    :cond_a
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/videocommon/download/a;->o()V

    goto :goto_0

    .line 1623
    :cond_b
    iget v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    if-eqz v0, :cond_d

    .line 1624
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/a;->o:Ljava/lang/String;

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->q:Ljava/lang/String;

    goto :goto_0

    .line 1627
    :cond_c
    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    iget-wide v11, v1, Lcom/mbridge/msdk/videocommon/download/a;->s:J

    invoke-virtual {v0, v9, v11, v12}, Lcom/mbridge/msdk/foundation/db/s;->a(Ljava/lang/String;J)V

    .line 1273
    :cond_d
    :goto_0
    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    .line 2291
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-eqz v9, :cond_e

    .line 2292
    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->i:Lcom/mbridge/msdk/videocommon/listener/a;

    const-string v3, "VideoUrl is NULL, Please check it."

    invoke-interface {v0, v3, v2}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_2

    .line 2296
    :cond_e
    iget v2, v1, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    if-ne v2, v4, :cond_f

    const-string v0, "Run : Task is RUNNING, Will return."

    .line 2297
    invoke-static {v8, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_2

    .line 2301
    :cond_f
    iget v2, v1, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    if-ne v2, v10, :cond_12

    iget-wide v9, v1, Lcom/mbridge/msdk/videocommon/download/a;->m:J

    iget-wide v11, v1, Lcom/mbridge/msdk/videocommon/download/a;->p:J

    invoke-static {v9, v10, v11, v12}, Lcom/mbridge/msdk/foundation/download/utils/Utils;->getDownloadRate(JJ)I

    move-result v2

    iget v4, v1, Lcom/mbridge/msdk/videocommon/download/a;->t:I

    if-lt v2, v4, :cond_12

    const-string v0, "Run : Video Done, Will callback."

    .line 2302
    invoke-static {v8, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2303
    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->h:Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v0, :cond_10

    .line 2304
    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->h:Lcom/mbridge/msdk/videocommon/listener/a;

    iget-object v2, v1, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-interface {v0, v2}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;)V

    .line 2306
    :cond_10
    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->i:Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v0, :cond_11

    .line 2307
    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->i:Lcom/mbridge/msdk/videocommon/listener/a;

    iget-object v2, v1, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-interface {v0, v2}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    .line 2311
    :cond_11
    :try_start_1
    new-instance v0, Ljava/io/File;

    iget-object v2, v1, Lcom/mbridge/msdk/videocommon/download/a;->q:Ljava/lang/String;

    invoke-direct {v0, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 2312
    iget-object v2, v1, Lcom/mbridge/msdk/videocommon/download/a;->o:Ljava/lang/String;

    iget-object v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    invoke-static {v0, v2, v3}, Lcom/mbridge/msdk/foundation/download/utils/Objects;->exists(Ljava/io/File;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_17

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v2

    if-eqz v2, :cond_17

    .line 2313
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v0, v2, v3}, Ljava/io/File;->setLastModified(J)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto/16 :goto_2

    :catch_0
    move-exception v0

    .line 2316
    :try_start_2
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v8, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_2

    .line 2321
    :cond_12
    iget v2, v1, Lcom/mbridge/msdk/videocommon/download/a;->c:I

    const/4 v4, 0x3

    if-ne v2, v4, :cond_13

    const-string v0, "Run : Dlnet is 3, Will callback."

    .line 2322
    invoke-static {v8, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2323
    invoke-virtual {v1, v5, v6, v3}, Lcom/mbridge/msdk/videocommon/download/a;->a(JZ)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto/16 :goto_2

    .line 2329
    :cond_13
    :try_start_3
    iget-object v2, v1, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/videocommon/download/a;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v2
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_1

    :catch_1
    move v2, v7

    :goto_1
    if-nez v2, :cond_15

    .line 2335
    :try_start_4
    iget-object v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->h:Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v3, :cond_14

    .line 2336
    iget-object v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->h:Lcom/mbridge/msdk/videocommon/listener/a;

    iget-object v4, v1, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-interface {v3, v4}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;)V

    .line 2338
    :cond_14
    iget-object v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->i:Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v3, :cond_15

    .line 2339
    iget-object v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->i:Lcom/mbridge/msdk/videocommon/listener/a;

    iget-object v4, v1, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-interface {v3, v4}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;)V

    :cond_15
    if-eq v2, v7, :cond_16

    .line 2343
    iget-boolean v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->a:Z

    if-eqz v3, :cond_16

    .line 2344
    new-instance v3, Lcom/mbridge/msdk/foundation/download/DownloadMessage;

    new-instance v14, Ljava/lang/Object;

    invoke-direct {v14}, Ljava/lang/Object;-><init>()V

    iget-object v4, v1, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    sget-object v18, Lcom/mbridge/msdk/foundation/download/DownloadResourceType;->DOWNLOAD_RESOURCE_TYPE_VIDEO:Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    move-object v13, v3

    move-object v15, v0

    move-object/from16 v16, v4

    move/from16 v17, v2

    invoke-direct/range {v13 .. v18}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;-><init>(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;ILcom/mbridge/msdk/foundation/download/DownloadResourceType;)V

    iget-object v2, v1, Lcom/mbridge/msdk/videocommon/download/a;->N:Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;

    iget-object v4, v1, Lcom/mbridge/msdk/videocommon/download/a;->O:Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;

    invoke-direct {v1, v3, v2, v4}, Lcom/mbridge/msdk/videocommon/download/a;->a(Lcom/mbridge/msdk/foundation/download/DownloadMessage;Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;)Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    move-result-object v2

    iput-object v2, v1, Lcom/mbridge/msdk/videocommon/download/a;->A:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    .line 2346
    :cond_16
    new-instance v2, Lcom/mbridge/msdk/foundation/download/DownloadMessage;

    new-instance v14, Ljava/lang/Object;

    invoke-direct {v14}, Ljava/lang/Object;-><init>()V

    iget-object v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    const/16 v17, 0x64

    sget-object v18, Lcom/mbridge/msdk/foundation/download/DownloadResourceType;->DOWNLOAD_RESOURCE_TYPE_VIDEO:Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    move-object v13, v2

    move-object v15, v0

    move-object/from16 v16, v3

    invoke-direct/range {v13 .. v18}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;-><init>(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;ILcom/mbridge/msdk/foundation/download/DownloadResourceType;)V

    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->P:Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;

    iget-object v3, v1, Lcom/mbridge/msdk/videocommon/download/a;->Q:Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;

    invoke-direct {v1, v2, v0, v3}, Lcom/mbridge/msdk/videocommon/download/a;->a(Lcom/mbridge/msdk/foundation/download/DownloadMessage;Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;)Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/videocommon/download/a;->y:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_2

    :catch_2
    move-exception v0

    .line 1275
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v8, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_17
    :goto_2
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/videocommon/download/a;I)I
    .locals 0

    .line 59
    iput p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    return p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/videocommon/download/a;J)J
    .locals 0

    .line 59
    iput-wide p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->p:J

    return-wide p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/videocommon/download/a;)Lcom/mbridge/msdk/foundation/db/s;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/mbridge/msdk/videocommon/download/a;->v:Lcom/mbridge/msdk/foundation/db/s;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/videocommon/download/a;Lcom/mbridge/msdk/foundation/db/s;)Lcom/mbridge/msdk/foundation/db/s;
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->v:Lcom/mbridge/msdk/foundation/db/s;

    return-object p1
.end method

.method private a(Lcom/mbridge/msdk/foundation/download/DownloadMessage;Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;)Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/foundation/download/DownloadMessage;",
            "Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;",
            "Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;",
            ")",
            "Lcom/mbridge/msdk/foundation/download/core/DownloadRequest<",
            "*>;"
        }
    .end annotation

    .line 351
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/MBDownloadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/MBDownloadManager;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/download/MBDownloadManager;->download(Lcom/mbridge/msdk/foundation/download/DownloadMessage;)Lcom/mbridge/msdk/foundation/download/core/DownloadRequestBuilder;

    move-result-object p1

    iget v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->G:I

    int-to-long v0, v0

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/foundation/download/core/DownloadRequestBuilder;->withReadTimeout(J)Lcom/mbridge/msdk/foundation/download/core/DownloadRequestBuilder;

    move-result-object p1

    iget v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->I:I

    int-to-long v0, v0

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/foundation/download/core/DownloadRequestBuilder;->withConnectTimeout(J)Lcom/mbridge/msdk/foundation/download/core/DownloadRequestBuilder;

    move-result-object p1

    iget v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->H:I

    int-to-long v0, v0

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/foundation/download/core/DownloadRequestBuilder;->withWriteTimeout(J)Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;

    move-result-object p1

    sget-object v0, Lcom/mbridge/msdk/foundation/download/DownloadPriority;->HIGH:Lcom/mbridge/msdk/foundation/download/DownloadPriority;

    invoke-interface {p1, v0}, Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;->withDownloadPriority(Lcom/mbridge/msdk/foundation/download/DownloadPriority;)Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;

    move-result-object p1

    const/4 v0, 0x1

    invoke-interface {p1, v0}, Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;->withHttpRetryCounter(I)Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->o:Ljava/lang/String;

    invoke-interface {p1, v0}, Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;->withDirectoryPathInternal(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;

    move-result-object p1

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;->withDownloadStateListener(Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;)Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;

    move-result-object p1

    invoke-interface {p1, p3}, Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;->withProgressStateListener(Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;)Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;

    move-result-object p1

    iget-boolean p2, p0, Lcom/mbridge/msdk/videocommon/download/a;->J:Z

    invoke-static {p2}, Ljava/lang/Boolean;->toString(Z)Ljava/lang/String;

    move-result-object p2

    const-string p3, "do_us_fi_re"

    invoke-interface {p1, p3, p2}, Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;->with(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;->build()Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    move-result-object p1

    return-object p1
.end method

.method private a(ILjava/lang/String;)V
    .locals 13

    .line 748
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/t;

    move-result-object v0

    .line 750
    iget-wide v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->s:J

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-nez v1, :cond_0

    goto :goto_0

    .line 753
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/mbridge/msdk/videocommon/download/a;->s:J

    sub-long v3, v1, v3

    .line 756
    :goto_0
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/p;

    iget-object v6, p0, Lcom/mbridge/msdk/videocommon/download/a;->l:Landroid/content/Context;

    iget-object v7, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v3, v4}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v9

    iget-wide v10, p0, Lcom/mbridge/msdk/videocommon/download/a;->m:J

    iget v12, p0, Lcom/mbridge/msdk/videocommon/download/a;->D:I

    move-object v5, v1

    move v8, p1

    invoke-direct/range {v5 .. v12}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ILjava/lang/String;JI)V

    .line 757
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 758
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->e(Ljava/lang/String;)V

    .line 759
    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 760
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 761
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 762
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->k:Ljava/lang/String;

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 763
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/entity/p;)J

    return-void
.end method

.method private a(JI)V
    .locals 6

    .line 640
    iput-wide p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->p:J

    .line 642
    iget v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->t:I

    int-to-long v1, v0

    iget-wide v3, p0, Lcom/mbridge/msdk/videocommon/download/a;->m:J

    mul-long/2addr v1, v3

    const-wide/16 v3, 0x64

    mul-long/2addr v3, p1

    cmp-long v1, v3, v1

    const/4 v2, 0x1

    if-ltz v1, :cond_4

    .line 643
    iget-boolean v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->u:Z

    if-nez v1, :cond_4

    const/4 v1, 0x4

    if-eq p3, v1, :cond_4

    const/16 v1, 0x64

    if-ne v0, v1, :cond_0

    const/4 v0, 0x5

    if-eq p3, v0, :cond_0

    .line 646
    iput v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    return-void

    .line 650
    :cond_0
    iput-boolean v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->u:Z

    .line 652
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "UpdateListener : state: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " progress : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "CampaignDownLoadTask"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 655
    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/download/a;->k()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 656
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->h:Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v0, :cond_1

    .line 657
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;)V

    .line 659
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->i:Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v0, :cond_4

    .line 660
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;)V

    goto :goto_0

    .line 663
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->h:Lcom/mbridge/msdk/videocommon/listener/a;

    const-string v3, "file is not effective "

    if-eqz v1, :cond_3

    .line 664
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-interface {v1, v4, v5}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 666
    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->i:Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v1, :cond_4

    .line 667
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v3, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-interface {v1, v0, v3}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 671
    :cond_4
    :goto_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->b:Z

    if-nez v0, :cond_6

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-lez v0, :cond_6

    .line 672
    iput-boolean v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->b:Z

    .line 673
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->v:Lcom/mbridge/msdk/foundation/db/s;

    if-nez v0, :cond_5

    .line 674
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/s;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/s;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->v:Lcom/mbridge/msdk/foundation/db/s;

    .line 676
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->v:Lcom/mbridge/msdk/foundation/db/s;

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    iget v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    invoke-virtual {v0, v1, p1, p2, v2}, Lcom/mbridge/msdk/foundation/db/s;->a(Ljava/lang/String;JI)J

    .line 678
    :cond_6
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->g:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_8

    .line 679
    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_7
    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_8

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/videocommon/download/c;

    if-eqz v1, :cond_7

    .line 681
    invoke-interface {v1, p1, p2, p3}, Lcom/mbridge/msdk/videocommon/download/c;->a(JI)V

    goto :goto_1

    :cond_8
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/videocommon/download/a;ILjava/lang/String;)V
    .locals 0

    .line 59
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/videocommon/download/a;->a(ILjava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/videocommon/download/a;Ljava/lang/String;)V
    .locals 0

    .line 59
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/videocommon/download/a;->c(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/videocommon/download/a;Z)Z
    .locals 0

    .line 59
    iput-boolean p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->e:Z

    return p1
.end method

.method private b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I
    .locals 4

    const/16 v0, 0x64

    if-nez p1, :cond_0

    return v0

    .line 466
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getReady_rate()I

    move-result v1

    const/4 v2, -0x1

    const-string v3, "CampaignDownLoadTask"

    if-eq v1, v2, :cond_1

    .line 467
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getReady_rate()I

    move-result p1

    .line 468
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ready_rate(campaign): "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 470
    :cond_1
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/videocommon/download/a;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result p1

    .line 471
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ready_rate(reward_unit_setting): "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    const/4 v1, 0x0

    .line 474
    :try_start_0
    invoke-static {p1, v1}, Ljava/lang/Math;->max(II)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    return v0
.end method

.method static synthetic b(Lcom/mbridge/msdk/videocommon/download/a;J)J
    .locals 0

    .line 59
    iput-wide p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->m:J

    return-wide p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/videocommon/download/a;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/videocommon/download/a;I)Ljava/lang/String;
    .locals 0

    .line 59
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/videocommon/download/a;->f(I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I
    .locals 4

    const/16 v0, 0x64

    if-nez p1, :cond_0

    return v0

    .line 485
    :cond_0
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v1

    const/16 v2, 0x12a

    if-ne v1, v2, :cond_2

    .line 486
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->K:Lcom/mbridge/msdk/c/d;

    if-nez p1, :cond_1

    .line 487
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->k:Ljava/lang/String;

    invoke-virtual {p1, v1, v2}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->K:Lcom/mbridge/msdk/c/d;

    .line 489
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->K:Lcom/mbridge/msdk/c/d;

    invoke-virtual {p1}, Lcom/mbridge/msdk/c/d;->f()I

    move-result p1

    return p1

    .line 490
    :cond_2
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result p1

    const/16 v1, 0x2a

    if-ne p1, v1, :cond_4

    .line 491
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->M:Lcom/mbridge/msdk/c/d;

    if-nez p1, :cond_3

    .line 492
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->k:Ljava/lang/String;

    invoke-virtual {p1, v1, v2}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->M:Lcom/mbridge/msdk/c/d;

    :cond_3
    const/4 p1, 0x0

    .line 494
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/videocommon/download/a;->d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result p1

    return p1

    .line 496
    :cond_4
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->L:Lcom/mbridge/msdk/videocommon/d/c;

    if-nez p1, :cond_5

    .line 497
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object p1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->k:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {p1, v1, v2, v3}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->L:Lcom/mbridge/msdk/videocommon/d/c;

    .line 499
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->L:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/c;->r()I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    .line 502
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "CampaignDownLoadTask"

    invoke-static {v2, v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    return v0
.end method

.method static synthetic c(Lcom/mbridge/msdk/videocommon/download/a;I)I
    .locals 0

    .line 59
    iput p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->B:I

    return p1
.end method

.method static synthetic c(Lcom/mbridge/msdk/videocommon/download/a;)J
    .locals 2

    .line 59
    iget-wide v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->m:J

    return-wide v0
.end method

.method private c(Ljava/lang/String;)V
    .locals 4

    .line 767
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 769
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 770
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    return-void

    .line 773
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/foundation/same/report/d/a;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/foundation/same/report/d/a;-><init>(Landroid/content/Context;)V

    .line 774
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->k:Ljava/lang/String;

    invoke-static {p1, v1, v2}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/same/net/g/d;

    move-result-object p1

    .line 776
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v1

    const/16 v2, 0x2a

    if-eq v1, v2, :cond_1

    .line 777
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/b;->b()Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/a;->b()Ljava/lang/String;

    move-result-object v1

    const-string v2, "r_stid"

    .line 778
    invoke-virtual {p1, v2, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    const/4 v1, 0x0

    .line 781
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v2

    iget-object v2, v2, Lcom/mbridge/msdk/foundation/same/net/f/d;->a:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, p1, v3}, Lcom/mbridge/msdk/foundation/same/report/d/a;->post(ILjava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 783
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "CampaignDownLoadTask"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

.method private d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I
    .locals 1

    const/16 p1, 0x64

    .line 510
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->M:Lcom/mbridge/msdk/c/d;

    if-eqz v0, :cond_0

    .line 511
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->M:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->f()I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return p1
.end method

.method static synthetic d(Lcom/mbridge/msdk/videocommon/download/a;)Ljava/lang/String;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/mbridge/msdk/videocommon/download/a;->q:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/videocommon/download/a;)I
    .locals 0

    .line 59
    iget p0, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    return p0
.end method

.method private f(I)Ljava/lang/String;
    .locals 4

    .line 801
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->k:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_0

    .line 804
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "key="

    .line 805
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "2000077"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "&"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "unit_id="

    .line 806
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->k:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "rid="

    .line 807
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "rid_n="

    .line 808
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "package_name="

    .line 809
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "app_id="

    .line 810
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "video_url="

    .line 811
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "process_size="

    .line 812
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->p:J

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "file_size="

    .line 813
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->m:J

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "ready_rate="

    .line 814
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->t:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "cd_rate="

    .line 815
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->d:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "cid="

    .line 816
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "type="

    .line 817
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "video_download_status="

    .line 818
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 819
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_1
    :goto_0
    const-string p1, ""

    return-object p1
.end method

.method static synthetic f(Lcom/mbridge/msdk/videocommon/download/a;)Ljava/lang/String;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/videocommon/download/a;)J
    .locals 2

    .line 59
    iget-wide v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->p:J

    return-wide v0
.end method

.method static synthetic h(Lcom/mbridge/msdk/videocommon/download/a;)I
    .locals 0

    .line 59
    iget p0, p0, Lcom/mbridge/msdk/videocommon/download/a;->B:I

    return p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/videocommon/download/a;)Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/mbridge/msdk/videocommon/download/a;->A:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    return-object p0
.end method

.method static synthetic j(Lcom/mbridge/msdk/videocommon/download/a;)V
    .locals 0

    .line 59
    invoke-direct {p0}, Lcom/mbridge/msdk/videocommon/download/a;->p()V

    return-void
.end method

.method static synthetic k(Lcom/mbridge/msdk/videocommon/download/a;)I
    .locals 0

    .line 59
    iget p0, p0, Lcom/mbridge/msdk/videocommon/download/a;->t:I

    return p0
.end method

.method static synthetic l(Lcom/mbridge/msdk/videocommon/download/a;)I
    .locals 0

    .line 59
    iget p0, p0, Lcom/mbridge/msdk/videocommon/download/a;->d:I

    return p0
.end method

.method static synthetic m(Lcom/mbridge/msdk/videocommon/download/a;)Ljava/lang/String;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/mbridge/msdk/videocommon/download/a;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic n(Lcom/mbridge/msdk/videocommon/download/a;)Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/mbridge/msdk/videocommon/download/a;->y:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    return-object p0
.end method

.method static synthetic o(Lcom/mbridge/msdk/videocommon/download/a;)I
    .locals 0

    .line 59
    iget p0, p0, Lcom/mbridge/msdk/videocommon/download/a;->F:I

    return p0
.end method

.method private o()V
    .locals 4

    .line 696
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->v:Lcom/mbridge/msdk/foundation/db/s;

    if-nez v0, :cond_0

    .line 697
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/s;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/s;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->v:Lcom/mbridge/msdk/foundation/db/s;

    :cond_0
    const/4 v0, 0x0

    .line 700
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->v:Lcom/mbridge/msdk/foundation/db/s;

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/db/s;->b(Ljava/lang/String;)V

    .line 701
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object v1

    const-string v2, "r_d_v_b_l"

    const/4 v3, 0x1

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;Z)Z

    move-result v1

    if-nez v1, :cond_1

    .line 702
    new-instance v1, Ljava/io/File;

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->q:Ljava/lang/String;

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 703
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-virtual {v1}, Ljava/io/File;->isFile()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 704
    invoke-virtual {v1}, Ljava/io/File;->delete()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :try_start_1
    const-string v1, "CampaignDownLoadTask"

    const-string v2, "del DB or file failed"

    .line 708
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 710
    :cond_1
    :goto_0
    iput v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    return-void

    :catchall_1
    move-exception v1

    iput v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    .line 711
    throw v1
.end method

.method private p()V
    .locals 8

    const-string v0, "insertExcludeId"

    :try_start_0
    const-string v1, "com.mbridge.msdk.reward.a.a"

    .line 733
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 734
    invoke-virtual {v1}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v2

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Class;

    .line 735
    const-class v5, Ljava/lang/String;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    const-class v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v7, 0x1

    aput-object v5, v4, v7

    invoke-virtual {v1, v0, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v4, v3, [Ljava/lang/Object;

    .line 736
    iget-object v5, p0, Lcom/mbridge/msdk/videocommon/download/a;->k:Ljava/lang/String;

    aput-object v5, v4, v6

    iget-object v5, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    aput-object v5, v4, v7

    invoke-virtual {v1, v2, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "com.mbridge.msdk.mbnative.controller.NativeController"

    .line 738
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 739
    invoke-virtual {v1}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v2

    new-array v4, v3, [Ljava/lang/Class;

    .line 740
    const-class v5, Ljava/lang/String;

    aput-object v5, v4, v6

    const-class v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    aput-object v5, v4, v7

    invoke-virtual {v1, v0, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v1, v3, [Ljava/lang/Object;

    .line 741
    iget-object v3, p0, Lcom/mbridge/msdk/videocommon/download/a;->k:Ljava/lang/String;

    aput-object v3, v1, v6

    iget-object v3, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    aput-object v3, v1, v7

    invoke-virtual {v0, v2, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 743
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "CampaignDownLoadTask"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method static synthetic p(Lcom/mbridge/msdk/videocommon/download/a;)Z
    .locals 0

    .line 59
    iget-boolean p0, p0, Lcom/mbridge/msdk/videocommon/download/a;->e:Z

    return p0
.end method

.method static synthetic q(Lcom/mbridge/msdk/videocommon/download/a;)Z
    .locals 0

    .line 59
    iget-boolean p0, p0, Lcom/mbridge/msdk/videocommon/download/a;->C:Z

    return p0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 179
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 183
    iput p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->c:I

    return-void
.end method

.method public final a(II)V
    .locals 4

    .line 219
    iput p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    .line 220
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->v:Lcom/mbridge/msdk/foundation/db/s;

    if-nez v0, :cond_0

    .line 221
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/s;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/s;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->v:Lcom/mbridge/msdk/foundation/db/s;

    .line 223
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->v:Lcom/mbridge/msdk/foundation/db/s;

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    int-to-long v2, p2

    invoke-virtual {v0, v1, v2, v3, p1}, Lcom/mbridge/msdk/foundation/db/s;->a(Ljava/lang/String;JI)J

    return-void
.end method

.method public final a(JZ)V
    .locals 6

    .line 364
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setStateToDone \u4e0b\u8f7d\u5b8c\u6210  \uff1a mProgressSize"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->p:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "  progressSize "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "  "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->B:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "%   FileSize : "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->m:J

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "CampaignDownLoadTask"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 365
    iget v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->t:I

    const-wide/16 v2, 0x0

    const/16 v4, 0x64

    if-ne v0, v4, :cond_1

    .line 366
    iget v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->c:I

    const/4 v4, 0x3

    if-eq v0, v4, :cond_1

    iget-wide v4, p0, Lcom/mbridge/msdk/videocommon/download/a;->m:J

    cmp-long v0, p1, v4

    if-eqz v0, :cond_1

    if-nez p3, :cond_1

    .line 367
    new-instance v0, Ljava/io/File;

    iget-object v4, p0, Lcom/mbridge/msdk/videocommon/download/a;->q:Ljava/lang/String;

    invoke-direct {v0, v4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 369
    iget-object v4, p0, Lcom/mbridge/msdk/videocommon/download/a;->o:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    invoke-static {v0, v4, v5}, Lcom/mbridge/msdk/foundation/download/utils/Objects;->exists(Ljava/io/File;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 370
    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v2

    .line 372
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "progressSize = "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, " fileSize = "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->m:J

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, " "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p1, " absFileSize = "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "File size is not match witch download size."

    .line 373
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/videocommon/download/a;->a(Ljava/lang/String;)V

    return-void

    :cond_1
    const/4 p3, 0x5

    .line 378
    iput p3, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    const/4 p3, 0x1

    const-string v0, ""

    .line 379
    invoke-direct {p0, p3, v0}, Lcom/mbridge/msdk/videocommon/download/a;->a(ILjava/lang/String;)V

    .line 380
    iget-wide v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->m:J

    cmp-long p3, v0, v2

    if-eqz p3, :cond_2

    iget-object p3, p0, Lcom/mbridge/msdk/videocommon/download/a;->v:Lcom/mbridge/msdk/foundation/db/s;

    if-eqz p3, :cond_2

    .line 381
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-virtual {p3, v2, v0, v1}, Lcom/mbridge/msdk/foundation/db/s;->b(Ljava/lang/String;J)J

    :cond_2
    const/4 p3, 0x0

    .line 383
    iput-boolean p3, p0, Lcom/mbridge/msdk/videocommon/download/a;->b:Z

    .line 384
    iget p3, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/videocommon/download/a;->a(JI)V

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 231
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/videocommon/download/c;)V
    .locals 1

    .line 556
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->g:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_0

    .line 557
    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/videocommon/listener/a;)V
    .locals 0

    .line 632
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->h:Lcom/mbridge/msdk/videocommon/listener/a;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 388
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->h:Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v0, :cond_0

    .line 389
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-interface {v0, p1, v1}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 392
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->i:Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v0, :cond_1

    .line 393
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-interface {v0, p1, v1}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 396
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Video download stop : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "CampaignDownLoadTask"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 398
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_2

    .line 399
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    if-lez p1, :cond_2

    .line 400
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object p1

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const-string p1, "Is not check video download status"

    .line 401
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 407
    :cond_2
    iget p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    const/4 v0, 0x4

    if-eq p1, v0, :cond_3

    iget p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    const/4 v1, 0x2

    if-eq p1, v1, :cond_3

    iget p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    const/4 v1, 0x5

    if-eq p1, v1, :cond_3

    .line 409
    iput v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    .line 410
    iget-wide v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->p:J

    iget p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    invoke-direct {p0, v0, v1, p1}, Lcom/mbridge/msdk/videocommon/download/a;->a(JI)V

    :cond_3
    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 195
    iput-boolean p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->w:Z

    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 187
    iput p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->d:I

    return-void
.end method

.method public final b(Lcom/mbridge/msdk/videocommon/listener/a;)V
    .locals 0

    .line 636
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->i:Lcom/mbridge/msdk/videocommon/listener/a;

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    .line 550
    invoke-direct {p0}, Lcom/mbridge/msdk/videocommon/download/a;->p()V

    const/4 v0, 0x2

    .line 551
    invoke-direct {p0, v0, p1}, Lcom/mbridge/msdk/videocommon/download/a;->a(ILjava/lang/String;)V

    const/4 p1, 0x4

    .line 552
    iput p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 203
    iput-boolean p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->r:Z

    return-void
.end method

.method public final b()Z
    .locals 1

    .line 191
    iget-boolean v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->w:Z

    return v0
.end method

.method public final c()J
    .locals 2

    .line 199
    iget-wide v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->s:J

    return-wide v0
.end method

.method public final c(I)V
    .locals 1

    .line 235
    iput p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->t:I

    .line 236
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "setReadyRate:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->t:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "CampaignDownLoadTask"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    .line 207
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->q:Ljava/lang/String;

    return-object v0
.end method

.method public final d(I)V
    .locals 0

    .line 244
    iput p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->D:I

    return-void
.end method

.method public final e()J
    .locals 2

    .line 211
    iget-wide v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->m:J

    return-wide v0
.end method

.method public final e(I)V
    .locals 0

    .line 248
    iput p1, p0, Lcom/mbridge/msdk/videocommon/download/a;->F:I

    return-void
.end method

.method public final f()I
    .locals 1

    .line 215
    iget v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    return v0
.end method

.method public final g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 1

    .line 227
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object v0
.end method

.method public final h()J
    .locals 2

    .line 240
    iget-wide v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->p:J

    return-wide v0
.end method

.method public final i()V
    .locals 4

    const-string v0, "CampaignDownLoadTask"

    const-string v1, "start()"

    .line 415
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 417
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 3179
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    if-eqz v1, :cond_1

    .line 422
    new-instance v1, Ljava/net/URL;

    .line 4179
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    .line 422
    invoke-direct {v1, v2}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 423
    invoke-virtual {v1}, Ljava/net/URL;->getPath()Ljava/lang/String;

    move-result-object v1

    .line 424
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 437
    :cond_1
    iget v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->t:I

    const/4 v2, 0x2

    if-nez v1, :cond_2

    iget v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->F:I

    if-ne v1, v2, :cond_2

    const-string v1, "Can not start download because readyRate is 0 and videoCtnType is 2"

    .line 438
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 442
    :cond_2
    iget-boolean v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->a:Z

    if-eqz v1, :cond_3

    iget v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->F:I

    if-ne v1, v2, :cond_3

    iget v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->t:I

    const/16 v2, 0x64

    if-eq v1, v2, :cond_3

    const/4 v1, 0x1

    goto :goto_0

    :cond_3
    const/4 v1, 0x0

    .line 443
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "start: ready rate is "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mbridge/msdk/videocommon/download/a;->t:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " and video ctn type is "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mbridge/msdk/videocommon/download/a;->F:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " and isUseNewDownloadReadyRate "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v1, :cond_5

    .line 446
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->A:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    if-eqz v0, :cond_4

    .line 447
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;->start()Ljava/lang/String;

    goto :goto_1

    .line 448
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->y:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    if-eqz v0, :cond_7

    .line 449
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;->start()Ljava/lang/String;

    goto :goto_1

    .line 452
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->y:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    if-eqz v0, :cond_6

    .line 453
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;->start()Ljava/lang/String;

    goto :goto_1

    .line 454
    :cond_6
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->A:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    if-eqz v0, :cond_7

    .line 455
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;->start()Ljava/lang/String;

    :cond_7
    :goto_1
    return-void

    .line 427
    :catchall_0
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->h:Lcom/mbridge/msdk/videocommon/listener/a;

    const-string v1, ""

    const-string v2, "VideoUrl is not illegal, Please check it."

    if-eqz v0, :cond_8

    .line 428
    invoke-interface {v0, v2, v1}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 431
    :cond_8
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->i:Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v0, :cond_9

    .line 432
    invoke-interface {v0, v2, v1}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_9
    return-void
.end method

.method public final j()V
    .locals 10

    const-string v0, "CampaignDownLoadTask"

    const/4 v1, 0x1

    .line 521
    :try_start_0
    iput-boolean v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->C:Z

    .line 523
    iget v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->F:I

    if-ne v2, v1, :cond_0

    .line 524
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Can not call resume(), because videoCtnType = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->F:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    const-string v2, "resume()"

    .line 528
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 529
    iget-boolean v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->a:Z

    const/4 v3, 0x2

    if-eqz v2, :cond_1

    iget v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->F:I

    if-ne v2, v3, :cond_1

    iget v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->t:I

    const/16 v4, 0x64

    if-eq v2, v4, :cond_1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    .line 530
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "resume: ready rate is "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mbridge/msdk/videocommon/download/a;->t:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, " and video ctn type is "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mbridge/msdk/videocommon/download/a;->F:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, " and isUseNewDownloadReadyRate "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 532
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->z:Lcom/mbridge/msdk/foundation/download/DownloadMessage;

    if-nez v2, :cond_2

    .line 533
    new-instance v2, Lcom/mbridge/msdk/foundation/download/DownloadMessage;

    new-instance v5, Ljava/lang/Object;

    invoke-direct {v5}, Ljava/lang/Object;-><init>()V

    iget-object v6, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    const/16 v8, 0x64

    sget-object v9, Lcom/mbridge/msdk/foundation/download/DownloadResourceType;->DOWNLOAD_RESOURCE_TYPE_VIDEO:Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    move-object v4, v2

    invoke-direct/range {v4 .. v9}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;-><init>(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;ILcom/mbridge/msdk/foundation/download/DownloadResourceType;)V

    iput-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->z:Lcom/mbridge/msdk/foundation/download/DownloadMessage;

    :cond_2
    if-eqz v1, :cond_3

    .line 537
    new-instance v1, Lcom/mbridge/msdk/foundation/download/DownloadMessage;

    new-instance v5, Ljava/lang/Object;

    invoke-direct {v5}, Ljava/lang/Object;-><init>()V

    iget-object v6, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    const/16 v8, 0x64

    sget-object v9, Lcom/mbridge/msdk/foundation/download/DownloadResourceType;->DOWNLOAD_RESOURCE_TYPE_VIDEO:Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    move-object v4, v1

    invoke-direct/range {v4 .. v9}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;-><init>(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;ILcom/mbridge/msdk/foundation/download/DownloadResourceType;)V

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->N:Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;

    iget-object v4, p0, Lcom/mbridge/msdk/videocommon/download/a;->O:Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;

    invoke-direct {p0, v1, v2, v4}, Lcom/mbridge/msdk/videocommon/download/a;->a(Lcom/mbridge/msdk/foundation/download/DownloadMessage;Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;)Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->A:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    .line 538
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;->start()Ljava/lang/String;

    goto :goto_1

    .line 540
    :cond_3
    new-instance v1, Lcom/mbridge/msdk/foundation/download/DownloadMessage;

    new-instance v5, Ljava/lang/Object;

    invoke-direct {v5}, Ljava/lang/Object;-><init>()V

    iget-object v6, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    const/16 v8, 0x64

    sget-object v9, Lcom/mbridge/msdk/foundation/download/DownloadResourceType;->DOWNLOAD_RESOURCE_TYPE_VIDEO:Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    move-object v4, v1

    invoke-direct/range {v4 .. v9}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;-><init>(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;ILcom/mbridge/msdk/foundation/download/DownloadResourceType;)V

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->P:Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;

    iget-object v4, p0, Lcom/mbridge/msdk/videocommon/download/a;->Q:Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;

    invoke-direct {p0, v1, v2, v4}, Lcom/mbridge/msdk/videocommon/download/a;->a(Lcom/mbridge/msdk/foundation/download/DownloadMessage;Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;)Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->y:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    .line 541
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;->start()Ljava/lang/String;

    .line 543
    :goto_1
    invoke-direct {p0, v3}, Lcom/mbridge/msdk/videocommon/download/a;->f(I)Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/videocommon/download/a;->c(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v1

    .line 545
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method public final k()Ljava/lang/String;
    .locals 6

    .line 562
    iget v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->c:I

    const-string v1, ""

    const/4 v2, 0x3

    if-ne v0, v2, :cond_0

    return-object v1

    .line 566
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->o:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 567
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 570
    :try_start_0
    iget-object v3, p0, Lcom/mbridge/msdk/videocommon/download/a;->o:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    invoke-static {v2, v3, v4}, Lcom/mbridge/msdk/foundation/download/utils/Objects;->exists(Ljava/io/File;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_4

    .line 571
    invoke-virtual {v2}, Ljava/io/File;->isFile()Z

    move-result v3

    if-eqz v3, :cond_3

    .line 572
    invoke-virtual {v2}, Ljava/io/File;->canRead()Z

    move-result v3

    if-eqz v3, :cond_2

    .line 573
    invoke-virtual {v2}, Ljava/io/File;->length()J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-lez v2, :cond_1

    .line 574
    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->q:Ljava/lang/String;

    goto :goto_0

    :cond_1
    const-string v1, "file length is 0 "

    goto :goto_0

    :cond_2
    const-string v1, "file can not read "

    goto :goto_0

    :cond_3
    const-string v1, "file is not file "

    goto :goto_0

    :cond_4
    const-string v1, "file is not exist "
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 589
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "CampaignDownLoadTask"

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 590
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    .line 592
    :goto_0
    iget v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    const/4 v2, 0x5

    if-ne v0, v2, :cond_5

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 593
    invoke-direct {p0}, Lcom/mbridge/msdk/videocommon/download/a;->o()V

    :cond_5
    return-object v1
.end method

.method public final l()V
    .locals 1

    .line 689
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->g:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 690
    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->g:Ljava/util/concurrent/CopyOnWriteArrayList;

    :cond_0
    return-void
.end method

.method public final m()V
    .locals 3

    const/4 v0, 0x0

    .line 716
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/videocommon/download/a;->o()V

    .line 717
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlayable_ads_without_video()I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    .line 727
    iput v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    return-void

    .line 720
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 722
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->j:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/videocommon/a/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    goto :goto_1

    :catch_0
    :try_start_2
    const-string v1, "CampaignDownLoadTask"

    const-string v2, "del file is failed"

    .line 725
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 727
    :cond_1
    :goto_0
    iput v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    return-void

    :goto_1
    iput v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->f:I

    .line 728
    throw v1
.end method

.method public final n()Ljava/lang/String;
    .locals 3

    .line 790
    :try_start_0
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->q:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 791
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/a;->o:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/a;->x:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/download/utils/Objects;->exists(Ljava/io/File;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 792
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->q:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 795
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "CampaignDownLoadTask"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 797
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/a;->n:Ljava/lang/String;

    return-object v0
.end method
