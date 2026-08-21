.class public final Lcom/kwad/components/core/e/d/e;
.super Ljava/lang/Object;


# static fields
.field private static Ki:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private static Q(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 6

    invoke-static {}, Lcom/kwad/components/core/e/d/e;->nO()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    invoke-static {v0}, Lcom/kwad/components/core/e/d/e;->ax(Z)V

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zq()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Math;->abs(I)I

    move-result v0

    if-lez v0, :cond_1

    new-instance v1, Lcom/kwad/components/core/e/d/e$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/e/d/e$1;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    const/4 p0, 0x0

    int-to-long v2, v0

    const-wide/16 v4, 0x3e8

    mul-long/2addr v2, v4

    invoke-static {v1, p0, v2, v3}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    return-void

    :cond_1
    const/4 p0, 0x0

    invoke-static {p0}, Lcom/kwad/components/core/e/d/e;->ax(Z)V

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)I
    .locals 13

    move-object/from16 v0, p4

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, -0x1

    const/4 v3, 0x1

    if-nez v1, :cond_2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    invoke-static/range {p3 .. p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto/16 :goto_3

    :cond_0
    const/4 v1, 0x2

    const/4 v4, 0x0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v5

    const-string v6, "com.tencent.mm"

    invoke-virtual {v5, v6}, Landroid/content/pm/PackageManager;->getLaunchIntentForPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v5

    new-instance v6, Landroid/content/Intent;

    const-string v7, "android.intent.action.MAIN"

    invoke-direct {v6, v7}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v7, "android.intent.category.LAUNCHER"

    invoke-virtual {v6, v7}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    const/high16 v7, 0x10000000

    invoke-virtual {v6, v7}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    invoke-virtual {v5}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v5

    invoke-virtual {v6, v5}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    move-object v5, p0

    invoke-virtual {p0, v6}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v7

    const-string v5, "content://com.tencent.mm.sdk.comm.provider/launchWXMiniprogram"

    invoke-static {v5}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v8

    const/4 v5, 0x5

    new-array v11, v5, [Ljava/lang/String;

    const/4 v5, 0x0

    aput-object p1, v11, v5

    aput-object p2, v11, v3

    aput-object p3, v11, v1

    const/4 v5, 0x3

    const-string v6, "0"

    aput-object v6, v11, v5

    const/4 v5, 0x4

    const-string v6, ""

    aput-object v6, v11, v5

    const/4 v9, 0x0

    const/4 v10, 0x0

    const/4 v12, 0x0

    invoke-virtual/range {v7 .. v12}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v5
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v5, :cond_1

    :try_start_1
    invoke-static {v5}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    move-object v4, v5

    goto :goto_2

    :catch_0
    move-object v4, v5

    goto :goto_1

    :cond_1
    :goto_0
    invoke-static {v5}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    const-string v1, "wxsmallapp"

    invoke-static {v0, v1, v3, v4}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;ILcom/kwad/sdk/core/report/z$b;)V

    invoke-static/range {p4 .. p4}, Lcom/kwad/components/core/e/d/e;->Q(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return v3

    :catchall_1
    move-exception v0

    goto :goto_2

    :catch_1
    :goto_1
    :try_start_2
    invoke-static {v0, v1}, Lcom/kwad/sdk/core/report/a;->k(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    invoke-static {v4}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return v2

    :goto_2
    invoke-static {v4}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw v0

    :cond_2
    :goto_3
    invoke-static {v0, v3}, Lcom/kwad/sdk/core/report/a;->k(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return v2
.end method

.method static synthetic aw(Z)V
    .locals 0

    const/4 p0, 0x0

    invoke-static {p0}, Lcom/kwad/components/core/e/d/e;->ax(Z)V

    return-void
.end method

.method private static ax(Z)V
    .locals 0

    sput-boolean p0, Lcom/kwad/components/core/e/d/e;->Ki:Z

    return-void
.end method

.method public static e(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)I
    .locals 3

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->M(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->N(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->smallAppJumpInfo:Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;->mediaSmallAppId:Ljava/lang/String;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object v2, v2, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->smallAppJumpInfo:Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;

    iget-object v2, v2, Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;->originId:Ljava/lang/String;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->smallAppJumpInfo:Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;->smallAppJumpUrl:Ljava/lang/String;

    invoke-static {p0, v1, v2, v0, p1}, Lcom/kwad/components/core/e/d/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result p0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return p0
.end method

.method private static nO()Z
    .locals 1

    sget-boolean v0, Lcom/kwad/components/core/e/d/e;->Ki:Z

    return v0
.end method
