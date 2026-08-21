.class public abstract Lcom/sigmob/sdk/base/g;
.super Ljava/lang/Object;


# static fields
.field private static c:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/base/b;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field protected a:Lcom/sigmob/windad/WindAdRequest;

.field private b:Lcom/sigmob/sdk/base/b;

.field private d:I

.field private e:Z

.field private f:Ljava/lang/String;

.field private g:I

.field private h:Ljava/lang/String;

.field public init_filters:I

.field public loadCount:I

.field public mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

.field public pIdEmpty_filters:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/g;->c:Ljava/util/HashMap;

    return-void
.end method

.method protected constructor <init>(Lcom/sigmob/windad/WindAdRequest;Z)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/sdk/base/g;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/base/g;->pIdEmpty_filters:I

    iput v0, p0, Lcom/sigmob/sdk/base/g;->init_filters:I

    iput v0, p0, Lcom/sigmob/sdk/base/g;->loadCount:I

    iput v0, p0, Lcom/sigmob/sdk/base/g;->d:I

    const-string v0, "CNY"

    iput-object v0, p0, Lcom/sigmob/sdk/base/g;->h:Ljava/lang/String;

    iput-object p1, p0, Lcom/sigmob/sdk/base/g;->a:Lcom/sigmob/windad/WindAdRequest;

    invoke-virtual {p1, p2}, Lcom/sigmob/windad/WindAdRequest;->setHalfInterstitial(Z)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/g;)Lcom/sigmob/sdk/base/b;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/g;->b:Lcom/sigmob/sdk/base/b;

    return-object p0
.end method

