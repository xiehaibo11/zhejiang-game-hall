.class public final Lcom/mbridge/msdk/reward/adapter/d;
.super Ljava/lang/Object;
.source "RewardMVVideoAdapter.java"

# interfaces
.implements Lcom/mbridge/msdk/reward/adapter/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/reward/adapter/d$e;,
        Lcom/mbridge/msdk/reward/adapter/d$d;,
        Lcom/mbridge/msdk/reward/adapter/d$f;,
        Lcom/mbridge/msdk/reward/adapter/d$a;,
        Lcom/mbridge/msdk/reward/adapter/d$c;,
        Lcom/mbridge/msdk/reward/adapter/d$b;
    }
.end annotation


# instance fields
.field private A:Z

.field private B:Z

.field private C:Ljava/lang/String;

.field private D:I

.field private E:I

.field private F:I

.field private G:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

.field private H:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private I:Z

.field private J:J

.field private K:Landroid/os/Handler;

.field private L:Z

.field private M:J

.field private N:Ljava/lang/String;

.field private O:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private P:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field public a:Ljava/lang/Object;

.field public b:Ljava/lang/String;

.field public c:Ljava/lang/String;

.field d:Z

.field volatile e:Z

.field volatile f:Z

.field volatile g:Z

.field volatile h:Z

.field volatile i:Z

.field private j:Landroid/content/Context;

.field private k:Ljava/lang/String;

.field private l:Ljava/lang/String;

.field private m:I

.field private n:I

.field private o:I

.field private p:Z

.field private q:Ljava/lang/String;

.field private r:Ljava/lang/String;

.field private s:Lcom/mbridge/msdk/video/bt/module/b/h;

.field private volatile t:Lcom/mbridge/msdk/reward/adapter/b;

.field private u:Lcom/mbridge/msdk/videocommon/d/c;

.field private v:Lcom/mbridge/msdk/reward/adapter/d$e;

.field private w:Z

.field private x:Z

