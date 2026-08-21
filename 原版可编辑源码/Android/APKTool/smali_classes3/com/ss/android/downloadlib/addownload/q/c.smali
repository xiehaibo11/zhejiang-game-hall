.class public Lcom/ss/android/downloadlib/addownload/q/c;
.super Ljava/lang/Object;


# static fields
.field private static rg:Lcom/ss/android/downloadlib/addownload/q/c;


# instance fields
.field private df:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/downloadlib/addownload/q/pt;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 39
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 37
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/q/c;->df:Ljava/util/List;

    .line 41
    new-instance v1, Lcom/ss/android/downloadlib/addownload/q/pp;

    invoke-direct {v1}, Lcom/ss/android/downloadlib/addownload/q/pp;-><init>()V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 42
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/q/c;->df:Ljava/util/List;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/q/fw;

    invoke-direct {v1}, Lcom/ss/android/downloadlib/addownload/q/fw;-><init>()V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 43
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/q/c;->df:Ljava/util/List;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/q/df;

    invoke-direct {v1}, Lcom/ss/android/downloadlib/addownload/q/df;-><init>()V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 44
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/q/c;->df:Ljava/util/List;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/q/rg;

    invoke-direct {v1}, Lcom/ss/android/downloadlib/addownload/q/rg;-><init>()V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static rg()Lcom/ss/android/downloadlib/addownload/q/c;
    .locals 2

    .line 27
    sget-object v0, Lcom/ss/android/downloadlib/addownload/q/c;->rg:Lcom/ss/android/downloadlib/addownload/q/c;

    if-nez v0, :cond_1

    .line 28
    const-class v0, Lcom/ss/android/downloadlib/addownload/q/c;

    monitor-enter v0

    .line 29
    :try_start_0
    sget-object v1, Lcom/ss/android/downloadlib/addownload/q/c;->rg:Lcom/ss/android/downloadlib/addownload/q/c;

    if-nez v1, :cond_0

    .line 30
    new-instance v1, Lcom/ss/android/downloadlib/addownload/q/c;

    invoke-direct {v1}, Lcom/ss/android/downloadlib/addownload/q/c;-><init>()V

    sput-object v1, Lcom/ss/android/downloadlib/addownload/q/c;->rg:Lcom/ss/android/downloadlib/addownload/q/c;

    .line 32
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 34
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/downloadlib/addownload/q/c;->rg:Lcom/ss/android/downloadlib/addownload/q/c;

    return-object v0
.end method


# virtual methods
.method public rg(Lcom/ss/android/downloadad/api/rg/df;ILcom/ss/android/downloadlib/addownload/q/q;)V
    .locals 4

    .line 49
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/q/c;->df:Ljava/util/List;

    if-eqz v0, :cond_7

    .line 50
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-eqz v0, :cond_7

    if-nez p1, :cond_0

    goto :goto_2

    :cond_0
    const/4 v0, 0x0

    .line 56
    invoke-static {v0}, Lcom/ss/android/downloadlib/ux;->rg(Landroid/content/Context;)Lcom/ss/android/downloadlib/ux;

    move-result-object v0

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->rg()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/ux;->df(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    if-eqz v0, :cond_6

    .line 57
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMimeType()Ljava/lang/String;

    move-result-object v0

    const-string v1, "application/vnd.android.package-archive"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    goto :goto_1

    .line 62
    :cond_1
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "pause_optimise_switch"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_2

    move v1, v2

    .line 63
    :cond_2
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/q/c;->df:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_3
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/downloadlib/addownload/q/pt;

    if-nez v1, :cond_4

    .line 66
    instance-of v3, v2, Lcom/ss/android/downloadlib/addownload/q/fw;

    if-nez v3, :cond_4

    goto :goto_0

    .line 70
    :cond_4
    invoke-interface {v2, p1, p2, p3}, Lcom/ss/android/downloadlib/addownload/q/pt;->rg(Lcom/ss/android/downloadad/api/rg/df;ILcom/ss/android/downloadlib/addownload/q/q;)Z

    move-result v2

    if-eqz v2, :cond_3

    return-void

    .line 77
    :cond_5
    invoke-interface {p3, p1}, Lcom/ss/android/downloadlib/addownload/q/q;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    return-void

    .line 58
    :cond_6
    :goto_1
    invoke-interface {p3, p1}, Lcom/ss/android/downloadlib/addownload/q/q;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    return-void

    .line 52
    :cond_7
    :goto_2
    invoke-interface {p3, p1}, Lcom/ss/android/downloadlib/addownload/q/q;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    return-void
.end method
