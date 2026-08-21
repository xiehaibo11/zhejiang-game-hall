.class public final Lcom/mbridge/msdk/mbdownload/manager/a;
.super Ljava/util/Observable;
.source "ApkDownloadTaskObservable.java"


# instance fields
.field private a:Ljava/lang/String;

.field private volatile b:I

.field private volatile c:I

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Lcom/mbridge/msdk/mbdownload/manager/c;

.field private k:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

.field private l:Lcom/mbridge/msdk/foundation/db/e;

.field private m:Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;

.field private n:Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;

.field private o:Ljava/lang/String;

.field private p:Lcom/mbridge/msdk/foundation/download/DownloadMessage;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/mbridge/msdk/foundation/download/DownloadMessage<",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private q:I


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 100
    invoke-direct {p0}, Ljava/util/Observable;-><init>()V

    .line 26
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->a:Ljava/lang/String;

    const/4 v0, -0x1

    .line 27
    iput v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->b:I

    const/4 v1, 0x0

    .line 28
    iput v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->c:I

    const-string v1, ""

    .line 29
    iput-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->d:Ljava/lang/String;

    .line 30
    iput-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->e:Ljava/lang/String;

    .line 31
    iput-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->f:Ljava/lang/String;

    .line 32
    iput-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->g:Ljava/lang/String;

    .line 34
    sget-object v2, Lcom/mbridge/msdk/foundation/same/b/c;->h:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->i:Ljava/lang/String;

    .line 35
    new-instance v2, Lcom/mbridge/msdk/mbdownload/manager/c;

    invoke-direct {v2}, Lcom/mbridge/msdk/mbdownload/manager/c;-><init>()V

    iput-object v2, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->j:Lcom/mbridge/msdk/mbdownload/manager/c;

    .line 38
    new-instance v2, Lcom/mbridge/msdk/mbdownload/manager/a$1;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/mbdownload/manager/a$1;-><init>(Lcom/mbridge/msdk/mbdownload/manager/a;)V

    iput-object v2, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->m:Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;

    .line 80
    new-instance v2, Lcom/mbridge/msdk/mbdownload/manager/a$2;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/mbdownload/manager/a$2;-><init>(Lcom/mbridge/msdk/mbdownload/manager/a;)V

    iput-object v2, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->n:Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;

    .line 97
    iput-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->o:Ljava/lang/String;

    .line 170
    iput v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->q:I

    .line 101
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 104
    :cond_0
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->d:Ljava/lang/String;

    .line 105
    iput-object p2, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->e:Ljava/lang/String;

    .line 106
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->i:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->o:Ljava/lang/String;

    .line 107
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->f:Ljava/lang/String;

    .line 108
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 109
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->f:Ljava/lang/String;

    .line 111
    :cond_1
    new-instance v0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;

    new-instance v2, Ljava/lang/Object;

    invoke-direct {v2}, Ljava/lang/Object;-><init>()V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->f:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".apk"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/16 v5, 0x64

    sget-object v6, Lcom/mbridge/msdk/foundation/download/DownloadResourceType;->DOWNLOAD_RESOURCE_TYPE_APK:Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    move-object v1, v0

    move-object v3, p2

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;-><init>(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;ILcom/mbridge/msdk/foundation/download/DownloadResourceType;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->p:Lcom/mbridge/msdk/foundation/download/DownloadMessage;

    .line 112
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    .line 113
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/e;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/e;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->l:Lcom/mbridge/msdk/foundation/db/e;

    .line 114
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/foundation/db/e;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbdownload/manager/a;I)I
    .locals 0

    .line 25
    iput p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->b:I

    return p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbdownload/manager/a;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 25
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->h:Ljava/lang/String;

    return-object p1
.end method

.method private a(I)V
    .locals 2

    .line 161
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->l:Lcom/mbridge/msdk/foundation/db/e;

    if-eqz v0, :cond_0

    .line 162
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, p1}, Lcom/mbridge/msdk/foundation/db/e;->a(Ljava/lang/String;I)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbdownload/manager/a;)V
    .locals 0

    .line 25
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbdownload/manager/a;->setChanged()V

    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbdownload/manager/a;)I
    .locals 0

    .line 25
    iget p0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->b:I

    return p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbdownload/manager/a;I)V
    .locals 0

    .line 25
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->a(I)V

    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbdownload/manager/a;Ljava/lang/String;)V
    .locals 1

    .line 1166
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->l:Lcom/mbridge/msdk/foundation/db/e;

    if-eqz v0, :cond_0

    .line 1167
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->d:Ljava/lang/String;

    invoke-virtual {v0, p0, p1}, Lcom/mbridge/msdk/foundation/db/e;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbdownload/manager/a;I)I
    .locals 0

    .line 25
    iput p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->c:I

    return p1
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbdownload/manager/a;)Lcom/mbridge/msdk/mbdownload/manager/c;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->j:Lcom/mbridge/msdk/mbdownload/manager/c;

    return-object p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/mbdownload/manager/a;)V
    .locals 0

    .line 25
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbdownload/manager/a;->setChanged()V

    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/mbdownload/manager/a;I)V
    .locals 2

    .line 1172
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->l:Lcom/mbridge/msdk/foundation/db/e;

    if-eqz v0, :cond_0

    iget v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->q:I

    if-le p1, v1, :cond_0

    .line 1173
    iput p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->q:I

    .line 1174
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->d:Ljava/lang/String;

    invoke-virtual {v0, p0, p1}, Lcom/mbridge/msdk/foundation/db/e;->b(Ljava/lang/String;I)V

    :cond_0
    return-void
