.class public Lcom/ss/android/downloadlib/addownload/q/df;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/addownload/q/pt;


# static fields
.field private static rg:Lcom/ss/android/downloadlib/addownload/rg/q;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private rg(I)I
    .locals 2

    .line 98
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const-string v0, "pause_optimise_download_percent"

    const/16 v1, 0x32

    invoke-virtual {p1, v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p1

    return p1
.end method

.method public static rg()Lcom/ss/android/downloadlib/addownload/rg/q;
    .locals 1

    .line 31
    sget-object v0, Lcom/ss/android/downloadlib/addownload/q/df;->rg:Lcom/ss/android/downloadlib/addownload/rg/q;

    return-object v0
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/rg/q;)Lcom/ss/android/downloadlib/addownload/rg/q;
    .locals 0

    .line 26
    sput-object p0, Lcom/ss/android/downloadlib/addownload/q/df;->rg:Lcom/ss/android/downloadlib/addownload/rg/q;

    return-object p0
.end method

.method private rg(Lcom/ss/android/downloadad/api/rg/rg;)Z
    .locals 3

    .line 102
    invoke-static {p1}, Lcom/ss/android/downloadlib/utils/pt;->rg(Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "pause_optimise_download_percent_switch"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    .line 103
    invoke-interface {p1}, Lcom/ss/android/downloadad/api/rg/rg;->z()Z

    move-result p1

    if-eqz p1, :cond_0

    move v1, v2

    :cond_0
    return v1
.end method


# virtual methods
.method public rg(Lcom/ss/android/downloadad/api/rg/df;ILcom/ss/android/downloadlib/addownload/q/q;)Z
    .locals 8

    const/4 p2, 0x0

    if-nez p1, :cond_0

    return p2

    .line 40
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->vd()Z

    move-result v0

    if-eqz v0, :cond_1

    return p2

    .line 44
    :cond_1
    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/addownload/q/df;->rg(Lcom/ss/android/downloadad/api/rg/rg;)Z

    move-result v0

    if-nez v0, :cond_2

    return p2

    :cond_2
    const/4 v0, 0x0

    .line 48
    invoke-static {v0}, Lcom/ss/android/downloadlib/ux;->rg(Landroid/content/Context;)Lcom/ss/android/downloadlib/ux;

    move-result-object v0

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->rg()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/ux;->df(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    if-nez v0, :cond_3

    return p2

    .line 52
    :cond_3
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v1

    .line 53
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v3

    const-wide/16 v5, 0x0

    cmp-long v7, v1, v5

    if-lez v7, :cond_5

    cmp-long v5, v3, v5

    if-lez v5, :cond_5

    .line 56
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    const-wide/16 v5, 0x64

    mul-long/2addr v1, v5

    div-long/2addr v1, v3

    long-to-int v1, v1

    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/addownload/rz;->rg(II)I

    move-result v0

    .line 57
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v1

    invoke-direct {p0, v1}, Lcom/ss/android/downloadlib/addownload/q/df;->rg(I)I

    move-result v1

    const/4 v2, 0x1

    if-le v0, v1, :cond_4

    move v1, v2

    goto :goto_0

    :cond_4
    move v1, p2

    :goto_0
    if-eqz v1, :cond_5

    .line 59
    new-instance v1, Lcom/ss/android/downloadlib/addownload/q/df$1;

    invoke-direct {v1, p0, p1, p3}, Lcom/ss/android/downloadlib/addownload/q/df$1;-><init>(Lcom/ss/android/downloadlib/addownload/q/df;Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/addownload/q/q;)V

    sput-object v1, Lcom/ss/android/downloadlib/addownload/q/df;->rg:Lcom/ss/android/downloadlib/addownload/rg/q;

    new-array p3, v2, [Ljava/lang/Object;

    .line 88
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, p3, p2

    const-string p2, "\u5df2\u4e0b\u8f7d%s%%\uff0c\u5373\u5c06\u4e0b\u8f7d\u5b8c\u6210\uff0c\u662f\u5426\u7ee7\u7eed\u4e0b\u8f7d\uff1f"

    invoke-static {p2, p3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    const-string p3, "\u7ee7\u7eed"

    const-string v0, "\u6682\u505c"

    .line 89
    invoke-static {p1, p2, p3, v0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->df(Lcom/ss/android/downloadad/api/rg/rg;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 90
    invoke-virtual {p1, v2}, Lcom/ss/android/downloadad/api/rg/df;->v(Z)V

    return v2

    :cond_5
    return p2
.end method
