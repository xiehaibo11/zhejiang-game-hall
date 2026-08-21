.class public Lcom/ss/android/downloadlib/addownload/model/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/addownload/model/c$rg;
    }
.end annotation


# instance fields
.field private final df:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/download/api/download/DownloadModel;",
            ">;"
        }
    .end annotation
.end field

.field private final pp:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/downloadad/api/rg/df;",
            ">;"
        }
    .end annotation
.end field

.field private final pt:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/download/api/download/DownloadController;",
            ">;"
        }
    .end annotation
.end field

.field private final q:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/download/api/download/DownloadEventConfig;",
            ">;"
        }
    .end annotation
.end field

.field private volatile rg:Z


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 53
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 44
    iput-boolean v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->rg:Z

    .line 47
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->df:Ljava/util/concurrent/ConcurrentHashMap;

    .line 48
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->q:Ljava/util/concurrent/ConcurrentHashMap;

    .line 49
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pt:Ljava/util/concurrent/ConcurrentHashMap;

    .line 51
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pp:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/downloadlib/addownload/model/c$1;)V
    .locals 0

    .line 35
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/model/c;-><init>()V

    return-void
.end method

.method static synthetic df(Lcom/ss/android/downloadlib/addownload/model/c;)Ljava/util/concurrent/ConcurrentHashMap;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pp:Ljava/util/concurrent/ConcurrentHashMap;

    return-object p0
.end method

.method public static rg()Lcom/ss/android/downloadlib/addownload/model/c;
    .locals 1

    .line 41
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c$rg;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    return-object v0
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/model/c;)Z
    .locals 0

    .line 35
    iget-boolean p0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->rg:Z

    return p0
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/model/c;Z)Z
    .locals 0

    .line 35
    iput-boolean p1, p0, Lcom/ss/android/downloadlib/addownload/model/c;->rg:Z

    return p1
.end method


# virtual methods
.method public c(J)V
    .locals 2

    .line 224
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->df:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 225
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->q:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 226
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pt:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public df(J)Lcom/ss/android/download/api/download/DownloadEventConfig;
    .locals 1

    .line 108
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->q:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/download/api/download/DownloadEventConfig;

    return-object p1
.end method

.method public df(Ljava/lang/String;)Lcom/ss/android/downloadad/api/rg/df;
    .locals 4

    .line 136
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    .line 139
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pp:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/downloadad/api/rg/df;

    if-eqz v2, :cond_1

    .line 140
    invoke-virtual {v2}, Lcom/ss/android/downloadad/api/rg/df;->rg()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    return-object v2

    :cond_2
    return-object v1
.end method

.method public df()V
    .locals 3

    .line 58
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/addownload/model/c$1;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/addownload/model/c$1;-><init>(Lcom/ss/android/downloadlib/addownload/model/c;)V

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;Z)V

    return-void
.end method

.method public df(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 251
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 254
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->df:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/download/api/download/DownloadModel;

    .line 255
    instance-of v2, v1, Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    if-eqz v2, :cond_1

    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 256
    check-cast v1, Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    invoke-virtual {v1, p2}, Lcom/ss/android/downloadad/api/download/AdDownloadModel;->setPackageName(Ljava/lang/String;)Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    goto :goto_0

    :cond_2
    :goto_1
    return-void
.end method

.method public pp(J)Lcom/ss/android/downloadlib/addownload/model/pp;
    .locals 2

    .line 206
    new-instance v0, Lcom/ss/android/downloadlib/addownload/model/pp;

    invoke-direct {v0}, Lcom/ss/android/downloadlib/addownload/model/pp;-><init>()V

    .line 207
    iput-wide p1, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->rg:J

    .line 208
    invoke-virtual {p0, p1, p2}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(J)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v1

    iput-object v1, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 209
    invoke-virtual {p0, p1, p2}, Lcom/ss/android/downloadlib/addownload/model/c;->df(J)Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object v1

    iput-object v1, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->q:Lcom/ss/android/download/api/download/DownloadEventConfig;

    .line 210
    iget-object v1, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->q:Lcom/ss/android/download/api/download/DownloadEventConfig;

    if-nez v1, :cond_0

    .line 211
    new-instance v1, Lcom/ss/android/download/api/download/q;

    invoke-direct {v1}, Lcom/ss/android/download/api/download/q;-><init>()V

    iput-object v1, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->q:Lcom/ss/android/download/api/download/DownloadEventConfig;

    .line 213
    :cond_0
    invoke-virtual {p0, p1, p2}, Lcom/ss/android/downloadlib/addownload/model/c;->q(J)Lcom/ss/android/download/api/download/DownloadController;

    move-result-object p1

    iput-object p1, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    .line 214
    iget-object p1, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    if-nez p1, :cond_1

    .line 215
    new-instance p1, Lcom/ss/android/download/api/download/df;

    invoke-direct {p1}, Lcom/ss/android/download/api/download/df;-><init>()V

    iput-object p1, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    :cond_1
    return-object v0
.end method

.method public pt(J)Lcom/ss/android/downloadad/api/rg/df;
    .locals 1

    .line 116
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pp:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/downloadad/api/rg/df;

    return-object p1
.end method

.method public q(J)Lcom/ss/android/download/api/download/DownloadController;
    .locals 1

    .line 112
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pt:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/download/api/download/DownloadController;

    return-object p1
.end method

.method public q()Ljava/util/concurrent/ConcurrentHashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/downloadad/api/rg/df;",
            ">;"
        }
    .end annotation

    .line 120
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pp:Ljava/util/concurrent/ConcurrentHashMap;

    return-object v0