.end method

.method static synthetic e(Lcom/mbridge/msdk/mbdownload/manager/a;)V
    .locals 0

    .line 25
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbdownload/manager/a;->setChanged()V

    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/mbdownload/manager/a;)Ljava/lang/String;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->h:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/mbdownload/manager/a;)V
    .locals 0

    .line 25
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbdownload/manager/a;->setChanged()V

    return-void
.end method

.method static synthetic h(Lcom/mbridge/msdk/mbdownload/manager/a;)I
    .locals 0

    .line 25
    iget p0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->c:I

    return p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/mbdownload/manager/a;)V
    .locals 0

    .line 25
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbdownload/manager/a;->setChanged()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 119
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/MBDownloadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/MBDownloadManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->p:Lcom/mbridge/msdk/foundation/download/DownloadMessage;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/MBDownloadManager;->download(Lcom/mbridge/msdk/foundation/download/DownloadMessage;)Lcom/mbridge/msdk/foundation/download/core/DownloadRequestBuilder;

    move-result-object v0

    const-wide/16 v1, 0x7530

    .line 120
    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/download/core/DownloadRequestBuilder;->withReadTimeout(J)Lcom/mbridge/msdk/foundation/download/core/DownloadRequestBuilder;

    move-result-object v0

    const-wide/16 v1, 0x4e20

    .line 121
    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/download/core/DownloadRequestBuilder;->withConnectTimeout(J)Lcom/mbridge/msdk/foundation/download/core/DownloadRequestBuilder;

    move-result-object v0

    sget-object v1, Lcom/mbridge/msdk/foundation/download/DownloadPriority;->HIGH:Lcom/mbridge/msdk/foundation/download/DownloadPriority;

    .line 122
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/core/DownloadRequestBuilder;->withDownloadPriority(Lcom/mbridge/msdk/foundation/download/DownloadPriority;)Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;

    move-result-object v0

    const/4 v1, 0x1

    .line 123
    invoke-interface {v0, v1}, Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;->withHttpRetryCounter(I)Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->o:Ljava/lang/String;

    .line 124
    invoke-interface {v0, v1}, Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;->withDirectoryPathInternal(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->m:Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;

    .line 125
    invoke-interface {v0, v1}, Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;->withDownloadStateListener(Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;)Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->n:Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;

    .line 126
    invoke-interface {v0, v1}, Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;->withProgressStateListener(Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;)Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/foundation/download/core/RequestBuilder;->build()Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->k:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    .line 128
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;->start()Ljava/lang/String;

    .line 129
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->k:Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/download/core/DownloadRequest;->getDownloadId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->g:Ljava/lang/String;

    return-void
.end method

.method public final b()V
    .locals 2

    .line 133
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/MBDownloadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/MBDownloadManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/MBDownloadManager;->cancel(Ljava/lang/String;)V

    return-void
.end method

.method public final c()V
    .locals 2

    const/16 v0, 0x9

    .line 137
    iput v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->b:I

    .line 138
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbdownload/manager/a;->setChanged()V

    .line 139
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->j:Lcom/mbridge/msdk/mbdownload/manager/c;

    iget v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->b:I

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbdownload/manager/c;->a(I)V

    .line 140
    iget v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->b:I

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->a(I)V

    .line 141
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->j:Lcom/mbridge/msdk/mbdownload/manager/c;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->notifyObservers(Ljava/lang/Object;)V

    return-void
.end method

.method public final d()I
    .locals 1

    .line 145
    iget v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->b:I

    return v0
.end method

.method public final e()I
    .locals 1

    .line 149
    iget v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->c:I

    return v0
.end method

.method public final f()Ljava/lang/String;
    .locals 1

    .line 153
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a;->h:Ljava/lang/String;

    return-object v0
.end method