.field private y:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private z:I


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    .line 1088
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 117
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->w:Z

    .line 121
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->x:Z

    .line 122
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->a:Ljava/lang/Object;

    .line 166
    new-instance v1, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->y:Ljava/util/concurrent/CopyOnWriteArrayList;

    const/4 v1, 0x2

    .line 168
    iput v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->z:I

    const-string v1, ""

    .line 171
    iput-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->C:Ljava/lang/String;

    .line 178
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->I:Z

    .line 179
    iput-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->b:Ljava/lang/String;

    .line 180
    iput-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->c:Ljava/lang/String;

    const-wide/16 v2, 0x0

    .line 182
    iput-wide v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->J:J

    .line 230
    new-instance v4, Lcom/mbridge/msdk/reward/adapter/d$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v5

    invoke-direct {v4, p0, v5}, Lcom/mbridge/msdk/reward/adapter/d$1;-><init>(Lcom/mbridge/msdk/reward/adapter/d;Landroid/os/Looper;)V

    iput-object v4, p0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    .line 1121
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->d:Z

    .line 1399
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->L:Z

    .line 1511
    iput-wide v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->M:J

    .line 1978
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->e:Z

    .line 1979
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->f:Z

    .line 1980
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    .line 1981
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    .line 1982
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 1985
    iput-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->N:Ljava/lang/String;

    .line 1090
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    .line 1091
    iput-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    .line 1092
    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->l:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1094
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/adapter/d;J)J
    .locals 0

    .line 69
    iput-wide p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->J:J

    return-wide p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->q:Ljava/lang/String;

    return-object p0
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/foundation/entity/CampaignUnit;",
            ")",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    .line 3521
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    .line 3523
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/util/List;)V

    .line 3525
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v1, :cond_0

    .line 3526
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/c;->u()I

    move-result v1

    :cond_0
    const v1, 0x7fffffff

    if-eqz p1, :cond_14

    .line 3533
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v2

    if-eqz v2, :cond_14

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_14

    .line 3534
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v2

    .line 3535
    iput-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->O:Ljava/util/List;

    const/4 v3, 0x0

    if-eqz p1, :cond_1

    .line 3537
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v4

    if-eqz v4, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v4

    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v4

    if-lez v4, :cond_1

    .line 3538
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object p1

    move v4, v3

    .line 3539
    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v5

    if-ge v4, v5, :cond_1

    .line 3540
    invoke-interface {p1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 3541
    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 3542
    invoke-interface {p1, v4, v5}, Ljava/util/List;->set(ILjava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_1
    move p1, v3

    .line 3546
    :goto_1
    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v4

    if-ge p1, v4, :cond_13

    if-ge p1, v1, :cond_13

    .line 3547
    invoke-virtual {v2, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 3553
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v5

    if-eqz v5, :cond_9

    .line 3554
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_12

    const/4 v5, 0x0

    .line 3557
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v6
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    const/16 v7, 0x11f

    const-string v8, ""

    if-ne v6, v7, :cond_2

    :try_start_1
    const-string v6, "3"

    goto :goto_2

    .line 3559
    :cond_2
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v6

    const/16 v7, 0x5e

    if-ne v6, v7, :cond_3

    const-string v6, "1"

    goto :goto_2

    .line 3561
    :cond_3
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v6

    const/16 v7, 0x2a

    if-ne v6, v7, :cond_4

    const-string v6, "2"
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    goto :goto_2

    :cond_4
    move-object v6, v8

    .line 3565
    :goto_2
    :try_start_2
    sget-object v7, Lcom/mbridge/msdk/foundation/same/b/c;->g:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v7

    .line 3566
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 3567
    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-eqz v10, :cond_5

    .line 3568
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    invoke-static {v9, v10}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v9

    :cond_5
    const-string v10, ".html"

    invoke-virtual {v9, v10}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 3569
    new-instance v10, Ljava/io/File;

    invoke-direct {v10, v7, v9}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 3570
    new-instance v7, Ljava/io/FileOutputStream;

    invoke-direct {v7, v10}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 3572
    :try_start_3
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "<script>"

    .line 3573
    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/c/b/b;->a()Lcom/mbridge/msdk/c/b/b;

    move-result-object v9

    invoke-virtual {v9}, Lcom/mbridge/msdk/c/b/b;->b()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "</script>"

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 3574
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 3576
    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/String;->getBytes()[B

    move-result-object v5

    invoke-virtual {v7, v5}, Ljava/io/FileOutputStream;->write([B)V

    .line 3577
    invoke-virtual {v7}, Ljava/io/FileOutputStream;->flush()V

    .line 3578
    invoke-virtual {v10}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMraid(Ljava/lang/String;)V

    .line 3580
    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-static {v4, v8, v5, v6}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 3587
    :try_start_4
    invoke-virtual {v7}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_4

    :catchall_0
    move-exception p1

    move-object v5, v7

    goto :goto_5

    :catch_0
    move-exception v5

    move-object v11, v7

    move-object v7, v5

    move-object v5, v11

    goto :goto_3

    :catchall_1
    move-exception p1

    goto :goto_5

    :catch_1
    move-exception v7

    .line 3582
    :goto_3
    :try_start_5
    invoke-virtual {v7}, Ljava/lang/Exception;->printStackTrace()V

    .line 3583
    invoke-virtual {v4, v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMraid(Ljava/lang/String;)V

    .line 3584
    invoke-virtual {v7}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v7

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-static {v4, v7, v8, v6}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    if-eqz v5, :cond_6

    .line 3587
    :try_start_6
    invoke-virtual {v5}, Ljava/io/FileOutputStream;->close()V

    .line 3591
    :cond_6
    :goto_4
    new-instance v5, Ljava/io/File;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v6

    invoke-direct {v5, v6}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 3592
    invoke-virtual {v5}, Ljava/io/File;->exists()Z

    move-result v6

    if-eqz v6, :cond_7

    invoke-virtual {v5}, Ljava/io/File;->isFile()Z

    move-result v6

    if-eqz v6, :cond_7

    invoke-virtual {v5}, Ljava/io/File;->canRead()Z

    move-result v5

    if-nez v5, :cond_9

    :cond_7
    const-string v4, "mraid resource write fail"

    .line 3593
    invoke-direct {p0, v4}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    goto/16 :goto_a

    :goto_5
    if-eqz v5, :cond_8

    .line 3587
    invoke-virtual {v5}, Ljava/io/FileOutputStream;->close()V

    .line 3589
    :cond_8
    throw p1

    :cond_9
    if-eqz v4, :cond_12

    .line 3601
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOfferType()I

    move-result v5

    const/16 v6, 0x63

    if-eq v5, v6, :cond_12

    .line 3603
    invoke-direct {p0, v4}, Lcom/mbridge/msdk/reward/adapter/d;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v5

    const/4 v6, 0x1

    if-eqz v5, :cond_a

    .line 3604
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_b

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_b

    goto :goto_6

    .line 3608
    :cond_a
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_b

    :goto_6
    move v5, v3

    goto :goto_7

    :cond_b
    move v5, v6

    :goto_7
    if-eqz v5, :cond_11

    .line 3614
    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v5

    if-eqz v5, :cond_d

    .line 3615
    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v7

    invoke-static {v5, v7}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_c

    move v5, v6

    goto :goto_8

    :cond_c
    const/4 v5, 0x2

    :goto_8
    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRtinsType(I)V

    .line 3618
    :cond_d
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getWtick()I

    move-result v5

    if-eq v5, v6, :cond_10

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_e

    goto :goto_9

    .line 3621
    :cond_e
    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v5

    if-eqz v5, :cond_f

    .line 3622
    invoke-virtual {v0, v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_a

    .line 3624
    :cond_f
    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    sget v6, Lcom/mbridge/msdk/foundation/same/a;->E:I

    invoke-static {v5, v4, v6}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    const-string v4, "APP ALREADY INSTALLED"

    .line 3626
    iput-object v4, p0, Lcom/mbridge/msdk/reward/adapter/d;->N:Ljava/lang/String;

    goto :goto_a

    .line 3619
    :cond_10
    :goto_9
    invoke-virtual {v0, v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_a

    :cond_11
    const-string v4, "No video campaign"

    .line 3631
    iput-object v4, p0, Lcom/mbridge/msdk/reward/adapter/d;->N:Ljava/lang/String;

    :cond_12
    :goto_a
    add-int/lit8 p1, p1, 0x1

    goto/16 :goto_1

    :cond_13
    const-string p1, "RewardMVVideoAdapter"

    .line 3636
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onload \u8fd4\u56de\u6709\u4ee5\u4e0b\u5e26\u6709\u89c6\u9891\u7d20\u6750\u7684compaign\uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2

    goto :goto_b

    :catch_2
    move-exception p1

    .line 3639
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_14
    :goto_b
    return-object v0
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 4

    const-string v0, "RewardMVVideoAdapter"

    .line 2844
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v1

    .line 2845
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u5220\u9664 Campaign id\uff1a "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v1, :cond_0

    .line 2847
    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/videocommon/a/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 2850
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
    .locals 19

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    .line 6992
    iput-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->G:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    .line 6993
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Campaign \u8bf7\u6c42\u6210\u529f\uff1a "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v3

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " \u6761"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "RewardMVVideoAdapter"

    invoke-static {v3, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 6996
    invoke-direct/range {p0 .. p1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    iput-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    const/4 v2, 0x1

    const/4 v3, 0x0

    .line 6998
    :try_start_0
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v4

    invoke-virtual {v4, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    move-object v5, v4

    check-cast v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "start download resource tpl "

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v7

    invoke-virtual {v7, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_0

    move v7, v2

    goto :goto_0

    :cond_0
    move v7, v3

    :goto_0
    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-boolean v9, v1, Lcom/mbridge/msdk/reward/adapter/d;->B:Z

    const-string v10, ""

    const-string v11, ""

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v12

    iget-wide v14, v1, Lcom/mbridge/msdk/reward/adapter/d;->M:J

    sub-long/2addr v12, v14

    invoke-static/range {v5 .. v13}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 7003
    :catch_0
    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 7733
    new-instance v4, Lcom/mbridge/msdk/reward/adapter/d$6;

    invoke-direct {v4, v1, v0}, Lcom/mbridge/msdk/reward/adapter/d$6;-><init>(Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V

    .line 7751
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v5

    invoke-virtual {v5, v4}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    .line 7005
    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v4, :cond_b

    invoke-virtual {v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v4

    if-lez v4, :cond_b

    .line 7006
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "onload load\u6210\u529f size:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v5}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "RewardMVVideoAdapter"

    invoke-static {v5, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 8707
    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    if-eqz v4, :cond_1

    const/4 v5, 0x3

    .line 8708
    invoke-virtual {v4, v5}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    :cond_1
    if-eqz v0, :cond_2

    .line 7019
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getSessionId()Ljava/lang/String;

    move-result-object v0

    .line 8840
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 8841
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "onload sessionId:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "RewardMVVideoAdapter"

    invoke-static {v5, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 8842
    sput-object v0, Lcom/mbridge/msdk/reward/a/a;->a:Ljava/lang/String;

    .line 7023
    :cond_2
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_3

    .line 9762
    :try_start_1
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v4

    if-lez v4, :cond_3

    .line 9763
    iget v4, v1, Lcom/mbridge/msdk/reward/adapter/d;->m:I

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    add-int/2addr v4, v0

    iput v4, v1, Lcom/mbridge/msdk/reward/adapter/d;->m:I

    .line 9765
    :cond_3
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v0, :cond_4

    iget v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->m:I

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/d/c;->v()I

    move-result v4

    if-le v0, v4, :cond_5

    :cond_4
    const-string v0, "RewardMVVideoAdapter"

    const-string v4, "onload \u91cd\u7f6eoffset\u4e3a0"

    .line 9766
    invoke-static {v0, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 9767
    iput v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->m:I

    :cond_5
    const-string v0, "RewardMVVideoAdapter"

    .line 9769
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "onload \u7b97\u51fa \u4e0b\u6b21\u7684offset\u662f:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, v1, Lcom/mbridge/msdk/reward/adapter/d;->m:I

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 9771
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 9772
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget v4, v1, Lcom/mbridge/msdk/reward/adapter/d;->m:I

    invoke-static {v0, v4}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 9775
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 7025
    :cond_6
    :goto_1
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_7

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_7

    .line 7026
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "#######onload \u628a\u5e7f\u544a\u5b58\u5728\u672c\u5730 size:"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v4, "RewardMVVideoAdapter"

    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 7027
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->l:Ljava/lang/String;

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 9865
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v6

    if-eqz v6, :cond_7

    .line 9866
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v6

    invoke-virtual {v6, v0, v4, v5}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V

    .line 7030
    :cond_7
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v3}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    move-object v6, v0

    check-cast v6, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 7031
    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    xor-int/2addr v0, v2

    .line 7032
    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNscpt()I

    move-result v2

    .line 7034
    iput-boolean v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->e:Z

    .line 7035
    iput-boolean v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->f:Z

    .line 7036
    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/d;->a:Ljava/lang/Object;

    monitor-enter v4

    .line 7037
    :try_start_2
    iget-boolean v5, v1, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    if-eqz v5, :cond_8

    .line 7038
    iput-boolean v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    .line 7040
    :cond_8
    monitor-exit v4
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 7041
    iput-boolean v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 7042
    iput-boolean v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    .line 7044
    iget-boolean v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->B:Z

    if-eqz v3, :cond_9

    if-eqz v6, :cond_9

    .line 7046
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/db/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/b;

    move-result-object v3

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBidToken()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEncryptPrice()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v4, v5, v7}, Lcom/mbridge/msdk/foundation/db/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    .line 10087
    :cond_9
    invoke-static {}, Lcom/mbridge/msdk/reward/adapter/c$m;->a()Lcom/mbridge/msdk/reward/adapter/c;

    move-result-object v7

    .line 7049
    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    iget-boolean v11, v1, Lcom/mbridge/msdk/reward/adapter/d;->B:Z

    iget-boolean v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->A:Z

    if-eqz v3, :cond_a

    const/16 v3, 0x11f

    goto :goto_2

    :cond_a
    const/16 v3, 0x5e

    :goto_2
    move v12, v3

    iget-object v13, v1, Lcom/mbridge/msdk/reward/adapter/d;->l:Ljava/lang/String;

    iget-object v14, v1, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v15

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    new-instance v4, Lcom/mbridge/msdk/reward/adapter/d$3;

    invoke-direct {v4, v1, v0, v6, v2}, Lcom/mbridge/msdk/reward/adapter/d$3;-><init>(Lcom/mbridge/msdk/reward/adapter/d;ZLcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    new-instance v5, Lcom/mbridge/msdk/reward/adapter/d$4;

    invoke-direct {v5, v1, v0, v6, v2}, Lcom/mbridge/msdk/reward/adapter/d$4;-><init>(Lcom/mbridge/msdk/reward/adapter/d;ZLcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    move v9, v0

    move v10, v2

    move-object/from16 v16, v3

    move-object/from16 v17, v4

    move-object/from16 v18, v5

    invoke-virtual/range {v7 .. v18}, Lcom/mbridge/msdk/reward/adapter/c;->a(Landroid/content/Context;ZIZILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/mbridge/msdk/reward/adapter/c$c;Lcom/mbridge/msdk/reward/adapter/c$i;)V

    if-eqz v0, :cond_d

    .line 11087
    invoke-static {}, Lcom/mbridge/msdk/reward/adapter/c$m;->a()Lcom/mbridge/msdk/reward/adapter/c;

    move-result-object v4

    .line 7427
    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d;->l:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v9

    new-instance v10, Lcom/mbridge/msdk/reward/adapter/d$5;

    invoke-direct {v10, v1, v6, v0, v2}, Lcom/mbridge/msdk/reward/adapter/d$5;-><init>(Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZI)V

    invoke-virtual/range {v4 .. v10}, Lcom/mbridge/msdk/reward/adapter/c;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/reward/adapter/c$i;)V

    goto :goto_3

    :catchall_0
    move-exception v0

    .line 7040
    :try_start_3
    monitor-exit v4
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    throw v0

    :cond_b
    const-string v0, "RewardMVVideoAdapter"

    const-string v2, "onload load\u5931\u8d25 \u8fd4\u56de\u7684compaign \u6ca1\u6709\u5e26\u89c6\u9891\u7d20\u6750"

    .line 7009
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 7010
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->N:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_c

    const-string v0, "APP ALREADY INSTALLED"

    .line 7011
    iput-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->N:Ljava/lang/String;

    .line 7013
    :cond_c
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->N:Ljava/lang/String;

    invoke-direct {v1, v0}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    :cond_d
    :goto_3
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/d/c;Ljava/lang/String;)V
    .locals 17

    move-object/from16 v0, p0

    move-object/from16 v12, p3

    move-object/from16 v6, p4

    .line 4774
    :try_start_0
    new-instance v13, Lcom/mbridge/msdk/videocommon/a$a;

    invoke-direct {v13}, Lcom/mbridge/msdk/videocommon/a$a;-><init>()V

    .line 4775
    new-instance v14, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v14, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    .line 4776
    invoke-virtual {v13, v14}, Lcom/mbridge/msdk/videocommon/a$a;->a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    const/4 v1, 0x0

    if-eqz v6, :cond_0

    .line 4778
    invoke-interface/range {p4 .. p4}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_0

    .line 4779
    new-instance v2, Lcom/mbridge/msdk/video/js/a/j;

    invoke-direct {v2, v1, v12, v6}, Lcom/mbridge/msdk/video/js/a/j;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/List;)V

    goto :goto_0

    .line 4781
    :cond_0
    new-instance v2, Lcom/mbridge/msdk/video/js/a/j;

    invoke-direct {v2, v1, v12}, Lcom/mbridge/msdk/video/js/a/j;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :goto_0
    move-object v15, v2

    .line 4783
    iget v1, v0, Lcom/mbridge/msdk/reward/adapter/d;->z:I

    invoke-virtual {v15, v1}, Lcom/mbridge/msdk/video/js/a/j;->a(I)V

    move-object/from16 v11, p6

    .line 4784
    invoke-virtual {v15, v11}, Lcom/mbridge/msdk/video/js/a/j;->a(Ljava/lang/String;)V

    move-object/from16 v9, p7

    .line 4785
    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/videocommon/d/c;)V

    .line 4786
    iget-boolean v1, v0, Lcom/mbridge/msdk/reward/adapter/d;->I:Z

    invoke-virtual {v15, v1}, Lcom/mbridge/msdk/video/js/a/j;->e(Z)V

    .line 4787
    new-instance v10, Lcom/mbridge/msdk/reward/adapter/d$c;

    iget v8, v0, Lcom/mbridge/msdk/reward/adapter/d;->z:I

    move-object v1, v10

    move-object/from16 v2, p0

    move-object/from16 v3, p1

    move-object/from16 v4, p6

    move-object/from16 v5, p3

    move-object/from16 v6, p4

    move-object/from16 v7, p5

    move/from16 v16, v8

    move-object/from16 v8, p6

    move-object/from16 v9, p7

    move-object/from16 p4, v10

    move/from16 v10, v16

    move-object/from16 v11, p0

    invoke-direct/range {v1 .. v11}, Lcom/mbridge/msdk/reward/adapter/d$c;-><init>(Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/d/c;ILcom/mbridge/msdk/reward/adapter/d;)V

    .line 4788
    new-instance v10, Lcom/mbridge/msdk/reward/adapter/d$f;

    iget-object v9, v0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    move-object v1, v10

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object/from16 v4, p6

    move-object v5, v13

    move-object/from16 v6, p3

    move-object/from16 v7, p0

    move-object/from16 v8, p4

    invoke-direct/range {v1 .. v9}, Lcom/mbridge/msdk/reward/adapter/d$f;-><init>(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/reward/adapter/d$c;Landroid/os/Handler;)V

    .line 4789
    invoke-virtual {v14, v10}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 4790
    invoke-virtual {v14, v15}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    move-object/from16 v1, p5

    .line 4791
    invoke-virtual {v14, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 4792
    iget-object v0, v0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    const-wide/16 v1, 0x1388

    move-object/from16 v3, p4

    invoke-virtual {v0, v3, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 4798
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardMVVideoAdapter"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :catch_0
    move-exception v0

    .line 4794
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_1

    .line 4795
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;)V
    .locals 0

    .line 69
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/d/c;)V
    .locals 16

    move-object/from16 v0, p0

    move-object/from16 v10, p2

    .line 5741
    :try_start_0
    new-instance v11, Lcom/mbridge/msdk/videocommon/a$a;

    invoke-direct {v11}, Lcom/mbridge/msdk/videocommon/a$a;-><init>()V

    .line 5742
    new-instance v12, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v12, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    .line 5743
    invoke-virtual {v11, v12}, Lcom/mbridge/msdk/videocommon/a$a;->a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    .line 5744
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/bt/a/c;->b()Ljava/lang/String;

    move-result-object v1

    .line 5745
    invoke-virtual {v11, v1}, Lcom/mbridge/msdk/videocommon/a$a;->a(Ljava/lang/String;)V

    .line 5747
    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d;->G:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d;->G:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v2

    if-eqz v2, :cond_0

    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d;->G:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_0

    .line 5748
    new-instance v2, Lcom/mbridge/msdk/video/js/a/j;

    iget-object v4, v0, Lcom/mbridge/msdk/reward/adapter/d;->G:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v4

    invoke-direct {v2, v3, v10, v4}, Lcom/mbridge/msdk/video/js/a/j;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/List;)V

    goto :goto_0

    .line 5750
    :cond_0
    new-instance v2, Lcom/mbridge/msdk/video/js/a/j;

    invoke-direct {v2, v3, v10}, Lcom/mbridge/msdk/video/js/a/j;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :goto_0
    move-object v13, v2

    .line 5752
    iget v2, v0, Lcom/mbridge/msdk/reward/adapter/d;->z:I

    invoke-virtual {v13, v2}, Lcom/mbridge/msdk/video/js/a/j;->a(I)V

    move-object/from16 v14, p4

    .line 5753
    invoke-virtual {v13, v14}, Lcom/mbridge/msdk/video/js/a/j;->a(Ljava/lang/String;)V

    .line 5754
    invoke-virtual {v13, v1}, Lcom/mbridge/msdk/video/js/a/j;->c(Ljava/lang/String;)V

    move-object/from16 v7, p5

    .line 5755
    invoke-virtual {v13, v7}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/videocommon/d/c;)V

    .line 5756
    iget-boolean v1, v0, Lcom/mbridge/msdk/reward/adapter/d;->I:Z

    invoke-virtual {v13, v1}, Lcom/mbridge/msdk/video/js/a/j;->e(Z)V

    .line 5757
    new-instance v15, Lcom/mbridge/msdk/reward/adapter/d$b;

    iget v8, v0, Lcom/mbridge/msdk/reward/adapter/d;->z:I

    move-object v1, v15

    move-object/from16 v2, p0

    move-object/from16 v3, p4

    move-object/from16 v4, p2

    move-object/from16 v5, p3

    move-object/from16 v6, p4

    move-object/from16 v7, p5

    move-object/from16 v9, p0

    invoke-direct/range {v1 .. v9}, Lcom/mbridge/msdk/reward/adapter/d$b;-><init>(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/d/c;ILcom/mbridge/msdk/reward/adapter/d;)V

    .line 5758
    new-instance v9, Lcom/mbridge/msdk/reward/adapter/d$a;

    iget-object v8, v0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    move-object v1, v9

    move-object/from16 v2, p1

    move-object/from16 v3, p4

    move-object v4, v11

    move-object/from16 v5, p2

    move-object/from16 v6, p0

    move-object v7, v15

    invoke-direct/range {v1 .. v8}, Lcom/mbridge/msdk/reward/adapter/d$a;-><init>(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/reward/adapter/d$b;Landroid/os/Handler;)V

    .line 5759
    invoke-virtual {v12, v9}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 5760
    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    move-object/from16 v1, p3

    .line 5761
    invoke-virtual {v12, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 5762
    iget-object v0, v0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    const-wide/16 v1, 0x1388

    invoke-virtual {v0, v15, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 5768
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardMVVideoAdapter"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :catch_0
    move-exception v0

    .line 5764
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_1

    .line 5765
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/lang/String;)V
    .locals 9

    const-string v0, "====del campaign and callback failed"

    const-string v1, "RewardMVVideoAdapter"

    const/4 v2, 0x5

    :try_start_0
    const-string v3, "====delCampaignFromDownLoadCampaignListByUrld"

    .line 6766
    invoke-static {v1, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6767
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d;->y:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v3, :cond_7

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_7

    .line 6768
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d;->y:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v3}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_5

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v4, :cond_0

    .line 6770
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v5

    .line 6771
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_1

    invoke-virtual {p2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 6772
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->y:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2, v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 6773
    invoke-direct {p0, v4}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_0

    .line 6776
    :cond_1
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v5

    .line 6777
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_2

    invoke-virtual {p2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 6778
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->y:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2, v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 6779
    invoke-direct {p0, v4}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_0

    .line 6782
    :cond_2
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v5

    if-eqz v5, :cond_0

    .line 6784
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->f()Ljava/util/List;

    move-result-object v6

    if-eqz v6, :cond_4

    .line 6786
    invoke-interface {v6}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v6

    :cond_3
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_4

    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c$a;

    if-eqz v7, :cond_3

    .line 6787
    iget-object v8, v7, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c$a;->b:Ljava/util/List;

    if-eqz v8, :cond_3

    .line 6788
    iget-object v7, v7, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c$a;->b:Ljava/util/List;

    invoke-interface {v7, p2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_3

    .line 6789
    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/d;->y:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v6, v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 6790
    invoke-direct {p0, v4}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 6796
    :cond_4
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v5

    .line 6797
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_0

    invoke-virtual {p2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 6798
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->y:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2, v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 6799
    invoke-direct {p0, v4}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 6805
    :cond_5
    :goto_0
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->t:Lcom/mbridge/msdk/reward/adapter/b;

    if-eqz p2, :cond_a

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->y:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p2, :cond_a

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->y:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p2

    if-nez p2, :cond_a

    .line 6806
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    if-eqz p2, :cond_6

    .line 6807
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    invoke-virtual {p2, v2}, Landroid/os/Handler;->removeMessages(I)V

    .line 6809
    :cond_6
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6810
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    .line 6811
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->t:Lcom/mbridge/msdk/reward/adapter/b;

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/reward/adapter/b;->a(Ljava/lang/String;)V

    goto :goto_1

    .line 6815
    :cond_7
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->t:Lcom/mbridge/msdk/reward/adapter/b;

    if-eqz p2, :cond_a

    .line 6816
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    if-eqz p2, :cond_8

    .line 6817
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    invoke-virtual {p2, v2}, Landroid/os/Handler;->removeMessages(I)V

    .line 6819
    :cond_8
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6820
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    .line 6821
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->t:Lcom/mbridge/msdk/reward/adapter/b;

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/reward/adapter/b;->a(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    .line 6826
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 6828
    :try_start_1
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->t:Lcom/mbridge/msdk/reward/adapter/b;

    if-eqz p2, :cond_a

    .line 6829
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    if-eqz p2, :cond_9

    .line 6830
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    invoke-virtual {p2, v2}, Landroid/os/Handler;->removeMessages(I)V

    .line 6832
    :cond_9
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6833
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception p0

    .line 6836
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_a
    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Z)V
    .locals 5

    .line 4693
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/lang/String;Ljava/util/List;Ljava/util/List;Z)V

    if-eqz p3, :cond_1

    .line 4694
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 4695
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6807\u8bb0\u7f13\u5b58\u6570\u636e \uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "test_isReay_db"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 4697
    invoke-interface {p3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 4699
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 4700
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/videocommon/a;->b(Ljava/lang/String;)V

    .line 4701
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v2

    invoke-static {v2, v1}, Lcom/mbridge/msdk/videocommon/a;->b(ILcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_0

    :cond_1
    if-eqz p4, :cond_2

    .line 4707
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V

    :cond_2
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Z)V
    .locals 1

    .line 4758
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    if-eqz p2, :cond_0

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p0

    if-lez p0, :cond_0

    .line 4759
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "\u5220\u9664\u5931\u8d25\u7684\u6570\u636e \uff1a "

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "RewardMVVideoAdapter"

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 4760
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p0

    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object p0

    invoke-virtual {p0, p1, p2, p3}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/lang/String;Ljava/util/List;Z)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/util/List;)V
    .locals 9

    const-string v0, "RewardMVVideoAdapter"

    const-string v1, "onload \u5f00\u59cb \u66f4\u65b0\u672c\u673a\u5df2\u5b89\u88c5\u5e7f\u544a\u5217\u8868"

    .line 11812
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 11813
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    if-eqz v1, :cond_4

    if-eqz p1, :cond_4

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_0

    goto/16 :goto_2

    .line 11818
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/l;

    move-result-object v1

    const/4 v2, 0x0

    move v3, v2

    move v4, v3

    .line 11820
    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v5

    if-ge v3, v5, :cond_3

    .line 11821
    invoke-interface {p1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v5, :cond_2

    .line 11824
    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_1

    .line 11826
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->e()Ljava/util/Set;

    move-result-object v6

    if-eqz v6, :cond_2

    .line 11827
    new-instance v4, Lcom/mbridge/msdk/foundation/entity/i;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v4, v6, v5}, Lcom/mbridge/msdk/foundation/entity/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 11828
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->e()Ljava/util/Set;

    move-result-object v5

    invoke-interface {v5, v4}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const/4 v4, 0x1

    goto :goto_1

    :cond_1
    if-eqz v1, :cond_2

    .line 11835
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v6}, Lcom/mbridge/msdk/foundation/db/l;->a(Ljava/lang/String;)Z

    move-result v6

    if-nez v6, :cond_2

    .line 11836
    new-instance v6, Lcom/mbridge/msdk/foundation/entity/h;

    invoke-direct {v6}, Lcom/mbridge/msdk/foundation/entity/h;-><init>()V

    .line 11837
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Lcom/mbridge/msdk/foundation/entity/h;->a(Ljava/lang/String;)V

    .line 11838
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFca()I

    move-result v7

    invoke-virtual {v6, v7}, Lcom/mbridge/msdk/foundation/entity/h;->a(I)V

    .line 11839
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFcb()I

    move-result v5

    invoke-virtual {v6, v5}, Lcom/mbridge/msdk/foundation/entity/h;->b(I)V

    .line 11840
    invoke-virtual {v6, v2}, Lcom/mbridge/msdk/foundation/entity/h;->d(I)V

    .line 11841
    invoke-virtual {v6, v2}, Lcom/mbridge/msdk/foundation/entity/h;->c(I)V

    .line 11842
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    invoke-virtual {v6, v7, v8}, Lcom/mbridge/msdk/foundation/entity/h;->a(J)V

    .line 11843
    invoke-virtual {v1, v6}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/entity/h;)V

    :cond_2
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_3
    if-eqz v4, :cond_5

    const-string p0, "\u66f4\u65b0\u5b89\u88c5\u5217\u8868"

    .line 11850
    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 11851
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/controller/a;->h()V

    goto :goto_3

    :cond_4
    :goto_2
    const-string p0, "onload \u5217\u8868\u4e3a\u7a7a \u4e0d\u505a\u66f4\u65b0\u672c\u673a\u5df2\u5b89\u88c5\u5e7f\u544a\u5217\u8868"

    .line 11814
    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_3
    return-void
.end method

.method private a(Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 2717
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->G:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    if-eqz v0, :cond_0

    .line 2718
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/videocommon/a/a;->b(Ljava/lang/String;)V

    .line 2721
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->G:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    if-eqz v0, :cond_1

    .line 2722
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->G:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getVcn()I

    move-result v1

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/videocommon/a/a;->b(Ljava/lang/String;I)V

    :cond_1
    if-eqz p2, :cond_4

    .line 2724
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_4

    .line 2725
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6700\u65b0\u8fd4\u56de\u7684\u6570\u636eRequestId "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->G:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "HBOPTIMIZE"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2726
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->G:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    if-eqz v0, :cond_2

    const/4 v0, 0x0

    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 2728
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->G:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBidToken()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2730
    :cond_2
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_3
    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_3

    .line 2733
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v1

    .line 2734
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    .line 2735
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    .line 2736
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlct()J

    move-result-wide v4

    .line 2737
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlctb()J

    move-result-wide v6

    .line 2738
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTimestamp()J

    move-result-wide v8

    .line 2733
    invoke-static/range {v1 .. v9}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJJ)V

    goto :goto_0

    :cond_4
    if-eqz p3, :cond_7

    .line 2743
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p2

    if-lez p2, :cond_7

    .line 2744
    invoke-interface {p3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_5
    :goto_1
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result p3

    if-eqz p3, :cond_6

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p3, :cond_5

    .line 2747
    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p3

    invoke-static {v0, p3}, Lcom/mbridge/msdk/foundation/same/a/d;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 2751
    :cond_6
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;)V

    .line 2753
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/db/b;->a()I

    :cond_7
    return-void
.end method

.method private a(Ljava/lang/String;Z)V
    .locals 2

    .line 1386
    new-instance v0, Lcom/mbridge/msdk/reward/adapter/d$d;

    invoke-direct {v0, p0, p1}, Lcom/mbridge/msdk/reward/adapter/d$d;-><init>(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;)V

    .line 1387
    new-instance v1, Ljava/lang/Thread;

    invoke-direct {v1, v0}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v1}, Ljava/lang/Thread;->start()V

    .line 1389
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 1390
    new-instance p2, Lcom/mbridge/msdk/reward/adapter/d$e;

    invoke-direct {p2, p0, p1}, Lcom/mbridge/msdk/reward/adapter/d$e;-><init>(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;)V

    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->v:Lcom/mbridge/msdk/reward/adapter/d$e;

    .line 1391
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    const-wide/32 v0, 0x15f90

    invoke-virtual {p1, p2, v0, v1}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_0

    :cond_0
    const-string v0, "RewardMVVideoAdapter"

    const-string v1, "handler \u4e3a\u7a7a \u76f4\u63a5load"

    .line 1394
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1395
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/reward/adapter/d;->b(Ljava/lang/String;Z)V

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/adapter/d;Z)Z
    .locals 0

    .line 69
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->w:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->r:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 69
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->q:Ljava/lang/String;

    return-object p1
.end method

.method private b(Ljava/lang/String;Z)V
    .locals 16

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    const-string v2, "RewardMVVideoAdapter"

    .line 1517
    :try_start_0
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    if-nez v3, :cond_0

    const-string v0, "Context is null"

    .line 1518
    invoke-direct {v1, v0}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    return-void

    .line 1521
    :cond_0
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    const-string v0, "UnitId is null"

    .line 1522
    invoke-direct {v1, v0}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    return-void

    .line 1525
    :cond_1
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    if-nez v3, :cond_2

    const-string v0, "RewardUnitSetting is null"

    .line 1526
    invoke-direct {v1, v0}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    return-void

    .line 1531
    :cond_2
    invoke-static/range {p1 .. p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 1532
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v3}, Lcom/mbridge/msdk/videocommon/d/c;->b()I

    move-result v3

    mul-int/lit16 v3, v3, 0x3e8

    .line 1533
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    iget-wide v6, v1, Lcom/mbridge/msdk/reward/adapter/d;->J:J

    sub-long/2addr v4, v6

    int-to-long v6, v3

    cmp-long v3, v4, v6

    if-gez v3, :cond_3

    const-string v0, "EXCEPTION_RETURN_EMPTY"

    .line 1534
    invoke-direct {v1, v0}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    return-void

    :cond_3
    const-string v3, "load \u5f00\u59cb\u51c6\u5907\u8bf7\u6c42\u53c2\u6570"

    .line 1539
    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1541
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/reward/adapter/d;->f()Lcom/mbridge/msdk/foundation/same/net/g/d;

    move-result-object v4

    if-nez v4, :cond_4

    const-string v0, "load \u8bf7\u6c42\u53c2\u6570\u4e3a\u7a7a load\u5931\u8d25"

    .line 1543
    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "Load param is null"

    .line 1544
    invoke-direct {v1, v0}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    return-void

    :cond_4
    if-eqz v4, :cond_5

    .line 1548
    invoke-static/range {p1 .. p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    const-string v2, "token"

    .line 1549
    invoke-virtual {v4, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1565
    :cond_5
    iget-boolean v2, v1, Lcom/mbridge/msdk/reward/adapter/d;->A:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    const-string v3, "0"

    const-string v5, "1"

    if-eqz v2, :cond_8

    .line 1566
    :try_start_1
    iget v2, v1, Lcom/mbridge/msdk/reward/adapter/d;->D:I

    sget v6, Lcom/mbridge/msdk/foundation/same/a;->x:I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    const-string v7, "ivrwd"

    if-eq v2, v6, :cond_7

    :try_start_2
    iget v2, v1, Lcom/mbridge/msdk/reward/adapter/d;->D:I

    sget v6, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-ne v2, v6, :cond_6

    goto :goto_0

    .line 1569
    :cond_6
    invoke-virtual {v4, v7, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 1567
    :cond_7
    :goto_0
    invoke-virtual {v4, v7, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1572
    :cond_8
    :goto_1
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v2

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v6

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-boolean v8, v1, Lcom/mbridge/msdk/reward/adapter/d;->A:Z

    invoke-virtual {v2, v6, v7, v8}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v2

    if-eqz v2, :cond_9

    .line 1573
    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/c;->a()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_9

    const-string v6, "u_stid"

    .line 1574
    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/c;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v6, v2}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1576
    :cond_9
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/b;->b()Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object v2

    if-eqz v2, :cond_a

    .line 1577
    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/a;->b()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_a

    const-string v6, "r_stid"

    .line 1578
    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/a;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v6, v2}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    const-string v2, "rw_plus"

    if-eqz p2, :cond_b

    move-object v3, v5

    .line 1580
    :cond_b
    invoke-virtual {v4, v2, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1581
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1582
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_c

    const-string v3, "j"

    .line 1583
    invoke-virtual {v4, v3, v2}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1585
    :cond_c
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, v1, Lcom/mbridge/msdk/reward/adapter/d;->M:J
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    const/4 v5, 0x0

    .line 1588
    :try_start_3
    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    const-string v7, "start load offer from server"

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-boolean v9, v1, Lcom/mbridge/msdk/reward/adapter/d;->B:Z

    const-string v10, ""

    const-string v11, ""

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-wide v12, v1, Lcom/mbridge/msdk/reward/adapter/d;->M:J

    sub-long v12, v2, v12

    invoke-static/range {v5 .. v13}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    .line 1592
    :catch_0
    :try_start_4
    new-instance v2, Lcom/mbridge/msdk/reward/c/b;

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    invoke-direct {v2, v3}, Lcom/mbridge/msdk/reward/c/b;-><init>(Landroid/content/Context;)V

    .line 1593
    new-instance v5, Lcom/mbridge/msdk/reward/adapter/d$2;

    invoke-direct {v5, v1}, Lcom/mbridge/msdk/reward/adapter/d$2;-><init>(Lcom/mbridge/msdk/reward/adapter/d;)V

    .line 1673
    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/reward/c/c;->a(Ljava/lang/String;)V

    .line 1674
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {v5, v3}, Lcom/mbridge/msdk/reward/c/c;->setUnitId(Ljava/lang/String;)V

    .line 1675
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->l:Ljava/lang/String;

    invoke-virtual {v5, v3}, Lcom/mbridge/msdk/reward/c/c;->setPlacementId(Ljava/lang/String;)V

    .line 1676
    iget-boolean v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->A:Z

    if-eqz v3, :cond_d

    const/16 v3, 0x11f

    goto :goto_2

    :cond_d
    const/16 v3, 0x5e

    :goto_2
    invoke-virtual {v5, v3}, Lcom/mbridge/msdk/reward/c/c;->setAdType(I)V

    .line 1678
    sget v3, Lcom/mbridge/msdk/foundation/same/a;->N:I

    .line 1679
    sget v6, Lcom/mbridge/msdk/foundation/same/a;->O:I

    .line 1680
    sget v7, Lcom/mbridge/msdk/foundation/same/a;->M:I

    .line 1681
    sget v8, Lcom/mbridge/msdk/foundation/same/a;->S:I
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    .line 1683
    :try_start_5
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v9

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v10

    invoke-virtual {v10}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/c/b;->g(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v9

    if-eqz v9, :cond_e

    .line 1685
    invoke-virtual {v9}, Lcom/mbridge/msdk/c/a;->x()I

    move-result v3

    .line 1686
    invoke-virtual {v9}, Lcom/mbridge/msdk/c/a;->y()I

    move-result v6

    .line 1687
    invoke-virtual {v9}, Lcom/mbridge/msdk/c/a;->z()I

    move-result v7

    .line 1688
    invoke-virtual {v9}, Lcom/mbridge/msdk/c/a;->A()I

    move-result v8
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1

    :catch_1
    :cond_e
    move v11, v3

    move v12, v6

    move v10, v7

    move v14, v8

    .line 1694
    :try_start_6
    new-instance v7, Lcom/mbridge/msdk/foundation/same/net/b;

    iget v3, v1, Lcom/mbridge/msdk/reward/adapter/d;->o:I

    mul-int/lit16 v13, v3, 0x3e8

    const/4 v15, 0x4

    move-object v9, v7

    invoke-direct/range {v9 .. v15}, Lcom/mbridge/msdk/foundation/same/net/b;-><init>(IIIIII)V

    const/4 v3, 0x1

    move-object/from16 v6, p1

    .line 1695
    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/reward/c/b;->choiceV3OrV5BySetting(ILcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/net/l;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2

    goto :goto_3

    :catch_2
    move-exception v0

    .line 1697
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, "Load exception"

    .line 1698
    invoke-direct {v1, v0}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    .line 1699
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/reward/adapter/d;->i()V

    :goto_3
    return-void
.end method

.method private b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 1

    if-eqz p1, :cond_0

    .line 4037
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlayable_ads_without_video()I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    const/4 p1, 0x1

    return p1

    :catchall_0
    move-exception p1

    .line 4041
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_0

    .line 4042
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/reward/adapter/d;Z)Z
    .locals 0

    .line 69
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->x:Z

    return p1
.end method

.method static synthetic c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->t:Lcom/mbridge/msdk/reward/adapter/b;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 69
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->r:Ljava/lang/String;

    return-object p1
.end method

.method private c(Ljava/lang/String;)V
    .locals 2

    .line 1716
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    if-eqz v0, :cond_2

    .line 1717
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x4

    if-eqz v0, :cond_0

    .line 1718
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    invoke-virtual {p1, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    goto :goto_0

    .line 1720
    :cond_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1721
    iput v1, v0, Landroid/os/Message;->what:I

    .line 1722
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const-string v1, "exception"

    .line 1723
    invoke-virtual {p1, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 1724
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessageAtFrontOfQueue(Landroid/os/Message;)Z

    goto :goto_0

    .line 1726
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_2
    :goto_0
    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->O:Ljava/util/List;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object p0
.end method

.method private e()V
    .locals 5

    .line 1341
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/db/b;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 1343
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    .line 1347
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/a/d;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    if-nez v1, :cond_0

    return-void

    :cond_0
    const/4 v3, 0x1

    const-string v4, ""

    if-ne v1, v3, :cond_1

    const/4 v1, 0x0

    .line 1353
    :try_start_0
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_3

    .line 1354
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/d;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/d;->c()Ljava/lang/String;

    move-result-object v4

    .line 1355
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/d;->b()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 1358
    :cond_1
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 1359
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/d;

    if-eqz v1, :cond_2

    .line 1360
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/d;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 1361
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/d;->c()Ljava/lang/String;

    move-result-object v4

    .line 1362
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/d;->b()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_3
    move-object v0, v4

    .line 1368
    :goto_0
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->c:Ljava/lang/String;

    invoke-virtual {v4, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 1369
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/b;

    move-result-object v1

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/foundation/db/b;->a(Ljava/lang/String;Ljava/lang/String;)I

    .line 1370
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->c:Ljava/lang/String;

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 1371
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 1374
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardMVVideoAdapter"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_1
    return-void
.end method

.method private f()Lcom/mbridge/msdk/foundation/same/net/g/d;
    .locals 14

    .line 1739
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    .line 1740
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1742
    iget-boolean v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->p:Z

    if-eqz v2, :cond_0

    const/4 v2, 0x2

    goto :goto_0

    :cond_0
    const/4 v2, 0x3

    .line 1750
    :goto_0
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    const/4 v4, 0x0

    if-eqz v3, :cond_1

    .line 1751
    invoke-virtual {v3}, Lcom/mbridge/msdk/videocommon/d/c;->t()I

    move-result v4

    .line 1752
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v3}, Lcom/mbridge/msdk/videocommon/d/c;->u()I

    move-result v3

    goto :goto_1

    :cond_1
    move v3, v4

    .line 1759
    :goto_1
    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/d;->r:Ljava/lang/String;

    .line 1760
    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/d;->q:Ljava/lang/String;

    .line 4211
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    const-string v8, "reward"

    .line 1762
    invoke-static {v7, v8}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 1763
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/adapter/d;->k()Ljava/lang/String;

    move-result-object v8

    .line 1765
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/adapter/d;->h()I

    move-result v9

    iput v9, p0, Lcom/mbridge/msdk/reward/adapter/d;->m:I

    .line 1767
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/adapter/d;->j()Ljava/lang/String;

    move-result-object v9

    .line 1769
    iget v10, p0, Lcom/mbridge/msdk/reward/adapter/d;->n:I

    .line 1770
    iget-boolean v11, p0, Lcom/mbridge/msdk/reward/adapter/d;->A:Z

    if-eqz v11, :cond_2

    const/16 v11, 0x11f

    goto :goto_2

    :cond_2
    const/16 v11, 0x5e

    .line 1771
    :goto_2
    new-instance v12, Lcom/mbridge/msdk/foundation/same/net/g/d;

    invoke-direct {v12}, Lcom/mbridge/msdk/foundation/same/net/g/d;-><init>()V

    const-string v13, "app_id"

    .line 1774
    invoke-static {v12, v13, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 1775
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    const-string v13, "unit_id"

    invoke-static {v12, v13, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 1779
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->l:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 1780
    sget-object v0, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v13, p0, Lcom/mbridge/msdk/reward/adapter/d;->l:Ljava/lang/String;

    invoke-static {v12, v0, v13}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    const-string v0, "sign"

    .line 1783
    invoke-static {v12, v0, v1}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 1787
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "req_type"

    invoke-static {v12, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 1788
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "ad_num"

    invoke-static {v12, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 1789
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-boolean v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->A:Z

    if-eqz v2, :cond_4

    const/4 v3, 0x1

    :cond_4
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "tnum"

    invoke-static {v12, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 1790
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "1"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "only_impression"

    invoke-static {v12, v3, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "ping_mode"

    .line 1791
    invoke-static {v12, v0, v2}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "ttc_ids"

    .line 1792
    invoke-static {v12, v0, v6}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 1793
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->b:Ljava/lang/String;

    invoke-static {v12, v0, v7}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 1794
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->c:Ljava/lang/String;

    invoke-static {v12, v0, v5}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "install_ids"

    .line 1795
    invoke-static {v12, v0, v8}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 1796
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "ad_source_id"

    invoke-static {v12, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 1797
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->a:Ljava/lang/String;

    invoke-static {v12, v0, v9}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 1798
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "ad_type"

    invoke-static {v12, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 1799
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->m:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "offset"

    invoke-static {v12, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    return-object v12
.end method

.method static synthetic f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->P:Ljava/util/List;

    return-object p0
.end method

.method private g()V
    .locals 4

    .line 1874
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1876
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 1878
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    .line 1880
    :cond_0
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->W()J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    .line 1881
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {v2, v0, v1, v3}, Lcom/mbridge/msdk/videocommon/a/a;->a(JLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1883
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_1

    .line 1884
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method private h()I
    .locals 3

    const/4 v0, 0x0

    .line 3787
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 3789
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;)I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v0

    .line 3791
    :goto_0
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/c;->v()I

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-le v1, v2, :cond_1

    goto :goto_1

    :cond_1
    move v0, v1

    goto :goto_1

    :catch_0
    move-exception v1

    .line 3797
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_1
    return v0
.end method

.method static synthetic h(Lcom/mbridge/msdk/reward/adapter/d;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->B:Z

    return p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/reward/adapter/d;)J
    .locals 2

    .line 69
    iget-wide v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->M:J

    return-wide v0
.end method

.method private i()V
    .locals 2

    .line 3807
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3808
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 3811
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    return-object p0
.end method

.method private j()Ljava/lang/String;
    .locals 2

    const-string v0, ""

    .line 3824
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/reward/a/a;->a:Ljava/lang/String;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 3825
    sget-object v0, Lcom/mbridge/msdk/reward/a/a;->a:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 3828
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-object v0
.end method

.method static synthetic k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->K:Landroid/os/Handler;

    return-object p0
.end method

.method private k()Ljava/lang/String;
    .locals 5

    const-string v0, ""

    .line 3857
    :try_start_0
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 3858
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->i()Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 3859
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_0

    .line 3860
    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    .line 3861
    invoke-virtual {v1, v3, v4}, Lorg/json/JSONArray;->put(J)Lorg/json/JSONArray;

    goto :goto_0

    .line 3864
    :cond_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-lez v2, :cond_1

    .line 3865
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Lorg/json/JSONArray;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 3868
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-object v0
.end method

.method private l()V
    .locals 2

    .line 3879
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a/d;->a:Ljava/util/Map;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/mbridge/msdk/foundation/same/a/d;->a:Ljava/util/Map;

    .line 3880
    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 3881
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a/d;->a:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 3884
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_0

    .line 3885
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic l(Lcom/mbridge/msdk/reward/adapter/d;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->L:Z

    return p0
.end method

.method static synthetic m(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->y:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object p0
.end method

.method private m()V
    .locals 2

    .line 3896
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/k;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/k;

    move-result-object v0

    .line 3897
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/k;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 3899
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_0

    .line 3900
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic n(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->G:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    return-object p0
.end method

.method static synthetic o(Lcom/mbridge/msdk/reward/adapter/d;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->I:Z

    return p0
.end method

.method static synthetic p(Lcom/mbridge/msdk/reward/adapter/d;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->A:Z

    return p0
.end method

.method static synthetic q(Lcom/mbridge/msdk/reward/adapter/d;)V
    .locals 0

    .line 69
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/adapter/d;->i()V

    return-void
.end method

.method static synthetic r(Lcom/mbridge/msdk/reward/adapter/d;)I
    .locals 0

    .line 69
    iget p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->z:I

    return p0
.end method

.method static synthetic s(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/videocommon/d/c;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    return-object p0
.end method

.method static synthetic t(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic u(Lcom/mbridge/msdk/reward/adapter/d;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->x:Z

    return p0
.end method

.method static synthetic v(Lcom/mbridge/msdk/reward/adapter/d;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->w:Z

    return p0
.end method

.method static synthetic w(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/d$e;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/adapter/d;->v:Lcom/mbridge/msdk/reward/adapter/d$e;

    return-object p0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 211
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 207
    iput p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->z:I

    return-void
.end method

.method public final a(III)V
    .locals 0

    .line 4110
    iput p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->D:I

    .line 4111
    iput p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->E:I

    .line 4112
    iput p3, p0, Lcom/mbridge/msdk/reward/adapter/d;->F:I

    return-void
.end method

.method public final a(IIZ)V
    .locals 6

    .line 1405
    iget-boolean v5, p0, Lcom/mbridge/msdk/reward/adapter/d;->I:Z

    const-string v4, ""

    move-object v0, p0

    move v1, p1

    move v2, p2

    move v3, p3

    invoke-virtual/range {v0 .. v5}, Lcom/mbridge/msdk/reward/adapter/d;->a(IIZLjava/lang/String;Z)V

    return-void
.end method

.method public final a(IIZLjava/lang/String;Z)V
    .locals 0

    .line 1416
    iput p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->n:I

    .line 1417
    iput p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->o:I

    .line 1418
    iput-boolean p3, p0, Lcom/mbridge/msdk/reward/adapter/d;->p:Z

    .line 1419
    iput-boolean p5, p0, Lcom/mbridge/msdk/reward/adapter/d;->I:Z

    .line 1421
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p1, :cond_0

    .line 1422
    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->clear()V

    .line 1425
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->O:Ljava/util/List;

    if-eqz p1, :cond_1

    .line 1426
    invoke-interface {p1}, Ljava/util/List;->clear()V

    :cond_1
    const/4 p1, 0x0

    .line 1429
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->e:Z

    .line 1430
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->f:Z

    .line 1431
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->a:Ljava/lang/Object;

    monitor-enter p2

    .line 1432
    :try_start_0
    iget-boolean p3, p0, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    if-eqz p3, :cond_2

    .line 1433
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    .line 1435
    :cond_2
    monitor-exit p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1436
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 1437
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    .line 1441
    :try_start_1
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    invoke-static {p2}, Lcom/mbridge/msdk/mbjscommon/webEnvCheck/a;->a(Landroid/content/Context;)Z

    move-result p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    if-nez p1, :cond_3

    const-string p1, "WebView is not available"

    .line 1447
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    return-void

    .line 1451
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    if-nez p1, :cond_4

    const-string p1, "Context is null"

    .line 1452
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    return-void

    .line 1455
    :cond_4
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_5

    const-string p1, "UnitId is null"

    .line 1456
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    return-void

    .line 1459
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    if-nez p1, :cond_6

    const-string p1, "RewardUnitSetting is null"

    .line 1460
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    return-void

    .line 1465
    :cond_6
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/adapter/d;->l()V

    .line 1468
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/adapter/d;->m()V

    const-string p1, "RewardMVVideoAdapter"

    const-string p2, "load \u5f00\u59cb\u6e05\u9664\u8fc7\u671f\u6570\u636e"

    .line 1470
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1472
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/adapter/d;->g()V

    .line 1508
    invoke-direct {p0, p4, p5}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/lang/String;Z)V

    return-void

    :catchall_0
    move-exception p1

    .line 1435
    :try_start_2
    monitor-exit p2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw p1
.end method

.method public final a(Lcom/mbridge/msdk/reward/adapter/b;)V
    .locals 2

    const-string v0, "RewardMVVideoAdapter"

    if-eqz p1, :cond_0

    const-string v1, "======set listener is not null"

    .line 1962
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string v1, "======set listener is  null"

    .line 1964
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1966
    :goto_0
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->t:Lcom/mbridge/msdk/reward/adapter/b;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/video/bt/module/b/h;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V
    .locals 3

    const-string v0, "RewardMVVideoAdapter"

    .line 1277
    :try_start_0
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->s:Lcom/mbridge/msdk/video/bt/module/b/h;

    const-string p1, "show \u8fdb\u6765"

    .line 1278
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1279
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    if-eqz p1, :cond_7

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto/16 :goto_1

    :cond_0
    const-string p1, "show isReady true \u6253\u5f00\u64ad\u653e\u5668\u9875\u9762"

    .line 1286
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1287
    new-instance p1, Landroid/content/Intent;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    const-class v2, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;

    invoke-direct {p1, v1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x10000000

    .line 1288
    invoke-virtual {p1, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 1289
    sget-object v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_UNITID:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {p1, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 1290
    sget-object v1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->l:Ljava/lang/String;

    invoke-virtual {p1, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 1291
    sget-object v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_REWARD:Ljava/lang/String;

    invoke-virtual {p1, v1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 1292
    sget-object p2, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_MUTE:Ljava/lang/String;

    invoke-virtual {p1, p2, p4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1293
    sget-object p2, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_ISIV:Ljava/lang/String;

    iget-boolean p4, p0, Lcom/mbridge/msdk/reward/adapter/d;->A:Z

    invoke-virtual {p1, p2, p4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 1294
    sget-object p2, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_ISBID:Ljava/lang/String;

    iget-boolean p4, p0, Lcom/mbridge/msdk/reward/adapter/d;->B:Z

    invoke-virtual {p1, p2, p4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 1295
    sget-object p2, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_EXTRADATA:Ljava/lang/String;

    invoke-virtual {p1, p2, p5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 1297
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object p2

    iget-object p4, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {p2, p4}, Lcom/mbridge/msdk/videocommon/download/b;->a(Ljava/lang/String;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p2

    const-string p4, "HBOPTIMIZE"

    .line 1298
    new-instance p5, Ljava/lang/StringBuilder;

    invoke-direct {p5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f53\u524d\u5c55\u793a\u7684Offer requestId"

    invoke-virtual {p5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    invoke-interface {p2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p5

    invoke-static {p4, p5}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p2, :cond_3

    .line 1299
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p4

    if-lez p4, :cond_3

    .line 1300
    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string p5, "\u53ef\u4ee5 show \u7684\u6570\u636e\uff1a "

    invoke-virtual {p4, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p5

    invoke-virtual {p4, p5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-static {v0, p4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1301
    invoke-interface {p2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p2, :cond_1

    .line 1303
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p4

    iput-object p4, p0, Lcom/mbridge/msdk/reward/adapter/d;->c:Ljava/lang/String;

    :cond_1
    if-eqz p2, :cond_2

    .line 1305
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_2

    const/4 p2, 0x1

    move v1, p2

    .line 1308
    :cond_2
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/adapter/d;->e()V

    goto :goto_0

    :cond_3
    const-string p2, "\u53ef\u4ee5 show \u7684\u6570\u636e\uff1a 0"

    .line 1310
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1311
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->s:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz p2, :cond_4

    .line 1312
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->s:Lcom/mbridge/msdk/video/bt/module/b/h;

    const-string p2, "load failed"

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(Ljava/lang/String;)V

    return-void

    .line 1317
    :cond_4
    :goto_0
    sget-object p2, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_ISBIG_OFFER:Ljava/lang/String;

    invoke-virtual {p1, p2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 1318
    iget-boolean p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->A:Z

    if-eqz p2, :cond_5

    .line 1319
    sget-object p2, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_IVREWARD_MODETYPE:Ljava/lang/String;

    iget p4, p0, Lcom/mbridge/msdk/reward/adapter/d;->D:I

    invoke-virtual {p1, p2, p4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1320
    sget-object p2, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_IVREWARD_VALUETYPE:Ljava/lang/String;

    iget p4, p0, Lcom/mbridge/msdk/reward/adapter/d;->E:I

    invoke-virtual {p1, p2, p4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1321
    sget-object p2, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_IVREWARD_VALUE:Ljava/lang/String;

    iget p4, p0, Lcom/mbridge/msdk/reward/adapter/d;->F:I

    invoke-virtual {p1, p2, p4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1324
    :cond_5
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_6

    .line 1325
    sget-object p2, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_USERID:Ljava/lang/String;

    invoke-virtual {p1, p2, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 1327
    :cond_6
    invoke-static {}, Lcom/mbridge/msdk/reward/adapter/RewardUnitCacheManager;->getInstance()Lcom/mbridge/msdk/reward/adapter/RewardUnitCacheManager;

    move-result-object p2

    iget-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d;->l:Ljava/lang/String;

    iget-object p4, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-object p5, p0, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {p2, p3, p4, p5}, Lcom/mbridge/msdk/reward/adapter/RewardUnitCacheManager;->add(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/d/c;)V

    .line 1328
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->j:Landroid/content/Context;

    invoke-virtual {p2, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    goto :goto_2

    .line 1280
    :cond_7
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->s:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz p1, :cond_8

    .line 1281
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->s:Lcom/mbridge/msdk/video/bt/module/b/h;

    const-string p2, "context or unitid is null"

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(Ljava/lang/String;)V

    :cond_8
    const-string p1, "show context munitid null"

    .line 1283
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 1331
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 1332
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d;->s:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz p2, :cond_9

    .line 1333
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "show failed, exception is "

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(Ljava/lang/String;)V

    :cond_9
    :goto_2
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/videocommon/d/c;)V
    .locals 2

    .line 1100
    :try_start_0
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz p1, :cond_0

    .line 1107
    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/c;->J()I

    move-result p1

    mul-int/lit16 p1, p1, 0x3e8

    sget v0, Lcom/mbridge/msdk/foundation/same/a;->v:I

    if-eq p1, v0, :cond_0

    .line 1108
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/c;->J()I

    move-result p1

    mul-int/lit16 p1, p1, 0x3e8

    sput p1, Lcom/mbridge/msdk/foundation/same/a;->v:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1111
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardMVVideoAdapter"

    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 193
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->C:Ljava/lang/String;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 4064
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->P:Ljava/util/List;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 185
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->A:Z

    return-void
.end method

.method public final a(Ljava/util/List;ZI)Z
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;ZI)Z"
        }
    .end annotation

    const/4 v0, 0x0

    .line 1124
    invoke-virtual {p0, p1, p2, p3, v0}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;ZIZ)Z

    move-result p1

    return p1
.end method

.method public final a(Ljava/util/List;ZIZ)Z
    .locals 13
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;ZIZ)Z"
        }
    .end annotation

    move-object v0, p0

    move-object v8, p1

    const/4 v10, 0x0

    const-string v11, "RewardVideoController"

    if-eqz v8, :cond_7

    .line 1128
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_7

    .line 1129
    invoke-interface {p1, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    move-object v12, v1

    check-cast v12, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1131
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v1

    const/16 v2, 0x5e

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-boolean v4, v0, Lcom/mbridge/msdk/reward/adapter/d;->B:Z

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v5

    move v6, p2

    move/from16 v7, p3

    move-object v8, p1

    move/from16 v9, p4

    invoke-virtual/range {v1 .. v9}, Lcom/mbridge/msdk/videocommon/download/b;->a(ILjava/lang/String;ZIZILjava/util/List;Z)Z

    move-result v1

    if-eqz v1, :cond_8

    const-string v1, "RewardMVVideoAdapter"

    const-string v2, "_"

    const/4 v3, 0x1

    if-eqz p2, :cond_3

    .line 1134
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v4

    if-eqz v4, :cond_0

    return v3

    .line 1138
    :cond_0
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v4

    if-eqz v4, :cond_2

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v4

    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v4

    if-lez v4, :cond_2

    .line 1139
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v4

    const/4 v5, 0x3

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    const-string v2, "Is not check big template download status"

    .line 1141
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v3

    .line 1145
    :cond_1
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 1146
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v4

    const/4 v5, 0x2

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    const-string v2, "Is not check big template ENDCARD download status"

    .line 1147
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v3

    .line 1153
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v1

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->checkPreLoadState(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_8

    const-string v1, "\u5927\u6a21\u677f\u4e1a\u52a1\uff0c\u5f00\u59cb\u68c0\u67e5\u5927\u6a21\u677f\u9884\u52a0\u8f7d\u60c5\u51b5\uff0c\u5927\u6a21\u677f\u9884\u52a0\u8f7d\u6210\u529f"

    .line 1154
    invoke-static {v11, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return v3

    :cond_3
    if-eqz v12, :cond_4

    .line 1158
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v4

    if-eqz v4, :cond_4

    return v3

    .line 1162
    :cond_4
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v4

    if-eqz v4, :cond_5

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v4

    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v4

    if-lez v4, :cond_5

    .line 1163
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v4

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_5

    const-string v2, "Is not check template download status"

    .line 1164
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v3

    .line 1169
    :cond_5
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v1

    if-eqz v1, :cond_6

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_6

    .line 1170
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v1

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->checkPreLoadState(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_8

    const-string v1, "\u975e\u5927\u6a21\u677f\u4e1a\u52a1\uff0c\u5b58\u5728\u64ad\u653e\u6a21\u677f\uff0c\u64ad\u653e\u6a21\u677f\u9884\u52a0\u8f7d\u6210\u529f"

    .line 1171
    invoke-static {v11, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return v3

    :cond_6
    const-string v1, "\u975e\u5927\u6a21\u677f \u6ca1\u6709 template"

    .line 1175
    invoke-static {v11, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return v3

    :cond_7
    const-string v1, "\u6570\u636e\u4e3a\u7a7a"

    .line 1181
    invoke-static {v11, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    return v10
.end method

.method public final b(Ljava/lang/String;)V
    .locals 5

    .line 4125
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v0, :cond_0

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 4126
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->u:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->c()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    .line 4127
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->P:Ljava/util/List;

    if-eqz v1, :cond_0

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 4128
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->P:Ljava/util/List;

    const/4 v2, 0x0

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTimestamp()J

    move-result-wide v1

    .line 4129
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    sub-long/2addr v3, v1

    int-to-long v0, v0

    cmp-long v0, v3, v0

    if-gez v0, :cond_0

    const-string p1, "hit ltorwc"

    .line 4130
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Ljava/lang/String;)V

    return-void

    .line 4135
    :cond_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->I:Z

    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/reward/adapter/d;->b(Ljava/lang/String;Z)V

    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 189
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->B:Z

    return-void
.end method

.method public final b()Z
    .locals 8

    .line 1191
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-boolean v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->B:Z

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d;->C:Ljava/lang/String;

    const/4 v4, 0x1

    invoke-virtual {v0, v1, v4, v2, v3}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;IZLjava/lang/String;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 1193
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_1

    .line 1194
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1195
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v3

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-boolean v6, p0, Lcom/mbridge/msdk/reward/adapter/d;->B:Z

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/d;->C:Ljava/lang/String;

    invoke-virtual {v3, v5, v4, v6, v7}, Lcom/mbridge/msdk/videocommon/a/a;->b(Ljava/lang/String;IZLjava/lang/String;)I

    move-result v3

    .line 1197
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_0

    .line 1198
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNscpt()I

    move-result v5

    if-ne v5, v4, :cond_0

    .line 1199
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v5

    if-ge v5, v3, :cond_0

    return v1

    .line 1204
    :cond_0
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    xor-int/2addr v1, v4

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNscpt()I

    move-result v2

    invoke-virtual {p0, v0, v1, v2}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;ZI)Z

    move-result v0

    return v0

    :cond_1
    const-string v0, "RewardVideoController"

    const-string v2, "\u6570\u636e\u5e93\u53ef\u7528\u7684\u7f13\u5b58\u6570\u636e\u6761\u6570\uff1a0"

    .line 1206
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return v1
.end method

.method public final c(Z)Ljava/lang/String;
    .locals 1

    if-eqz p1, :cond_1

    .line 216
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->c:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 217
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/videocommon/download/b;->a(Ljava/lang/String;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 218
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x0

    .line 219
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_0

    .line 221
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->c:Ljava/lang/String;

    .line 225
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->c:Ljava/lang/String;

    return-object p1

    .line 227
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->b:Ljava/lang/String;

    return-object p1
.end method

.method public final c()Z
    .locals 8

    const-string v0, "test_isReay_db"

    const-string v1, "isRisSpareOfferReady check"

    .line 1215
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1216
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/mbridge/msdk/reward/adapter/d;->B:Z

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/d;->C:Ljava/lang/String;

    const/4 v5, 0x1

    invoke-virtual {v1, v2, v5, v3, v4}, Lcom/mbridge/msdk/videocommon/a/a;->c(Ljava/lang/String;IZLjava/lang/String;)Ljava/util/List;

    move-result-object v1

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    .line 1218
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_1

    .line 1219
    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1220
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-boolean v6, p0, Lcom/mbridge/msdk/reward/adapter/d;->B:Z

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/d;->C:Ljava/lang/String;

    invoke-virtual {v3, v4, v5, v6, v7}, Lcom/mbridge/msdk/videocommon/a/a;->b(Ljava/lang/String;IZLjava/lang/String;)I

    move-result v3

    .line 1222
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 1223
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNscpt()I

    move-result v4

    if-ne v4, v5, :cond_0

    .line 1224
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v4

    if-ge v4, v3, :cond_0

    return v2

    .line 1229
    :cond_0
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    xor-int/2addr v2, v5

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNscpt()I

    move-result v0

    invoke-virtual {p0, v1, v2, v0}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;ZI)Z

    move-result v0

    return v0

    :cond_1
    const-string v1, "\u6570\u636e\u5e93\u53ef\u7528\u7684\u7f13\u5b58\u6570\u636e\u6761\u6570\uff1a0"

    .line 1231
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return v2
.end method

.method public final d()Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    .line 4068
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object v0
.end method

.method public final d(Z)V
    .locals 0

    .line 1401
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->L:Z

    return-void
.end method

.method public final e(Z)V
    .locals 2

    if-eqz p1, :cond_0

    goto :goto_0

    .line 2624
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p1

    if-lez p1, :cond_1

    .line 2625
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;Ljava/util/List;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final f(Z)V
    .locals 7

    const-string v0, "load_timeout"

    const-string v1, "_"

    const/4 v2, 0x0

    if-eqz p1, :cond_2

    .line 2632
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->P:Ljava/util/List;

    if-eqz p1, :cond_5

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_5

    .line 2633
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->P:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v3, :cond_0

    .line 2635
    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLoadTimeoutState(I)V

    .line 2636
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v4

    if-eqz v4, :cond_0

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 2637
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3, v2}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    goto :goto_0

    .line 2641
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d;->P:Ljava/util/List;

    invoke-virtual {p1, v1, v3, v0, v2}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;Ljava/util/List;Ljava/lang/String;I)V

    goto :goto_2

    .line 2644
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p1, :cond_5

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p1

    if-lez p1, :cond_5

    .line 2646
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_3
    :goto_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v3, :cond_3

    .line 2648
    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLoadTimeoutState(I)V

    .line 2649
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v4

    if-eqz v4, :cond_3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    .line 2650
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3, v2}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    goto :goto_1

    .line 2654
    :cond_4
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p1, v1, v3, v0, v2}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;Ljava/util/List;Ljava/lang/String;I)V

    :cond_5
    :goto_2
    return-void
.end method

.method public final g(Z)Z
    .locals 7

    const-string v0, "load_timeout"

    const-string v1, "_"

    const/4 v2, 0x1

    if-eqz p1, :cond_2

    .line 2661
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->P:Ljava/util/List;

    if-eqz p1, :cond_5

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_5

    .line 2663
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->P:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v3, :cond_0

    .line 2665
    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLoadTimeoutState(I)V

    .line 2666
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v4

    if-eqz v4, :cond_0

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 2667
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3, v2}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    goto :goto_0

    .line 2671
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d;->P:Ljava/util/List;

    invoke-virtual {p1, v1, v3, v0, v2}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;Ljava/util/List;Ljava/lang/String;I)V

    return v2

    .line 2675
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p1, :cond_5

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p1

    if-lez p1, :cond_5

    .line 2677
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_3
    :goto_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v3, :cond_3

    .line 2679
    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLoadTimeoutState(I)V

    .line 2680
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v4

    if-eqz v4, :cond_3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    .line 2681
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3, v2}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    goto :goto_1

    .line 2685
    :cond_4
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d;->k:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d;->H:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p1, v1, v3, v0, v2}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;Ljava/util/List;Ljava/lang/String;I)V

    return v2

    :cond_5
    const/4 p1, 0x0

    return p1
.end method
