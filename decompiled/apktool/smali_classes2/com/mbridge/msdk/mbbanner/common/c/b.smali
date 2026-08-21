.class public Lcom/mbridge/msdk/mbbanner/common/c/b;
.super Ljava/lang/Object;
.source "BannerLoader.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/mbbanner/common/c/b$a;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Landroid/content/Context;

.field private c:I

.field private d:Lcom/mbridge/msdk/mbbanner/common/a/c;

.field private e:Lcom/mbridge/msdk/mbbanner/common/util/a;

.field private f:Lcom/mbridge/msdk/mbbanner/common/b/b;

.field private g:Lcom/mbridge/msdk/mbbanner/common/b/d;

.field private volatile h:Z

.field private i:Ljava/util/Timer;

.field private volatile j:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private volatile k:Z

.field private volatile l:Z

.field private volatile m:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 47
    const-class v0, Lcom/mbridge/msdk/mbbanner/common/c/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/mbridge/msdk/mbbanner/common/a/c;Lcom/mbridge/msdk/mbbanner/common/b/b;Lcom/mbridge/msdk/mbbanner/common/util/a;)V
    .locals 2

    .line 67
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 50
    iput v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->c:I

    .line 56
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->h:Z

    .line 57
    new-instance v1, Ljava/util/Timer;

    invoke-direct {v1}, Ljava/util/Timer;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->i:Ljava/util/Timer;

    .line 59
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->j:Ljava/util/List;

    .line 60
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->k:Z

    .line 61
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->l:Z

    .line 63
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->m:Z

    .line 68
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->b:Landroid/content/Context;

    .line 69
    iput-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->d:Lcom/mbridge/msdk/mbbanner/common/a/c;

    .line 70
    iput-object p3, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->f:Lcom/mbridge/msdk/mbbanner/common/b/b;

    .line 71
    iput-object p4, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->e:Lcom/mbridge/msdk/mbbanner/common/util/a;

    return-void
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 46
    sget-object v0, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    return-object v0
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    .line 389
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_5

    const/4 v0, 0x0

    .line 392
    :try_start_0
    sget-object v2, Lcom/mbridge/msdk/foundation/same/b/c;->g:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v2

    .line 393
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 394
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 395
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v3

    :cond_0
    const-string v4, ".html"

    invoke-virtual {v3, v4}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 396
    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 397
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v2}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    .line 398
    new-instance v2, Ljava/io/FileOutputStream;

    invoke-direct {v2, v4}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 399
    :try_start_1
    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/io/FileOutputStream;->write([B)V

    .line 400
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->flush()V

    .line 401
    invoke-virtual {v4}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 407
    :try_start_2
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 410
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    move-object v1, v0

    goto :goto_2

    :catchall_0
    move-exception p1

    move-object v0, v2

    goto :goto_4

    :catch_1
    move-exception v0

    move-object v5, v2

    move-object v2, v0

    move-object v0, v5

    goto :goto_1

    :catchall_1
    move-exception p1

    goto :goto_4

    :catch_2
    move-exception v2

    .line 403
    :goto_1
    :try_start_3
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v0, :cond_1

    .line 407
    :try_start_4
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    goto :goto_2

    :catch_3
    move-exception v0

    .line 410
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 414
    :cond_1
    :goto_2
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 415
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v2

    const/4 v3, 0x2

    if-eqz v2, :cond_3

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-virtual {v0}, Ljava/io/File;->canRead()Z

    move-result v0

    if-nez v0, :cond_2

    goto :goto_3

    :cond_2
    const/4 v0, 0x1

    .line 419
    invoke-virtual {p0, p1, v3, p2, v0}, Lcom/mbridge/msdk/mbbanner/common/c/b;->a(Ljava/lang/String;ILjava/lang/String;Z)V

    goto :goto_6

    :cond_3
    :goto_3
    const/4 v0, 0x0

    .line 416
    invoke-virtual {p0, p1, v3, p2, v0}, Lcom/mbridge/msdk/mbbanner/common/c/b;->a(Ljava/lang/String;ILjava/lang/String;Z)V

    goto :goto_6

    :goto_4
    if-eqz v0, :cond_4

    .line 407
    :try_start_5
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_4

    goto :goto_5

    :catch_4
    move-exception p2

    .line 410
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V

    .line 412
    :cond_4
    :goto_5
    throw p1

    :cond_5
    :goto_6
    return-object v1
.end method

.method private a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/foundation/entity/CampaignUnit;",
            ")",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    .line 294
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-eqz p2, :cond_8

    .line 297
    :try_start_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v1

    if-eqz v1, :cond_8

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-lez v1, :cond_8

    .line 299
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object p2

    .line 300
    sget-object v1, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getNeedShowList \u603b\u5171\u8fd4\u56de\u7684campaign\u6709\uff1a"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/util/ArrayList;->size()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 301
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/util/List;)V

    const/4 v1, 0x0

    .line 303
    :goto_0
    invoke-virtual {p2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_7

    .line 304
    invoke-virtual {p2, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v2, :cond_6

    .line 305
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOfferType()I

    move-result v3

    const/16 v4, 0x63

    if-eq v3, v4, :cond_6

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerUrl()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerHtml()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_6

    .line 306
    :cond_0
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v3

    const/4 v4, 0x1

    if-eqz v3, :cond_2

    .line 307
    iget-object v3, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->b:Landroid/content/Context;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    move v3, v4

    goto :goto_1

    :cond_1
    const/4 v3, 0x2

    :goto_1
    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRtinsType(I)V

    .line 309
    :cond_2
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getWtick()I

    move-result v3

    if-eq v3, v4, :cond_5

    iget-object v3, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->b:Landroid/content/Context;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_3

    goto :goto_2

    .line 314
    :cond_3
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v3

    if-eqz v3, :cond_4

    .line 315
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 317
    :cond_4
    sget v3, Lcom/mbridge/msdk/foundation/same/a;->E:I

    invoke-static {p1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_3

    .line 311
    :cond_5
    :goto_2
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_6
    :goto_3
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 323
    :cond_7
    sget-object p1, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "getNeedShowList \u8fd4\u56de\u6709\u4ee5\u4e0b\u5e26\u6709\u89c6\u9891\u7d20\u6750\u7684campaign\uff1a"

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 324
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    .line 323
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_4

    :catch_0
    move-exception p1

    .line 327
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_8
    :goto_4
    return-object v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbbanner/common/c/b;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
    .locals 6

    if-nez p2, :cond_0

    .line 2216
    iget-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->e:Lcom/mbridge/msdk/mbbanner/common/util/a;

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->f:Lcom/mbridge/msdk/mbbanner/common/b/b;

    const-string v1, "campaignUnit is NULL!"

    invoke-virtual {p2, v0, v1, p1}, Lcom/mbridge/msdk/mbbanner/common/util/a;->a(Lcom/mbridge/msdk/mbbanner/common/b/b;Ljava/lang/String;Ljava/lang/String;)V

    .line 2217
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->g:Lcom/mbridge/msdk/mbbanner/common/b/d;

    invoke-interface {p0, p1}, Lcom/mbridge/msdk/mbbanner/common/b/d;->a(Ljava/lang/String;)V

    goto/16 :goto_4

    .line 2222
    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbbanner/common/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)Ljava/util/List;

    move-result-object v0

    .line 2447
    new-instance v1, Ljava/lang/Thread;

    new-instance v2, Lcom/mbridge/msdk/mbbanner/common/c/b$3;

    invoke-direct {v2, p0, p2}, Lcom/mbridge/msdk/mbbanner/common/c/b$3;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/b;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V

    invoke-direct {v1, v2}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 2472
    invoke-virtual {v1}, Ljava/lang/Thread;->start()V

    if-eqz v0, :cond_9

    .line 2225
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_1

    goto/16 :goto_3

    .line 2232
    :cond_1
    sget-object v1, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    const-string v2, "\u5728\u5b50\u7ebf\u7a0b\u5904\u7406\u4e1a\u52a1\u903b\u8f91 \u5f00\u59cb"

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const v1, 0xea60

    .line 3134
    new-instance v2, Lcom/mbridge/msdk/mbbanner/common/c/b$1;

    invoke-direct {v2, p0, p1}, Lcom/mbridge/msdk/mbbanner/common/c/b$1;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/b;Ljava/lang/String;)V

    .line 3143
    iget-object v3, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->i:Ljava/util/Timer;

    int-to-long v4, v1

    invoke-virtual {v3, v2, v4, v5}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;J)V

    .line 2238
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getSessionId()Ljava/lang/String;

    move-result-object p2

    .line 3487
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->d:Lcom/mbridge/msdk/mbbanner/common/a/c;

    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/mbbanner/common/a/c;->a(Ljava/lang/String;)V

    .line 3517
    iget p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->c:I

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 3519
    :try_start_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_2

    .line 3520
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    add-int/2addr p2, v2

    .line 3523
    :cond_2
    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->d:Lcom/mbridge/msdk/mbbanner/common/a/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/mbbanner/common/a/c;->c()I

    move-result v2

    if-le p2, v2, :cond_3

    .line 3524
    sget-object p2, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    const-string v2, "saveNextOffset \u91cd\u7f6eoffset\u4e3a0"

    invoke-static {p2, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    move p2, v1

    .line 3527
    :cond_3
    sget-object v2, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "saveNextOffset \u7b97\u51fa \u4e0b\u6b21\u7684offset\u662f:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 3529
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 3530
    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->d:Lcom/mbridge/msdk/mbbanner/common/a/c;

    invoke-virtual {v2, p2}, Lcom/mbridge/msdk/mbbanner/common/a/c;->a(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 3533
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V

    .line 2244
    :cond_4
    :goto_0
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 2246
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    .line 2247
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x1

    if-nez v3, :cond_6

    .line 4432
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_5

    .line 4433
    new-instance v3, Lcom/mbridge/msdk/mbbanner/common/b/f;

    invoke-direct {v3, p0, p1}, Lcom/mbridge/msdk/mbbanner/common/b/f;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/b;Ljava/lang/String;)V

    .line 4434
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v5

    invoke-virtual {v5, v2, v3}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->download(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;)V

    :cond_5
    if-eqz v0, :cond_8

    .line 2251
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_8

    .line 2252
    :goto_1
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_8

    .line 2253
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerUrl()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBannerUrl(Ljava/lang/String;)V

    .line 2254
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHasMBTplMark(Z)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 2258
    :cond_6
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBannerHtml()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p2

    .line 2259
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_7

    .line 2260
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbbanner/common/c/b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    if-eqz v0, :cond_8

    .line 2263
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_8

    .line 2264
    :goto_2
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-ge v1, v3, :cond_8

    .line 2265
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBannerHtml(Ljava/lang/String;)V

    .line 2266
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const-string v4, "<MBTPLMARK>"

    invoke-virtual {p2, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHasMBTplMark(Z)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    .line 2270
    :cond_7
    iput-boolean v4, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->l:Z

    .line 2271
    iput-boolean v4, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->k:Z

    .line 2281
    :cond_8
    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/mbbanner/common/c/b;->a(Ljava/lang/String;Ljava/util/List;)V

    goto :goto_4

    .line 2226
    :cond_9
    :goto_3
    sget-object p2, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    const-string v0, "tryDownloadOnLoadSuccess \u8fd4\u56de\u7684campaign \u6ca1\u6709\u7b26\u5408\u4e0b\u8f7d\u89c4\u5219\u7684"

    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 2227
    iget-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->e:Lcom/mbridge/msdk/mbbanner/common/util/a;

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->f:Lcom/mbridge/msdk/mbbanner/common/b/b;

    const-string v1, "APP ALREADY INSTALLED"

    invoke-virtual {p2, v0, v1, p1}, Lcom/mbridge/msdk/mbbanner/common/util/a;->a(Lcom/mbridge/msdk/mbbanner/common/b/b;Ljava/lang/String;Ljava/lang/String;)V

    .line 2228
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->g:Lcom/mbridge/msdk/mbbanner/common/b/d;

    invoke-interface {p0, p1}, Lcom/mbridge/msdk/mbbanner/common/b/d;->a(Ljava/lang/String;)V

    :goto_4
    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 2

    .line 75
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->m:Z

    if-nez v0, :cond_1

    .line 80
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->k:Z

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->l:Z

    if-eqz v0, :cond_1

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->j:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_1

    .line 81
    sget-object v0, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    const-string v1, "\u5728\u5b50\u7ebf\u7a0b\u5904\u7406\u4e1a\u52a1\u903b\u8f91 \u5b8c\u6210"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 82
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->h:Z

    .line 83
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->m:Z

    .line 85
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->i:Ljava/util/Timer;

    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    .line 86
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->e:Lcom/mbridge/msdk/mbbanner/common/util/a;

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->f:Lcom/mbridge/msdk/mbbanner/common/b/b;

    invoke-virtual {v0, v1, p1}, Lcom/mbridge/msdk/mbbanner/common/util/a;->a(Lcom/mbridge/msdk/mbbanner/common/b/b;Ljava/lang/String;)V

    .line 87
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->g:Lcom/mbridge/msdk/mbbanner/common/b/d;

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/mbbanner/common/b/d;->a(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method private a(Ljava/lang/String;Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    if-eqz p2, :cond_1

    .line 338
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 339
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_0
    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 340
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 342
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->j:Ljava/util/List;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 343
    new-instance v1, Lcom/mbridge/msdk/mbbanner/common/c/b$a;

    invoke-direct {v1, p0, p1}, Lcom/mbridge/msdk/mbbanner/common/c/b$a;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/b;Ljava/lang/String;)V

    .line 345
    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->b:Landroid/content/Context;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v2

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0, v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbbanner/common/c/b;)Z
    .locals 0

    .line 46
    iget-boolean p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->h:Z

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbbanner/common/c/b;Z)Z
    .locals 0

    .line 46
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->h:Z

    return p1
.end method

.method private b(Ljava/lang/String;)I
    .locals 2

    const/4 p1, 0x0

    .line 497
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->d:Lcom/mbridge/msdk/mbbanner/common/a/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbbanner/common/a/c;->b()I

    move-result v0

    .line 499
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->d:Lcom/mbridge/msdk/mbbanner/common/a/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbbanner/common/a/c;->c()I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-le v0, v1, :cond_0

    goto :goto_0

    :cond_0
    move p1, v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 505
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbbanner/common/c/b;)Lcom/mbridge/msdk/mbbanner/common/b/b;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->f:Lcom/mbridge/msdk/mbbanner/common/b/b;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbbanner/common/c/b;)Lcom/mbridge/msdk/mbbanner/common/util/a;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->e:Lcom/mbridge/msdk/mbbanner/common/util/a;

    return-object p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/mbbanner/common/c/b;)Lcom/mbridge/msdk/mbbanner/common/b/d;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->g:Lcom/mbridge/msdk/mbbanner/common/b/d;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/mbbanner/common/c/b;)Landroid/content/Context;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->b:Landroid/content/Context;

    return-object p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;ILjava/lang/String;Z)V
    .locals 1

    const/4 v0, 0x1

    if-nez p4, :cond_1

    const/4 p3, -0x1

    if-ne p2, p3, :cond_0

    .line 104
    sget-object p2, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, " unitId ="

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p4, " --> time out!"

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p2, p3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 106
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->i:Ljava/util/Timer;

    invoke-virtual {p2}, Ljava/util/Timer;->cancel()V

    .line 1093
    sget-object p2, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    const-string p3, "\u5728\u5b50\u7ebf\u7a0b\u5904\u7406\u4e1a\u52a1\u903b\u8f91 \u5b8c\u6210"

    invoke-static {p2, p3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1094
    sget-object p2, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    const-string p3, "downloadResource--> Fail"

    invoke-static {p2, p3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1095
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->h:Z

    .line 1096
    iget-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->e:Lcom/mbridge/msdk/mbbanner/common/util/a;

    iget-object p3, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->f:Lcom/mbridge/msdk/mbbanner/common/b/b;

    invoke-virtual {p2, p3, p1}, Lcom/mbridge/msdk/mbbanner/common/util/a;->b(Lcom/mbridge/msdk/mbbanner/common/b/b;Ljava/lang/String;)V

    .line 1097
    iget-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->g:Lcom/mbridge/msdk/mbbanner/common/b/d;

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/mbbanner/common/b/d;->a(Ljava/lang/String;)V

    return-void

    :cond_1
    if-ne p2, v0, :cond_3

    .line 112
    sget-object p2, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    const-string p4, "downloadResource--> Success Image"

    invoke-static {p2, p4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 113
    monitor-enter p0

    .line 114
    :try_start_0
    iget-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->j:Ljava/util/List;

    invoke-interface {p2, p3}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 115
    iget-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->j:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p2

    if-nez p2, :cond_2

    .line 116
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbbanner/common/c/b;->a(Ljava/lang/String;)V

    .line 118
    :cond_2
    monitor-exit p0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_3
    const/4 p3, 0x2

    if-ne p2, p3, :cond_4

    .line 121
    sget-object p2, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    const-string p3, "downloadResource--> Success banner_html"

    invoke-static {p2, p3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 122
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->l:Z

    .line 123
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbbanner/common/c/b;->a(Ljava/lang/String;)V

    goto :goto_0

    :cond_4
    const/4 p3, 0x3

    if-ne p2, p3, :cond_5

    .line 126
    sget-object p2, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    const-string p3, "downloadResource--> Success banner_url"

    invoke-static {p2, p3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 127
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->k:Z

    .line 128
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbbanner/common/c/b;->a(Ljava/lang/String;)V

    :cond_5
    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/mbbanner/common/a/b;Lcom/mbridge/msdk/mbbanner/common/b/d;)V
    .locals 7

    .line 149
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/mbbanner/common/c/b;->a:Ljava/lang/String;

    const-string v1, "requestCampaign--> started"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 150
    iput-object p4, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->g:Lcom/mbridge/msdk/mbbanner/common/b/d;

    .line 152
    new-instance p4, Lcom/mbridge/msdk/mbbanner/common/c/b$2;

    invoke-direct {p4, p0}, Lcom/mbridge/msdk/mbbanner/common/c/b$2;-><init>(Lcom/mbridge/msdk/mbbanner/common/c/b;)V

    .line 177
    invoke-virtual {p4, p2}, Lcom/mbridge/msdk/mbbanner/common/f/a;->setUnitId(Ljava/lang/String;)V

    .line 178
    invoke-virtual {p4, p1}, Lcom/mbridge/msdk/mbbanner/common/f/a;->setPlacementId(Ljava/lang/String;)V

    const/16 p1, 0x128

    .line 179
    invoke-virtual {p4, p1}, Lcom/mbridge/msdk/mbbanner/common/f/a;->setAdType(I)V

    .line 181
    new-instance p1, Lcom/mbridge/msdk/mbbanner/common/e/a;

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->b:Landroid/content/Context;

    invoke-direct {p1, v0}, Lcom/mbridge/msdk/mbbanner/common/e/a;-><init>(Landroid/content/Context;)V

    .line 182
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/mbbanner/common/c/b;->b(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->c:I

    const/4 v1, 0x0

    .line 183
    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->b:Landroid/content/Context;

    .line 1480
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->d:Lcom/mbridge/msdk/mbbanner/common/a/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbbanner/common/a/c;->a()Ljava/lang/String;

    move-result-object v4

    .line 184
    iget v5, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->c:I

    move-object v3, p2

    move-object v6, p3

    .line 183
    invoke-static/range {v1 .. v6}, Lcom/mbridge/msdk/mbbanner/common/a/d;->a(ZLandroid/content/Context;Ljava/lang/String;Ljava/lang/String;ILcom/mbridge/msdk/mbbanner/common/a/b;)Lcom/mbridge/msdk/foundation/same/net/g/d;

    move-result-object v0

    .line 186
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 187
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "j"

    .line 188
    invoke-virtual {v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 192
    :cond_0
    invoke-virtual {p3}, Lcom/mbridge/msdk/mbbanner/common/a/b;->c()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x1

    if-nez v1, :cond_1

    .line 193
    invoke-virtual {p4, p3}, Lcom/mbridge/msdk/mbbanner/common/f/a;->a(Ljava/lang/String;)V

    move v1, v2

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    .line 198
    :goto_0
    iget-object v3, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->e:Lcom/mbridge/msdk/mbbanner/common/util/a;

    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/mbbanner/common/util/a;->a(Z)V

    .line 199
    invoke-virtual {p1, v2, v0, p4, p3}, Lcom/mbridge/msdk/mbbanner/common/e/a;->choiceV3OrV5BySetting(ILcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 202
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 203
    iget-object p3, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->e:Lcom/mbridge/msdk/mbbanner/common/util/a;

    iget-object p4, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->f:Lcom/mbridge/msdk/mbbanner/common/b/b;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p4, p1, p2}, Lcom/mbridge/msdk/mbbanner/common/util/a;->a(Lcom/mbridge/msdk/mbbanner/common/b/b;Ljava/lang/String;Ljava/lang/String;)V

    .line 204
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/b;->g:Lcom/mbridge/msdk/mbbanner/common/b/d;

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/mbbanner/common/b/d;->a(Ljava/lang/String;)V

    :goto_1
    return-void
.end method