.end method

.method public rg(J)Lcom/ss/android/download/api/download/DownloadModel;
    .locals 1

    .line 104
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->df:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/download/api/download/DownloadModel;

    return-object p1
.end method

.method public rg(I)Lcom/ss/android/downloadad/api/rg/df;
    .locals 3

    .line 193
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pp:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/downloadad/api/rg/df;

    if-nez v1, :cond_1

    goto :goto_0

    .line 197
    :cond_1
    invoke-virtual {v1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v2

    if-ne v2, p1, :cond_0

    return-object v1

    :cond_2
    const/4 p1, 0x0

    return-object p1
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/downloadad/api/rg/df;
    .locals 7

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 152
    :cond_0
    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pp:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_1
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/downloadad/api/rg/df;

    if-nez v2, :cond_2

    goto :goto_0

    .line 156
    :cond_2
    invoke-virtual {v2}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v3

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v4

    if-ne v3, v4, :cond_1

    return-object v2

    .line 160
    :cond_3
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getExtra()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    .line 163
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getExtra()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v2, "extra"

    .line 164
    invoke-static {v1, v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;)J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v3, v1, v3

    if-eqz v3, :cond_7

    .line 166
    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pp:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v3}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_4
    :goto_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_6

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ss/android/downloadad/api/rg/df;

    if-nez v4, :cond_5

    goto :goto_1

    .line 170
    :cond_5
    invoke-virtual {v4}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v5

    cmp-long v5, v5, v1

    if-nez v5, :cond_4

    return-object v4

    .line 174
    :cond_6
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object v1

    const-string v2, "getNativeModelByInfo"

    invoke-virtual {v1, v2}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v1

    .line 177
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 181
    :cond_7
    :goto_2
    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pp:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_8
    :goto_3
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_a

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/downloadad/api/rg/df;

    if-nez v2, :cond_9

    goto :goto_3

    .line 185
    :cond_9
    invoke-virtual {v2}, Lcom/ss/android/downloadad/api/rg/df;->rg()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_8

    return-object v2

    :cond_a
    return-object v0
.end method

.method public rg(Ljava/lang/String;)Lcom/ss/android/downloadad/api/rg/df;
    .locals 4

    .line 124
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    .line 127
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pp:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/downloadad/api/rg/df;

    if-eqz v2, :cond_1

    .line 128
    invoke-virtual {v2}, Lcom/ss/android/downloadad/api/rg/df;->pp()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    return-object v2

    :cond_2
    return-object v1
.end method

.method public rg(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/downloadad/api/rg/df;",
            ">;"
        }
    .end annotation

    .line 234
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 235
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    .line 238
    :cond_0
    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pp:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_1
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/downloadad/api/rg/df;

    if-eqz v2, :cond_1

    .line 239
    invoke-virtual {v2}, Lcom/ss/android/downloadad/api/rg/df;->rg()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 240
    invoke-virtual {v2, p2}, Lcom/ss/android/downloadad/api/rg/df;->df(Ljava/lang/String;)V

    .line 241
    invoke-virtual {v2}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-interface {v0, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_2
    :goto_1
    return-object v0
.end method

.method public rg(JLcom/ss/android/download/api/download/DownloadController;)V
    .locals 1

    if-eqz p3, :cond_0

    .line 91
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pt:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {v0, p1, p3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public rg(JLcom/ss/android/download/api/download/DownloadEventConfig;)V
    .locals 1

    if-eqz p3, :cond_0

    .line 85
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->q:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {v0, p1, p3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public rg(Lcom/ss/android/download/api/download/DownloadModel;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 75
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->df:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getId()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 76
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getDeepLink()Lcom/ss/android/download/api/model/DeepLink;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 77
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getDeepLink()Lcom/ss/android/download/api/model/DeepLink;

    move-result-object v0

    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getId()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/download/api/model/DeepLink;->setId(J)V

    .line 78
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getDeepLink()Lcom/ss/android/download/api/model/DeepLink;

    move-result-object v0

    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getPackageName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/ss/android/download/api/model/DeepLink;->setPackageName(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public declared-synchronized rg(Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 3

    monitor-enter p0

    if-nez p1, :cond_0

    .line 97
    monitor-exit p0

    return-void

    .line 99
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pp:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 100
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg()Lcom/ss/android/downloadlib/addownload/model/ux;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg(Lcom/ss/android/downloadad/api/rg/df;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 101
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized rg(Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Long;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    .line 272
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 273
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v1

    .line 274
    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 275
    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/model/c;->pp:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 277
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg()Lcom/ss/android/downloadlib/addownload/model/ux;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg(Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 278
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