.method private a(Ljava/lang/String;)Lcom/sigmob/sdk/base/b;
    .locals 5

    new-instance v0, Lcom/sigmob/sdk/base/b;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/b;-><init>()V

    const/4 v1, 0x0

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/db/a;->a()Lcom/sigmob/sdk/base/db/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/db/a;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "select error_code, count(*) as num from adload_event where adslot_id = \'"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\' group by adslot_id"

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/base/g;->a(Lcom/sigmob/sdk/base/b;Landroid/database/Cursor;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_0

    goto :goto_0

    :catchall_0
    move-exception p1

    :try_start_1
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v1, :cond_0

    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result p1

    if-nez p1, :cond_0

    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    :cond_0
    return-object v0

    :catchall_1
    move-exception p1

    if-eqz v1, :cond_1

    invoke-interface {v1}, Landroid/database/Cursor;->isClosed()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    :cond_1
    throw p1
.end method

.method private a(Lcom/sigmob/sdk/base/b;Landroid/database/Cursor;)V
    .locals 3

    if-eqz p2, :cond_2

    invoke-interface {p2}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "error_code"

    invoke-interface {p2, v0}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p2, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v0

    const-string v1, "num"

    invoke-interface {p2, v1}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p2, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v1

    :cond_0
    if-eqz v0, :cond_1

    iput v1, p1, Lcom/sigmob/sdk/base/b;->a:I

    :cond_1
    iget v2, p1, Lcom/sigmob/sdk/base/b;->b:I

    add-int/2addr v2, v1

    iput v2, p1, Lcom/sigmob/sdk/base/b;->b:I

    sparse-switch v0, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    iput v1, p1, Lcom/sigmob/sdk/base/b;->d:I

    goto :goto_0

    :sswitch_1
    iput v1, p1, Lcom/sigmob/sdk/base/b;->g:I

    goto :goto_0

    :sswitch_2
    iput v1, p1, Lcom/sigmob/sdk/base/b;->c:I

    goto :goto_0

    :sswitch_3
    iput v1, p1, Lcom/sigmob/sdk/base/b;->e:I

    goto :goto_0

    :sswitch_4
    iput v1, p1, Lcom/sigmob/sdk/base/b;->f:I

    :goto_0
    invoke-interface {p2}, Landroid/database/Cursor;->moveToNext()Z

    move-result v2

    if-nez v2, :cond_0

    :cond_2
    return-void

    :sswitch_data_0
    .sparse-switch
        0x92888 -> :sswitch_4
        0x92889 -> :sswitch_4
        0x9288b -> :sswitch_4
        0x9288c -> :sswitch_4
        0x92b44 -> :sswitch_3
        0x92b49 -> :sswitch_2
        0x94edc -> :sswitch_1
        0x94edd -> :sswitch_0
    .end sparse-switch
.end method

.method private a(Ljava/lang/String;I)V
    .locals 6

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/db/a;->a()Lcom/sigmob/sdk/base/db/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/db/a;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    new-instance v1, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;

    invoke-direct {v1}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;-><init>()V

    const-string v2, "adload_event"

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;->setTableName(Ljava/lang/String;)V

    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    const-string v3, "adslot_id"

    invoke-interface {v2, v3, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "error_code"

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "timestamp"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;->setColumnValues(Ljava/util/Map;)V

    invoke-static {}, Lcom/sigmob/sdk/base/db/a;->a()Lcom/sigmob/sdk/base/db/a;

    move-result-object v2

    invoke-virtual {v1}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;->build()Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;

    move-result-object v1

    new-instance v3, Lcom/sigmob/sdk/base/g$1;

    invoke-direct {v3, p0, p1, p2}, Lcom/sigmob/sdk/base/g$1;-><init>(Lcom/sigmob/sdk/base/g;Ljava/lang/String;I)V

    invoke-virtual {v2, v0, v1, v3}, Lcom/sigmob/sdk/base/db/a;->a(Landroid/database/sqlite/SQLiteDatabase;Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;Lcom/sigmob/sdk/base/db/a$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->c()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->c()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x0

    :goto_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->c()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->c()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v1

    invoke-virtual {v1, p1, p2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/g;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/g;->d()V

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 5

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/db/a;->a()Lcom/sigmob/sdk/base/db/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/db/a;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "adload_event"

    const-string v2, "adslot_id=?"

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    aput-object p1, v3, v4

    invoke-virtual {v0, v1, v2, v3}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private d()V
    .locals 1

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/base/g;->pIdEmpty_filters:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->a()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/base/g;->b(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->b:Lcom/sigmob/sdk/base/b;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/b;->a()V

    return-void
.end method


# virtual methods
.method protected a()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->a:Lcom/sigmob/windad/WindAdRequest;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method

.method protected abstract a(Lcom/sigmob/windad/WindAdError;)V
.end method

.method protected a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/g;->e:Z

    return-void
.end method

.method protected b()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->a:Lcom/sigmob/windad/WindAdRequest;

    new-instance v1, Lcom/sigmob/sdk/base/g$2;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/g$2;-><init>(Lcom/sigmob/sdk/base/g;)V

    const-string v2, "request"

    const-string v3, "init"

    invoke-static {v2, v3, v0, v1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method protected abstract c()Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation
.end method

.method public getBidFloor()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/g;->g:I

    return v0
.end method

.method public getBid_token()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->f:Ljava/lang/String;

    return-object v0
.end method

.method public getCurrency()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->h:Ljava/lang/String;

    return-object v0
.end method

.method public abstract getEcpm()Ljava/lang/String;
.end method

.method public loadAd()Z
    .locals 2

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/g;->e:Z

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/sigmob/sdk/base/g;->f:Ljava/lang/String;

    return v0
.end method

.method public loadAd(Ljava/lang/String;)Z
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/g;->e:Z

    iput-object p1, p0, Lcom/sigmob/sdk/base/g;->f:Ljava/lang/String;

    const/4 p1, 0x0

    return p1
.end method

.method public loadAdFilter()Z
    .locals 6

    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->a:Lcom/sigmob/windad/WindAdRequest;

    const/4 v1, 0x1

    if-eqz v0, :cond_8

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_0

    :cond_0
    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAds;->isInit()Z

    move-result v0

    if-nez v0, :cond_1

    iget v0, p0, Lcom/sigmob/sdk/base/g;->init_filters:I

    add-int/2addr v0, v1

    iput v0, p0, Lcom/sigmob/sdk/base/g;->init_filters:I

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_NOT_INIT:Lcom/sigmob/windad/WindAdError;

    const-string v2, "WindAds not initialize"

    goto/16 :goto_1

    :cond_1
    sget-object v0, Lcom/sigmob/sdk/base/g;->c:Ljava/util/HashMap;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/b;

    iput-object v0, p0, Lcom/sigmob/sdk/base/g;->b:Lcom/sigmob/sdk/base/b;

    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->a()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/base/g;->a(Ljava/lang/String;)Lcom/sigmob/sdk/base/b;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/g;->b:Lcom/sigmob/sdk/base/b;

    iget v2, p0, Lcom/sigmob/sdk/base/g;->init_filters:I

    iput v2, v0, Lcom/sigmob/sdk/base/b;->e:I

    sget-object v0, Lcom/sigmob/sdk/base/g;->c:Ljava/util/HashMap;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->a()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/base/g;->b:Lcom/sigmob/sdk/base/b;

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    iget-boolean v0, p0, Lcom/sigmob/sdk/base/g;->e:Z

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->f:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->b:Lcom/sigmob/sdk/base/b;

    iget v2, v0, Lcom/sigmob/sdk/base/b;->h:I

    add-int/2addr v2, v1

    iput v2, v0, Lcom/sigmob/sdk/base/b;->h:I

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_BID_TOKEN_IS_EMPTY:Lcom/sigmob/windad/WindAdError;

    goto/16 :goto_2

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v2, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    if-eq v0, v2, :cond_7

    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v2, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

    if-ne v0, v2, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->b:Lcom/sigmob/sdk/base/b;

    iget v2, v0, Lcom/sigmob/sdk/base/b;->g:I

    add-int/2addr v2, v1

    iput v2, v0, Lcom/sigmob/sdk/base/b;->g:I

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_AD_LOAD_FAIL_LOADING:Lcom/sigmob/windad/WindAdError;

    goto/16 :goto_2

    :cond_4
    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->getInstance()Lcom/sigmob/sdk/Sigmob;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/Sigmob;->getSigMobError()Lcom/sigmob/windad/WindAdError;

    move-result-object v0

    if-eqz v0, :cond_5

    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->getInstance()Lcom/sigmob/sdk/Sigmob;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/Sigmob;->getSigMobError()Lcom/sigmob/windad/WindAdError;

    move-result-object v0

    iget-object v2, p0, Lcom/sigmob/sdk/base/g;->b:Lcom/sigmob/sdk/base/b;

    iget v3, v2, Lcom/sigmob/sdk/base/b;->f:I

    add-int/2addr v3, v1

    iput v3, v2, Lcom/sigmob/sdk/base/b;->f:I

    goto :goto_2

    :cond_5
    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/c;->i()Z

    move-result v0

    if-nez v0, :cond_6

    const-string v0, "User GDPR Consent Status is denied"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_GDPR_DENIED:Lcom/sigmob/windad/WindAdError;

    iget-object v2, p0, Lcom/sigmob/sdk/base/g;->b:Lcom/sigmob/sdk/base/b;

    iget v3, v2, Lcom/sigmob/sdk/base/b;->c:I

    add-int/2addr v3, v1

    iput v3, v2, Lcom/sigmob/sdk/base/b;->c:I

    goto :goto_2

    :cond_6
    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->F()J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-lez v0, :cond_7

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->F()J

    move-result-wide v2

    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->b:Lcom/sigmob/sdk/base/b;

    iget-wide v4, v0, Lcom/sigmob/sdk/base/b;->i:J

    add-long/2addr v2, v4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    cmp-long v0, v2, v4

    if-lez v0, :cond_7

    const-string v0, "load interval Time error"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->b:Lcom/sigmob/sdk/base/b;

    iget v2, v0, Lcom/sigmob/sdk/base/b;->d:I

    add-int/2addr v2, v1

    iput v2, v0, Lcom/sigmob/sdk/base/b;->d:I

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_AD_LOAD_FAIL_INTERVAL:Lcom/sigmob/windad/WindAdError;

    goto :goto_2

    :cond_7
    const/4 v0, 0x0

    goto :goto_2

    :cond_8
    :goto_0
    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_PLACEMENTID_EMPTY:Lcom/sigmob/windad/WindAdError;

    iget v2, p0, Lcom/sigmob/sdk/base/g;->pIdEmpty_filters:I

    add-int/2addr v2, v1

    iput v2, p0, Lcom/sigmob/sdk/base/g;->pIdEmpty_filters:I

    const-string v2, "PlacementId with WindAdRequest can\'t is null"

    :goto_1
    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_2
    iget-object v2, p0, Lcom/sigmob/sdk/base/g;->b:Lcom/sigmob/sdk/base/b;

    const/4 v3, 0x0

    if-nez v2, :cond_9

    iget v2, p0, Lcom/sigmob/sdk/base/g;->loadCount:I

    add-int/2addr v2, v1

    iput v2, p0, Lcom/sigmob/sdk/base/g;->loadCount:I

    goto :goto_3

    :cond_9
    iget v4, v2, Lcom/sigmob/sdk/base/b;->b:I

    iget v5, p0, Lcom/sigmob/sdk/base/g;->loadCount:I

    add-int/2addr v5, v1

    add-int/2addr v4, v5

    iput v4, v2, Lcom/sigmob/sdk/base/b;->b:I

    iput v3, p0, Lcom/sigmob/sdk/base/g;->loadCount:I

    :goto_3
    if-eqz v0, :cond_b

    iget-object v2, p0, Lcom/sigmob/sdk/base/g;->b:Lcom/sigmob/sdk/base/b;

    if-nez v2, :cond_a

    iget v2, p0, Lcom/sigmob/sdk/base/g;->d:I

    add-int/2addr v2, v1

    iput v2, p0, Lcom/sigmob/sdk/base/g;->d:I

    goto :goto_4

    :cond_a
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v4

    invoke-direct {p0, v2, v4}, Lcom/sigmob/sdk/base/g;->a(Ljava/lang/String;I)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/g;->b:Lcom/sigmob/sdk/base/b;

    iget v4, v2, Lcom/sigmob/sdk/base/b;->a:I

    iget v5, p0, Lcom/sigmob/sdk/base/g;->d:I

    add-int/2addr v5, v1

    add-int/2addr v4, v5

    iput v4, v2, Lcom/sigmob/sdk/base/b;->a:I

    iput v3, p0, Lcom/sigmob/sdk/base/g;->d:I

    :goto_4
    iget-object v1, p0, Lcom/sigmob/sdk/base/g;->a:Lcom/sigmob/windad/WindAdRequest;

    const-string v2, "request"

    invoke-static {v2, v0, v1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Lcom/sigmob/windad/WindAdError;Lcom/sigmob/windad/WindAdRequest;)V

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/g;->a(Lcom/sigmob/windad/WindAdError;)V

    return v3

    :cond_b
    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->a:Lcom/sigmob/windad/WindAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdRequest;->getUserId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/ClientMetadata;->setUserId(Ljava/lang/String;)V

    return v1
.end method

.method public sendLossNotificationWithInfo(Ljava/util/Map;)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "ADN_ID"

    const-string v1, "LOSS_REASON"

    const-string v2, "CURRENCY"

    const-string v3, "AUCTION_PRICE"

    :try_start_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->c()Ljava/util/List;

    move-result-object v4

    if-eqz v4, :cond_4

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->c()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-lez v4, :cond_4

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->c()Ljava/util/List;

    move-result-object v4

    const/4 v5, 0x0

    invoke-interface {v4, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v5, v4, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    if-eqz v5, :cond_4

    iget-object v5, v4, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->lose_url:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_4

    if-eqz p1, :cond_3

    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result v6

    if-lez v6, :cond_3

    invoke-interface {p1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    if-eqz v6, :cond_0

    const-string v6, "_PUBLISHERPRICE_"

    invoke-interface {p1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    invoke-static {v7}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    invoke-direct {p0, v6, v7}, Lcom/sigmob/sdk/base/g;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v6, "__AUCTION_PRICE__"

    invoke-interface {p1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v6, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v5

    :cond_0
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v6, "__CURRENCY__"

    const-string v7, "_CURRENCY_"

    if-eqz v3, :cond_1

    :try_start_1
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v7, v3}, Lcom/sigmob/sdk/base/g;->a(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    :goto_0
    invoke-virtual {v5, v6, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    goto :goto_1

    :cond_1
    iget-object v2, p0, Lcom/sigmob/sdk/base/g;->h:Ljava/lang/String;

    invoke-direct {p0, v7, v2}, Lcom/sigmob/sdk/base/g;->a(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/g;->h:Ljava/lang/String;

    goto :goto_0

    :goto_1
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_2

    const-string v3, "_BIDLOSSCODE_"

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v3, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v1

    move-object v5, v1

    goto :goto_2

    :cond_2
    move-object v5, v2

    :goto_2
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_3

    const-string v1, "_WINADNID_"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v5, v1, p1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v5

    :cond_3
    const-string p1, "lose"

    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->a:Lcom/sigmob/windad/WindAdRequest;

    invoke-static {v5, p1, v0, v4}, Lcom/sigmob/sdk/base/network/b;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_3

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_3
    return-void
.end method

.method public sendWinNotificationWithInfo(Ljava/util/Map;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "CURRENCY"

    const-string v1, "HIGHEST_LOSS_PRICE"

    const-string v2, "AUCTION_PRICE"

    :try_start_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->c()Ljava/util/List;

    move-result-object v3

    if-eqz v3, :cond_4

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->c()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_4

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->c()Ljava/util/List;

    move-result-object v3

    const/4 v4, 0x0

    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v4, v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    if-eqz v4, :cond_4

    iget-object v4, v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    iget-object v4, v4, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->win_url:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_4

    if-eqz p1, :cond_3

    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result v5

    if-lez v5, :cond_3

    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    if-eqz v5, :cond_0

    const-string v5, "_PUBLISHERPRICE_"

    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-direct {p0, v5, v6}, Lcom/sigmob/sdk/base/g;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v5, "__AUCTION_PRICE__"

    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v5, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v4

    :cond_0
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_1

    const-string v2, "_HIGHESTLOSSPRICE_"

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-direct {p0, v2, v5}, Lcom/sigmob/sdk/base/g;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "__HIGHEST_LOSS_PRICE__"

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v4, v2, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v4

    :cond_1
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "__CURRENCY__"

    const-string v5, "_CURRENCY_"

    if-eqz v1, :cond_2

    :try_start_1
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v5, v1}, Lcom/sigmob/sdk/base/g;->a(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    :goto_0
    invoke-virtual {v4, v2, p1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/base/g;->h:Ljava/lang/String;

    invoke-direct {p0, v5, p1}, Lcom/sigmob/sdk/base/g;->a(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/g;->h:Ljava/lang/String;

    goto :goto_0

    :cond_3
    :goto_1
    const-string p1, "win"

    iget-object v0, p0, Lcom/sigmob/sdk/base/g;->a:Lcom/sigmob/windad/WindAdRequest;

    invoke-static {v4, p1, v0, v3}, Lcom/sigmob/sdk/base/network/b;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_2
    return-void
.end method

.method public setBidEcpm(I)V
    .locals 5

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/g;->c()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    const/4 v1, 0x0

    :goto_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v2

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "_PUBLISHERPRICE_"

    invoke-virtual {v2, v4, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method public setBidFloor(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/g;->g:I

    return-void
.end method

.method public setCurrency(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/g;->h:Ljava/lang/String;

    return-void
.end method
